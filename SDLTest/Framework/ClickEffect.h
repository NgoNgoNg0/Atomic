#pragma once

#include "Animator.h"
#include "Rect.h"

// Click ripple animation shown at the mouse position.
class ClickEffect
{
public:
	// Requires the "Click" AnimationClip to be registered.
	void Initialize();
	void Update();
	void Trigger();
	void Draw();

private:
	Animator m_animator;
	Rect m_rect{ 0, 0, 0, 0 };
};
