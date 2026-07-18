#include "TitleScene.h"

#include "PlayScene.h"
#include "Framework/SceneManager.h"
#include "Framework/ResourceManager.h"
#include "Framework/Texture.h"
#include "Framework/AnimationClip.h"
#include "Framework/AudioClip.h"
#include "Framework/Graphics.h"
#include "Framework/Mouse.h"
#include "Framework/Vector2.h"

#include <memory>

TitleScene::TitleScene()
	: m_playButton("Assets/Image/PlayBefor.png", "Assets/Image/PlayAfter.png", Rect{ Graphics::GetWindowSize(0.37f).x, Graphics::GetWindowSize(0.53f).y, Graphics::GetWindowSize(0.40f).x, Graphics::GetWindowSize(0.25f).y })
	, m_quitButton("Assets/Image/QuitBefor.png", "Assets/Image/QuitAfter.png", Rect{ Graphics::GetWindowSize(0.42f).x, Graphics::GetWindowSize(0.78f).y, Graphics::GetWindowSize(0.30f).x, Graphics::GetWindowSize(0.19f).y })
	, m_clickPosition(Rect{0, 0, 0, 0})
	, m_timer(2.0f)
{
	ResourceManager<Texture>::RegisterSequence("Click", "Assets/Moves/SingleClick/SingleClick_", ".png", 0, 52);
	ResourceManager<Texture>::Register("Back", "Assets/Image/TitleBackGround.png");
	ResourceManager<Texture>::Register("Title", "Assets/Image/TitleString.png");

	ResourceManager<AnimationClip>::Register("Click", "Click", 0, 52, 60.0f);

	ResourceManager<AudioClip>::Register("TitleMusic", "Assets/Sounds/TitleBGM.mp3");
	ResourceManager<AudioClip>::Register("TitleButtonSound", "Assets/Sounds/TitleButtonSound.mp3");

	m_clickAnimation.SetClip(ResourceManager<AnimationClip>::Get("Click"));
	m_BGM.SetClip(ResourceManager<AudioClip>::Get("TitleMusic"));
	m_SE.SetClip(ResourceManager<AudioClip>::Get("TitleButtonSound"));
	m_BGM.Play(-1);

}

TitleScene::~TitleScene()
{

}

void TitleScene::Update()
{
	m_clickAnimation.Update();
	m_playButton.Update();
	m_quitButton.Update();
	m_timer.Update();
	if (Mouse::GetButtonDown(MouseButton::Left))
	{
		m_clickAnimation.Play(false);
	float effectSize = Graphics::GetWindowSize(0.2f).y;
		m_clickPosition = Rect{ Mouse::GetPos().x - effectSize / 2, Mouse::GetPos().y - effectSize / 2, effectSize, effectSize };
	}

	if (m_playButton.isMouseClicked() && !m_timer.IsRunning())
	{
		m_timer.Start(2.0f);
		m_SE.Play(0);
	}
	if (m_timer.IsFinished())
	{
		SceneManager::ChangeScene(std::make_unique<PlayScene>());
	}

}

void TitleScene::Draw()
{
	Vector2 size = Graphics::GetWindowSize(1.f);
	Graphics::DrawTexture(ResourceManager<Texture>::Get("Back"), Rect{ 0, 0, size.x, size.y});
	Graphics::DrawTexture(ResourceManager<Texture>::Get("Title"), Rect{ Graphics::GetWindowSize(0.03f).x, Graphics::GetWindowSize(0.05f).y, Graphics::GetWindowSize(0.57f).x, Graphics::GetWindowSize(0.29f).y });
	m_playButton.Draw();
	m_quitButton.Draw();
	Graphics::DrawTexture(m_clickAnimation.GetTexture(), m_clickPosition);
}