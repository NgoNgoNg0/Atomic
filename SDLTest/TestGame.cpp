#include "TestGame.h"

#include "Framework/Graphics.h"
#include "Framework/Input.h"

void TestGame::Initialize()
{}

void TestGame::Update()
{
    constexpr float Speed = 5.0f;

    if (Input::GetKey(KeyCode::Left))
    {
        m_x -= Speed;
    }

    if (Input::GetKey(KeyCode::Right))
    {
        m_x += Speed;
    }

    if (Input::GetKey(KeyCode::Up))
    {
        m_y -= Speed;
    }

    if (Input::GetKey(KeyCode::Down))
    {
        m_y += Speed;
    }

    if (Input::GetKeyDown(KeyCode::Escape))
    {
        Quit();
    }
}

void TestGame::Draw()
{
    Graphics::DrawRect(
        m_x,
        m_y,
        100,
        100
    );
}