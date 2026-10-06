#include "Chemistry.h"

#include <algorithm>
#include <cstring>

namespace Chemistry
{
namespace
{
	struct ElementInfo
	{
		const char* symbol;
		int valence;
		float mass;
	};

	constexpr ElementInfo kElements[ElementCount] = {
		{ "O", 2, 16.0f },
		{ "C", 4, 12.01f },
		{ "H", 1, 1.0f },
		{ "N", 3, 14.01f },
		{ "S", 2, 32.06f },
		{ "Cl", 1, 35.45f },
		{ "Na", 1, 22.99f },
	};

	// Order in which element symbols appear in a generated formula.
	constexpr Element kFormulaOrder[ElementCount] = { Na, C, H, N, S, Cl, O };

	// Average bond energies in kJ/mol for single, double and triple bonds
	// (0 = no such bond). Indexed by [min element][max element] (Element order).
	// Values are textbook averages; sodium bonds are diatomic dissociation energies.
	struct Energies { int order[3]; };
	constexpr Energies kBondEnergies[ElementCount][ElementCount] = {
		// O
		{ { { 146, 498, 0 } }, { { 358, 745, 1072 } }, { { 463, 0, 0 } }, { { 201, 607, 0 } }, { { 265, 522, 0 } }, { { 203, 0, 0 } }, { { 257, 0, 0 } } },
		// C
		{ { { 358, 745, 1072 } }, { { 348, 614, 839 } }, { { 413, 0, 0 } }, { { 293, 615, 891 } }, { { 259, 573, 0 } }, { { 328, 0, 0 } }, { { 0, 0, 0 } } },
		// H
		{ { { 463, 0, 0 } }, { { 413, 0, 0 } }, { { 436, 0, 0 } }, { { 391, 0, 0 } }, { { 339, 0, 0 } }, { { 431, 0, 0 } }, { { 197, 0, 0 } } },
		// N
		{ { { 201, 607, 0 } }, { { 293, 615, 891 } }, { { 391, 0, 0 } }, { { 163, 418, 945 } }, { { 273, 467, 0 } }, { { 193, 0, 0 } }, { { 0, 0, 0 } } },
		// S
		{ { { 265, 522, 0 } }, { { 259, 573, 0 } }, { { 339, 0, 0 } }, { { 273, 467, 0 } }, { { 266, 425, 0 } }, { { 255, 0, 0 } }, { { 220, 0, 0 } } },
		// Cl
		{ { { 203, 0, 0 } }, { { 328, 0, 0 } }, { { 431, 0, 0 } }, { { 193, 0, 0 } }, { { 255, 0, 0 } }, { { 243, 0, 0 } }, { { 412, 0, 0 } } },
		// Na
		{ { { 257, 0, 0 } }, { { 0, 0, 0 } }, { { 197, 0, 0 } }, { { 0, 0, 0 } }, { { 220, 0, 0 } }, { { 412, 0, 0 } }, { { 72, 0, 0 } } },
	};

	constexpr int kMaxSodium = 2;

	struct KnownCompound
	{
		const char* name;
		Color color;
	};

	// Names and colors of the compounds that existed before reactions were generated.
	// Matched by composition, so the same look is kept wherever that composition appears.
	constexpr KnownCompound kKnown[] = {
	{ "O", Color{ 255, 0, 0 } },
		{ "C", Color{ 200, 200, 200 } },
		{ "H", Color{ 0, 0, 255 } },
		{ "N", Color{ 0, 255, 0 } },
		{ "S", Color{ 255, 220, 0 } },
		{ "Cl", Color{ 120, 255, 120 } },
		{ "Na", Color{ 180, 200, 255 } },
		{ "O2", Color{ 255, 100, 0 } },
		{ "C2", Color{ 150, 150, 150 } },
		{ "H2", Color{ 0, 90, 255 } },
		{ "N2", Color{ 0, 150, 0 } },
		{ "Cl2", Color{ 50, 200, 50 } },
		{ "S2", Color{ 200, 200, 0 } },
		{ "OH", Color{ 255, 0, 255 } },
		{ "CO", Color{ 128, 0, 0 } },
		{ "NH", Color{ 0, 128, 128 } },
		{ "HCl", Color{ 0, 180, 180 } },
		{ "NO", Color{ 150, 150, 255 } },
		{ "H2O", Color{ 0, 200, 255 } },
		{ "CO2", Color{ 170, 0, 0 } },
		{ "NH2", Color{ 80, 128, 0 } },
		{ "SO2", Color{ 255, 170, 0 } },
		{ "NO2", Color{ 200, 120, 120 } },
		{ "N2O", Color{ 180, 180, 255 } },
		{ "O3", Color{ 120, 200, 255 } },
		{ "H2S", Color{ 255, 230, 120 } },
		{ "CS2", Color{ 220, 250, 40 } },
		{ "CH2", Color{ 93, 0, 255 } },
		{ "NH3", Color{ 128, 100, 0 } },
		{ "SO3", Color{ 255, 140, 0 } },
		{ "H2O2", Color{ 0, 170, 220 } },
		{ "CH4", Color{ 40, 0, 220 } },
		{ "NH4Cl", Color{ 0, 220, 180 } },
		{ "H2SO4", Color{ 255, 100, 0 } },
		{ "NaCl", Color{ 200, 200, 255 } },
		{ "NaOH", Color{ 160, 200, 255 } },
		{ "NaHCO3", Color{ 180, 220, 255 } },
		{ "Na2CO3", Color{ 160, 210, 255 } },
		{ "CH3Cl", Color{ 60, 110, 180 } },
		{ "CH2Cl2", Color{ 70, 220, 150 } },
		{ "HNO3", Color{ 100, 158, 200 } },
		{ "NaHSO4", Color{ 50, 151, 168 } },
		{ "NaClO3", Color{ 93, 33, 191 } },
		{ "H2CO3", Color{ 255, 87, 252 } },
		{ "CH3OH", Color{ 76, 0, 255 } },
	};

	using Counts = std::array<int, ElementCount>;

	Counts ParseFormula(const char* formula)
	{
		Counts counts{};
		const char* p = formula;
		while (*p)
		{
			int element = -1;
			for (int e = 0; e < ElementCount; ++e)
			{
				const size_t len = std::strlen(kElements[e].symbol);
				// "Cl" and "Na" must win over "C" and "N".
				if (std::strncmp(p, kElements[e].symbol, len) == 0 && (element < 0 || len > std::strlen(kElements[element].symbol)))
				{
					element = e;
				}
			}
			if (element < 0)
			{
				return Counts{};
			}
			p += std::strlen(kElements[element].symbol);
			int n = 0;
			while (*p >= '0' && *p <= '9')
			{
				n = n * 10 + (*p - '0');
				++p;
			}
			counts[element] += n == 0 ? 1 : n;
		}
		return counts;
	}

	Counts CountsOf(const Molecule& molecule)
	{
		Counts counts{};
		for (Element e : molecule.atoms)
		{
			++counts[e];
		}
		return counts;
	}

	std::string FormulaOf(const Counts& counts)
	{
		std::string name;
		for (Element e : kFormulaOrder)
		{
			if (counts[e] == 0) continue;
			name += kElements[e].symbol;
			if (counts[e] > 1) name += std::to_string(counts[e]);
		}
		return name;
	}

	// Mixes the element colors by atom count. Elements take their own color
	// from the known table (their single-atom composition).
	Color ElementColor(Element element)
	{
		Counts c{};
		c[element] = 1;
		for (const KnownCompound& k : kKnown)
		{
			if (ParseFormula(k.name) == c) return k.color;
		}
		return Color{ 128, 128, 128 };
	}

	Color BlendColor(const Counts& counts)
	{
		float r = 0, g = 0, b = 0;
		int total = 0;
		for (int e = 0; e < ElementCount; ++e)
		{
			const Color c = ElementColor(static_cast<Element>(e));
			r += c.r * counts[e];
			g += c.g * counts[e];
			b += c.b * counts[e];
			total += counts[e];
		}
		return Color{
			static_cast<uint8_t>(r / total),
			static_cast<uint8_t>(g / total),
			static_cast<uint8_t>(b / total) };
	}

	// Rules that keep generated products chemically plausible.
	bool IsPlausible(const Counts& counts)
	{
		int atoms = 0, kinds = 0;
		for (int e = 0; e < ElementCount; ++e)
		{
			atoms += counts[e];
			if (counts[e] > 0) ++kinds;
		}
		if (atoms > kMaxAtoms) return false;
		if (counts[Na] > kMaxSodium) return false;
		if (kinds == 1)
		{
			// Elemental molecules: O2/O3, N2, S2, ... but no metal clusters or long chains.
			if (counts[Na] > 0) return atoms == 1;
			const int limit = counts[O] > 0 ? 3 : 2;
			return atoms <= limit;
		}
		return true;
	}
}

int Molecule::FreeValence(int atomIndex) const
{
	int free = kElements[atoms[atomIndex]].valence;
	for (const Bond& bond : bonds)
	{
		if (bond.a == atomIndex || bond.b == atomIndex)
		{
			free -= bond.order;
		}
	}
	return free;
}

bool Molecule::HasFreeValence() const
{
	for (int i = 0; i < AtomCount(); ++i)
	{
		if (FreeValence(i) > 0) return true;
	}
	return false;
}

Molecule MakeAtom(Element element)
{
	Molecule m;
	m.atoms.push_back(element);
	return m;
}

Description Describe(const Molecule& molecule)
{
	Description d;
	if (molecule.IsEmpty())
	{
		return d;
	}

	const Counts counts = CountsOf(molecule);
	d.atomCount = molecule.AtomCount();
	for (int e = 0; e < ElementCount; ++e)
	{
		d.mass += kElements[e].mass * counts[e];
	}

	d.name = FormulaOf(counts);
	d.color = BlendColor(counts);
	for (const KnownCompound& k : kKnown)
	{
		if (ParseFormula(k.name) == counts)
		{
			d.name = k.name;
			d.color = k.color;
			break;
		}
	}
	return d;
}

int BondEnergy(Element a, Element b, int order)
{
	if (order < 1 || order > kMaxBondOrder)
	{
		return 0;
	}
	return kBondEnergies[a][b].order[order - 1];
}

std::optional<Molecule> Combine(const Molecule& a, const Molecule& b)
{
	if (a.IsEmpty() || b.IsEmpty() || a.AtomCount() + b.AtomCount() > kMaxAtoms)
	{
		return std::nullopt;
	}

	// Pick the strongest bond that can be formed between a free atom of each.
	int bestEnergy = 0, bestA = -1, bestB = -1, bestOrder = 0;
	for (int i = 0; i < a.AtomCount(); ++i)
	{
		const int freeA = a.FreeValence(i);
		if (freeA < 1) continue;
		for (int j = 0; j < b.AtomCount(); ++j)
		{
			const int freeB = b.FreeValence(j);
			if (freeB < 1) continue;

			// Use the highest bond order both atoms can still support.
			for (int order = std::min({ freeA, freeB, kMaxBondOrder }); order >= 1; --order)
			{
				const int energy = BondEnergy(a.atoms[i], b.atoms[j], order);
				if (energy > 0)
				{
					if (energy > bestEnergy)
					{
						bestEnergy = energy;
						bestA = i;
						bestB = j;
						bestOrder = order;
					}
					break;
				}
			}
		}
	}

	if (bestEnergy < kMinBondEnergy)
	{
		return std::nullopt;
	}

	Molecule product = a;
	const int offset = a.AtomCount();
	product.atoms.insert(product.atoms.end(), b.atoms.begin(), b.atoms.end());
	for (const Bond& bond : b.bonds)
	{
		product.bonds.push_back(Bond{ bond.a + offset, bond.b + offset, bond.order });
	}
	product.bonds.push_back(Bond{ bestA, bestB + offset, bestOrder });

	if (!IsPlausible(CountsOf(product)))
	{
		return std::nullopt;
	}
	return product;
}
}
