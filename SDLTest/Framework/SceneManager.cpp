#include "SceneManager.h"

std::unique_ptr<Scene> SceneManager::m_currentScene = nullptr;
std::unique_ptr<Scene> SceneManager::m_nextScene = nullptr;

void SceneManager::ChangeScene(std::unique_ptr<Scene> newScene)
{
	if (!m_currentScene)
	{
		m_currentScene = std::move(newScene);
		return;
	}

	// Destroying the running scene here would free the object whose Update() is on the stack.
	m_nextScene = std::move(newScene);
}

void SceneManager::Update()
{
	if (m_currentScene) m_currentScene->Update();

	if (m_nextScene)
	{
		m_currentScene = std::move(m_nextScene);
	}
}

void SceneManager::FixedUpdate()
{
	if (m_currentScene) m_currentScene->FixedUpdate();
}

void SceneManager::Draw()
{
	if (m_currentScene) m_currentScene->Draw();
}