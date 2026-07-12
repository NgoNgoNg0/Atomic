#pragma once

class AudioClip;

struct MIX_Track;

class AudioSource
{
public:
    AudioSource();
    ~AudioSource();

    void SetClip(AudioClip& clip);

    void Play(int loops = 0);

    void Stop();

    void Pause();

    void Resume();

    void SetVolume(float volume);

    bool IsPlaying() const;

private:
    MIX_Track* m_track = nullptr;

    AudioClip* m_clip = nullptr;
};