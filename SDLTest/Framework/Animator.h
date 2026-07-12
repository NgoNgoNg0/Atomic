#pragma once

#include "AnimationClip.h"

class Animator
{
public:

    void SetClip(AnimationClip& clip);

    void Play(bool loop = true);

    void Stop();

    void Update();

    Texture& GetTexture() const;

private:

    AnimationClip* m_clip = nullptr;

    size_t m_frame = 0;

    float m_timer = 0.0f;

    bool m_loop = true;

    bool m_playing = false;
};