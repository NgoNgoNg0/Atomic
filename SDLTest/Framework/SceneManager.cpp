#include "SceneManager.h"

std::unique_ptr<Scene> SceneManager::m_currentScene = nullptr;

void SceneManager::ChangeScene(std::unique_ptr<Scene> newScene)
{
	m_currentScene = std::move(newScene);
}

void SceneManager::Update()
{
	if (m_currentScene) m_currentScene->Update();
}

void SceneManager::Draw()
{
	if (m_currentScene) m_currentScene->Draw();
}