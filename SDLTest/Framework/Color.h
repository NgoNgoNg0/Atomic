#pragma once

#include <stdint.h>

struct Color
{
	uint8_t r;
	uint8_t g;
	uint8_t b;
	uint8_t a = 255;
};

namespace Colors
{
    constexpr Color White{ 255, 255, 255, 255 };
    constexpr Color Black{ 0, 0, 0, 255 };
    constexpr Color Red{ 255, 0, 0, 255 };
    constexpr Color Green{ 0, 255, 0, 255 };
    constexpr Color Blue{ 0, 0, 255, 255 };
}