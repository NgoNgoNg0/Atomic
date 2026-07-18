#pragma once

#include "Framework/Game.h"
#include "Framework/Rect.h"
#include "Framework/AudioSource.h"
#include "Framework/Animator.h"
#include "Framework/SceneManager.h"

class AtomicGame : public Game
{
public:
	AtomicGame();

protected:
	void Initialize() override;
	void Update() override;
	void Draw() override;

private:

};