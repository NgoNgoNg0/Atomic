#include "Audio.h"

#include <SDL3/SDL.h>
#include <SDL3_mixer/SDL_mixer.h>

#include <stdexcept>
#include <iostream>

bool Audio::Initialize()
{
    SDL_Init(SDL_INIT_AUDIO);
    if (!MIX_Init())
    {
        throw std::runtime_error(SDL_GetError());
    }

    m_mixer = MIX_CreateMixerDevice(
        SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK,
        nullptr
    );

    if (!m_mixer)
    {
        std::cout << "ERROR" << SDL_GetError();
        throw std::runtime_error(SDL_GetError());
    }

    return true;
}

void Audio::Finalize()
{
    if (m_mixer)
    {
        MIX_DestroyMixer(m_mixer);
        m_mixer = nullptr;
    }

    MIX_Quit();
}

MIX_Mixer* Audio::GetMixer()
{
    return m_mixer;
}

void Audio::SetMasterVolume(float volume)
{
    m_masterVolume = SDL_clamp(volume, 0.0f, 1.0f);

    // SDL3_mixerでマスター音量APIが追加されたらここで適用
}

float Audio::GetMasterVolume()
{
    return m_masterVolume;
}
