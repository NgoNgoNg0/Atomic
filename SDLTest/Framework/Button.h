#pragma once

#include "Rect.h"

#include <filesystem>
#include <string>

class Button
{
public:
	Button(const std::filesystem::path& normalImage, const std::filesystem::path& reactionImage, Rect rect);
	~Button();
	void Update();
	void Draw();

	bool isMouseRiding();
	bool isMouseClicked();

private:
	std::string m_normal;
	std::string m_reaction;
	Rect m_rect;
	bool m_isRiding;
	bool m_isClicked;

};