#include "AudioSource.h"

#include "Audio.h"
#include "AudioClip.h"

#include <SDL3/SDL.h>
#include <SDL3_mixer/SDL_mixer.h>

#include <iostream>
#include <stdexcept>

AudioSource::AudioSource()
{
    m_track = MIX_CreateTrack(Audio::GetMixer());

    if (!m_track)
    {
        std::cout << "SDL Error    : " << SDL_GetError() << '\n';
        throw std::runtime_error(SDL_GetError());
    }
}

AudioSource::~AudioSource()
{
    if (m_track)
    {
        MIX_DestroyTrack(m_track);
    }
}

void AudioSource::SetClip(AudioClip& clip)
{
    m_clip = &clip;

    MIX_SetTrackAudio(
        m_track,
        clip.Get()
    );
}

void AudioSource::Play(int loops)
{
    SDL_PropertiesID props = SDL_CreateProperties();

    SDL_SetNumberProperty(
        props,
        MIX_PROP_PLAY_LOOPS_NUMBER,
        loops
    );

    MIX_PlayTrack(
        m_track,
        props
    );

    SDL_DestroyProperties(props);
}

void AudioSource::Stop()
{
    MIX_StopTrack(
        m_track,
        0
    );
}

void AudioSource::Pause()
{
    MIX_PauseTrack(m_track);
}

void AudioSource::Resume()
{
    MIX_ResumeTrack(m_track);
}

void AudioSource::SetVolume(float volume)
{
    MIX_SetTrackGain(
        m_track,
        volume
    );
}

bool AudioSource::IsPlaying() const
{
    return MIX_TrackPlaying(m_track);
}