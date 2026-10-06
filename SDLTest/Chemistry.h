#pragma once

#include "Framework/Color.h"

#include <array>
#include <optional>
#include <string>
#include <vector>

// Molecule model: every ball is a small molecular graph (atoms joined by
// bonds of order 1-3). An atom's free valence is its valence minus the bonds
// it already has. Two balls react when a bond can be formed between a free
// atom of each; the bond is chosen by bond energy, and a reaction only
// happens if that bond is strong enough. Products are generated on demand,
// so there is no hand-written list of compounds or reactions.
namespace Chemistry
{
	// Minimum energy (kJ/mol) of the newly formed bond for a reaction to occur.
	// Raise it to make reactions rarer (harder game), lower it to make them more common.
	constexpr int kMinBondEnergy = 250;

	constexpr int kMaxAtoms = 8;
	constexpr int kMaxBondOrder = 3;

	enum Element { O, C, H, N, S, Cl, Na, ElementCount };

	struct Bond
	{
		int a;
		int b;
		int order;
	};

	struct Molecule
	{
		std::vector<Element> atoms;
		std::vector<Bond> bonds;

		bool IsEmpty() const { return atoms.empty(); }
		int AtomCount() const { return static_cast<int>(atoms.size()); }

		// Valence of the atom minus the order of all bonds it takes part in.
		int FreeValence(int atomIndex) const;
		bool HasFreeValence() const;
	};

	// What the game needs to know to show a molecule.
	struct Description
	{
		std::string name;
		Color color{ 0, 0, 0 };
		float mass = 0.0f;
		int atomCount = 0;
	};

	Molecule MakeAtom(Element element);

	Description Describe(const Molecule& molecule);

	// Bond energy in kJ/mol for a bond of the given order (1-3), or 0 if
	// that bond does not exist for the pair.
	int BondEnergy(Element a, Element b, int order);

	// The product of two colliding molecules, or nothing if they do not react.
	std::optional<Molecule> Combine(const Molecule& a, const Molecule& b);
}
