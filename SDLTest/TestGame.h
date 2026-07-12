#pragma once

#include "Framework/Game.h"
#include "Framework/Rect.h"
#include "Framework/AudioSource.h"
#include "Framework/Animator.h"

class TestGame : public Game
{
public:
    TestGame();

protected:
    void Initialize() override;
    void Update() override;
    void Draw() override;

private:
    Rect m_rect;
    AudioSource m_se;
    Animator m_animator;

};