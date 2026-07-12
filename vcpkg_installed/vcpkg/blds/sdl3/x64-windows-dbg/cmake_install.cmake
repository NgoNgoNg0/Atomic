# Install script for directory: E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/pkgs/sdl3_x64-windows/debug")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "OFF")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/x64-windows-dbg/sdl3.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/x64-windows-dbg/SDL3.lib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/x64-windows-dbg/SDL3.dll")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE OPTIONAL FILES "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/x64-windows-dbg/SDL3.pdb")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sdl3/SDL3headersTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sdl3/SDL3headersTargets.cmake"
         "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/x64-windows-dbg/CMakeFiles/Export/4dd1f946b649bbfc73d93f0f0b7161ef/SDL3headersTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sdl3/SDL3headersTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sdl3/SDL3headersTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sdl3" TYPE FILE FILES "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/x64-windows-dbg/CMakeFiles/Export/4dd1f946b649bbfc73d93f0f0b7161ef/SDL3headersTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sdl3/SDL3sharedTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sdl3/SDL3sharedTargets.cmake"
         "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/x64-windows-dbg/CMakeFiles/Export/4dd1f946b649bbfc73d93f0f0b7161ef/SDL3sharedTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sdl3/SDL3sharedTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sdl3/SDL3sharedTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sdl3" TYPE FILE FILES "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/x64-windows-dbg/CMakeFiles/Export/4dd1f946b649bbfc73d93f0f0b7161ef/SDL3sharedTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sdl3" TYPE FILE FILES "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/x64-windows-dbg/CMakeFiles/Export/4dd1f946b649bbfc73d93f0f0b7161ef/SDL3sharedTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sdl3" TYPE FILE FILES
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/x64-windows-dbg/SDL3Config.cmake"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/x64-windows-dbg/SDL3ConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL3" TYPE FILE FILES
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_assert.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_asyncio.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_atomic.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_audio.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_begin_code.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_bits.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_blendmode.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_camera.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_clipboard.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_close_code.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_copying.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_cpuinfo.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_dialog.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_dlopennote.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_egl.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_endian.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_error.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_events.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_filesystem.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_gamepad.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_gpu.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_guid.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_haptic.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_hidapi.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_hints.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_init.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_intrin.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_iostream.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_joystick.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_keyboard.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_keycode.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_loadso.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_locale.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_log.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_main.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_main_impl.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_messagebox.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_metal.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_misc.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_mouse.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_mutex.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_oldnames.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_opengl.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_opengl_glext.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_opengles.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_opengles2.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_opengles2_gl2.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_opengles2_gl2ext.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_opengles2_gl2platform.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_opengles2_khrplatform.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_pen.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_pixels.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_platform.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_platform_defines.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_power.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_process.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_properties.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_rect.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_render.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_scancode.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_sensor.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_stdinc.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_storage.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_surface.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_system.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_thread.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_time.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_timer.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_touch.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_tray.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_version.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_video.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/include/SDL3/SDL_vulkan.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/x64-windows-dbg/include-revision/SDL3/SDL_revision.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/licenses/SDL3" TYPE FILE FILES "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/src/ase-3.4.12-441a9855e8.clean/LICENSE.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/x64-windows-dbg/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3/x64-windows-dbg/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
