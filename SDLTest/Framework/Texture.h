#pragma once

#include <filesystem>

#include <SDL3/SDL.h>

class Texture
{
public:
	explicit Texture(const std::filesystem::path& path);
	~Texture();
	
	SDL_Texture* Get() const;

private:
	SDL_Texture* m_texture;

};