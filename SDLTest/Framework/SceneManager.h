#pragma once

#include "Scene.h"

#include <memory>

class SceneManager
{
public:

	static void ChangeScene(std::unique_ptr<Scene> newScene);
	static void Update();
	static void Draw();

private:
	static std::unique_ptr<Scene> m_currentScene;

};