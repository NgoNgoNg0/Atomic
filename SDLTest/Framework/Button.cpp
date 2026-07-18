#include "Button.h"

#include "ResourceManager.h"
#include "Graphics.h"
#include "Texture.h"
#include "Mouse.h"
#include "Rect.h"
#include "Vector2.h"

Button::Button(const std::filesystem::path& normalImage, const std::filesystem::path& reactionImage, Rect rect)
	: m_rect(rect)
	, m_normal(normalImage.string())
	, m_reaction(reactionImage.string())
	, m_isRiding(false)
	, m_isClicked(false)
{
	ResourceManager<Texture>::Register(normalImage.string(), normalImage);
	ResourceManager<Texture>::Register(reactionImage.string(), reactionImage);
}

Button::~Button()
{

}

void Button::Update()
{
	Vector2 mousePos = Mouse::GetPos();

	if (mousePos.x > m_rect.x && mousePos.x < m_rect.x + m_rect.width
		&& mousePos.y > m_rect.y && mousePos.y < m_rect.y + m_rect.height)
	{
		m_isRiding = true;

		if (Mouse::GetButtonDown(MouseButton::Left))
		{
			m_isClicked = true;
		}
		else 
		{
			m_isClicked = false;
		}

	}
	else
	{
		m_isRiding = false;
		m_isClicked = false;
	}
}

void Button::Draw()
{
	if (m_isRiding)
	{
		Graphics::DrawTexture(ResourceManager<Texture>::Get(m_reaction), m_rect);
	}
	else
	{
		Graphics::DrawTexture(ResourceManager<Texture>::Get(m_normal), m_rect);
	}
}

bool Button::isMouseRiding()
{
	return m_isRiding;
}

bool Button::isMouseClicked()
{
	return m_isClicked;
}