#include "Texture.h"

#include <stdexcept>

#include "Graphics.h"

Texture::Texture(const std::filesystem::path& path)
{
    SDL_Surface* surface =
        SDL_LoadBMP(path.string().c_str());

    if (!surface)
    {
        throw std::runtime_error(
            SDL_GetError()
        );
    }

    m_texture =
        SDL_CreateTextureFromSurface(
            Graphics::GetRenderer(),
            surface
        );

    SDL_DestroySurface(surface);

    if (!m_texture)
    {
        throw std::runtime_error(
            SDL_GetError()
        );
    }
}

Texture::~Texture()
{
    if (m_texture)
    {
        SDL_DestroyTexture(
            m_texture
        );
    }
}

SDL_Texture* Texture::Get() const
{
    return m_texture;
}