#include "Animator.h"

#include "Time.h"

void Animator::SetClip(AnimationClip& clip)
{
    m_clip = &clip;

    m_frame = 0;

    m_timer = 0.0f;
}

void Animator::Play(bool loop)
{
    m_loop = loop;
    m_frame = 0;

    m_playing = true;
}

void Animator::Stop()
{
    m_playing = false;

    m_frame = 0;

    m_timer = 0.0f;
}

void Animator::Update()
{
    if (!m_playing || !m_clip)
        return;

    m_timer += Time::DeltaTime();

    float frameTime = 1.0f / m_clip->GetFPS();

    while (m_timer >= frameTime)
    {
        m_timer -= frameTime;

        ++m_frame;

        if (m_frame >= m_clip->GetFrameCount())
        {
            if (m_loop)
            {
                m_frame = 0;
            }
            else
            {
                m_frame = m_clip->GetFrameCount() - 1;

                m_playing = false;

                break;
            }
        }
    }
}

Texture& Animator::GetTexture() const
{
    return m_clip->GetFrame(m_frame);
}