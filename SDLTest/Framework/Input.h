#pragma once

#include <array>

#include <SDL3/SDL.h>

enum class KeyCode
{
	A,
	B,
	C,
	D,
	E,
	F,
	G,
	H,
	I,
	J,
	K,
	L,
	M,
	N,
	O,
	P,
	Q,
	R,
	S,
	T,
	U,
	V,
	W,
	X,
	Y,
	Z,

	Space,
	Escape,

	Left,
	Right,
	Up,
	Down,

	Count   // キー数カウント用。一番最後に置く。
};

class Input
{
public:
	static void Update();
	static bool GetKey(KeyCode key);
	static bool GetKeyDown(KeyCode key);
	static bool GetKeyUp(KeyCode key);

private:
	static constexpr size_t KeyCount = static_cast<size_t>(KeyCode::Count);

	inline static std::array<bool, KeyCount> m_current{};
	inline static std::array<bool, KeyCount> m_previous{};

};

static SDL_Scancode g_keyTable[] =
{
	SDL_SCANCODE_A,
	SDL_SCANCODE_B,
	SDL_SCANCODE_C,
	SDL_SCANCODE_D,
	SDL_SCANCODE_E,
	SDL_SCANCODE_F,
	SDL_SCANCODE_G,
	SDL_SCANCODE_H,
	SDL_SCANCODE_I,
	SDL_SCANCODE_J,
	SDL_SCANCODE_K,
	SDL_SCANCODE_L,
	SDL_SCANCODE_M,
	SDL_SCANCODE_N,
	SDL_SCANCODE_O,
	SDL_SCANCODE_P,
	SDL_SCANCODE_Q,
	SDL_SCANCODE_R,
	SDL_SCANCODE_S,
	SDL_SCANCODE_T,
	SDL_SCANCODE_U,
	SDL_SCANCODE_V,
	SDL_SCANCODE_W,
	SDL_SCANCODE_X,
	SDL_SCANCODE_Y,
	SDL_SCANCODE_Z,

	SDL_SCANCODE_SPACE,
	SDL_SCANCODE_ESCAPE,

	SDL_SCANCODE_LEFT,
	SDL_SCANCODE_RIGHT,
	SDL_SCANCODE_UP,
	SDL_SCANCODE_DOWN
};