#pragma once

#include <filesystem>

struct MIX_Audio;

class AudioClip
{
public:
    explicit AudioClip(const std::filesystem::path& path);
    ~AudioClip();

    MIX_Audio* Get() const;

private:
    MIX_Audio* m_audio = nullptr;
};