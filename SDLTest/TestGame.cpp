#include "TestGame.h"

#include "Framework/Graphics.h"
#include "Framework/Texture.h"
#include "Framework/Font.h"
#include "Framework/ResourceManager.h"
#include "Framework/Input.h"
#include "Framework/Mouse.h"
#include "Framework/Rect.h"
#include "Framework/Color.h"

TestGame::TestGame()
    : m_rect(100, 100, 100, 100)
{

}

void TestGame::Initialize()
{
    ResourceManager<Texture>::Register("S", "./Assets/Image/S.png");
    ResourceManager<Font>::Register("Default", "Assets/Fonts/HGRPP1.TTC", 32);
}

void TestGame::Update()
{
    constexpr float Speed = 5.0f;

    if (Input::GetKey(KeyCode::Left))
    {
        m_rect.x -= Speed;
    }

    if (Input::GetKey(KeyCode::Right))
    {
        m_rect.x += Speed;
    }

    if (Input::GetKey(KeyCode::Up))
    {
        m_rect.y -= Speed;
    }

    if (Input::GetKey(KeyCode::Down))
    {
        m_rect.y += Speed;
    }

    if (Input::GetKeyDown(KeyCode::Escape))
    {
        Quit();
    }
}

void TestGame::Draw()
{
    Graphics::DrawRect(m_rect, Colors::Blue);
    Graphics::DrawTexture(ResourceManager<Texture>::Get("S"), Rect{Mouse::GetPos().x, Mouse::GetPos().y, m_rect.width, m_rect.height});
    Graphics::DrawText(ResourceManager<Font>::Get("Default"), "こんにちは", Vector2{ 100, 100 }, Colors::Green);
}