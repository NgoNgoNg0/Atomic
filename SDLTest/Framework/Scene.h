#pragma once
#include <memory>
#include <functional>

class Scene
{
protected:
	std::function<void(std::unique_ptr<Scene>)> ChangeScene;

public:
	virtual ~Scene() = default;
	virtual void Update() = 0;
	virtual void Draw() = 0;

};

