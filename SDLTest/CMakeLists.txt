find_package(SDL3 CONFIG REQUIRED)
find_package(SDL3_image CONFIG REQUIRED)
find_package(SDL3_ttf CONFIG REQUIRED)
find_package(SDL3_mixer CONFIG REQUIRED)

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
    "Framework/Mouse.cpp" 
    "Framework/Mouse.h" 
    "Framework/Vector2.h" 
    "Framework/Time.cpp" 
    "Framework/Time.h" 
    "Framework/Font.cpp" 
    "Framework/Font.h" 
    "Framework/AudioClip.cpp" 
    "Framework/AudioClip.h" 
    "Framework/AudioSource.cpp" 
    "Framework/AudioSource.h"
    "Framework/Audio.cpp"
    "Framework/Audio.h"
    "Framework/AnimationClip.cpp"
    "Framework/AnimationClip.h"
    "Framework/Animator.cpp"
    "Framework/Animator.h"
    "Framework/Scene.cpp"
    "Framework/Scene.h"
    "Framework/SceneManager.cpp"
    "Framework/SceneManager.h"
    "TitleScene.cpp"
    "TitleScene.h"
    "PlayScene.cpp"
    "PlayScene.h"
    "AtomicGame.cpp"
    "AtomicGame.h"
    "Framework/Button.cpp"
    "Framework/Button.h"
    "Framework/Timer.cpp"
    "Framework/Timer.h"
 "Ball.cpp" "Ball.h" "BallManager.cpp" "BallManager.h")

target_link_libraries(SDLTest
    PRIVATE
        SDL3::SDL3
        SDL3_image::SDL3_image
        SDL3_ttf::SDL3_ttf
        SDL3_mixer::SDL3_mixer
)

add_custom_command(TARGET SDLTest POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/Assets
        $<TARGET_FILE_DIR:SDLTest>/Assets
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
    set_property(TARGET SDLTest PROPERTY CXX_STANDARD 20)
endif()