add_executable(SDLTest
	"Main.cpp"
	
	
	
	"Framework/Window.cpp"
	"Framework/Window.h" "Framework/Game.cpp" "Framework/Game.h" "Framework/Input.cpp" "Framework/Input.h" "Framework/Graphics.cpp" "Framework/Graphics.h" "Framework/Texture.cpp" "Framework/Texture.h" "TestGame.cpp" "TestGame.h")

target_link_libraries(SDLTest PRIVATE SDL3::SDL3)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET SDLTest PROPERTY CXX_STANDARD 20)
endif()