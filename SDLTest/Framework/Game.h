#pragma once
#include "Window.h"

class Game
{
public:
	Game(Vector2 windowSize);
	virtual ~Game() = default;

	void Run();
	void Quit();

protected:
	virtual void Initialize() {};
	virtual void Update() {};
	virtual void Draw() {};
	virtual void Finalize() {};

private:
	void ProcessEvents();
	void WaitForNextFrame(Uint64 frameStart);
	bool m_isRunning;
	Window m_window;
	int m_targetFPS;

};