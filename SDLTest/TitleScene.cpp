#include "TitleScene.h"

#include "Framework/Window.h"
#include "Framework/ResourceManager.h"
#include "Framework/Texture.h"
#include "Framework/AnimationClip.h"
#include "Framework/AudioClip.h"
#include "Framework/Graphics.h"
#include "Framework/Mouse.h"

TitleScene::TitleScene()
{
	ResourceManager<Texture>::RegisterSequence("Click", "Assets/Moves/SingleClick/SingleClick_", ".png", 0, 52);
	ResourceManager<Texture>::Register("Back", "Assets/Image/TitleBackGround.png");
	ResourceManager<Texture>::Register("Play", "Assets/Image/PlayBefor.png");
	ResourceManager<Texture>::Register("Quit", "Assets/Image/QuitBefor.png");
	ResourceManager<Texture>::Register("Title", "Assets/Image/TitleString.png");

	ResourceManager<AnimationClip>::Register("Click", "Click", 0, 52, 60.0f);

	ResourceManager<AudioClip>::Register("TitleMusic", "Assets/Sounds/TitleBGM.mp3");
	ResourceManager<AudioClip>::Register("AddSound", "Assets/Sounds/AddSound.mp3");

	m_clickAnimation.SetClip(ResourceManager<AnimationClip>::Get("Click"));
	m_BGM.SetClip(ResourceManager<AudioClip>::Get("TitleMusic"));
	m_BGM.Play(-1);

}

TitleScene::~TitleScene()
{

}

void TitleScene::Update()
{
	m_clickAnimation.Update();
	if (Mouse::GetButtonDown(MouseButton::Left))
	{
		m_clickAnimation.Play(false);
	float effectSize = Graphics::GetWindowSize(0.2f).y;
		m_clickPosition = Rect{ Mouse::GetPos().x - effectSize / 2, Mouse::GetPos().y - effectSize / 2, effectSize, effectSize };
	}
}

void TitleScene::Draw()
{
	Vector2 size = Graphics::GetWindowSize(1.f);
	Graphics::DrawTexture(ResourceManager<Texture>::Get("Back"), Rect{ 0, 0, size.x, size.y});
	Graphics::DrawTexture(m_clickAnimation.GetTexture(), m_clickPosition);
}