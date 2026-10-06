#pragma once

#include "Scene.h"

#include <memory>

class SceneManager
{
public:

	// Requests a scene change. If a scene is running, the switch happens after its Update()
	// returns, so a scene can safely request its own replacement from inside Update().
	static void ChangeScene(std::unique_ptr<Scene> newScene);
	static void Update();
	static void FixedUpdate();
	static void Draw();

private:
	static std::unique_ptr<Scene> m_currentScene;
	static std::unique_ptr<Scene> m_nextScene;

};