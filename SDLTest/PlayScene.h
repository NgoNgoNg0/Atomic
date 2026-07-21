#pragma once

#include "Framework/Scene.h"
#include "Framework/Button.h"
#include "Framework/Timer.h"
#include "Framework/AudioSource.h"
#include "Framework/Animator.h"

class PlayScene : public Scene
{
public:
	PlayScene();
	~PlayScene();

	virtual void Update() override;
	virtual void Draw() override;

private:
	int m_page;
	int m_currentShow;
	int m_highScore;
	Button m_howToPlayButton;
	Button m_retirementButton;
	Button m_LeftButton;
	Button m_RightButton;
	Button m_returnButton;
	Button m_yesButton;
	Button m_noButton;
	Timer m_timer;
	AudioSource m_BGM;
	AudioSource m_ButtonSE;
	Animator m_click;
	Rect m_clickPos;

};

enum m_isShow
{
	play,
	howTo,
	retire
};