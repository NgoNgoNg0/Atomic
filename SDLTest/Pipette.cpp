#include "Pipette.h"

#include "Framework/Rect.h"
#include "Framework/Texture.h"
#include "Framework/ResourceManager.h"
#include "Framework/Graphics.h"
#include "Framework/Mouse.h"

Pipette::Pipette(Rect box)
	: m_box(box)
{
	ResourceManager<Texture>::Register("Pipette", "Assets/Image/pipette.png");
	m_rect = Rect{ Mouse::GetPos().x, Graphics::GetWindowSize(0.2f).y - Graphics::GetWindowSize(6.0f / 18.0f).y, Graphics::GetWindowSize(6.0f / 18.0f).y, Graphics::GetWindowSize(6.0f / 18.0f).y };
}

Pipette::Pipette()
	: m_rect(0)
{

}

Pipette::~Pipette()
{

}

void Pipette::Update()
{
	Vector2 mousePos =  Mouse::GetPos();
	const float moveLimit = Graphics::GetWindowSize(5.0f / 108.0f).y;
	const float clampedX = std::min(m_box.x + m_box.width - moveLimit, std::max(m_box.x + moveLimit, static_cast<float>(mousePos.x)));
	m_rect.x = clampedX;
}

void Pipette::Draw()
{
	Graphics::DrawTexture(ResourceManager<Texture>::Get("Pipette"), m_rect);
}

Rect Pipette::GetRect()
{
	return m_rect;
}