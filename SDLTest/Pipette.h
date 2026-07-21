#pragma once

#include "Framework/Rect.h"

class Pipette
{
public:
	Pipette(Rect box);
	Pipette();
	~Pipette();

	void Update();
	void Draw();

	Rect GetRect();

private:
	Rect m_rect;
	Rect m_box;

};