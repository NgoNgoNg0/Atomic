#pragma once

#include "Texture.h"

#include <string>
#include <vector>

class AnimationClip
{
public:
	AnimationClip() = default;

	AnimationClip(const std::string& prefix, int first, int last, float fps = 12.0f);

	Texture& GetFrame(size_t index) const;

	size_t GetFrameCount() const;

	float GetFPS() const;

private:
	std::vector<Texture*> m_frames;

	float m_fps = 12.0f;
};