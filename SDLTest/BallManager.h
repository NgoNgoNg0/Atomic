#pragma once

#include "Ball.h"
#include "Pipette.h"
#include "Framework/Rect.h"
#include "Framework/AudioSource.h"

#include <vector>
#include <array>

enum AtomicID
{
	// Default
	NONE,

	// Antimatter
	ANTIMATTER,

	// Elements
	O,
	C,
	H,
	N,
	S,
	Cl,
	Na,

	// Diatomic molecules
	O2,
	C2,
	H2,
	N2,
	Cl2,
	S2,

	// Simple compounds
	OH,
	CO,
	NH,
	HCl,
	NO,

	// Triatomic molecules
	H2O,
	CO2,
	NH2,
	SO2,
	NO2,
	N2O,
	O3,
	CS2,
	CH2,

	// Four-atom molecules
	NH3,
	SO3,
	H2S,
	H2O2,

	// More complex compounds
	CH4,
	NH4Cl,
	H2SO4,
	NaCl,
	NaOH,
	NaHCO3,
	Na2CO3,
	CH3Cl,
	CH2Cl2,
	HNO3,
	NaHSO4,
	NaClO3,
	H2CO3,
	CH3OH
};

struct Reaction
{
	int lhs;
	int rhs;
	int product;
	int byProduct;
};

class BallManager
{
public:
	static void Initialize();
	static void Update();
	static void Draw();

	static int GetScore();
	static bool isGameOver();

private:
	static void AddBall();
	static void CheckPipetteUnderBalls();
	static bool ResolveCollision(int i, int j);
	static bool ResolveWallCollision(int i);
	static bool MatchReactionPair(const Reaction& reaction, int id1, int id2);
	static const Reaction* FindReactionByPair(int id1, int id2);

	inline static int m_score;
	inline static bool m_isGameOver;
	inline static float m_gravity;
	inline static std::vector<Ball> m_balls;
	inline static Ball m_nextBall;
	inline static Ball m_predictionBall;
	inline static Ball m_exchangeBall;
	inline static AtomicStatus m_atomicStatus[47];
	inline static Rect m_box;
	inline static Pipette m_pipette;

	inline static std::array<Reaction, 51> kReactions = {
	Reaction{ O, O, O2, NONE },
	Reaction{ C, C, C2, NONE },
	Reaction{ H, H, H2, NONE },
	Reaction{ N, N, N2, NONE },
	Reaction{ Cl, Cl, Cl2, NONE },

	Reaction{ O, H, OH, NONE },
	Reaction{ C, O, CO, NONE },
	Reaction{ N, H, NH, NONE },
	Reaction{ H, Cl, HCl, NONE },
	Reaction{ N, O, NO, NONE },
	Reaction{ S, S, S2, NONE },

	Reaction{ OH, H, H2O, NONE },
	Reaction{ H2, O, H2O, NONE },
	Reaction{ CO, O, CO2, NONE },
	Reaction{ O2, C, CO2, NONE },

	Reaction{ C, H2, CH2, NONE },
	Reaction{ CH2, H2, CH4, NONE },

	Reaction{ NH, H, NH2, NONE },
	Reaction{ H2, N, NH2, NONE },
	Reaction{ NH2, H, NH3, NONE },
	Reaction{ H2, NH, NH3, NONE },
	Reaction{ NO, O, NO2, NONE },
	Reaction{ N2, O, N2O, NONE },

	Reaction{ H2O, CO2, H2CO3, NONE },

	Reaction{ NH3, HCl, NH4Cl, NONE },

	Reaction{ S, O2, SO2, NONE },
	Reaction{ SO2, O, SO3, NONE },
	Reaction{ H2, S, H2S, NONE },
	Reaction{ C, S2, CS2, NONE },
	Reaction{ SO3, H2O, H2SO4, NONE },

	Reaction{ Na, Cl, NaCl, NONE },
	Reaction{ Na, OH, NaOH, NONE },
	Reaction{ NaOH, CO2, NaHCO3, NONE },
	Reaction{ NaCl, O3, NaClO3, NONE },

	Reaction{ OH, OH, H2O2, NONE },
	Reaction{ O2, O, O3, NONE },

	Reaction{ CH2, Cl2, CH2Cl2, NONE },

	Reaction{ H2, O2, H2O, O },
	Reaction{ NH3, O2, NO, H2O },
	Reaction{ Na, H2O, NaOH, H2 },
	Reaction{ CH4, Cl2, CH3Cl, HCl },
	Reaction{ CH4, O2, CO, H2O },
	Reaction{ NaHCO3, HCl, NaCl, H2O },
	Reaction{ NaOH, HCl, NaCl, H2O },
	Reaction{ Na2CO3, HCl, NaCl, CO2 },
	Reaction{ CH3Cl, Cl2, CH2Cl2, HCl },
	Reaction{ NO2, H2O, HNO3, NO },
	Reaction{ NaCl, H2SO4, HCl, NaHSO4 },
	Reaction{ H2O2, O, H2O, O2 },
	Reaction{ CH4, H2O, CH3OH, H2 },
	Reaction{ NaHCO3, NaOH, Na2CO3, H2O },
	};

};