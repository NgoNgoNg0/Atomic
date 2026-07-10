#pragma once

#include <memory>
#include <filesystem>

#include "Texture.h"

template<class T>
struct Loader;

template<>
struct Loader<Texture>
{
	static std::unique_ptr<Texture> Load(const std::filesystem::path& path)
	{
		return std::make_unique<Texture>(path);
	}
};