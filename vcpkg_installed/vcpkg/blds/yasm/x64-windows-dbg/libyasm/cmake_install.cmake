# Install script for directory: E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/pkgs/yasm_x64-windows/debug")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-dbg/yasm.lib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-dbg/yasm.dll")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libyasm" TYPE FILE FILES
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/arch.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/assocdat.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/bitvect.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/bytecode.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/compat-queue.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/coretype.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/dbgfmt.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/errwarn.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/expr.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/file.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/floatnum.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/hamt.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/insn.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/intnum.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/inttree.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/linemap.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/listfmt.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/md5.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/module.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/objfmt.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/parser.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/phash.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/preproc.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/section.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/symrec.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/valparam.h"
    "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-6bedbb02b5.clean/libyasm/value.h"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-dbg/libyasm/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
