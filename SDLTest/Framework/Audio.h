#pragma once

#include <SDL3_mixer/SDL_mixer.h>

class Audio
{
public:
    static bool Initialize();
    static void Finalize();

    static MIX_Mixer* GetMixer();

    static void SetMasterVolume(float volume);
    static float GetMasterVolume();

private:
    inline static MIX_Mixer* m_mixer = nullptr;
    inline static float m_masterVolume = 1.0f;
};