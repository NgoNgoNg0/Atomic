#include "PlayScene.h"

#include "BallManager.h"

#include "Framework/Texture.h"
#include "Framework/Graphics.h"
#include "Framework/ResourceManager.h"
#include "Framework/Vector2.h"
#include "Framework/Color.h"

PlayScene::PlayScene()
{
	ResourceManager<Texture>::Register("PlaySceneBack", "Assets/Image/PlayBackGround.png");
	ResourceManager<Texture>::Register("BeakerDown", "Assets/Image/BeakerDown.png");
	ResourceManager<Texture>::Register("BeakerUp", "Assets/Image/BeakerUp.png");
	ResourceManager<Font>::Register("Default", "Assets/Fonts/HGRPP1.TTC", 32);

	BallManager::Initialize();
}

PlayScene::~PlayScene()
{

}

void PlayScene::Update()
{
	BallManager::Update();
}

void PlayScene::Draw() 
{
	Graphics::DrawTexture(ResourceManager<Texture>::Get("PlaySceneBack"), Rect{ 0, 0, Graphics::GetWindowSize(1.0f).x, Graphics::GetWindowSize(1.0f).y });
	Graphics::DrawTexture(ResourceManager<Texture>::Get("BeakerDown"), Rect{ Graphics::GetWindowSize(0.05f).x, Graphics::GetWindowSize(0.2f).y, Graphics::GetWindowSize(0.55f).x, Graphics::GetWindowSize(0.8f).y });
	Graphics::DrawText(ResourceManager<Font>::Get("Default"), "こんにちは", Vector2{ 0, 0 }, Colors::Green);
	BallManager::Draw();
	Graphics::DrawTexture(ResourceManager<Texture>::Get("BeakerUp"), Rect{ Graphics::GetWindowSize(0.05f).x, Graphics::GetWindowSize(0.2f).y, Graphics::GetWindowSize(0.55f).x, Graphics::GetWindowSize(0.8f).y });
}