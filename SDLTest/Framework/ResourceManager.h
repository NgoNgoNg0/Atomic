#pragma once
#include "Loader.h"

#include <memory>
#include <string>
#include <unordered_map>
#include <filesystem>
#include <stdexcept>

template<class T>
struct Loader;

template<class T>
class ResourceManager
{
public:
	static void Register(const std::string& name, const std::filesystem::path& path)
	{
		if (m_resourcePaths.contains(name))
		{
			throw std::runtime_error("Resource already registered: " + name);
		}

		m_resourcePaths.emplace(name, path);
	}

	static T& Get(const std::string& name)
	{
		auto it = m_resources.find(name);
		if (it != m_resources.end())
		{
			return *it->second;
		}

		auto pathIt = m_resourcePaths.find(name);
		if (pathIt == m_resourcePaths.end())
		{
			throw std::runtime_error("Resource not found: " + name);
		}

		std::unique_ptr<T> resource = Loader<T>::Load(pathIt->second);

		T& ref = *resource;

		m_resources.emplace(name, std::move(resource));

		return ref;
	}

	static void Unload(const std::string& name)
	{
		m_resources.erase(name);
	}

	static void Clear()
	{
		m_resources.clear();
		m_resourcePaths.clear();
	}

private:
	inline static std::unordered_map<std::string, std::filesystem::path> m_resourcePaths;
	inline static std::unordered_map<std::string, std::unique_ptr<T>> m_resources;

};