#pragma once

#include "Framework/Game.h"
#include "Framework/Rect.h"

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
};