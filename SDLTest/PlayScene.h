#pragma once

#include "Framework/Scene.h"

class PlayScene : public Scene
{
public:
	PlayScene();
	~PlayScene();

	virtual void Update() override;
	virtual void Draw() override;

private:

};