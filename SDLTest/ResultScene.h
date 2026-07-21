#pragma once

#include "Framework/Scene.h"
#include "Framework/Animator.h"
#include "Framework/Timer.h"
#include "Framework/Button.h"
#include "Framework/AudioSource.h"

#include <string>

class ResultScene : public Scene
{
public:
	ResultScene(int score, int highScore);
	~ResultScene();

	virtual void Update() override;
	virtual void Draw() override;

private:
	int m_score;
	int m_highScore;
	Button m_Button;
	Timer m_timer;
	Timer m_delay;
	Timer m_buttonDelay;
	AudioSource m_SE;
	AudioSource m_BGM;
	std::string m_rank;
	Animator m_click;
	Rect m_clickPos;

};