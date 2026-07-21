#include "ResultScene.h"

#include "Framework/Texture.h"
#include "Framework/Font.h"
#include "Framework/AnimationClip.h"
#include "Framework/ResourceManager.h"
#include "Framework/Graphics.h"
#include "Framework/SceneManager.h"
#include "Framework/AudioClip.h"
#include "Framework/Mouse.h"

#include "TitleScene.h"

#include <string>
#include <memory>
#include <iostream>

ResultScene::ResultScene(int score, int highScore)
	: m_score(score)
	, m_highScore(highScore)
	, m_timer(0.1f)
	, m_delay(3.0f)
	, m_buttonDelay(0.5f)
	, m_Button("Assets/Image/GoTitleBefor.png", "Assets/Image/GoTitleAfter.png", Rect{Graphics::GetWindowSize(0.58f).x, Graphics::GetWindowSize(0.88).y, Graphics::GetWindowSize(0.42f).x, Graphics::GetWindowSize(0.12).y })
{
	ResourceManager<Texture>::Register("S", "Assets/Image/S.png");
	ResourceManager<Texture>::Register("A", "Assets/Image/A.png");
	ResourceManager<Texture>::Register("B", "Assets/Image/B.png");
	ResourceManager<Texture>::Register("C", "Assets/Image/C.png");
	ResourceManager<Texture>::Register("ScoreString", "Assets/Image/ScoreString.png");
	ResourceManager<Texture>::Register("ScoreUpdate", "Assets/Image/ScoreUpdate.png");
	ResourceManager<Font>::Register("ResultScoreFont", "Assets/Fonts/HGRPP1.TTC", Graphics::GetWindowSize(20 / 54.0f).y);
	ResourceManager<AudioClip>::Register("S", "Assets/Sounds/SAResultBGM.mp3");
	ResourceManager<AudioClip>::Register("A", "Assets/Sounds/SAResultBGM.mp3");
	ResourceManager<AudioClip>::Register("B", "Assets/Sounds/BResultBGM.mp3");
	ResourceManager<AudioClip>::Register("C", "Assets/Sounds/CResultBGM.mp3");
	ResourceManager<Animator>::Get("ResultAnimation").Play(false);
	m_timer.Start(0.0f);
	m_delay.Start(0.9f);
	m_click.SetClip(ResourceManager<AnimationClip>::Get("Click"));
	m_SE.SetClip(ResourceManager<AudioClip>::Get("ButtonSound"));
	if (m_score < 1500)
	{
		m_rank = "C";
	}
	else if (m_score < 3000)
	{
		m_rank = "B";
	}
	else if (m_score < 5000)
	{
		m_rank = "A";
	}
	else
	{
		m_rank = "S";
	}
	m_BGM.SetClip(ResourceManager<AudioClip>::Get(m_rank));
	m_BGM.Play(-1);
}

ResultScene::~ResultScene()
{

}

void ResultScene::Update()
{
	m_timer.Update();
	m_delay.Update();
	m_buttonDelay.Update();
	m_Button.Update();
	m_click.Update();
	if (m_timer.IsFinished()) 
	{
		ResourceManager<Animator>::Get("ResultAnimation").Update();
	}
	if (m_Button.isMouseClicked() && !m_buttonDelay.IsRunning())
	{
		m_SE.Play(0);
		m_buttonDelay.Start(0.5f);
	}
	if (m_buttonDelay.IsFinished())
	{
		SceneManager::ChangeScene(std::make_unique<TitleScene>());
	}
	if (Mouse::GetButtonDown(MouseButton::Left))
	{
		m_click.Play(false);
		float effectSize = Graphics::GetWindowSize(0.2f).y;
		m_clickPos = Rect{ Mouse::GetPos().x - effectSize / 2, Mouse::GetPos().y - effectSize / 2, effectSize, effectSize };
	}
}

void ResultScene::Draw()
{
	Graphics::DrawTexture(ResourceManager<Animator>::Get("ResultAnimation").GetTexture(), Rect{ 0, 0, Graphics::GetWindowSize(1.0f).x, Graphics::GetWindowSize(1.0f).y });
	if (m_delay.IsFinished())
	{
		Graphics::DrawTexture(ResourceManager<Texture>::Get("ScoreString"), Rect{ Graphics::GetWindowSize(0.38f).x, Graphics::GetWindowSize(0.19).y, Graphics::GetWindowSize(0.3f).x, Graphics::GetWindowSize(0.25f).y });
		Graphics::DrawText(ResourceManager<Font>::Get("ResultScoreFont"), std::to_string(m_score), Vector2{ Graphics::GetWindowSize(0.65f).x, Graphics::GetWindowSize(0.6f).y }, Colors::Black);
		m_Button.Draw();
		Graphics::DrawTexture(ResourceManager<Texture>::Get(m_rank), Rect{ Graphics::GetWindowSize(0.02f).x, Graphics::GetWindowSize(0.12).y, Graphics::GetWindowSize(0.37f).x, Graphics::GetWindowSize(0.72f).y });
		if (m_score > m_highScore)
		{
			Graphics::DrawTexture(ResourceManager<Texture>::Get("ScoreUpdate"), Rect{ Graphics::GetWindowSize(0.75).x, 0, Graphics::GetWindowSize(0.23).x, Graphics::GetWindowSize(0.15).y });
		}
	}
	Graphics::DrawTexture(m_click.GetTexture(), m_clickPos);
}