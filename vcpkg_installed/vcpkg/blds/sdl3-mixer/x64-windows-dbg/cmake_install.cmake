# Install script for directory: E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/src/ease-3.2.4-fd811b934b.clean

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/pkgs/sdl3-mixer_x64-windows/debug")
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/x64-windows-dbg/SDL3_mixer.lib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "library" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/x64-windows-dbg/SDL3_mixer.dll")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL3_mixer" TYPE FILE FILES "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/src/ease-3.2.4-fd811b934b.clean/include/SDL3_mixer/SDL_mixer.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE OPTIONAL FILES "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/x64-windows-dbg/SDL3_mixer.pdb")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE FILES
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/x64-windows-dbg/SDL3_mixerConfig.cmake"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/x64-windows-dbg/SDL3_mixerConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE FILES
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/src/ease-3.2.4-fd811b934b.clean/cmake/PkgConfigHelper.cmake"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/src/ease-3.2.4-fd811b934b.clean/cmake/FindFLAC.cmake"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/src/ease-3.2.4-fd811b934b.clean/cmake/FindFluidSynth.cmake"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/src/ease-3.2.4-fd811b934b.clean/cmake/Findgme.cmake"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/src/ease-3.2.4-fd811b934b.clean/cmake/Findlibxmp.cmake"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/src/ease-3.2.4-fd811b934b.clean/cmake/Findlibxmp-lite.cmake"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/src/ease-3.2.4-fd811b934b.clean/cmake/FindOgg.cmake"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/src/ease-3.2.4-fd811b934b.clean/cmake/FindOpus.cmake"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/src/ease-3.2.4-fd811b934b.clean/cmake/FindOpusFile.cmake"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/src/ease-3.2.4-fd811b934b.clean/cmake/Findmpg123.cmake"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/src/ease-3.2.4-fd811b934b.clean/cmake/FindVorbis.cmake"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/src/ease-3.2.4-fd811b934b.clean/cmake/Findtremor.cmake"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/src/ease-3.2.4-fd811b934b.clean/cmake/Findwavpack.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devel" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/SDL3_mixer-shared-targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/SDL3_mixer-shared-targets.cmake"
         "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/x64-windows-dbg/CMakeFiles/Export/272ceadb8458515b2ae4b5630a6029cc/SDL3_mixer-shared-targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/SDL3_mixer-shared-targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/SDL3_mixer-shared-targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE FILES "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/x64-windows-dbg/CMakeFiles/Export/272ceadb8458515b2ae4b5630a6029cc/SDL3_mixer-shared-targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE FILES "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/x64-windows-dbg/CMakeFiles/Export/272ceadb8458515b2ae4b5630a6029cc/SDL3_mixer-shared-targets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/x64-windows-dbg/sdl3-mixer.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "library" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/SDL3_mixer" TYPE FILE FILES "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/src/ease-3.2.4-fd811b934b.clean/LICENSE.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/x64-windows-dbg/install_local_manifest.txt"
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
  file(WRITE "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/sdl3-mixer/x64-windows-dbg/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
