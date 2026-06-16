#pragma once

#include "Framework/Game.h"

class TestGame : public Game
{
protected:
    void Initialize() override;
    void Update() override;
    void Draw() override;

private:
    float m_x = 100.0f;
    float m_y = 100.0f;
};