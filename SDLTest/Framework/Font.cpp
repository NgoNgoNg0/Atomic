#include "Font.h"

#include <SDL3_ttf/SDL_ttf.h>

#include <iostream>
#include <stdexcept>

Font::Font(const std::filesystem::path& path, int size)
{
	std::cout << "Current Path : " << std::filesystem::current_path() << '\n';
	std::cout << "Font Path    : " << path << '\n';
	std::cout << "Exists       : " << std::filesystem::exists(path) << '\n';

	m_font = TTF_OpenFont(path.string().c_str(), size);
	if (!m_font)
	{
		std::cout << "SDL Error    : " << SDL_GetError() << '\n';
		throw std::runtime_error(SDL_GetError());
	}
}

Font::~Font()
{
	if (m_font)
	{
		TTF_CloseFont(m_font);
	}
}

TTF_Font* Font::Get() const
{
	return m_font;
}