!include x64.nsh
Name "libjpeg-turbo SDK for Visual C++ 64-bit"
OutFile "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\${BUILDDIR}libjpeg-turbo-3.1.3-vc-x64.exe"
InstallDir "E:\個人用\SDL\SDLTest\build\vcpkg_installed\vcpkg\pkgs\libjpeg-turbo_x64-windows"

SetCompressor bzip2

Page directory
Page instfiles

UninstPage uninstConfirm
UninstPage instfiles

Section "libjpeg-turbo SDK for Visual C++ 64-bit (required)"
!ifdef WIN64
	${If} ${RunningX64}
	${DisableX64FSRedirection}
	${Endif}
!endif
	SectionIn RO
!ifdef GCC
	IfFileExists $SYSDIR/libturbojpeg.dll exists 0
!else
	IfFileExists $SYSDIR/turbojpeg.dll exists 0
!endif
	goto notexists
	exists:
!ifdef GCC
	MessageBox MB_OK "An existing version of the libjpeg-turbo SDK for Visual C++ 64-bit is already installed.  Please uninstall it first."
!else
	MessageBox MB_OK "An existing version of the libjpeg-turbo SDK for Visual C++ 64-bit or the TurboJPEG SDK is already installed.  Please uninstall it first."
!endif
	quit

	notexists:
	SetOutPath $SYSDIR
!ifdef GCC
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\libturbojpeg.dll"
!else
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\${BUILDDIR}turbojpeg.dll"
!endif
	SetOutPath $INSTDIR\bin
!ifdef GCC
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\libturbojpeg.dll"
!else
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\${BUILDDIR}turbojpeg.dll"
!endif
!ifdef GCC
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\libjpeg-62.dll"
!else
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\${BUILDDIR}jpeg62.dll"
!endif
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\${BUILDDIR}cjpeg.exe"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\${BUILDDIR}djpeg.exe"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\${BUILDDIR}jpegtran.exe"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\${BUILDDIR}tjbench.exe"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\${BUILDDIR}rdjpgcom.exe"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\${BUILDDIR}wrjpgcom.exe"
	SetOutPath $INSTDIR\lib
!ifdef GCC
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\libturbojpeg.dll.a"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\libturbojpeg.a"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\libjpeg.dll.a"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\libjpeg.a"
!else
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\${BUILDDIR}turbojpeg.lib"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\${BUILDDIR}turbojpeg-static.lib"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\${BUILDDIR}jpeg.lib"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\${BUILDDIR}jpeg-static.lib"
!endif
	SetOutPath $INSTDIR\lib\pkgconfig
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\pkgscripts\libjpeg.pc"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\pkgscripts\libturbojpeg.pc"
	SetOutPath $INSTDIR\lib\cmake\libjpeg-turbo
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\pkgscripts\libjpeg-turboConfig.cmake"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\pkgscripts\libjpeg-turboConfigVersion.cmake"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\win\libjpeg-turboTargets.cmake"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\win\libjpeg-turboTargets-release.cmake"
!ifdef JAVA
	SetOutPath $INSTDIR\classes
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\java\turbojpeg.jar"
!endif
	SetOutPath $INSTDIR\include
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/x64-windows-rel\jconfig.h"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\src\jerror.h"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\src\jmorecfg.h"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\src\jpeglib.h"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\src\turbojpeg.h"
	SetOutPath $INSTDIR\doc
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\README.ijg"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\README.md"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\LICENSE.md"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\src\example.c"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\doc\libjpeg.txt"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\doc\structure.txt"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\doc\usage.txt"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\doc\wizard.txt"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\src\tjcomp.c"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\src\tjdecomp.c"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\src\tjtran.c"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\java\TJComp.java"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\java\TJDecomp.java"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\java\TJTran.java"
!ifdef GCC
	SetOutPath $INSTDIR\man\man1
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\doc\cjpeg.1"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\doc\djpeg.1"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\doc\jpegtran.1"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\doc\rdjpgcom.1"
	File "E:/個人用/SDL/SDLTest/build/vcpkg_installed/vcpkg/blds/libjpeg-turbo/src/3.1.3-03a6b1dd07.clean\doc\wrjpgcom.1"
!endif

	WriteRegStr HKLM "SOFTWARE\libjpeg-turbo64 3.1.3" "Install_Dir" "$INSTDIR"

	WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\libjpeg-turbo64 3.1.3" "DisplayName" "libjpeg-turbo SDK v3.1.3 for Visual C++ 64-bit"
	WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\libjpeg-turbo64 3.1.3" "UninstallString" '"$INSTDIR\uninstall_3.1.3.exe"'
	WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\libjpeg-turbo64 3.1.3" "NoModify" 1
	WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\libjpeg-turbo64 3.1.3" "NoRepair" 1
	WriteUninstaller "uninstall_3.1.3.exe"
SectionEnd

Section "Uninstall"
!ifdef WIN64
	${If} ${RunningX64}
	${DisableX64FSRedirection}
	${Endif}
!endif

	SetShellVarContext all

	DeleteRegKey HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\libjpeg-turbo64 3.1.3"
	DeleteRegKey HKLM "SOFTWARE\libjpeg-turbo64 3.1.3"

!ifdef GCC
	Delete $INSTDIR\bin\libjpeg-62.dll
	Delete $INSTDIR\bin\libturbojpeg.dll
	Delete $SYSDIR\libturbojpeg.dll
	Delete $INSTDIR\lib\libturbojpeg.dll.a
	Delete $INSTDIR\lib\libturbojpeg.a
	Delete $INSTDIR\lib\libjpeg.dll.a
	Delete $INSTDIR\lib\libjpeg.a
!else
	Delete $INSTDIR\bin\jpeg62.dll
	Delete $INSTDIR\bin\turbojpeg.dll
	Delete $SYSDIR\turbojpeg.dll
	Delete $INSTDIR\lib\jpeg.lib
	Delete $INSTDIR\lib\jpeg-static.lib
	Delete $INSTDIR\lib\turbojpeg.lib
	Delete $INSTDIR\lib\turbojpeg-static.lib
!endif
	Delete $INSTDIR\lib\pkgconfig\libjpeg.pc
	Delete $INSTDIR\lib\pkgconfig\libturbojpeg.pc
	Delete $INSTDIR\lib\cmake\libjpeg-turbo\libjpeg-turboConfig.cmake
	Delete $INSTDIR\lib\cmake\libjpeg-turbo\libjpeg-turboConfigVersion.cmake
	Delete $INSTDIR\lib\cmake\libjpeg-turbo\libjpeg-turboTargets.cmake
	Delete $INSTDIR\lib\cmake\libjpeg-turbo\libjpeg-turboTargets-release.cmake
!ifdef JAVA
	Delete $INSTDIR\classes\turbojpeg.jar
!endif
	Delete $INSTDIR\bin\cjpeg.exe
	Delete $INSTDIR\bin\djpeg.exe
	Delete $INSTDIR\bin\jpegtran.exe
	Delete $INSTDIR\bin\tjbench.exe
	Delete $INSTDIR\bin\rdjpgcom.exe
	Delete $INSTDIR\bin\wrjpgcom.exe
	Delete $INSTDIR\include\jconfig.h
	Delete $INSTDIR\include\jerror.h
	Delete $INSTDIR\include\jmorecfg.h
	Delete $INSTDIR\include\jpeglib.h
	Delete $INSTDIR\include\turbojpeg.h
	Delete $INSTDIR\uninstall_3.1.3.exe
	Delete $INSTDIR\doc\README.ijg
	Delete $INSTDIR\doc\README.md
	Delete $INSTDIR\doc\LICENSE.md
	Delete $INSTDIR\doc\example.c
	Delete $INSTDIR\doc\libjpeg.txt
	Delete $INSTDIR\doc\structure.txt
	Delete $INSTDIR\doc\usage.txt
	Delete $INSTDIR\doc\wizard.txt
	Delete $INSTDIR\doc\tjcomp.c
	Delete $INSTDIR\doc\tjdecomp.c
	Delete $INSTDIR\doc\tjtran.c
	Delete $INSTDIR\doc\TJComp.java
	Delete $INSTDIR\doc\TJDecomp.java
	Delete $INSTDIR\doc\TJTran.java
!ifdef GCC
	Delete $INSTDIR\man\man1\cjpeg.1
	Delete $INSTDIR\man\man1\djpeg.1
	Delete $INSTDIR\man\man1\jpegtran.1
	Delete $INSTDIR\man\man1\rdjpgcom.1
	Delete $INSTDIR\man\man1\wrjpgcom.1
!endif

	RMDir "$INSTDIR\include"
	RMDir "$INSTDIR\lib\pkgconfig"
	RMDir "$INSTDIR\lib\cmake\libjpeg-turbo"
	RMDir "$INSTDIR\lib\cmake"
	RMDir "$INSTDIR\lib"
	RMDir "$INSTDIR\doc"
!ifdef GCC
	RMDir "$INSTDIR\man\man1"
	RMDir "$INSTDIR\man"
!endif
!ifdef JAVA
	RMDir "$INSTDIR\classes"
!endif
	RMDir "$INSTDIR\bin"
	RMDir "$INSTDIR"

SectionEnd
