#include "TestGame.h"

#include "Framework/Graphics.h"
#include "Framework/Texture.h"
#include "Framework/Font.h"
#include "Framework/AudioClip.h"
#include "Framework/AnimationClip.h"
#include "Framework/ResourceManager.h"
#include "Framework/Input.h"
#include "Framework/Mouse.h"
#include "Framework/Rect.h"
#include "Framework/Color.h"

#include "TitleScene.h"

#include <memory>

TestGame::TestGame()
    : Game(Vector2{1920, 1080})
    , m_rect(100, 100, 100, 100)
    , m_se()
{

}

void TestGame::Initialize()
{
    ResourceManager<Texture>::Register("S", "./Assets/Image/S.png");
    ResourceManager<Font>::Register("Default", "Assets/Fonts/HGRPP1.TTC", 32);
    ResourceManager<AudioClip>::Register("Add", "Assets/Sounds/AddSound.mp3");
    ResourceManager<Texture>::RegisterSequence("TS", "Assets/Moves/SingleClick/SingleClick_", ".png", 0, 52);
    ResourceManager<AnimationClip>::Register("TS", "TS", 0, 52, 60.f);
    m_se.SetClip(ResourceManager<AudioClip>::Get("Add"));
    m_animator.SetClip(ResourceManager<AnimationClip>::Get("TS"));
    m_se.Play(-1);
}

void TestGame::Update()
{
    constexpr float Speed = 5.0f;

    m_animator.Update();

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
    if (Mouse::GetButtonDown(MouseButton::Left))
    {
        m_animator.Play(false);
    }
}

void TestGame::Draw()
{
    Graphics::DrawRect(m_rect, Colors::Blue);
    Graphics::DrawTexture(m_animator.GetTexture(), Rect{Mouse::GetPos().x, Mouse::GetPos().y, m_rect.width, m_rect.height});
    Graphics::DrawText(ResourceManager<Font>::Get("Default"), "こんにちは", Vector2{ 100, 100 }, Colors::Green);
}
