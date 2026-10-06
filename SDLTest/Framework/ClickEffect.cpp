#include "ClickEffect.h"

#include "AnimationClip.h"
#include "Graphics.h"
#include "Mouse.h"
#include "ResourceManager.h"

void ClickEffect::Initialize()
{
	m_animator.SetClip(ResourceManager<AnimationClip>::Get("Click"));
}

void ClickEffect::Update()
{
	m_animator.Update();
}

void ClickEffect::Trigger()
{
	m_animator.Play(false);
	const float size = Graphics::GetWindowSize(0.2f).y;
	m_rect = Rect{ Mouse::GetPos().x - size / 2, Mouse::GetPos().y - size / 2, size, size };
}

void ClickEffect::Draw()
{
	Graphics::DrawTexture(m_animator.GetTexture(), m_rect);
}
