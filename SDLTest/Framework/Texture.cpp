#include "Texture.h"
#include "Graphics.h"

#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>

#include <iostream>
#include <stdexcept>

Texture::Texture(const std::filesystem::path& path)
{
	SDL_Surface* surface = IMG_Load(path.string().c_str());
	if (!surface)
	{
		std::cout << "Current Path : " << std::filesystem::current_path() << '\n';

		std::cout << "Image Path   : " << path << '\n';

		std::cout << "Exists       : " << std::filesystem::exists(path) << '\n';

		std::cout << "SDL Error    : "  << SDL_GetError() << '\n';

		throw std::runtime_error("IMG_Load failed");
	}

	m_texture = SDL_CreateTextureFromSurface(Graphics::GetRenderer(), surface);

	SDL_DestroySurface(surface);

	if (!m_texture)
	{
		throw std::runtime_error(SDL_GetError());

	}
}

Texture::~Texture()
{
	if (m_texture)
	{
		SDL_DestroyTexture(m_texture);
	}
}

SDL_Texture* Texture::Get() const
{
	return m_texture;
}