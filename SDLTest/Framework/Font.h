#pragma once

#include <filesystem>

struct TTF_Font;

class Font
{
public:
	Font(const std::filesystem::path& path, int size);
	~Font();

	Font(const Font&) = delete;
	Font& operator=(const Font&) = delete;

	TTF_Font* Get() const;

private:
	TTF_Font* m_font = nullptr;

};