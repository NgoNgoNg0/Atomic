#include "AtomicGame.h"

#include "TitleScene.h"

#include "Framework/Vector2.h"

#include <memory>

AtomicGame::AtomicGame()
	: Game(Vector2{1920, 1080})
{
	SceneManager::ChangeScene(std::make_unique<TitleScene>());
}

void AtomicGame::Initialize()
{
}

void AtomicGame::Update()
{
	SceneManager::Update();
}

void AtomicGame::Draw()
{
	SceneManager::Draw();
}