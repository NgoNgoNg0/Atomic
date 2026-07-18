#pragma once

#include "Framework/Scene.h"
#include "Framework/Animator.h"
#include "Framework/AudioSource.h"
#include "Framework/Rect.h"
#include "Framework/Button.h"

class TitleScene : public Scene
{
public:
	TitleScene();
	~TitleScene();

	virtual void Update() override;
	virtual void Draw() override;

private:
	Animator m_clickAnimation;
	AudioSource m_BGM;
	Rect m_clickPosition;
	Button m_playButton;
	Button m_quitButton;

};