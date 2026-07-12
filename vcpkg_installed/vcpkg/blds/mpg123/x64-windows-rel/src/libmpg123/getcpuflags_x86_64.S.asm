#line 1 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/mpg123/src/-0852196a3c.clean/ports/cmake/src/libmpg123/../../../../src/libmpg123/getcpuflags_x86_64.S"








#line 1 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"












#line 1 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/mpg123/x64-windows-rel/src\\config.h"








































































































































































#line 170 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/mpg123/x64-windows-rel/src\\config.h"









#line 14 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"



#line 21 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"





#line 27 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"











































#line 71 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"







#line 79 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"


#line 83 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"


#line 86 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"





#line 92 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"




























































#line 153 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"



#line 157 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"

#line 159 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"





#line 165 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"






#line 172 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"









#line 182 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"

#line 184 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"



#line 188 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"








#line 197 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"









#line 207 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"

#line 209 "E:\\個人用\\SDL\\SDLTest\\vcpkg_installed\\vcpkg\\blds\\mpg123\\src\\-0852196a3c.clean\\src\\libmpg123\\mangle.h"

#line 10 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/mpg123/src/-0852196a3c.clean/ports/cmake/src/libmpg123/../../../../src/libmpg123/getcpuflags_x86_64.S"

	.text
	.balign 4
	.globl INT123_getcpuflags
INT123_getcpuflags:
	push	%rbp
	mov		%rsp, %rbp
	push	%rbx
	

	push	%rdi
	mov		%rcx, %rdi
#line 23 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/mpg123/src/-0852196a3c.clean/ports/cmake/src/libmpg123/../../../../src/libmpg123/getcpuflags_x86_64.S"

	movl	$0, 12(%rdi)
	movl	$0, 16(%rdi)

	mov		$0x80000000, %eax
	cpuid
	cmp		$0x80000001, %eax
	jb		1f
	mov		$0x80000001, %eax
	cpuid
	movl	%edx, 12(%rdi)
1:
	mov		$0x00000001, %eax
	cpuid
	movl	%eax, (%rdi)
	movl	%ecx, 4(%rdi)
	movl	%edx, 8(%rdi)
	test	$0x04000000, %ecx
	jz		2f
	test	$0x08000000, %ecx
	jz		2f
	xor		%ecx, %ecx
	.byte	0x0f, 0x01, 0xd0 
	movl	%eax, 16(%rdi)
	movl	(%rdi), %eax
2:

	pop		%rdi
#line 52 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/mpg123/src/-0852196a3c.clean/ports/cmake/src/libmpg123/../../../../src/libmpg123/getcpuflags_x86_64.S"
	pop		%rbx
	mov		%rbp, %rsp
	pop		%rbp
	ret
	

