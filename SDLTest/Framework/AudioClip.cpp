#include "AudioClip.h"
#include "Audio.h"

#include <SDL3/SDL.h>
#include <SDL3_mixer/SDL_mixer.h>

#include <stdexcept>

AudioClip::AudioClip(const std::filesystem::path& path)
{
    m_audio = MIX_LoadAudio(
        Audio::GetMixer(),
        path.string().c_str(),
        true
    );

    if (!m_audio)
    {
        throw std::runtime_error(SDL_GetError());
    }
}

AudioClip::~AudioClip()
{
    if (m_audio)
    {
        MIX_DestroyAudio(m_audio);
    }
}

MIX_Audio* AudioClip::Get() const
{
    return m_audio;
}