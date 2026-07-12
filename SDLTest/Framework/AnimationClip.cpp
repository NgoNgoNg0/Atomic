#include "AnimationClip.h"

#include "ResourceManager.h"

#include <stdexcept>

AnimationClip::AnimationClip(
    const std::string& prefix,
    int first,
    int last,
    float fps)
    : m_fps(fps)
{
    if (first > last)
    {
        throw std::runtime_error("AnimationClip: invalid frame range.");
    }

    for (int i = first; i <= last; i++)
    {
        std::string name = prefix + std::to_string(i);

        m_frames.push_back(
            &ResourceManager<Texture>::Get(name)
        );
    }

    if (m_frames.empty())
    {
        throw std::runtime_error("AnimationClip: no frames.");
    }
}

Texture& AnimationClip::GetFrame(size_t index) const
{
    return *m_frames.at(index);
}

size_t AnimationClip::GetFrameCount() const
{
    return m_frames.size();
}

float AnimationClip::GetFPS() const
{
    return m_fps;
}