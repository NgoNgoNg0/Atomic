find_package(SDL3 CONFIG REQUIRED)
find_package(SDL3_image CONFIG REQUIRED)

add_executable(SDLTest
    "Main.cpp"

    "Framework/Window.cpp"
    "Framework/Window.h"
    "Framework/Game.cpp"
    "Framework/Game.h"
    "Framework/Input.cpp"
    "Framework/Input.h"
    "Framework/Graphics.cpp"
    "Framework/Graphics.h"
    "Framework/Texture.cpp"
    "Framework/Texture.h"
    "TestGame.cpp"
    "TestGame.h"
    "Framework/Rect.h"
    "Framework/Color.h"
    "Framework/ResourceManager.h"
 "Framework/Loader.h" "Framework/Mouse.cpp" "Framework/Mouse.h" "Framework/Vector2.h" "Framework/Time.cpp" "Framework/Time.h")

target_link_libraries(SDLTest
    PRIVATE
        SDL3::SDL3
        SDL3_image::SDL3_image
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
    set_property(TARGET SDLTest PROPERTY CXX_STANDARD 20)
endif()