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
    "Framework/Persistence.cpp"
    "Framework/Persistence.h"
    "Framework/ClickEffect.cpp"
    "Framework/ClickEffect.h"
 "Chemistry.cpp" "Chemistry.h" "Ball.cpp" "Ball.h" "BallManager.cpp" "BallManager.h" "Pipette.cpp" "Pipette.h" "ResultScene.cpp" "ResultScene.h")

target_link_libraries(SDLTest
    PRIVATE
        SDL3::SDL3
        SDL3_image::SDL3_image
        SDL3_ttf::SDL3_ttf
        SDL3_mixer::SDL3_mixer
)

if (EMSCRIPTEN)
    # Web build: assets are packed into the virtual file system at /Assets.
    set_target_properties(SDLTest PROPERTIES SUFFIX ".html")
    target_compile_options(SDLTest PRIVATE -fexceptions)
    target_link_options(SDLTest PRIVATE
        -fexceptions
        -lidbfs.js
        -sALLOW_MEMORY_GROWTH=1
        -sINITIAL_MEMORY=268435456
        --preload-file ${CMAKE_SOURCE_DIR}/Assets@/Assets
        --shell-file ${CMAKE_CURRENT_SOURCE_DIR}/web/shell.html
    )
else()
    # Remove the previous copy first so assets deleted from Assets/ (for example old fonts)
    # do not linger in the app bundle.
    add_custom_command(TARGET SDLTest POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E remove_directory
            $<TARGET_BUNDLE_DIR:SDLTest>/Assets
        COMMAND ${CMAKE_COMMAND} -E copy_directory
            ${CMAKE_SOURCE_DIR}/Assets
            $<TARGET_BUNDLE_DIR:SDLTest>/Assets
    )
endif()

# Custom Info.plist (enables 120 Hz rendering on ProMotion iPhones via CADisableMinimumFrameDurationOnPhone).
set_target_properties(SDLTest PROPERTIES
    MACOSX_BUNDLE_INFO_PLIST ${CMAKE_CURRENT_SOURCE_DIR}/Info.plist.in
)

# App icon (Icon Composer). Only meaningful for the Xcode generator.
if (CMAKE_GENERATOR STREQUAL "Xcode")
    set(ATOMIC_ICON "${CMAKE_SOURCE_DIR}/AtomicIcon.icon")
    target_sources(SDLTest PRIVATE ${ATOMIC_ICON})
    set_source_files_properties(${ATOMIC_ICON} PROPERTIES
        XCODE_EXPLICIT_FILE_TYPE folder.iconcomposer.icon
        MACOSX_PACKAGE_LOCATION Resources
    )
    set_target_properties(SDLTest PROPERTIES
        XCODE_ATTRIBUTE_ASSETCATALOG_COMPILER_APPICON_NAME AtomicIcon
    )
endif()

if (CMAKE_VERSION VERSION_GREATER 3.12)
    set_property(TARGET SDLTest PROPERTY CXX_STANDARD 20)
endif()
