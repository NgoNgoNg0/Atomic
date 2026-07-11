#pragma once

#include <functional>
#include <memory>
#include <string>
#include <tuple>
#include <unordered_map>
#include <utility>
#include <stdexcept>

template<class T>
class ResourceManager
{
public:
    template<class... Args>
    static void Register(const std::string& name, Args&&... args)
    {
        if (m_factories.contains(name))
        {
            throw std::runtime_error("Resource already registered: " + name);
        }

        auto tuple = std::make_tuple(std::forward<Args>(args)...);

        m_factories.emplace(
            name,
            [tuple = std::move(tuple)]() mutable
            {
                return std::apply(
                    [](auto&&... args)
                    {
                        return std::make_unique<T>(
                            std::forward<decltype(args)>(args)...
                        );
                    },
                    std::move(tuple)
                );
            });
    }

    static T& Get(const std::string& name)
    {
        if (auto it = m_resources.find(name); it != m_resources.end())
        {
            return *it->second;
        }

        auto it = m_factories.find(name);

        if (it == m_factories.end())
        {
            throw std::runtime_error("Resource not registered: " + name);
        }

        auto resource = it->second();

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
        m_factories.clear();
    }

private:
    using Factory = std::function<std::unique_ptr<T>()>;

    inline static std::unordered_map<std::string, Factory> m_factories;
    inline static std::unordered_map<std::string, std::unique_ptr<T>> m_resources;
};