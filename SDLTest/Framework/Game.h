#pragma once
#include "Window.h"

class Game
{
public:
	Game();
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
	bool m_isRunning;
	Window m_window;

};