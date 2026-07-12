/* ANSI-C code produced by genperf */
/* Command-line: genperf E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.c */
#line 10 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
struct insnprefix_parse_data;
static const struct insnprefix_parse_data *
insnprefix_nasm_find(const char *key, size_t len)
{
  static const struct insnprefix_parse_data pd[1457] = {
#line 1387 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsubd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xFA,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1465 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xsha256",	padlock_insn,	1,	SUF_Z,	0xD0,	0xF3,	0xA6,	0,	CPU_PadLock,	0,	0},
#line 96 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovna",	cmovcc_insn,	3,	SUF_Z,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 139 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpnltsd",	ssecmp_64_insn,	4,	SUF_Z,	0x05,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 125 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpltpd",	ssecmp_128_insn,	3,	SUF_Z,	0x01,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 594 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmvgezb",	cyrixmmx_insn,	1,	SUF_Z,	0x5C,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 95 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovle",	cmovcc_insn,	3,	SUF_Z,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 210 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fclex",	threebyte_insn,	1,	SUF_Z,	0x9B,	0xDB,	0xE2,	0,	CPU_FPU,	0,	0},
#line 1444 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xbegin",	tsx_xbegin_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_TSX,	0},
#line 1093 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovapd",	movau_insn,	6,	SUF_Z,	0x66,	0x28,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 115 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovz",	cmovcc_insn,	3,	SUF_Z,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 261 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fninit",	twobyte_insn,	1,	SUF_Z,	0xDB,	0xE3,	0,	0,	CPU_FPU,	0,	0},
#line 402 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"maxsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5F,	0,	0,	CPU_SSE2,	0,	0},
#line 657 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pushfd",	onebyte_insn,	1,	SUF_Z,	0x9C,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 1218 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomleuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 678 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"repz",	NULL,	X86_LOCKREP>>8,	0xF3,	0,	0,	0,	0,	0,	0,	0},
#line 634 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psubd",	mmxsse2_insn,	2,	SUF_Z,	0xFA,	0,	0,	0,	CPU_MMX,	0,	0},
#line 283 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fstpt",	fldstpt_insn,	1,	SUF_Z,	0x07,	0,	0,	0,	CPU_FPU,	0,	0},
#line 26 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"adc",	arith_insn,	22,	SUF_Z,	0x10,	0x02,	0,	0,	0,	0,	0},
#line 1128 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmulss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1370 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsignw",	ssse3_insn,	5,	SUF_Z,	0x09,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1434 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vzeroupper",	vzero_insn,	1,	SUF_Z,	0xC0,	0,	0,	0,	CPU_AVX,	0,	0},
#line 355 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jnle",	jcc_insn,	9,	SUF_Z,	0x0F,	0,	0,	0,	0,	0,	0},
#line 589 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmulhuw",	mmxsse2_insn,	2,	SUF_Z,	0xE4,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 924 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpord_sss",	ssecmp_32_insn,	4,	SUF_Z,	0x17,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 299 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fxsave",	twobytemem_insn,	1,	SUF_Z,	0x00,	0x0F,	0xAE,	0,	CPU_686,	CPU_FPU,	0},
#line 186 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvttss2si",	cvt_rx_xmm32_insn,	4,	SUF_Z,	0xF3,	0x2C,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 316 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"insertps",	insertps_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 672 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rdtsc",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x31,	0,	0,	CPU_586,	0,	0},
#line 213 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fcmove",	fcmovcc_insn,	1,	SUF_Z,	0xDA,	0xC8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 933 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmptrue_uspd",	ssecmp_128_insn,	3,	SUF_Z,	0x1F,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1126 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmulps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 826 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpeq_usps",	ssecmp_128_insn,	3,	SUF_Z,	0x18,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 169 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvtpd2ps",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 1058 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmsubsd",	fma_128_m64_insn,	3,	SUF_Z,	0x7F,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 711 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setg",	setcc_insn,	1,	SUF_Z,	0x0F,	0,	0,	0,	CPU_386,	0,	0},
#line 1165 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpclmulqdq",	pclmulqdq_insn,	2,	SUF_Z,	0x3A,	0x44,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 86 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmova",	cmovcc_insn,	3,	SUF_Z,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 1083 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmaxss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 550 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pi2fw",	now3d_insn,	1,	SUF_Z,	0x0C,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 1028 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmadd132pd",	vfma_pd_insn,	2,	SUF_Z,	0x9C,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 974 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vdpps",	sse4imm_256_insn,	4,	SUF_Z,	0x40,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1355 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsadbw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xF6,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1062 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfrczsd",	vfrczsd_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_XOP,	0,	0},
#line 561 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmaxsw",	mmxsse2_insn,	2,	SUF_Z,	0xEE,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1112 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovsd",	movsd_insn,	5,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1158 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpbroadcastd",	vpbroadcastd_avx2_insn,	4,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1255 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomud",	vpcom_imm_insn,	1,	SUF_Z,	0xEE,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1371 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpslld",	vpshift_insn,	8,	SUF_Z,	0xF2,	0x72,	0x06,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 743 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"shufpd",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0x66,	0xC6,	0,	0,	CPU_SSE2,	0,	0},
#line 1209 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomgtud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 962 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcvtsi2ss",	cvt_xmm_rmx_insn,	6,	SUF_Z,	0xF3,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 842 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpge_oqps",	ssecmp_128_insn,	3,	SUF_Z,	0x1D,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 104 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovnl",	cmovcc_insn,	3,	SUF_Z,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 23 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"aad",	aadm_insn,	2,	SUF_Z,	0x01,	0,	0,	NOT_64,	0,	0,	0},
#line 1026 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsubsd",	fma_128_m64_insn,	3,	SUF_Z,	0x6F,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1292 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphsubd",	ssse3_insn,	5,	SUF_Z,	0x06,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 226 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fdiv",	farith_insn,	7,	SUF_Z,	0xF8,	0xF0,	0x06,	0,	CPU_FPU,	0,	0},
#line 279 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fst",	fst_insn,	3,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1214 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomled",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 720 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setne",	setcc_insn,	1,	SUF_Z,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 1448 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xcryptcfb",	padlock_insn,	1,	SUF_Z,	0xE0,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 556 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmaddubsw",	ssse3_insn,	5,	SUF_Z,	0x04,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 68 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"bt",	bittest_insn,	6,	SUF_Z,	0xA3,	0x04,	0,	0,	CPU_386,	0,	0},
#line 1021 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsubadd231ps",	vfma_ps_insn,	2,	SUF_Z,	0xB7,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1409 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vroundss",	sse4m32imm_insn,	4,	SUF_Z,	0x0A,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 329 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"iret",	onebyte_insn,	1,	SUF_Z,	0xCF,	0,	0,	0,	0,	0,	0},
#line 271 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"frndint",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xFC,	0,	0,	CPU_FPU,	0,	0},
#line 368 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lar",	larlsl_insn,	6,	SUF_Z,	0x02,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 456 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"mulss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x59,	0,	0,	CPU_SSE,	0,	0},
#line 466 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"or",	arith_insn,	22,	SUF_Z,	0x08,	0x01,	0,	0,	0,	0,	0},
#line 156 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpxchg",	cmpxchgxadd_insn,	4,	SUF_Z,	0xB0,	0,	0,	0,	CPU_486,	0,	0},
#line 965 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcvttpd2dq",	avx_cvt_xmm128_insn,	2,	SUF_Z,	0x66,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 371 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lds",	ldes_insn,	2,	SUF_Z,	0xC5,	0,	0,	NOT_64,	0,	0,	0},
#line 1283 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphaddubw",	vphaddsub_insn,	1,	SUF_Z,	0xD1,	0,	0,	0,	CPU_XOP,	0,	0},
#line 341 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jg",	jcc_insn,	9,	SUF_Z,	0x0F,	0,	0,	0,	0,	0,	0},
#line 450 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movzx",	movszx_insn,	5,	SUF_Z,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 1305 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmacssdqh",	vpma_insn,	1,	SUF_Z,	0x8F,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1018 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsubadd213pd",	vfma_pd_insn,	2,	SUF_Z,	0xA7,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1159 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpbroadcastq",	vpbroadcastq_avx2_insn,	4,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 797 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vaddsubpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0xD0,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 621 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psignd",	ssse3_insn,	5,	SUF_Z,	0x0A,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 294 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fucompp",	twobyte_insn,	1,	SUF_Z,	0xDA,	0xE9,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 1401 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpunpcklqdq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x6C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 504 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pcmpeqb",	mmxsse2_insn,	2,	SUF_Z,	0x74,	0,	0,	0,	CPU_MMX,	0,	0},
#line 201 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"extractps",	extractps_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_SSE41,	0},
#line 69 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"btc",	bittest_insn,	6,	SUF_Z,	0xBB,	0x07,	0,	0,	CPU_386,	0,	0},
#line 1360 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpshlb",	amd_vpshift_insn,	2,	SUF_Z,	0x94,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1286 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphadduwq",	vphaddsub_insn,	1,	SUF_Z,	0xD7,	0,	0,	0,	CPU_XOP,	0,	0},
#line 695 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sahf",	onebyte_insn,	1,	SUF_Z,	0x9E,	0,	0,	0,	0,	0,	0},
#line 712 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setge",	setcc_insn,	1,	SUF_Z,	0x0D,	0,	0,	0,	CPU_386,	0,	0},
#line 988 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmadd231pd",	vfma_pd_insn,	2,	SUF_Z,	0xB8,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 999 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmaddsub213ps",	vfma_ps_insn,	2,	SUF_Z,	0xA6,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1216 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomleub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 142 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpordps",	ssecmp_128_insn,	3,	SUF_Z,	0x07,	0,	0,	0,	CPU_SSE,	0,	0},
#line 422 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movhpd",	movhlp_insn,	3,	SUF_Z,	0x66,	0x16,	0,	0,	CPU_SSE2,	0,	0},
#line 458 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"mwait",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xC9,	0,	CPU_SSE3,	0,	0},
#line 1106 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovmskps",	movmsk_insn,	4,	SUF_Z,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1142 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpaddd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xFE,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 655 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pushaw",	onebyte_insn,	1,	SUF_Z,	0x60,	0x10,	0,	NOT_64,	CPU_186,	0,	0},
#line 1328 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpminuw",	ssse3_insn,	5,	SUF_Z,	0x3A,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 774 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"svts",	cyrixsmm_insn,	1,	SUF_Z,	0x7C,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 191 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"dec",	incdec_insn,	6,	SUF_Z,	0x48,	0x01,	0,	0,	0,	0,	0},
#line 1115 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovss",	movss_insn,	4,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 981 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmadd132ps",	vfma_ps_insn,	2,	SUF_Z,	0x98,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 320 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"int03",	onebyte_insn,	1,	SUF_Z,	0xCC,	0,	0,	0,	0,	0,	0},
#line 834 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpfalse_osps",	ssecmp_128_insn,	3,	SUF_Z,	0x1B,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 547 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"phsubsw",	ssse3_insn,	5,	SUF_Z,	0x07,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 768 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"subpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5C,	0,	0,	CPU_SSE2,	0,	0},
#line 761 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"stmxcsr",	ldstmxcsr_insn,	1,	SUF_Z,	0x03,	0,	0,	0,	CPU_SSE,	0,	0},
#line 94 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovl",	cmovcc_insn,	3,	SUF_Z,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 1241 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomneud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1457 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xorps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x57,	0,	0,	CPU_SSE,	0,	0},
#line 248 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fld1",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xE8,	0,	0,	CPU_FPU,	0,	0},
#line 899 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpngt_uqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x1A,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1428 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vunpckhps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x15,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 915 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnlt_uqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x15,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 65 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"bsf",	bsfr_insn,	3,	SUF_Z,	0xBC,	0,	0,	0,	CPU_386,	0,	0},
#line 66 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"bsr",	bsfr_insn,	3,	SUF_Z,	0xBD,	0,	0,	0,	CPU_386,	0,	0},
#line 85 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmc",	onebyte_insn,	1,	SUF_Z,	0xF5,	0,	0,	0,	0,	0,	0},
#line 1357 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpshad",	amd_vpshift_insn,	2,	SUF_Z,	0x9A,	0,	0,	0,	CPU_XOP,	0,	0},
#line 586 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmulhrsw",	ssse3_insn,	5,	SUF_Z,	0x0B,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 734 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setz",	setcc_insn,	1,	SUF_Z,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 840 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpfalsess",	ssecmp_32_insn,	4,	SUF_Z,	0x0B,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 994 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmaddsd",	fma_128_m64_insn,	3,	SUF_Z,	0x6B,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 919 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnltsd",	ssecmp_64_insn,	4,	SUF_Z,	0x05,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1464 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xsha1",	padlock_insn,	1,	SUF_Z,	0xC8,	0xF3,	0xA6,	0,	CPU_PadLock,	0,	0},
#line 469 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"out",	out_insn,	12,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 971 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vdivsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 520 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pextrd",	pextrd_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_SSE41,	0},
#line 1270 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpextrw",	pextrw_insn,	7,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 771 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"subss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5C,	0,	0,	CPU_SSE,	0,	0},
#line 883 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpneq_ussd",	ssecmp_64_insn,	4,	SUF_Z,	0x14,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1262 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpermilpd",	vpermil_insn,	4,	SUF_Z,	0x05,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1053 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmsub231ps",	vfma_ps_insn,	2,	SUF_Z,	0xBE,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 779 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sysret",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x07,	0,	0,	CPU_686,	CPU_AMD,	CPU_Priv},
#line 767 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sub",	arith_insn,	22,	SUF_Z,	0x28,	0x05,	0,	0,	0,	0,	0},
#line 1336 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmovzxbd",	sse4m32_insn,	4,	SUF_Z,	0x31,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 595 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmvlzb",	cyrixmmx_insn,	1,	SUF_Z,	0x5B,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 987 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmadd213ss",	vfma_ss_insn,	2,	SUF_Z,	0xA9,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1294 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphsubsw",	ssse3_insn,	5,	SUF_Z,	0x07,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 367 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lahf",	onebyte_insn,	1,	SUF_Z,	0x9F,	0,	0,	0,	0,	0,	0},
#line 265 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fnstenv",	onebytemem_insn,	1,	SUF_Z,	0x06,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 234 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"ficom",	fiarith_insn,	2,	SUF_Z,	0x02,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1331 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmovsxbq",	sse4m16_insn,	4,	SUF_Z,	0x22,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 496 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pavgw",	mmxsse2_insn,	2,	SUF_Z,	0xE3,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 752 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sqrtpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x51,	0,	0,	CPU_SSE2,	0,	0},
#line 756 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"stac",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xCB,	0,	CPU_SMAP,	0,	0},
#line 1001 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmaddsub231ps",	vfma_ps_insn,	2,	SUF_Z,	0xB6,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1223 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomltq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 82 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cli",	onebyte_insn,	1,	SUF_Z,	0xFA,	0,	0,	0,	0,	0,	0},
#line 1030 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmadd132sd",	vfma_sd_insn,	2,	SUF_Z,	0x9D,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1089 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vminss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 266 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fnstsw",	fnstsw_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1410 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vrsqrtps",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x52,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1391 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsubusb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xD8,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 975 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"verr",	prot286_insn,	1,	SUF_Z,	0x04,	0x00,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 581 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmovzxdq",	sse4m64_insn,	4,	SUF_Z,	0x35,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 873 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpneq_oqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x0C,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 706 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setae",	setcc_insn,	1,	SUF_Z,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 32 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"addss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x58,	0,	0,	CPU_SSE,	0,	0},
#line 959 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcvtsd2si",	cvt_rx_xmm64_insn,	4,	SUF_Z,	0xF2,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 564 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmaxuw",	sse4_insn,	2,	SUF_Z,	0x3E,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 684 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rorx",	vex_gpr_reg_rm_0F_imm8_insn,	2,	SUF_Z,	0xF2,	0x3A,	0xF0,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 51 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"blci",	xop_gpr_reg_rm_09_insn,	2,	SUF_Z,	0x02,	0x06,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 1341 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmovzxwq",	sse4m32_insn,	4,	SUF_Z,	0x34,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1324 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpminsd",	ssse3_insn,	5,	SUF_Z,	0x39,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 30 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"addps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x58,	0,	0,	CPU_SSE,	0,	0},
#line 1231 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomneq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 303 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"getsec",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x37,	0,	0,	CPU_SMX,	0,	0},
#line 72 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"bzhi",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Z,	0x00,	0x38,	0xF5,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 175 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvtsd2si",	cvt_rx_xmm64_insn,	4,	SUF_Z,	0xF2,	0x2D,	0,	0,	CPU_386,	CPU_SSE2,	0},
#line 1230 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomned",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1395 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpunpckhbw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x68,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1198 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomged",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 407 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"minsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5D,	0,	0,	CPU_SSE2,	0,	0},
#line 1076 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vldmxcsr",	ldstmxcsr_insn,	1,	SUF_Z,	0x02,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 874 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpneq_oqps",	ssecmp_128_insn,	3,	SUF_Z,	0x0C,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 576 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmovsxwd",	sse4m64_insn,	4,	SUF_Z,	0x23,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 494 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pavgb",	mmxsse2_insn,	2,	SUF_Z,	0xE0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1084 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmcall",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xC1,	0,	CPU_P4,	0,	0},
#line 737 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"shl",	shift_insn,	16,	SUF_Z,	0x04,	0,	0,	0,	0,	0,	0},
#line 107 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovnp",	cmovcc_insn,	3,	SUF_Z,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 128 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpltss",	ssecmp_32_insn,	4,	SUF_Z,	0x01,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 1190 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomfalsed",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 1459 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xrstor",	twobytemem_insn,	1,	SUF_Z,	0x05,	0x0F,	0xAE,	0,	CPU_386,	CPU_XSAVE,	0},
#line 551 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pinsrb",	pinsrb_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1455 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xor",	arith_insn,	22,	SUF_Z,	0x30,	0x06,	0,	0,	0,	0,	0},
#line 1431 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vxorpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x57,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 948 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpunordss",	ssecmp_32_insn,	4,	SUF_Z,	0x03,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1080 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmaxpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 233 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fiadd",	fiarith_insn,	2,	SUF_Z,	0x00,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 857 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmple_oqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x12,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1276 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphaddbq",	vphaddsub_insn,	1,	SUF_Z,	0xC3,	0,	0,	0,	CPU_XOP,	0,	0},
#line 777 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sysenter",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x34,	0,	NOT_64,	CPU_686,	0,	0},
#line 249 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fldcw",	fldnstcw_insn,	1,	SUF_Z,	0x05,	0,	0,	0,	CPU_FPU,	0,	0},
#line 241 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"finit",	threebyte_insn,	1,	SUF_Z,	0x9B,	0xDB,	0xE3,	0,	CPU_FPU,	0,	0},
#line 1239 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomneqw",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 676 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"repne",	NULL,	X86_LOCKREP>>8,	0xF2,	0,	0,	0,	0,	0,	0,	0},
#line 1134 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpabsb",	avx2_ssse3_2op_insn,	2,	SUF_Z,	0x1C,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 29 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"addpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x58,	0,	0,	CPU_SSE2,	0,	0},
#line 92 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovg",	cmovcc_insn,	3,	SUF_Z,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 426 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movlps",	movhlp_insn,	3,	SUF_Z,	0x00,	0x12,	0,	0,	CPU_SSE,	0,	0},
#line 796 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vaddss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 416 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movd",	movd_insn,	8,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_MMX,	0},
#line 1185 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomequd",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 1439 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"wrmsr",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x30,	0,	0,	CPU_586,	CPU_Priv,	0},
#line 1364 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpshufb",	ssse3_insn,	5,	SUF_Z,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1137 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpackssdw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x6B,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 289 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"ftst",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xE4,	0,	0,	CPU_FPU,	0,	0},
#line 48 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"arpl",	arpl_insn,	1,	SUF_Z,	0,	0,	0,	NOT_64,	CPU_286,	CPU_Prot,	0},
#line 211 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fcmovb",	fcmovcc_insn,	1,	SUF_Z,	0xDA,	0xC0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1031 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmadd132ss",	vfma_ss_insn,	2,	SUF_Z,	0x9D,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1285 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphadduwd",	vphaddsub_insn,	1,	SUF_Z,	0xD6,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1027 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsubss",	fma_128_m32_insn,	3,	SUF_Z,	0x6E,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1351 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vprotb",	vprot_insn,	3,	SUF_Z,	0x00,	0,	0,	0,	CPU_XOP,	0,	0},
#line 836 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpfalse_osss",	ssecmp_32_insn,	4,	SUF_Z,	0x1B,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 161 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"comiss",	xmm_xmm32_insn,	4,	SUF_Z,	0x00,	0x2F,	0,	0,	CPU_SSE,	0,	0},
#line 393 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"loopz",	loop_insn,	8,	SUF_Z,	0x01,	0,	0,	0,	0,	0,	0},
#line 133 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpnlepd",	ssecmp_128_insn,	3,	SUF_Z,	0x06,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 531 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pfmin",	now3d_insn,	1,	SUF_Z,	0x94,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1393 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsubw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xF9,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1131 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmxon",	vmxthreebytemem_insn,	1,	SUF_Z,	0xF3,	0,	0,	0,	CPU_P4,	0,	0},
#line 252 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fldl2t",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xE9,	0,	0,	CPU_FPU,	0,	0},
#line 1369 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsignd",	ssse3_insn,	5,	SUF_Z,	0x0A,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1147 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpaddusw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xDD,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 218 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fcmovu",	fcmovcc_insn,	1,	SUF_Z,	0xDA,	0xD8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1094 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovaps",	movau_insn,	6,	SUF_Z,	0x00,	0x28,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 859 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmple_oqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x12,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1269 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpextrq",	pextrq_insn,	1,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 138 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpnltps",	ssecmp_128_insn,	3,	SUF_Z,	0x05,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1036 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmadd231pd",	vfma_pd_insn,	2,	SUF_Z,	0xBC,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 286 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fsubp",	farithp_insn,	3,	SUF_Z,	0xE8,	0,	0,	0,	CPU_FPU,	0,	0},
#line 509 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pcmpestrm",	sse4pcmpstr_insn,	1,	SUF_Z,	0x60,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 1029 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmadd132ps",	vfma_ps_insn,	2,	SUF_Z,	0x9C,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1399 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpunpcklbw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x60,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1133 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vorps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x56,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1105 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovmskpd",	movmsk_insn,	4,	SUF_Z,	0x66,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1212 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomgtw",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 1097 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovdqa",	movau_insn,	6,	SUF_Z,	0x66,	0x6F,	0x10,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1024 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsubpd",	fma_128_256_insn,	4,	SUF_Z,	0x6D,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 847 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpgesd",	ssecmp_64_insn,	4,	SUF_Z,	0x0D,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 153 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpunordps",	ssecmp_128_insn,	3,	SUF_Z,	0x03,	0,	0,	0,	CPU_SSE,	0,	0},
#line 548 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"phsubw",	ssse3_insn,	5,	SUF_Z,	0x05,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 567 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pminsw",	mmxsse2_insn,	2,	SUF_Z,	0xEA,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1274 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpgatherqq",	gather_64x_64y_insn,	2,	SUF_Z,	0x91,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 982 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmadd132sd",	vfma_sd_insn,	2,	SUF_Z,	0x99,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 732 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setpo",	setcc_insn,	1,	SUF_Z,	0x0B,	0,	0,	0,	CPU_386,	0,	0},
#line 236 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fidiv",	fiarith_insn,	2,	SUF_Z,	0x06,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 83 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"clts",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x06,	0,	0,	CPU_286,	CPU_Priv,	0},
#line 610 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"prefetcht0",	twobytemem_insn,	1,	SUF_Z,	0x01,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 178 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvtsi2ss",	cvt_xmm_rmx_insn,	6,	SUF_Z,	0xF3,	0x2A,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 991 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmadd231ss",	vfma_ss_insn,	2,	SUF_Z,	0xB9,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1449 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xcryptctr",	padlock_insn,	1,	SUF_Z,	0xD8,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 1429 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vunpcklpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x14,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1389 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsubsb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xE8,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 606 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"popfw",	onebyte_insn,	1,	SUF_Z,	0x9D,	0x10,	0x40,	0,	0,	0,	0},
#line 1418 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vstmxcsr",	ldstmxcsr_insn,	1,	SUF_Z,	0x03,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 168 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvtpd2pi",	cvt_mm_xmm_insn,	1,	SUF_Z,	0x66,	0x2D,	0,	0,	CPU_SSE2,	0,	0},
#line 692 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rsqrtps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x52,	0,	0,	CPU_SSE,	0,	0},
#line 459 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"mwaitx",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xFB,	0,	CPU_AMD,	0,	0},
#line 679 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"ret",	retnf_insn,	6,	SUF_Z,	0xC2,	0,	0,	0,	0,	0,	0},
#line 1458 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xrelease",	NULL,	X86_ACQREL>>8,	0xF3,	0,	0,	0,	0,	0,	0,	0},
#line 1435 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"wait",	onebyte_insn,	1,	SUF_Z,	0x9B,	0,	0,	0,	0,	0,	0},
#line 38 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"aesenc",	aes_insn,	2,	SUF_Z,	0x38,	0xDC,	0,	0,	CPU_AVX,	0,	0},
#line 143 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpordsd",	ssecmp_64_insn,	4,	SUF_Z,	0x07,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 385 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lodsb",	onebyte_insn,	1,	SUF_Z,	0xAC,	0x00,	0,	0,	0,	0,	0},
#line 827 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpeq_ussd",	ssecmp_64_insn,	4,	SUF_Z,	0x18,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 239 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fimul",	fiarith_insn,	2,	SUF_Z,	0x01,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 727 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setns",	setcc_insn,	1,	SUF_Z,	0x09,	0,	0,	0,	CPU_386,	0,	0},
#line 806 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vandnps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x55,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 14 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sha1nexte",	intel_SHA1NEXTE_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SHA,	0,	0},
#line 635 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psubq",	mmxsse2_insn,	2,	SUF_Z,	0xFB,	0,	0,	0,	CPU_MMX,	0,	0},
#line 361 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jp",	jcc_insn,	9,	SUF_Z,	0x0A,	0,	0,	0,	0,	0,	0},
#line 1202 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomgeuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 801 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vaesenc",	aes_insn,	2,	SUF_Z,	0x38,	0xDC,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 262 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fnop",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xD0,	0,	0,	CPU_FPU,	0,	0},
#line 196 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"divss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5E,	0,	0,	CPU_SSE,	0,	0},
#line 781 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"test",	test_insn,	20,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1412 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vshufpd",	xmm_xmm128_imm_256_insn,	3,	SUF_Z,	0x66,	0xC6,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 165 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvtdq2pd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF3,	0xE6,	0,	0,	CPU_SSE2,	0,	0},
#line 557 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmaddwd",	mmxsse2_insn,	2,	SUF_Z,	0xF5,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1260 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vperm2i128",	vperm2i128_avx2_insn,	1,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 920 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnltss",	ssecmp_32_insn,	4,	SUF_Z,	0x05,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 272 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"frstor",	onebytemem_insn,	1,	SUF_Z,	0x04,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 914 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnlt_uqps",	ssecmp_128_insn,	3,	SUF_Z,	0x15,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 52 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"blcic",	xop_gpr_reg_rm_09_insn,	2,	SUF_Z,	0x01,	0x05,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 1046 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmsub132sd",	vfma_sd_insn,	2,	SUF_Z,	0x9F,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 392 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"loopnz",	loop_insn,	8,	SUF_Z,	0x00,	0,	0,	0,	0,	0,	0},
#line 928 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpordss",	ssecmp_32_insn,	4,	SUF_Z,	0x07,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 435 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movntsd",	movntsd_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 412 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"mov",	mov_insn,	69,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 337 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jc",	jcc_insn,	9,	SUF_Z,	0x02,	0,	0,	0,	0,	0,	0},
#line 295 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fwait",	onebyte_insn,	1,	SUF_Z,	0x9B,	0,	0,	0,	CPU_FPU,	0,	0},
#line 862 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpleps",	ssecmp_128_insn,	3,	SUF_Z,	0x02,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 739 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"shlx",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Z,	0x66,	0x38,	0xF7,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 109 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovnz",	cmovcc_insn,	3,	SUF_Z,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 1367 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpshuflw",	xmm_xmm128_imm_256avx2_insn,	2,	SUF_Z,	0xF2,	0x70,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1339 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmovzxdq",	sse4m64_insn,	4,	SUF_Z,	0x35,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 667 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rdmsr",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x32,	0,	0,	CPU_586,	CPU_Priv,	0},
#line 282 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fstp",	fstp_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1138 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpacksswb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x63,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 993 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmaddps",	fma_128_256_insn,	4,	SUF_Z,	0x68,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 937 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmptruepd",	ssecmp_128_insn,	3,	SUF_Z,	0x0F,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 795 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vaddsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1119 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmptrld",	vmxtwobytemem_insn,	1,	SUF_Z,	0x06,	0,	0,	0,	CPU_P4,	0,	0},
#line 803 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vaesimc",	aesimc_insn,	1,	SUF_Z,	0x38,	0xDB,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1436 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"wbinvd",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x09,	0,	0,	CPU_486,	CPU_Priv,	0},
#line 697 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"salc",	onebyte_insn,	1,	SUF_Z,	0xD6,	0,	0,	NOT_64,	CPU_Undoc,	0,	0},
#line 918 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnltps",	ssecmp_128_insn,	3,	SUF_Z,	0x05,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 643 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"ptest",	sse4_insn,	2,	SUF_Z,	0x17,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 351 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jne",	jcc_insn,	9,	SUF_Z,	0x05,	0,	0,	0,	0,	0,	0},
#line 1330 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmovsxbd",	sse4m32_insn,	4,	SUF_Z,	0x21,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1088 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vminsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 214 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fcmovnb",	fcmovcc_insn,	1,	SUF_Z,	0xDB,	0xC0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1402 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpunpcklwd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x61,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1440 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"wrshr",	rdwrshr_insn,	1,	SUF_Z,	0x01,	0,	0,	0,	CPU_686,	CPU_Cyrix,	CPU_SMM},
#line 383 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"loadall286",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x05,	0,	0,	CPU_286,	CPU_Undoc,	0},
#line 602 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"popcnt",	cnt_insn,	3,	SUF_Z,	0xB8,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 342 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jge",	jcc_insn,	9,	SUF_Z,	0x0D,	0,	0,	0,	0,	0,	0},
#line 1195 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomfalseuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 268 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fprem",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF8,	0,	0,	CPU_FPU,	0,	0},
#line 957 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcvtps2pd",	avx_cvt_xmm64_insn,	3,	SUF_Z,	0x00,	0x5A,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1015 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsub231ss",	vfma_ss_insn,	2,	SUF_Z,	0xBB,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1012 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsub231pd",	vfma_pd_insn,	2,	SUF_Z,	0xBA,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1169 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcmpeqq",	ssse3_insn,	5,	SUF_Z,	0x29,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1408 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vroundsd",	sse4m64imm_insn,	4,	SUF_Z,	0x0B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 599 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"popa",	onebyte_insn,	1,	SUF_Z,	0x61,	0x00,	0,	NOT_64,	CPU_186,	0,	0},
#line 1016 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsubadd132pd",	vfma_pd_insn,	2,	SUF_Z,	0x97,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 611 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"prefetcht1",	twobytemem_insn,	1,	SUF_Z,	0x02,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 515 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pcmpistrm",	sse4pcmpstr_insn,	1,	SUF_Z,	0x62,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 744 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"shufps",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0x00,	0xC6,	0,	0,	CPU_SSE,	0,	0},
#line 60 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"blsi",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_Z,	0x00,	0xF3,	0x03,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 1087 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vminps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 668 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rdpmc",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x33,	0,	0,	CPU_686,	0,	0},
#line 910 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnleps",	ssecmp_128_insn,	3,	SUF_Z,	0x06,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 312 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"in",	in_insn,	12,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 681 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"retn",	retnf_insn,	6,	SUF_Z,	0xC2,	0,	0,	0,	0,	0,	0},
#line 148 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpsd",	cmpsd_insn,	5,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 632 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psrlw",	pshift_insn,	4,	SUF_Z,	0xD1,	0x71,	0x02,	0,	CPU_MMX,	0,	0},
#line 1383 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsrlvd",	vpshiftv_vexw0_avx2_insn,	2,	SUF_Z,	0x45,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 440 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movsd",	movsd_insn,	5,	SUF_Z,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 770 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"subsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5C,	0,	0,	CPU_SSE2,	0,	0},
#line 815 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vbroadcastsd",	vbroadcastsd_insn,	2,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 414 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movaps",	movau_insn,	6,	SUF_Z,	0x00,	0x28,	0x01,	0,	CPU_SSE,	0,	0},
#line 300 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fxtract",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF4,	0,	0,	CPU_FPU,	0,	0},
#line 674 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rep",	NULL,	X86_LOCKREP>>8,	0xF3,	0,	0,	0,	0,	0,	0,	0},
#line 912 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnless",	ssecmp_32_insn,	4,	SUF_Z,	0x06,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 513 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pcmpgtw",	mmxsse2_insn,	2,	SUF_Z,	0x65,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1144 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpaddsb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xEC,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 490 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pand",	mmxsse2_insn,	2,	SUF_Z,	0xDB,	0,	0,	0,	CPU_MMX,	0,	0},
#line 88 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovb",	cmovcc_insn,	3,	SUF_Z,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 1174 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcmpgtd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 583 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmovzxwq",	sse4m32_insn,	4,	SUF_Z,	0x34,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1017 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsubadd132ps",	vfma_ps_insn,	2,	SUF_Z,	0x97,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1333 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmovsxdq",	sse4m64_insn,	4,	SUF_Z,	0x25,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 90 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovc",	cmovcc_insn,	3,	SUF_Z,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 349 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jnbe",	jcc_insn,	9,	SUF_Z,	0x07,	0,	0,	0,	0,	0,	0},
#line 521 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pextrq",	pextrq_insn,	1,	SUF_Z,	0,	0,	0,	ONLY_64,	CPU_SSE41,	0,	0},
#line 1234 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomneqq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1288 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphaddwd",	vphaddsub_insn,	1,	SUF_Z,	0xC6,	0,	0,	0,	CPU_XOP,	0,	0},
#line 703 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"scasq",	onebyte_insn,	1,	SUF_Z,	0xAF,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 848 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpgess",	ssecmp_32_insn,	4,	SUF_Z,	0x0D,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 938 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmptrueps",	ssecmp_128_insn,	3,	SUF_Z,	0x0F,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 566 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pminsd",	sse4_insn,	2,	SUF_Z,	0x39,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 811 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vblendvpd",	avx_sse4xmm0_insn,	2,	SUF_Z,	0x4B,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 908 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnle_uqss",	ssecmp_32_insn,	4,	SUF_Z,	0x16,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1314 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmaddwd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xF5,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1291 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphsubbw",	vphaddsub_insn,	1,	SUF_Z,	0xE1,	0,	0,	0,	CPU_XOP,	0,	0},
#line 307 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"hsubpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x7D,	0,	0,	CPU_SSE3,	0,	0},
#line 433 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movntps",	movnt_insn,	2,	SUF_Z,	0x00,	0x2B,	0,	0,	CPU_SSE,	0,	0},
#line 297 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fxch",	fxch_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1377 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsrad",	vpshift_insn,	8,	SUF_Z,	0xE2,	0x72,	0x04,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 733 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sets",	setcc_insn,	1,	SUF_Z,	0x08,	0,	0,	0,	CPU_386,	0,	0},
#line 654 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pushad",	onebyte_insn,	1,	SUF_Z,	0x60,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 738 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"shld",	shlrd_insn,	9,	SUF_Z,	0xA4,	0,	0,	0,	CPU_386,	0,	0},
#line 1415 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vsqrtps",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x51,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 195 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"divsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5E,	0,	0,	CPU_SSE2,	0,	0},
#line 1056 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmsubpd",	fma_128_256_insn,	4,	SUF_Z,	0x7D,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 626 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psllw",	pshift_insn,	4,	SUF_Z,	0xF1,	0x71,	0x06,	0,	CPU_MMX,	0,	0},
#line 514 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pcmpistri",	sse4pcmpstr_insn,	1,	SUF_Z,	0x63,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 220 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fcomi",	fcom2_insn,	2,	SUF_Z,	0xDB,	0xF0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 653 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pusha",	onebyte_insn,	1,	SUF_Z,	0x60,	0x00,	0,	NOT_64,	CPU_186,	0,	0},
#line 917 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnltpd",	ssecmp_128_insn,	3,	SUF_Z,	0x05,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 35 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"adox",	vex_gpr_ndd_rm_0F38_insn,	2,	SUF_Z,	0xF3,	0xF6,	0,	0,	CPU_ADX,	0,	0},
#line 141 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpordpd",	ssecmp_128_insn,	3,	SUF_Z,	0x07,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 375 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lfence",	threebyte_insn,	1,	SUF_Z,	0x0F,	0xAE,	0xE8,	0,	CPU_P3,	0,	0},
#line 1181 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomeqb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 81 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"clgi",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xDD,	0,	CPU_SVM,	0,	0},
#line 443 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movsq",	onebyte_insn,	1,	SUF_Z,	0xA5,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 943 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpunord_ssd",	ssecmp_64_insn,	4,	SUF_Z,	0x13,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 624 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pslldq",	pslrldq_insn,	4,	SUF_Z,	0x07,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 244 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fisttp",	fildstp_insn,	4,	SUF_Z,	0x01,	0x00,	0x01,	0,	CPU_SSE3,	0,	0},
#line 322 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"into",	onebyte_insn,	1,	SUF_Z,	0xCE,	0,	0,	NOT_64,	0,	0,	0},
#line 1228 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomltw",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 1139 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpackusdw",	ssse3_insn,	5,	SUF_Z,	0x2B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 489 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"palignr",	ssse3imm_insn,	2,	SUF_Z,	0x0F,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 45 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"andnps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x55,	0,	0,	CPU_SSE,	0,	0},
#line 257 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fldz",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xEE,	0,	0,	CPU_FPU,	0,	0},
#line 1253 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomtruew",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 1463 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xsetbv",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xD1,	0,	CPU_386,	CPU_Priv,	CPU_XSAVE},
#line 445 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movsw",	onebyte_insn,	1,	SUF_Z,	0xA5,	0x10,	0,	0,	0,	0,	0},
#line 1258 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomw",	vpcom_imm_insn,	1,	SUF_Z,	0xCD,	0,	0,	0,	CPU_XOP,	0,	0},
#line 518 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pext",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Z,	0xF3,	0x38,	0xF5,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 572 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmovsxbd",	sse4m32_insn,	4,	SUF_Z,	0x21,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 134 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpnleps",	ssecmp_128_insn,	3,	SUF_Z,	0x06,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1047 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmsub132ss",	vfma_ss_insn,	2,	SUF_Z,	0x9F,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 224 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fcos",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xFF,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 1453 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xgetbv",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xD0,	0,	CPU_386,	CPU_XSAVE,	0},
#line 903 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpngtsd",	ssecmp_64_insn,	4,	SUF_Z,	0x0A,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 287 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fsubr",	farith_insn,	7,	SUF_Z,	0xE0,	0xE8,	0x05,	0,	CPU_FPU,	0,	0},
#line 1388 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsubq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xFB,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 484 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"paddsiw",	cyrixmmx_insn,	1,	SUF_Z,	0x51,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 639 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psubusb",	mmxsse2_insn,	2,	SUF_Z,	0xD8,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1326 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpminub",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xDA,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 240 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fincstp",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF7,	0,	0,	CPU_FPU,	0,	0},
#line 1197 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomgeb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 1151 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpandn",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xDF,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 617 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pshufhw",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0xF3,	0x70,	0,	0,	CPU_SSE2,	0,	0},
#line 43 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"andn",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Z,	0x00,	0x38,	0xF2,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 573 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmovsxbq",	sse4m16_insn,	4,	SUF_Z,	0x22,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 741 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"shrd",	shlrd_insn,	9,	SUF_Z,	0xAC,	0,	0,	0,	CPU_386,	0,	0},
#line 890 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnge_uqps",	ssecmp_128_insn,	3,	SUF_Z,	0x19,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 868 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmplt_oqss",	ssecmp_32_insn,	4,	SUF_Z,	0x11,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1078 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmaskmovpd",	vmaskmov_insn,	4,	SUF_Z,	0x2D,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 114 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovs",	cmovcc_insn,	3,	SUF_Z,	0x08,	0,	0,	0,	CPU_686,	0,	0},
#line 1022 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsubaddpd",	fma_128_256_insn,	4,	SUF_Z,	0x5F,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 225 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fdecstp",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF6,	0,	0,	CPU_FPU,	0,	0},
#line 136 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpnless",	ssecmp_32_insn,	4,	SUF_Z,	0x06,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 618 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pshuflw",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0xF2,	0x70,	0,	0,	CPU_SSE2,	0,	0},
#line 216 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fcmovne",	fcmovcc_insn,	1,	SUF_Z,	0xDB,	0xC8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 878 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpneq_osps",	ssecmp_128_insn,	3,	SUF_Z,	0x1C,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 977 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vextractf128",	vextractif128_insn,	1,	SUF_Z,	0x19,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 590 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmulhw",	mmxsse2_insn,	2,	SUF_Z,	0xE5,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1049 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmsub213ps",	vfma_ps_insn,	2,	SUF_Z,	0xAE,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 18 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sha256rnds2",	intel_SHA256RNDS2_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SHA,	0,	0},
#line 907 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnle_uqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x16,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 108 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovns",	cmovcc_insn,	3,	SUF_Z,	0x09,	0,	0,	0,	CPU_686,	0,	0},
#line 1450 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xcryptecb",	padlock_insn,	1,	SUF_Z,	0xC8,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 708 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setbe",	setcc_insn,	1,	SUF_Z,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 526 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pfadd",	now3d_insn,	1,	SUF_Z,	0x9E,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1321 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmaxud",	ssse3_insn,	5,	SUF_Z,	0x3F,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1233 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomneqd",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 968 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcvttss2si",	cvt_rx_xmm32_insn,	4,	SUF_Z,	0xF3,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 584 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmuldq",	sse4_insn,	2,	SUF_Z,	0x28,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 828 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpeq_usss",	ssecmp_32_insn,	4,	SUF_Z,	0x18,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 854 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpgtps",	ssecmp_128_insn,	3,	SUF_Z,	0x0E,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 954 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcvtpd2ps",	avx_cvt_xmm128_insn,	2,	SUF_Z,	0x66,	0x5A,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 423 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movhps",	movhlp_insn,	3,	SUF_Z,	0x00,	0x16,	0,	0,	CPU_SSE,	0,	0},
#line 755 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sqrtss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x51,	0,	0,	CPU_SSE,	0,	0},
#line 879 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpneq_ossd",	ssecmp_64_insn,	4,	SUF_Z,	0x1C,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 170 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvtpi2pd",	cvt_xmm_mm_ss_insn,	1,	SUF_Z,	0x66,	0x2A,	0,	0,	CPU_SSE2,	0,	0},
#line 334 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jae",	jcc_insn,	9,	SUF_Z,	0x03,	0,	0,	0,	0,	0,	0},
#line 1009 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsub213ps",	vfma_ps_insn,	2,	SUF_Z,	0xAA,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1107 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovntdq",	movnt_insn,	2,	SUF_Z,	0x66,	0xE7,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 91 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmove",	cmovcc_insn,	3,	SUF_Z,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 713 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setl",	setcc_insn,	1,	SUF_Z,	0x0C,	0,	0,	0,	CPU_386,	0,	0},
#line 1238 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomnequw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 830 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpeqps",	ssecmp_128_insn,	3,	SUF_Z,	0x00,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1123 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmrun",	svm_rax_insn,	2,	SUF_Z,	0xD8,	0,	0,	0,	CPU_SVM,	0,	0},
#line 642 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pswapd",	now3d_insn,	1,	SUF_Z,	0xBB,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 869 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpltpd",	ssecmp_128_insn,	3,	SUF_Z,	0x01,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 575 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmovsxdq",	sse4m64_insn,	4,	SUF_Z,	0x25,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 746 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"skinit",	skinit_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_SVM,	0,	0},
#line 725 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setno",	setcc_insn,	1,	SUF_Z,	0x01,	0,	0,	0,	CPU_386,	0,	0},
#line 562 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmaxub",	mmxsse2_insn,	2,	SUF_Z,	0xDE,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 370 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"ldmxcsr",	ldstmxcsr_insn,	1,	SUF_Z,	0x02,	0,	0,	0,	CPU_SSE,	0,	0},
#line 719 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setnc",	setcc_insn,	1,	SUF_Z,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 612 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"prefetcht2",	twobytemem_insn,	1,	SUF_Z,	0x03,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 911 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnlesd",	ssecmp_64_insn,	4,	SUF_Z,	0x06,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1372 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpslldq",	pslrldq_insn,	4,	SUF_Z,	0x07,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1293 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphsubdq",	vphaddsub_insn,	1,	SUF_Z,	0xE3,	0,	0,	0,	CPU_XOP,	0,	0},
#line 76 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cdqe",	onebyte_insn,	1,	SUF_Z,	0x98,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 172 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvtps2dq",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5B,	0,	0,	CPU_SSE2,	0,	0},
#line 486 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"paddusb",	mmxsse2_insn,	2,	SUF_Z,	0xDC,	0,	0,	0,	CPU_MMX,	0,	0},
#line 70 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"btr",	bittest_insn,	6,	SUF_Z,	0xB3,	0x06,	0,	0,	CPU_386,	0,	0},
#line 260 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fnclex",	twobyte_insn,	1,	SUF_Z,	0xDB,	0xE2,	0,	0,	CPU_FPU,	0,	0},
#line 325 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"invlpg",	twobytemem_insn,	1,	SUF_Z,	0x07,	0x0F,	0x01,	0,	CPU_486,	CPU_Priv,	0},
#line 1166 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcmov",	vpcmov_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_XOP,	0,	0},
#line 237 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fidivr",	fiarith_insn,	2,	SUF_Z,	0x07,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1467 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xstorerng",	padlock_insn,	1,	SUF_Z,	0xC0,	0x00,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 953 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcvtpd2dq",	avx_cvt_xmm128_insn,	2,	SUF_Z,	0xF2,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1366 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpshufhw",	xmm_xmm128_imm_256avx2_insn,	2,	SUF_Z,	0xF3,	0x70,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 21 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"a64",	NULL,	X86_ADDRSIZE>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 317 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"insertq",	insertq_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 906 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnle_uqps",	ssecmp_128_insn,	3,	SUF_Z,	0x16,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 319 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"int",	int_insn,	1,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1235 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomnequb",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1417 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vsqrtss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x51,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1178 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcmpistrm",	sse4pcmpstr_insn,	1,	SUF_Z,	0x62,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 940 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmptruess",	ssecmp_32_insn,	4,	SUF_Z,	0x0F,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 277 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fsincos",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xFB,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 400 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"maxpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5F,	0,	0,	CPU_SSE2,	0,	0},
#line 888 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpneqss",	ssecmp_32_insn,	4,	SUF_Z,	0x04,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 291 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fucomi",	fcom2_insn,	2,	SUF_Z,	0xDB,	0xE8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 478 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"packusdw",	sse4_insn,	2,	SUF_Z,	0x2B,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 388 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lodsw",	onebyte_insn,	1,	SUF_Z,	0xAD,	0x10,	0,	0,	0,	0,	0},
#line 1149 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpalignr",	sse4imm_256avx2_insn,	4,	SUF_Z,	0x0F,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1329 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmovmskb",	pmovmskb_insn,	6,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 598 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pop",	pop_insn,	23,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 488 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"paddw",	mmxsse2_insn,	2,	SUF_Z,	0xFD,	0,	0,	0,	CPU_MMX,	0,	0},
#line 596 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmvnzb",	cyrixmmx_insn,	1,	SUF_Z,	0x5A,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 473 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pabsb",	ssse3_insn,	5,	SUF_Z,	0x1C,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1055 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmsub231ss",	vfma_ss_insn,	2,	SUF_Z,	0xBF,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1338 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmovzxbw",	sse4m64_insn,	4,	SUF_Z,	0x30,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 723 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setnl",	setcc_insn,	1,	SUF_Z,	0x0D,	0,	0,	0,	CPU_386,	0,	0},
#line 1116 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovupd",	movau_insn,	6,	SUF_Z,	0x66,	0x10,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 955 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcvtph2ps",	avx_cvtph2ps_insn,	4,	SUF_Z,	0x66,	0x13,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1063 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfrczss",	vfrczss_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_XOP,	0,	0},
#line 699 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sarx",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Z,	0xF3,	0x38,	0xF7,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1247 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomtrued",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 1373 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsllq",	vpshift_insn,	8,	SUF_Z,	0xF3,	0x73,	0x06,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1175 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcmpgtq",	ssse3_insn,	5,	SUF_Z,	0x37,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 159 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpxchg8b",	cmpxchg8b_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_586,	0,	0},
#line 997 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmaddsub132ps",	vfma_ps_insn,	2,	SUF_Z,	0x96,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 454 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"mulps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x59,	0,	0,	CPU_SSE,	0,	0},
#line 592 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmullw",	mmxsse2_insn,	2,	SUF_Z,	0xD5,	0,	0,	0,	CPU_MMX,	0,	0},
#line 427 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movmskpd",	movmsk_insn,	4,	SUF_Z,	0x66,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1257 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomuw",	vpcom_imm_insn,	1,	SUF_Z,	0xED,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1240 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomneub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 263 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fnsave",	onebytemem_insn,	1,	SUF_Z,	0x06,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 747 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sldt",	sldtmsw_insn,	6,	SUF_Z,	0x00,	0x00,	0,	0,	CPU_286,	0,	0},
#line 1316 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmaskmovq",	vmaskmov_vexw1_avx2_insn,	4,	SUF_Z,	0x8C,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 267 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fpatan",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF3,	0,	0,	CPU_FPU,	0,	0},
#line 1246 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomtrueb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 787 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"ud2",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x0B,	0,	0,	CPU_286,	0,	0},
#line 157 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpxchg16b",	cmpxchg16b_insn,	1,	SUF_Z,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1140 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpackuswb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x67,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 64 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"bound",	bound_insn,	2,	SUF_Z,	0,	0,	0,	NOT_64,	CPU_186,	0,	0},
#line 1221 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomltb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 1411 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vrsqrtss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x52,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1445 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xbts",	xbts_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_Obs,	CPU_Undoc},
#line 390 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"loope",	loop_insn,	8,	SUF_Z,	0x01,	0,	0,	0,	0,	0,	0},
#line 1161 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpclmulhqhqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x11,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1365 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpshufd",	xmm_xmm128_imm_256avx2_insn,	2,	SUF_Z,	0x66,	0x70,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1242 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomneuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1065 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vgatherdps",	gather_32x_32y_insn,	2,	SUF_Z,	0x92,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 688 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"roundss",	sse4m32imm_insn,	4,	SUF_Z,	0x0A,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 700 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sbb",	arith_insn,	22,	SUF_Z,	0x18,	0x03,	0,	0,	0,	0,	0},
#line 845 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpgepd",	ssecmp_128_insn,	3,	SUF_Z,	0x0D,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 718 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setnbe",	setcc_insn,	1,	SUF_Z,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 298 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fxrstor",	twobytemem_insn,	1,	SUF_Z,	0x01,	0x0F,	0xAE,	0,	CPU_686,	CPU_FPU,	0},
#line 554 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pinsrw",	pinsrw_insn,	9,	SUF_Z,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 603 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"popf",	onebyte_insn,	1,	SUF_Z,	0x9D,	0x00,	0x40,	0,	0,	0,	0},
#line 31 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"addsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x58,	0,	0,	CPU_SSE2,	0,	0},
#line 187 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cwd",	onebyte_insn,	1,	SUF_Z,	0x99,	0x10,	0,	0,	0,	0,	0},
#line 989 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmadd231ps",	vfma_ps_insn,	2,	SUF_Z,	0xB8,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1320 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmaxub",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xDE,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 245 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fisub",	fiarith_insn,	2,	SUF_Z,	0x04,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 357 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jnp",	jcc_insn,	9,	SUF_Z,	0x0B,	0,	0,	0,	0,	0,	0},
#line 162 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cpuid",	twobyte_insn,	1,	SUF_Z,	0x0F,	0xA2,	0,	0,	CPU_486,	0,	0},
#line 524 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pf2iw",	now3d_insn,	1,	SUF_Z,	0x1C,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 1201 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomgeud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 856 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpgtss",	ssecmp_32_insn,	4,	SUF_Z,	0x0E,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 858 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmple_oqps",	ssecmp_128_insn,	3,	SUF_Z,	0x12,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1243 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomneuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 152 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpunordpd",	ssecmp_128_insn,	3,	SUF_Z,	0x03,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 462 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"not",	f6_insn,	4,	SUF_Z,	0x02,	0,	0,	0,	0,	0,	0},
#line 789 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"unpckhpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x15,	0,	0,	CPU_SSE2,	0,	0},
#line 1054 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmsub231sd",	vfma_sd_insn,	2,	SUF_Z,	0xBF,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1002 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmaddsubpd",	fma_128_256_insn,	4,	SUF_Z,	0x5D,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1322 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmaxuw",	ssse3_insn,	5,	SUF_Z,	0x3E,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1359 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpshaw",	amd_vpshift_insn,	2,	SUF_Z,	0x99,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1381 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsrldq",	pslrldq_insn,	4,	SUF_Z,	0x03,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 461 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"nop",	onebyte_insn,	1,	SUF_Z,	0x90,	0,	0,	0,	0,	0,	0},
#line 819 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpeq_ossd",	ssecmp_64_insn,	4,	SUF_Z,	0x10,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1072 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vinsertf128",	vinsertif128_insn,	1,	SUF_Z,	0x18,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1315 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmaskmovd",	vmaskmov_insn,	4,	SUF_Z,	0x8C,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 409 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"monitor",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xC8,	0,	CPU_SSE3,	0,	0},
#line 1043 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmaddss",	fma_128_m32_insn,	3,	SUF_Z,	0x7A,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 335 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jb",	jcc_insn,	9,	SUF_Z,	0x02,	0,	0,	0,	0,	0,	0},
#line 886 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpneqps",	ssecmp_128_insn,	3,	SUF_Z,	0x04,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 866 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmplt_oqps",	ssecmp_128_insn,	3,	SUF_Z,	0x11,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 627 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psrad",	pshift_insn,	4,	SUF_Z,	0xE2,	0x72,	0x04,	0,	CPU_MMX,	0,	0},
#line 1164 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpclmullqlqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 649 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"punpckldq",	mmxsse2_insn,	2,	SUF_Z,	0x62,	0,	0,	0,	CPU_MMX,	0,	0},
#line 106 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovno",	cmovcc_insn,	3,	SUF_Z,	0x01,	0,	0,	0,	CPU_686,	0,	0},
#line 587 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmulhrw",	now3d_insn,	1,	SUF_Z,	0xB7,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 217 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fcmovnu",	fcmovcc_insn,	1,	SUF_Z,	0xDB,	0xD8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1382 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsrlq",	vpshift_insn,	8,	SUF_Z,	0xD3,	0x73,	0x02,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1020 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsubadd231pd",	vfma_pd_insn,	2,	SUF_Z,	0xB7,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 146 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpps",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0x00,	0xC2,	0,	0,	CPU_SSE,	0,	0},
#line 1245 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomq",	vpcom_imm_insn,	1,	SUF_Z,	0xCF,	0,	0,	0,	CPU_XOP,	0,	0},
#line 533 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pfnacc",	now3d_insn,	1,	SUF_Z,	0x8A,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 1279 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphadddq",	vphaddsub_insn,	1,	SUF_Z,	0xCB,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1035 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmadd213ss",	vfma_ss_insn,	2,	SUF_Z,	0xAD,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 105 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovnle",	cmovcc_insn,	3,	SUF_Z,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 1264 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpermpd",	vperm_imm_avx2_insn,	1,	SUF_Z,	0x01,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1337 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmovzxbq",	sse4m16_insn,	4,	SUF_Z,	0x32,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 628 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psraw",	pshift_insn,	4,	SUF_Z,	0xE1,	0x71,	0x04,	0,	CPU_MMX,	0,	0},
#line 691 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rsm",	twobyte_insn,	1,	SUF_Z,	0x0F,	0xAA,	0,	0,	CPU_586,	CPU_SMM,	0},
#line 861 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmplepd",	ssecmp_128_insn,	3,	SUF_Z,	0x02,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 25 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"aas",	onebyte_insn,	1,	SUF_Z,	0x3F,	0,	0,	NOT_64,	0,	0,	0},
#line 160 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"comisd",	xmm_xmm64_insn,	4,	SUF_Z,	0x66,	0x2F,	0,	0,	CPU_SSE2,	0,	0},
#line 1042 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmaddsd",	fma_128_m64_insn,	3,	SUF_Z,	0x7B,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 568 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pminub",	mmxsse2_insn,	2,	SUF_Z,	0xDA,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 905 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnle_uqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x16,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 310 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"idiv",	div_insn,	8,	SUF_Z,	0x07,	0,	0,	0,	0,	0,	0},
#line 569 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pminud",	sse4_insn,	2,	SUF_Z,	0x3B,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 428 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movmskps",	movmsk_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 247 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fld",	fld_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 174 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvtps2pi",	cvt_mm_xmm64_insn,	2,	SUF_Z,	0x2D,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1272 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpgatherdq",	gather_64x_64x_insn,	2,	SUF_Z,	0x90,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 434 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movntq",	movntq_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1013 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsub231ps",	vfma_ps_insn,	2,	SUF_Z,	0xBA,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1155 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpblendvb",	avx2_sse4xmm0_insn,	2,	SUF_Z,	0x4C,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 647 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"punpckhwd",	mmxsse2_insn,	2,	SUF_Z,	0x69,	0,	0,	0,	CPU_MMX,	0,	0},
#line 71 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"bts",	bittest_insn,	6,	SUF_Z,	0xAB,	0x05,	0,	0,	CPU_386,	0,	0},
#line 188 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cwde",	onebyte_insn,	1,	SUF_Z,	0x98,	0x20,	0,	0,	CPU_386,	0,	0},
#line 753 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sqrtps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x51,	0,	0,	CPU_SSE,	0,	0},
#line 251 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fldl2e",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xEA,	0,	0,	CPU_FPU,	0,	0},
#line 604 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"popfd",	onebyte_insn,	1,	SUF_Z,	0x9D,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 1010 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsub213sd",	vfma_sd_insn,	2,	SUF_Z,	0xAB,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 73 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"call",	call_insn,	30,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 597 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmvzb",	cyrixmmx_insn,	1,	SUF_Z,	0x58,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1419 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vsubpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 585 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmulhriw",	cyrixmmx_insn,	1,	SUF_Z,	0x5D,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 499 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pclmulhqhqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x11,	0,	0,	0,	CPU_AVX,	0,	0},
#line 673 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rdtscp",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xF9,	0,	CPU_686,	CPU_AMD,	CPU_Priv},
#line 1232 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomneqb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 607 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"por",	mmxsse2_insn,	2,	SUF_Z,	0xEB,	0,	0,	0,	CPU_MMX,	0,	0},
#line 344 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jle",	jcc_insn,	9,	SUF_Z,	0x0E,	0,	0,	0,	0,	0,	0},
#line 47 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"andps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x54,	0,	0,	CPU_SSE,	0,	0},
#line 563 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmaxud",	sse4_insn,	2,	SUF_Z,	0x3F,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 773 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"svldt",	cyrixsmm_insn,	1,	SUF_Z,	0x7A,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 491 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pandn",	mmxsse2_insn,	2,	SUF_Z,	0xDF,	0,	0,	0,	CPU_MMX,	0,	0},
#line 403 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"maxss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5F,	0,	0,	CPU_SSE,	0,	0},
#line 1086 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vminpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1344 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmulhuw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xE4,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1160 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpbroadcastw",	vpbroadcastw_avx2_insn,	4,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 46 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"andpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x54,	0,	0,	CPU_SSE2,	0,	0},
#line 1220 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomlew",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 120 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpeqss",	ssecmp_32_insn,	4,	SUF_Z,	0x00,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 926 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpordps",	ssecmp_128_insn,	3,	SUF_Z,	0x07,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 477 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"packsswb",	mmxsse2_insn,	2,	SUF_Z,	0x63,	0,	0,	0,	CPU_MMX,	0,	0},
#line 253 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fldlg2",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xEC,	0,	0,	CPU_FPU,	0,	0},
#line 80 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"clflush",	clflush_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_P3,	0,	0},
#line 1265 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpermps",	vperm_var_avx2_insn,	1,	SUF_Z,	0x16,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 853 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpgtpd",	ssecmp_128_insn,	3,	SUF_Z,	0x0E,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 998 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmaddsub213pd",	vfma_pd_insn,	2,	SUF_Z,	0xA6,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 616 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pshufd",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0x66,	0x70,	0,	0,	CPU_SSE2,	0,	0},
#line 722 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setnge",	setcc_insn,	1,	SUF_Z,	0x0C,	0,	0,	0,	CPU_386,	0,	0},
#line 1132 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vorpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x56,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 630 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psrldq",	pslrldq_insn,	4,	SUF_Z,	0x03,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 882 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpneq_usps",	ssecmp_128_insn,	3,	SUF_Z,	0x14,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 363 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jpo",	jcc_insn,	9,	SUF_Z,	0x0B,	0,	0,	0,	0,	0,	0},
#line 745 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sidt",	twobytemem_insn,	1,	SUF_Z,	0x01,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 207 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fbld",	fbldstp_insn,	1,	SUF_Z,	0x04,	0,	0,	0,	CPU_FPU,	0,	0},
#line 875 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpneq_oqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x0C,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 318 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"insw",	onebyte_insn,	1,	SUF_Z,	0x6D,	0x10,	0,	0,	0,	0,	0},
#line 683 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"ror",	shift_insn,	16,	SUF_Z,	0x01,	0,	0,	0,	0,	0,	0},
#line 1375 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsllvq",	vpshiftv_vexw1_avx2_insn,	2,	SUF_Z,	0x47,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 100 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovnc",	cmovcc_insn,	3,	SUF_Z,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 455 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"mulsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x59,	0,	0,	CPU_SSE2,	0,	0},
#line 851 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpgt_oqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x1E,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1075 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vlddqu",	lddqu_insn,	2,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1205 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomgtb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 1237 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomnequq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 429 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movntdq",	movnt_insn,	2,	SUF_Z,	0x66,	0xE7,	0,	0,	CPU_SSE2,	0,	0},
#line 197 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"dppd",	sse4imm_insn,	2,	SUF_Z,	0x41,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 764 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"stosq",	onebyte_insn,	1,	SUF_Z,	0xAB,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 485 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"paddsw",	mmxsse2_insn,	2,	SUF_Z,	0xED,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1420 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vsubps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1157 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpbroadcastb",	vpbroadcastb_avx2_insn,	4,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 593 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmuludq",	mmxsse2_insn,	2,	SUF_Z,	0xF4,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 331 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"iretq",	onebyte_insn,	1,	SUF_Z,	0xCF,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 273 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fsave",	twobytemem_insn,	1,	SUF_Z,	0x06,	0x9B,	0xDD,	0,	CPU_FPU,	0,	0},
#line 1173 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcmpgtb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x64,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1191 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomfalseq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 1136 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpabsw",	avx2_ssse3_2op_insn,	2,	SUF_Z,	0x1D,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1037 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmadd231ps",	vfma_ps_insn,	2,	SUF_Z,	0xBC,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 600 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"popad",	onebyte_insn,	1,	SUF_Z,	0x61,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 889 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnge_uqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x19,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 411 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"montmul",	padlock_insn,	1,	SUF_Z,	0xC0,	0xF3,	0xA6,	0,	CPU_PadLock,	0,	0},
#line 793 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vaddpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 726 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setnp",	setcc_insn,	1,	SUF_Z,	0x0B,	0,	0,	0,	CPU_386,	0,	0},
#line 1287 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphaddw",	ssse3_insn,	5,	SUF_Z,	0x01,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 950 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcomiss",	avx_xmm_xmm32_insn,	2,	SUF_Z,	0x00,	0x2F,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1433 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vzeroall",	vzero_insn,	1,	SUF_Z,	0xC4,	0,	0,	0,	CPU_AVX,	0,	0},
#line 360 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jo",	jcc_insn,	9,	SUF_Z,	0x00,	0,	0,	0,	0,	0,	0},
#line 314 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"insb",	onebyte_insn,	1,	SUF_Z,	0x6C,	0x00,	0,	0,	0,	0,	0},
#line 145 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmppd",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0x66,	0xC2,	0,	0,	CPU_SSE2,	0,	0},
#line 67 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"bswap",	bswap_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_486,	0,	0},
#line 410 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"monitorx",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xFA,	0,	CPU_AMD,	0,	0},
#line 480 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"paddb",	mmxsse2_insn,	2,	SUF_Z,	0xFC,	0,	0,	0,	CPU_MMX,	0,	0},
#line 552 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pinsrd",	pinsrd_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_SSE41,	0},
#line 131 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpneqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x04,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 352 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jng",	jcc_insn,	9,	SUF_Z,	0x0E,	0,	0,	0,	0,	0,	0},
#line 894 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpngeps",	ssecmp_128_insn,	3,	SUF_Z,	0x09,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 408 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"minss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5D,	0,	0,	CPU_SSE,	0,	0},
#line 1034 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmadd213sd",	vfma_sd_insn,	2,	SUF_Z,	0xAD,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1172 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcmpestrm",	sse4pcmpstr_insn,	1,	SUF_Z,	0x60,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1048 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmsub213pd",	vfma_pd_insn,	2,	SUF_Z,	0xAE,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 579 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmovzxbq",	sse4m16_insn,	4,	SUF_Z,	0x32,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 931 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpsd",	cmpsd_insn,	5,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 687 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"roundsd",	sse4m64imm_insn,	4,	SUF_Z,	0x0B,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 784 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"ucomisd",	xmm_xmm64_insn,	4,	SUF_Z,	0x66,	0x2E,	0,	0,	CPU_SSE2,	0,	0},
#line 1129 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmwrite",	vmxmemwr_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_P4,	0,	0},
#line 525 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pfacc",	now3d_insn,	1,	SUF_Z,	0xAE,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 380 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lldt",	prot286_insn,	1,	SUF_Z,	0x02,	0x00,	0,	0,	CPU_286,	CPU_Priv,	CPU_Prot},
#line 442 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movsldup",	xmm_xmm128_insn,	2,	SUF_Z,	0xF3,	0x12,	0,	0,	CPU_SSE3,	0,	0},
#line 205 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fadd",	farith_insn,	7,	SUF_Z,	0xC0,	0xC0,	0x00,	0,	CPU_FPU,	0,	0},
#line 304 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"haddpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x7C,	0,	0,	CPU_SSE3,	0,	0},
#line 877 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpneq_ospd",	ssecmp_128_insn,	3,	SUF_Z,	0x1C,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 163 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cqo",	onebyte_insn,	1,	SUF_Z,	0x99,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1249 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomtrueub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 1193 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomfalseud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 1327 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpminud",	ssse3_insn,	5,	SUF_Z,	0x3B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 963 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcvtss2sd",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 992 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmaddpd",	fma_128_256_insn,	4,	SUF_Z,	0x69,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 892 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnge_uqss",	ssecmp_32_insn,	4,	SUF_Z,	0x19,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 406 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"minps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x5D,	0,	0,	CPU_SSE,	0,	0},
#line 36 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"aesdec",	aes_insn,	2,	SUF_Z,	0x38,	0xDE,	0,	0,	CPU_AVX,	0,	0},
#line 1318 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmaxsd",	ssse3_insn,	5,	SUF_Z,	0x3D,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1182 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomeqd",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 1256 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomuq",	vpcom_imm_insn,	1,	SUF_Z,	0xEF,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1319 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmaxsw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xEE,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1092 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmmcall",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xD9,	0,	CPU_SVM,	0,	0},
#line 98 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovnb",	cmovcc_insn,	3,	SUF_Z,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 223 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fcompp",	twobyte_insn,	1,	SUF_Z,	0xDE,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 1317 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmaxsb",	ssse3_insn,	5,	SUF_Z,	0x3C,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 527 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pfcmpeq",	now3d_insn,	1,	SUF_Z,	0xB0,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 498 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pblendw",	sse4imm_insn,	2,	SUF_Z,	0x0E,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 751 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"smsw",	sldtmsw_insn,	6,	SUF_Z,	0x04,	0x01,	0,	0,	CPU_286,	0,	0},
#line 540 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pfsub",	now3d_insn,	1,	SUF_Z,	0x9A,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1189 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomfalseb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 463 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"o16",	NULL,	X86_OPERSIZE>>8,	0x10,	0,	0,	0,	0,	0,	0,	0},
#line 661 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rcl",	shift_insn,	16,	SUF_Z,	0x02,	0,	0,	0,	0,	0,	0},
#line 1167 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcmpeqb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x74,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 885 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpneqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x04,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 565 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pminsb",	sse4_insn,	2,	SUF_Z,	0x38,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 189 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"daa",	onebyte_insn,	1,	SUF_Z,	0x27,	0,	0,	NOT_64,	0,	0,	0},
#line 615 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pshufb",	ssse3_insn,	5,	SUF_Z,	0x00,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 44 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"andnpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x55,	0,	0,	CPU_SSE2,	0,	0},
#line 765 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"stosw",	onebyte_insn,	1,	SUF_Z,	0xAB,	0x10,	0,	0,	0,	0,	0},
#line 1067 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vgatherqps",	gather_32x_32y_128_insn,	2,	SUF_Z,	0x93,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 538 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pfrsqit1",	now3d_insn,	1,	SUF_Z,	0xA7,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 805 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vandnpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x55,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1281 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphaddubd",	vphaddsub_insn,	1,	SUF_Z,	0xD2,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1219 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomleuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 255 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fldpi",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xEB,	0,	0,	CPU_FPU,	0,	0},
#line 960 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcvtsd2ss",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 124 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpless",	ssecmp_32_insn,	4,	SUF_Z,	0x02,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 622 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psignw",	ssse3_insn,	5,	SUF_Z,	0x09,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1438 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"wrgsbase",	fs_gs_base_insn,	2,	SUF_Z,	0x03,	0,	0,	ONLY_64,	CPU_FSGSBASE,	0,	0},
#line 28 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"add",	arith_insn,	22,	SUF_Z,	0x00,	0x00,	0,	0,	0,	0,	0},
#line 748 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"smi",	onebyte_insn,	1,	SUF_Z,	0xF1,	0,	0,	0,	CPU_386,	CPU_Undoc,	0},
#line 102 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovng",	cmovcc_insn,	3,	SUF_Z,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 413 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movapd",	movau_insn,	6,	SUF_Z,	0x66,	0x28,	0x01,	0,	CPU_SSE2,	0,	0},
#line 1308 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmacssww",	vpma_insn,	1,	SUF_Z,	0x85,	0,	0,	0,	CPU_XOP,	0,	0},
#line 183 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvttps2dq",	xmm_xmm128_insn,	2,	SUF_Z,	0xF3,	0x5B,	0,	0,	CPU_SSE2,	0,	0},
#line 571 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmovmskb",	pmovmskb_insn,	6,	SUF_Z,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 693 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rsqrtss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x52,	0,	0,	CPU_SSE,	0,	0},
#line 1350 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpperm",	vpperm_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_XOP,	0,	0},
#line 431 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movnti",	movnti_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_P4,	0,	0},
#line 308 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"hsubps",	xmm_xmm128_insn,	2,	SUF_Z,	0xF2,	0x7D,	0,	0,	CPU_SSE3,	0,	0},
#line 1443 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xadd",	cmpxchgxadd_insn,	4,	SUF_Z,	0xC0,	0,	0,	0,	CPU_486,	0,	0},
#line 452 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"mul",	f6_insn,	4,	SUF_Z,	0x04,	0,	0,	0,	0,	0,	0},
#line 785 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"ucomiss",	xmm_xmm32_insn,	4,	SUF_Z,	0x00,	0x2E,	0,	0,	CPU_SSE,	0,	0},
#line 1297 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpinsrb",	pinsrb_insn,	4,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1376 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsllw",	vpshift_insn,	8,	SUF_Z,	0xF1,	0x71,	0x06,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1008 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsub213pd",	vfma_pd_insn,	2,	SUF_Z,	0xAA,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1200 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomgeub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 1452 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xend",	tsx_0x0F_0x01_insn,	1,	SUF_Z,	0xD5,	0,	0,	0,	CPU_TSX,	0,	0},
#line 222 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fcomp",	fcom_insn,	6,	SUF_Z,	0xD8,	0x03,	0,	0,	CPU_FPU,	0,	0},
#line 350 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jnc",	jcc_insn,	9,	SUF_Z,	0x03,	0,	0,	0,	0,	0,	0},
#line 336 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jbe",	jcc_insn,	9,	SUF_Z,	0x06,	0,	0,	0,	0,	0,	0},
#line 302 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fyl2xp1",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF9,	0,	0,	CPU_FPU,	0,	0},
#line 707 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setb",	setcc_insn,	1,	SUF_Z,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 58 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"blendvps",	sse4xmm0_insn,	2,	SUF_Z,	0x14,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 276 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fsin",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xFE,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 448 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movupd",	movau_insn,	6,	SUF_Z,	0x66,	0x10,	0x01,	0,	CPU_SSE2,	0,	0},
#line 1069 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vhaddps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0xF2,	0x7C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 778 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sysexit",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x35,	0,	NOT_64,	CPU_686,	CPU_Priv,	0},
#line 449 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movups",	movau_insn,	6,	SUF_Z,	0x00,	0x10,	0x01,	0,	CPU_SSE,	0,	0},
#line 301 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fyl2x",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF1,	0,	0,	CPU_FPU,	0,	0},
#line 763 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"stosd",	onebyte_insn,	1,	SUF_Z,	0xAB,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1187 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomequw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 967 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcvttsd2si",	cvt_rx_xmm64_insn,	4,	SUF_Z,	0xF2,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1143 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpaddq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xD4,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 397 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lzcnt",	cnt_insn,	3,	SUF_Z,	0xBD,	0,	0,	0,	CPU_LZCNT,	0,	0},
#line 305 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"haddps",	xmm_xmm128_insn,	2,	SUF_Z,	0xF2,	0x7C,	0,	0,	CPU_SSE3,	0,	0},
#line 483 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"paddsb",	mmxsse2_insn,	2,	SUF_Z,	0xEC,	0,	0,	0,	CPU_MMX,	0,	0},
#line 835 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpfalse_ossd",	ssecmp_64_insn,	4,	SUF_Z,	0x1B,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1404 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vrcpps",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x53,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 694 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rsts",	cyrixsmm_insn,	1,	SUF_Z,	0x7D,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 536 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pfrcpit1",	now3d_insn,	1,	SUF_Z,	0xA6,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 328 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"invvpid",	eptvpid_insn,	2,	SUF_Z,	0x01,	0,	0,	0,	CPU_386,	CPU_EPTVPID,	0},
#line 389 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"loop",	loop_insn,	8,	SUF_Z,	0x02,	0,	0,	0,	0,	0,	0},
#line 929 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmppd",	xmm_xmm128_imm_256_insn,	3,	SUF_Z,	0x66,	0xC2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 680 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"retf",	retnf_insn,	6,	SUF_Z,	0xCA,	0x40,	0,	0,	0,	0,	0},
#line 669 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rdrand",	rdrand_insn,	3,	SUF_Z,	0x06,	0,	0,	0,	CPU_RDRAND,	0,	0},
#line 500 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pclmulhqlqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x01,	0,	0,	0,	CPU_AVX,	0,	0},
#line 1248 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomtrueq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 1066 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vgatherqpd",	gather_64x_64y_insn,	2,	SUF_Z,	0x93,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 404 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"mfence",	threebyte_insn,	1,	SUF_Z,	0x0F,	0xAE,	0xF0,	0,	CPU_P3,	0,	0},
#line 1353 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vprotq",	vprot_insn,	3,	SUF_Z,	0x03,	0,	0,	0,	CPU_XOP,	0,	0},
#line 292 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fucomip",	fcom2_insn,	2,	SUF_Z,	0xDF,	0xE8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 395 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lss",	lfgss_insn,	3,	SUF_Z,	0xB2,	0,	0,	0,	CPU_386,	0,	0},
#line 97 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovnae",	cmovcc_insn,	3,	SUF_Z,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 559 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmaxsb",	sse4_insn,	2,	SUF_Z,	0x3C,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 871 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpltsd",	ssecmp_64_insn,	4,	SUF_Z,	0x01,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1208 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomgtub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 228 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fdivr",	farith_insn,	7,	SUF_Z,	0xF0,	0xF8,	0x07,	0,	CPU_FPU,	0,	0},
#line 1006 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsub132sd",	vfma_sd_insn,	2,	SUF_Z,	0x9B,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 613 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"prefetchw",	twobytemem_insn,	1,	SUF_Z,	0x01,	0x0F,	0x0D,	0,	CPU_PRFCHW,	0,	0},
#line 766 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"str",	str_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 804 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vaeskeygenassist",	aes_imm_insn,	1,	SUF_Z,	0x3A,	0xDF,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1325 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpminsw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xEA,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1313 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmaddubsw",	ssse3_insn,	5,	SUF_Z,	0x04,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1356 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpshab",	amd_vpshift_insn,	2,	SUF_Z,	0x98,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1400 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpunpckldq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x62,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 896 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpngess",	ssecmp_32_insn,	4,	SUF_Z,	0x09,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 399 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"maskmovq",	maskmovq_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 87 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovae",	cmovcc_insn,	3,	SUF_Z,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 1456 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xorpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x57,	0,	0,	CPU_SSE2,	0,	0},
#line 932 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpss",	xmm_xmm32_imm_insn,	4,	SUF_Z,	0xF3,	0xC2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 470 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"outsb",	onebyte_insn,	1,	SUF_Z,	0x6E,	0x00,	0,	0,	0,	0,	0},
#line 358 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jns",	jcc_insn,	9,	SUF_Z,	0x09,	0,	0,	0,	0,	0,	0},
#line 202 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"extrq",	extrq_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 339 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"je",	jcc_insn,	9,	SUF_Z,	0x04,	0,	0,	0,	0,	0,	0},
#line 574 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmovsxbw",	sse4m64_insn,	4,	SUF_Z,	0x20,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 285 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fsub",	farith_insn,	7,	SUF_Z,	0xE8,	0xE0,	0x04,	0,	CPU_FPU,	0,	0},
#line 814 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vbroadcasti128",	vbroadcastif128_insn,	1,	SUF_Z,	0x5A,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 79 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cld",	onebyte_insn,	1,	SUF_Z,	0xFC,	0,	0,	0,	0,	0,	0},
#line 786 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"ud1",	twobyte_insn,	1,	SUF_Z,	0x0F,	0xB9,	0,	0,	CPU_286,	CPU_Undoc,	0},
#line 1117 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovups",	movau_insn,	6,	SUF_Z,	0x00,	0x10,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 203 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"f2xm1",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF0,	0,	0,	CPU_FPU,	0,	0},
#line 1236 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomnequd",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 378 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lgs",	lfgss_insn,	3,	SUF_Z,	0xB5,	0,	0,	0,	CPU_386,	0,	0},
#line 1378 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsravd",	vpshiftv_vexw0_avx2_insn,	2,	SUF_Z,	0x46,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1349 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpor",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xEB,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 364 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jrcxz",	jcxz_insn,	2,	SUF_Z,	0x40,	0,	0,	ONLY_64,	0,	0,	0},
#line 1150 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpand",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xDB,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 327 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"invpcid",	invpcid_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_INVPCID,	CPU_Priv},
#line 1342 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmuldq",	ssse3_insn,	5,	SUF_Z,	0x28,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1170 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcmpeqw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x75,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 665 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rdfsbase",	fs_gs_base_insn,	2,	SUF_Z,	0x00,	0,	0,	ONLY_64,	CPU_FSGSBASE,	0,	0},
#line 935 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmptrue_ussd",	ssecmp_64_insn,	4,	SUF_Z,	0x1F,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 184 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvttps2pi",	cvt_mm_xmm64_insn,	2,	SUF_Z,	0x2C,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1074 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vinsertps",	insertps_insn,	4,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 677 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"repnz",	NULL,	X86_LOCKREP>>8,	0xF2,	0,	0,	0,	0,	0,	0,	0},
#line 15 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sha1rnds4",	intel_SHA1RNDS4_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SHA,	0,	0},
#line 516 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pdep",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Z,	0xF2,	0x38,	0xF5,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 969 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vdivpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1153 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpavgw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xE3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1099 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovhlps",	movhllhps_insn,	2,	SUF_Z,	0x12,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 235 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"ficomp",	fiarith_insn,	2,	SUF_Z,	0x03,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 401 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"maxps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x5F,	0,	0,	CPU_SSE,	0,	0},
#line 849 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpgt_oqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x1E,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 119 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpeqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x00,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 978 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vextracti128",	vextractif128_insn,	1,	SUF_Z,	0x39,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 50 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"blcfill",	xop_gpr_reg_rm_09_insn,	2,	SUF_Z,	0x01,	0x01,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 103 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovnge",	cmovcc_insn,	3,	SUF_Z,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 790 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"unpckhps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x15,	0,	0,	CPU_SSE,	0,	0},
#line 113 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovpo",	cmovcc_insn,	3,	SUF_Z,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 717 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setnb",	setcc_insn,	1,	SUF_Z,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 1007 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsub132ss",	vfma_ss_insn,	2,	SUF_Z,	0x9B,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1312 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmadcswd",	vpma_insn,	1,	SUF_Z,	0xB6,	0,	0,	0,	CPU_XOP,	0,	0},
#line 813 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vbroadcastf128",	vbroadcastif128_insn,	1,	SUF_Z,	0x1A,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 315 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"insd",	onebyte_insn,	1,	SUF_Z,	0x6D,	0x20,	0,	0,	CPU_386,	0,	0},
#line 306 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"hlt",	onebyte_insn,	1,	SUF_Z,	0xF4,	0,	0,	0,	CPU_Priv,	0,	0},
#line 1217 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomleud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 151 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpsw",	onebyte_insn,	1,	SUF_Z,	0xA7,	0x10,	0,	0,	0,	0,	0},
#line 832 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpeqss",	ssecmp_32_insn,	4,	SUF_Z,	0x00,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1390 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsubsw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xE9,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 934 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmptrue_usps",	ssecmp_128_insn,	3,	SUF_Z,	0x1F,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 846 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpgeps",	ssecmp_128_insn,	3,	SUF_Z,	0x0D,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 930 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpps",	xmm_xmm128_imm_256_insn,	3,	SUF_Z,	0x00,	0xC2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 824 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpeq_uqss",	ssecmp_32_insn,	4,	SUF_Z,	0x08,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 870 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpltps",	ssecmp_128_insn,	3,	SUF_Z,	0x01,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 13 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sha1msg2",	intel_SHA1MSG2_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SHA,	0,	0},
#line 810 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vblendps",	sse4imm_256_insn,	4,	SUF_Z,	0x0C,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 356 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jno",	jcc_insn,	9,	SUF_Z,	0x01,	0,	0,	0,	0,	0,	0},
#line 1263 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpermilps",	vpermil_insn,	4,	SUF_Z,	0x04,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 645 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"punpckhdq",	mmxsse2_insn,	2,	SUF_Z,	0x6A,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1437 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"wrfsbase",	fs_gs_base_insn,	2,	SUF_Z,	0x02,	0,	0,	ONLY_64,	CPU_FSGSBASE,	0,	0},
#line 1379 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsraw",	vpshift_insn,	8,	SUF_Z,	0xE1,	0x71,	0x04,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 215 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fcmovnbe",	fcmovcc_insn,	1,	SUF_Z,	0xDB,	0xD0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 901 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpngtpd",	ssecmp_128_insn,	3,	SUF_Z,	0x0A,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 150 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpss",	xmm_xmm32_imm_insn,	4,	SUF_Z,	0xF3,	0xC2,	0,	0,	CPU_SSE,	0,	0},
#line 754 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sqrtsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x51,	0,	0,	CPU_SSE2,	0,	0},
#line 539 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pfrsqrt",	now3d_insn,	1,	SUF_Z,	0x97,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 37 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"aesdeclast",	aes_insn,	2,	SUF_Z,	0x38,	0xDF,	0,	0,	CPU_AVX,	0,	0},
#line 944 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpunord_sss",	ssecmp_32_insn,	4,	SUF_Z,	0x13,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 860 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmple_oqss",	ssecmp_32_insn,	4,	SUF_Z,	0x12,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 465 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"o64",	NULL,	X86_OPERSIZE>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 817 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpeq_ospd",	ssecmp_128_insn,	3,	SUF_Z,	0x10,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 24 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"aam",	aadm_insn,	2,	SUF_Z,	0x00,	0,	0,	NOT_64,	0,	0,	0},
#line 439 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movsb",	onebyte_insn,	1,	SUF_Z,	0xA4,	0x00,	0,	0,	0,	0,	0},
#line 872 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpltss",	ssecmp_32_insn,	4,	SUF_Z,	0x01,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1289 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphaddwq",	vphaddsub_insn,	1,	SUF_Z,	0xC7,	0,	0,	0,	CPU_XOP,	0,	0},
#line 340 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jecxz",	jcxz_insn,	2,	SUF_Z,	0x20,	0,	0,	0,	CPU_386,	0,	0},
#line 1225 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomltud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 652 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"push",	push_insn,	35,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 690 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rsldt",	cyrixsmm_insn,	1,	SUF_Z,	0x7B,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 497 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pblendvb",	sse4xmm0_insn,	2,	SUF_Z,	0x10,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 553 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pinsrq",	pinsrq_insn,	2,	SUF_Z,	0,	0,	0,	ONLY_64,	CPU_SSE41,	0,	0},
#line 1125 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmulpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 640 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psubusw",	mmxsse2_insn,	2,	SUF_Z,	0xD9,	0,	0,	0,	CPU_MMX,	0,	0},
#line 881 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpneq_uspd",	ssecmp_128_insn,	3,	SUF_Z,	0x14,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 190 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"das",	onebyte_insn,	1,	SUF_Z,	0x2F,	0,	0,	NOT_64,	0,	0,	0},
#line 1077 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmaskmovdqu",	maskmovdqu_insn,	1,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 558 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmagw",	cyrixmmx_insn,	1,	SUF_Z,	0x52,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 510 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pcmpgtb",	mmxsse2_insn,	2,	SUF_Z,	0x64,	0,	0,	0,	CPU_MMX,	0,	0},
#line 985 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmadd213ps",	vfma_ps_insn,	2,	SUF_Z,	0xA8,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 49 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"bextr",	bextr_insn,	4,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_386,	CPU_BMI1,	0},
#line 227 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fdivp",	farithp_insn,	3,	SUF_Z,	0xF8,	0,	0,	0,	CPU_FPU,	0,	0},
#line 425 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movlpd",	movhlp_insn,	3,	SUF_Z,	0x66,	0x12,	0,	0,	CPU_SSE2,	0,	0},
#line 528 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pfcmpge",	now3d_insn,	1,	SUF_Z,	0x90,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1135 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpabsd",	avx2_ssse3_2op_insn,	2,	SUF_Z,	0x1E,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 110 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovo",	cmovcc_insn,	3,	SUF_Z,	0x00,	0,	0,	0,	CPU_686,	0,	0},
#line 296 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fxam",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xE5,	0,	0,	CPU_FPU,	0,	0},
#line 508 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pcmpestri",	sse4pcmpstr_insn,	1,	SUF_Z,	0x61,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 897 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpngt_uqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x1A,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 729 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"seto",	setcc_insn,	1,	SUF_Z,	0x00,	0,	0,	0,	CPU_386,	0,	0},
#line 1109 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovntpd",	movnt_insn,	2,	SUF_Z,	0x66,	0x2B,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1311 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmadcsswd",	vpma_insn,	1,	SUF_Z,	0xA6,	0,	0,	0,	CPU_XOP,	0,	0},
#line 898 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpngt_uqps",	ssecmp_128_insn,	3,	SUF_Z,	0x1A,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 772 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"svdc",	svdc_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 467 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"orpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x56,	0,	0,	CPU_SSE2,	0,	0},
#line 1466 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xstore",	padlock_insn,	1,	SUF_Z,	0xC0,	0x00,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 1416 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vsqrtsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x51,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1068 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vhaddpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x7C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 507 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pcmpeqw",	mmxsse2_insn,	2,	SUF_Z,	0x75,	0,	0,	0,	CPU_MMX,	0,	0},
#line 505 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pcmpeqd",	mmxsse2_insn,	2,	SUF_Z,	0x76,	0,	0,	0,	CPU_MMX,	0,	0},
#line 274 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fscale",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xFD,	0,	0,	CPU_FPU,	0,	0},
#line 1180 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomd",	vpcom_imm_insn,	1,	SUF_Z,	0xCE,	0,	0,	0,	CPU_XOP,	0,	0},
#line 537 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pfrcpit2",	now3d_insn,	1,	SUF_Z,	0xB6,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1296 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphsubwd",	vphaddsub_insn,	1,	SUF_Z,	0xE2,	0,	0,	0,	CPU_XOP,	0,	0},
#line 379 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lidt",	twobytemem_insn,	1,	SUF_Z,	0x03,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 129 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpneqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x04,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 620 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psignb",	ssse3_insn,	5,	SUF_Z,	0x08,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 759 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"stgi",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xDC,	0,	CPU_SVM,	0,	0},
#line 126 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpltps",	ssecmp_128_insn,	3,	SUF_Z,	0x01,	0,	0,	0,	CPU_SSE,	0,	0},
#line 381 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lmsw",	prot286_insn,	1,	SUF_Z,	0x06,	0x01,	0,	0,	CPU_286,	CPU_Priv,	0},
#line 1451 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xcryptofb",	padlock_insn,	1,	SUF_Z,	0xE8,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 973 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vdppd",	sse4imm_insn,	2,	SUF_Z,	0x41,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 750 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"smintold",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x7E,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_Obs},
#line 1044 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmsub132pd",	vfma_pd_insn,	2,	SUF_Z,	0x9E,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 332 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"iretw",	onebyte_insn,	1,	SUF_Z,	0xCF,	0x10,	0,	0,	0,	0,	0},
#line 415 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movbe",	movbe_insn,	6,	SUF_Z,	0,	0,	0,	0,	CPU_MOVBE,	0,	0},
#line 438 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movq2dq",	movq2dq_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 185 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvttsd2si",	cvt_rx_xmm64_insn,	4,	SUF_Z,	0xF2,	0x2C,	0,	0,	CPU_SSE2,	0,	0},
#line 844 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpge_oqss",	ssecmp_32_insn,	4,	SUF_Z,	0x1D,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 405 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"minpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5D,	0,	0,	CPU_SSE2,	0,	0},
#line 1019 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsubadd213ps",	vfma_ps_insn,	2,	SUF_Z,	0xA7,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 838 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpfalseps",	ssecmp_128_insn,	3,	SUF_Z,	0x0B,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 206 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"faddp",	farithp_insn,	3,	SUF_Z,	0xC0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 229 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fdivrp",	farithp_insn,	3,	SUF_Z,	0xF0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 254 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fldln2",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xED,	0,	0,	CPU_FPU,	0,	0},
#line 534 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pfpnacc",	now3d_insn,	1,	SUF_Z,	0x8E,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 913 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnlt_uqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x15,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1104 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovlps",	movhlp_insn,	3,	SUF_Z,	0x00,	0x12,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1005 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsub132ps",	vfma_ps_insn,	2,	SUF_Z,	0x9A,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 952 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcvtdq2ps",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x5B,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1113 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovshdup",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0xF3,	0x16,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 841 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpge_oqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x1D,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 437 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movq",	movq_insn,	9,	SUF_Z,	0,	0,	0,	0,	CPU_MMX,	0,	0},
#line 284 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fstsw",	fstsw_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 167 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvtpd2dq",	xmm_xmm128_insn,	2,	SUF_Z,	0xF2,	0xE6,	0,	0,	CPU_SSE2,	0,	0},
#line 1206 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomgtd",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 1229 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomneb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 238 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fild",	fildstp_insn,	4,	SUF_Z,	0x00,	0x02,	0x05,	0,	CPU_FPU,	0,	0},
#line 675 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"repe",	NULL,	X86_LOCKREP>>8,	0xF3,	0,	0,	0,	0,	0,	0,	0},
#line 1250 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomtrueud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 949 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcomisd",	avx_xmm_xmm64_insn,	2,	SUF_Z,	0x66,	0x2F,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1348 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmuludq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xF4,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 591 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmulld",	sse4_insn,	2,	SUF_Z,	0x40,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1064 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vgatherdpd",	gather_64x_64x_insn,	2,	SUF_Z,	0x92,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 664 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rcr",	shift_insn,	16,	SUF_Z,	0x03,	0,	0,	0,	0,	0,	0},
#line 660 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pxor",	mmxsse2_insn,	2,	SUF_Z,	0xEF,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1332 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmovsxbw",	sse4m64_insn,	4,	SUF_Z,	0x20,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1101 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovhps",	movhlp_insn,	3,	SUF_Z,	0x00,	0x16,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 16 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sha256msg1",	intel_SHA256MSG1_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SHA,	0,	0},
#line 472 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"outsw",	onebyte_insn,	1,	SUF_Z,	0x6F,	0x10,	0,	0,	0,	0,	0},
#line 1168 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcmpeqd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x76,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 829 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpeqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x00,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1461 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xsaveopt",	twobytemem_insn,	1,	SUF_Z,	0x06,	0x0F,	0xAE,	0,	CPU_XSAVEOPT,	0,	0},
#line 821 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpeq_uqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x08,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 39 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"aesenclast",	aes_insn,	2,	SUF_Z,	0x38,	0xDD,	0,	0,	CPU_AVX,	0,	0},
#line 1295 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphsubw",	ssse3_insn,	5,	SUF_Z,	0x05,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 482 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"paddq",	mmxsse2_insn,	2,	SUF_Z,	0xD4,	0,	0,	0,	CPU_MMX,	0,	0},
#line 280 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fstcw",	fstcw_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 256 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fldt",	fldstpt_insn,	1,	SUF_Z,	0x05,	0,	0,	0,	CPU_FPU,	0,	0},
#line 74 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cbw",	onebyte_insn,	1,	SUF_Z,	0x98,	0x10,	0,	0,	0,	0,	0},
#line 1011 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsub213ss",	vfma_ss_insn,	2,	SUF_Z,	0xAB,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 530 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pfmax",	now3d_insn,	1,	SUF_Z,	0xA4,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 348 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jnb",	jcc_insn,	9,	SUF_Z,	0x03,	0,	0,	0,	0,	0,	0},
#line 56 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"blendps",	sse4imm_insn,	2,	SUF_Z,	0x0C,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1384 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsrlvq",	vpshiftv_vexw1_avx2_insn,	2,	SUF_Z,	0x45,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 394 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lsl",	larlsl_insn,	6,	SUF_Z,	0x03,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 984 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmadd213pd",	vfma_pd_insn,	2,	SUF_Z,	0xA8,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 347 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jnae",	jcc_insn,	9,	SUF_Z,	0x02,	0,	0,	0,	0,	0,	0},
#line 1441 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xabort",	tsx_xabort_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_TSX,	0,	0},
#line 1121 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmread",	vmxmemrd_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_P4,	0,	0},
#line 1079 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmaskmovps",	vmaskmov_insn,	4,	SUF_Z,	0x2C,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1392 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsubusw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xD9,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1059 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmsubss",	fma_128_m32_insn,	3,	SUF_Z,	0x7E,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1413 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vshufps",	xmm_xmm128_imm_256_insn,	3,	SUF_Z,	0x00,	0xC6,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1421 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vsubsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 802 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vaesenclast",	aes_insn,	2,	SUF_Z,	0x38,	0xDD,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1259 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vperm2f128",	vperm2f128_insn,	1,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1003 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmaddsubps",	fma_128_256_insn,	4,	SUF_Z,	0x5C,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 137 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpnltpd",	ssecmp_128_insn,	3,	SUF_Z,	0x05,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 947 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpunordsd",	ssecmp_64_insn,	4,	SUF_Z,	0x03,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 839 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpfalsesd",	ssecmp_64_insn,	4,	SUF_Z,	0x0B,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 704 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"scasw",	onebyte_insn,	1,	SUF_Z,	0xAF,	0x10,	0,	0,	0,	0,	0},
#line 232 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"ffreep",	ffree_insn,	1,	SUF_Z,	0xDF,	0,	0,	0,	CPU_686,	CPU_FPU,	CPU_Undoc},
#line 1424 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vtestps",	sse4_insn,	2,	SUF_Z,	0x0E,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 979 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vextractps",	extractps_insn,	2,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 200 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"enter",	enter_insn,	3,	SUF_Z,	0,	0,	0,	0,	CPU_186,	0,	0},
#line 659 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pushfw",	onebyte_insn,	1,	SUF_Z,	0x9C,	0x10,	0x40,	0,	0,	0,	0},
#line 1266 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpermq",	vperm_imm_avx2_insn,	1,	SUF_Z,	0x00,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1141 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpaddb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xFC,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 144 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpordss",	ssecmp_32_insn,	4,	SUF_Z,	0x07,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 608 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"prefetch",	twobytemem_insn,	1,	SUF_Z,	0x00,	0x0F,	0x0D,	0,	CPU_3DNow,	0,	0},
#line 1215 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomleq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 506 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pcmpeqq",	sse4_insn,	2,	SUF_Z,	0x29,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 275 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fsetpm",	twobyte_insn,	1,	SUF_Z,	0xDB,	0xE4,	0,	0,	CPU_286,	CPU_FPU,	CPU_Obs},
#line 1203 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomgeuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 177 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvtsi2sd",	cvt_xmm_rmx_insn,	6,	SUF_Z,	0xF2,	0x2A,	0,	0,	CPU_SSE2,	0,	0},
#line 794 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vaddps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1405 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vrcpss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x53,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 939 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmptruesd",	ssecmp_64_insn,	4,	SUF_Z,	0x0F,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 958 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcvtps2ph",	avx_cvtps2ph_insn,	4,	SUF_Z,	0x66,	0x1D,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 269 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fprem1",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF5,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 1460 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xsave",	twobytemem_insn,	1,	SUF_Z,	0x04,	0x0F,	0xAE,	0,	CPU_386,	CPU_XSAVE,	0},
#line 656 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pushf",	onebyte_insn,	1,	SUF_Z,	0x9C,	0x00,	0x40,	0,	0,	0,	0},
#line 1033 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmadd213ps",	vfma_ps_insn,	2,	SUF_Z,	0xAC,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1060 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfrczpd",	vfrc_pdps_insn,	2,	SUF_Z,	0x01,	0,	0,	0,	CPU_XOP,	0,	0},
#line 867 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmplt_oqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x11,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 776 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"syscall",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x05,	0,	0,	CPU_686,	CPU_AMD,	0},
#line 365 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"js",	jcc_insn,	9,	SUF_Z,	0x08,	0,	0,	0,	0,	0,	0},
#line 346 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jna",	jcc_insn,	9,	SUF_Z,	0x06,	0,	0,	0,	0,	0,	0},
#line 1462 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xsaveopt64",	xsaveopt64_insn,	1,	SUF_Z,	0x06,	0x0F,	0xAE,	ONLY_64,	CPU_XSAVEOPT,	0,	0},
#line 902 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpngtps",	ssecmp_128_insn,	3,	SUF_Z,	0x0A,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1091 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmload",	svm_rax_insn,	2,	SUF_Z,	0xDA,	0,	0,	0,	CPU_SVM,	0,	0},
#line 140 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpnltss",	ssecmp_32_insn,	4,	SUF_Z,	0x05,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 1244 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomnew",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 945 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpunordpd",	ssecmp_128_insn,	3,	SUF_Z,	0x03,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 887 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpneqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x04,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 181 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvttpd2dq",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0xE6,	0,	0,	CPU_SSE2,	0,	0},
#line 311 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"imul",	imul_insn,	19,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1468 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xtest",	tsx_0x0F_0x01_insn,	1,	SUF_Z,	0xD6,	0,	0,	0,	CPU_TSX,	0,	0},
#line 359 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jnz",	jcc_insn,	9,	SUF_Z,	0x05,	0,	0,	0,	0,	0,	0},
#line 475 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pabsw",	ssse3_insn,	5,	SUF_Z,	0x1D,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1124 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmsave",	svm_rax_insn,	2,	SUF_Z,	0xDB,	0,	0,	0,	CPU_SVM,	0,	0},
#line 927 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpordsd",	ssecmp_64_insn,	4,	SUF_Z,	0x07,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 193 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"divpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5E,	0,	0,	CPU_SSE2,	0,	0},
#line 1299 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpinsrq",	pinsrq_insn,	2,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 116 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmp",	arith_insn,	22,	SUF_Z,	0x38,	0x07,	0,	0,	0,	0,	0},
#line 1057 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmsubps",	fma_128_256_insn,	4,	SUF_Z,	0x7C,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 818 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpeq_osps",	ssecmp_128_insn,	3,	SUF_Z,	0x10,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 198 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"dpps",	sse4imm_insn,	2,	SUF_Z,	0x40,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 419 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movdqa",	movau_insn,	6,	SUF_Z,	0x66,	0x6F,	0x10,	0,	CPU_SSE2,	0,	0},
#line 323 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"invd",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x08,	0,	0,	CPU_486,	CPU_Priv,	0},
#line 345 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jmp",	jmp_insn,	31,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 580 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmovzxbw",	sse4m64_insn,	4,	SUF_Z,	0x30,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 921 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpord_spd",	ssecmp_128_insn,	3,	SUF_Z,	0x17,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1207 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomgtq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 775 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"swapgs",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xF8,	ONLY_64,	0,	0,	0},
#line 788 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"umov",	umov_insn,	6,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_Undoc,	0},
#line 995 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmaddss",	fma_128_m32_insn,	3,	SUF_Z,	0x6A,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 208 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fbstp",	fbldstp_insn,	1,	SUF_Z,	0x06,	0,	0,	0,	CPU_FPU,	0,	0},
#line 925 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpordpd",	ssecmp_128_insn,	3,	SUF_Z,	0x07,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 623 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pslld",	pshift_insn,	4,	SUF_Z,	0xF2,	0x72,	0x06,	0,	CPU_MMX,	0,	0},
#line 1071 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vhsubps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0xF2,	0x7D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 430 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movntdqa",	movntdqa_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 769 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"subps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x5C,	0,	0,	CPU_SSE,	0,	0},
#line 192 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"div",	div_insn,	8,	SUF_Z,	0x06,	0,	0,	0,	0,	0,	0},
#line 93 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovge",	cmovcc_insn,	3,	SUF_Z,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 333 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"ja",	jcc_insn,	9,	SUF_Z,	0x07,	0,	0,	0,	0,	0,	0},
#line 1303 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmacsdql",	vpma_insn,	1,	SUF_Z,	0x97,	0,	0,	0,	CPU_XOP,	0,	0},
#line 614 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psadbw",	mmxsse2_insn,	2,	SUF_Z,	0xF6,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1041 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmaddps",	fma_128_256_insn,	4,	SUF_Z,	0x78,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 956 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcvtps2dq",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5B,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1045 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmsub132ps",	vfma_ps_insn,	2,	SUF_Z,	0x9E,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1183 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomeqq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 631 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psrlq",	pshift_insn,	4,	SUF_Z,	0xD3,	0x73,	0x02,	0,	CPU_MMX,	0,	0},
#line 916 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnlt_uqss",	ssecmp_32_insn,	4,	SUF_Z,	0x15,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 825 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpeq_uspd",	ssecmp_128_insn,	3,	SUF_Z,	0x18,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1162 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpclmulhqlqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x01,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 807 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vandpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x54,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 171 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvtpi2ps",	cvt_xmm_mm_ps_insn,	1,	SUF_Z,	0x2A,	0,	0,	0,	CPU_SSE,	0,	0},
#line 436 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movntss",	movntss_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 1323 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpminsb",	ssse3_insn,	5,	SUF_Z,	0x38,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1148 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpaddw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xFD,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1188 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomeqw",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 791 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"unpcklpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x14,	0,	0,	CPU_SSE2,	0,	0},
#line 1211 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomgtuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 986 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmadd213sd",	vfma_sd_insn,	2,	SUF_Z,	0xA9,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1397 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpunpckhqdq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x6D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1224 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomltub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 121 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmplepd",	ssecmp_128_insn,	3,	SUF_Z,	0x02,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 731 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setpe",	setcc_insn,	1,	SUF_Z,	0x0A,	0,	0,	0,	CPU_386,	0,	0},
#line 1306 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmacssdql",	vpma_insn,	1,	SUF_Z,	0x87,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1118 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmpsadbw",	sse4imm_256avx2_insn,	4,	SUF_Z,	0x42,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 646 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"punpckhqdq",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x6D,	0,	0,	CPU_SSE2,	0,	0},
#line 1096 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovddup",	vmovddup_insn,	3,	SUF_Z,	0xF2,	0x12,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 698 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sar",	shift_insn,	16,	SUF_Z,	0x07,	0,	0,	0,	0,	0,	0},
#line 101 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovne",	cmovcc_insn,	3,	SUF_Z,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 62 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"blsmsk",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_Z,	0x00,	0xF3,	0x02,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 1196 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomfalsew",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 293 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fucomp",	fcom2_insn,	2,	SUF_Z,	0xDD,	0xE8,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 117 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpeqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x00,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 923 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpord_ssd",	ssecmp_64_insn,	4,	SUF_Z,	0x17,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 532 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pfmul",	now3d_insn,	1,	SUF_Z,	0xB4,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 369 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lddqu",	lddqu_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_SSE3,	0,	0},
#line 12 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sha1msg1",	intel_SHA1MSG1_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SHA,	0,	0},
#line 384 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lock",	NULL,	X86_LOCKREP>>8,	0xF0,	0,	0,	0,	0,	0,	0,	0},
#line 1061 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfrczps",	vfrc_pdps_insn,	2,	SUF_Z,	0x00,	0,	0,	0,	CPU_XOP,	0,	0},
#line 619 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pshufw",	pshufw_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 242 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fist",	fiarith_insn,	2,	SUF_Z,	0x02,	0xDB,	0,	0,	CPU_FPU,	0,	0},
#line 689 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rsdc",	rsdc_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 1261 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpermd",	vperm_var_avx2_insn,	1,	SUF_Z,	0x36,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 696 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sal",	shift_insn,	16,	SUF_Z,	0x04,	0,	0,	0,	0,	0,	0},
#line 446 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movsx",	movszx_insn,	5,	SUF_Z,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 460 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"neg",	f6_insn,	4,	SUF_Z,	0x03,	0,	0,	0,	0,	0,	0},
#line 529 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pfcmpgt",	now3d_insn,	1,	SUF_Z,	0xA0,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 338 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jcxz",	jcxz_insn,	2,	SUF_Z,	0x10,	0,	0,	0,	0,	0,	0},
#line 1082 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmaxsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1184 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomequb",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 1199 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomgeq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 118 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpeqps",	ssecmp_128_insn,	3,	SUF_Z,	0x00,	0,	0,	0,	CPU_SSE,	0,	0},
#line 637 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psubsiw",	cyrixmmx_insn,	1,	SUF_Z,	0x55,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1194 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomfalseuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 904 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpngtss",	ssecmp_32_insn,	4,	SUF_Z,	0x0A,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1386 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsubb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xF8,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1267 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpextrb",	pextrb_insn,	3,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1120 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmptrst",	vmxtwobytemem_insn,	1,	SUF_Z,	0x07,	0,	0,	0,	CPU_P4,	0,	0},
#line 1014 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsub231sd",	vfma_sd_insn,	2,	SUF_Z,	0xBB,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 685 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"roundpd",	sse4imm_insn,	2,	SUF_Z,	0x09,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 474 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pabsd",	ssse3_insn,	5,	SUF_Z,	0x1E,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1352 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vprotd",	vprot_insn,	3,	SUF_Z,	0x02,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1038 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmadd231sd",	vfma_sd_insn,	2,	SUF_Z,	0xBD,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1110 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovntps",	movnt_insn,	2,	SUF_Z,	0x00,	0x2B,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 638 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psubsw",	mmxsse2_insn,	2,	SUF_Z,	0xE9,	0,	0,	0,	CPU_MMX,	0,	0},
#line 582 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmovzxwd",	sse4m64_insn,	4,	SUF_Z,	0x33,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 542 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"phaddd",	ssse3_insn,	5,	SUF_Z,	0x02,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1363 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpshlw",	amd_vpshift_insn,	2,	SUF_Z,	0x95,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1407 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vroundps",	avx_sse4imm_insn,	3,	SUF_Z,	0x08,	0,	0,	ONLY_AVX,	CPU_SSE41,	0,	0},
#line 1430 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vunpcklps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x14,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 980 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmadd132pd",	vfma_pd_insn,	2,	SUF_Z,	0x98,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 578 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmovzxbd",	sse4m32_insn,	4,	SUF_Z,	0x31,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 663 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rcpss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x53,	0,	0,	CPU_SSE,	0,	0},
#line 1081 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmaxps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1254 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomub",	vpcom_imm_insn,	1,	SUF_Z,	0xEC,	0,	0,	0,	CPU_XOP,	0,	0},
#line 936 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmptrue_usss",	ssecmp_32_insn,	4,	SUF_Z,	0x1F,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1277 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphaddbw",	vphaddsub_insn,	1,	SUF_Z,	0xC1,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1304 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmacssdd",	vpma_insn,	1,	SUF_Z,	0x8E,	0,	0,	0,	CPU_XOP,	0,	0},
#line 710 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sete",	setcc_insn,	1,	SUF_Z,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 219 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fcom",	fcom_insn,	6,	SUF_Z,	0xD0,	0x02,	0,	0,	CPU_FPU,	0,	0},
#line 493 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"paveb",	cyrixmmx_insn,	1,	SUF_Z,	0x50,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1278 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphaddd",	ssse3_insn,	5,	SUF_Z,	0x02,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1226 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomltuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 41 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"aeskeygenassist",	aes_imm_insn,	1,	SUF_Z,	0x3A,	0xDF,	0,	0,	CPU_AES,	0,	0},
#line 444 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movss",	movss_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1307 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmacsswd",	vpma_insn,	1,	SUF_Z,	0x86,	0,	0,	0,	CPU_XOP,	0,	0},
#line 209 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fchs",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xE0,	0,	0,	CPU_FPU,	0,	0},
#line 1290 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphminposuw",	avx_ssse3_2op_insn,	1,	SUF_Z,	0x41,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 374 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"les",	ldes_insn,	2,	SUF_Z,	0xC4,	0,	0,	NOT_64,	0,	0,	0},
#line 421 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movhlps",	movhllhps_insn,	2,	SUF_Z,	0x12,	0,	0,	0,	CPU_SSE,	0,	0},
#line 19 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"a16",	NULL,	X86_ADDRSIZE>>8,	0x10,	0,	0,	0,	0,	0,	0,	0},
#line 1145 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpaddsw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xED,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1358 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpshaq",	amd_vpshift_insn,	2,	SUF_Z,	0x9B,	0,	0,	0,	CPU_XOP,	0,	0},
#line 387 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lodsq",	onebyte_insn,	1,	SUF_Z,	0xAD,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1298 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpinsrd",	pinsrd_insn,	2,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1227 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomltuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 1186 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomequq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 1273 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpgatherqd",	gather_32x_32y_128_insn,	2,	SUF_Z,	0x91,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1154 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpblendd",	vex_66_0F3A_imm8_avx2_insn,	2,	SUF_Z,	0x02,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 809 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vblendpd",	sse4imm_256_insn,	4,	SUF_Z,	0x0D,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 75 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cdq",	onebyte_insn,	1,	SUF_Z,	0x99,	0x20,	0,	0,	CPU_386,	0,	0},
#line 386 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lodsd",	onebyte_insn,	1,	SUF_Z,	0xAD,	0x20,	0,	0,	CPU_386,	0,	0},
#line 27 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"adcx",	vex_gpr_ndd_rm_0F38_insn,	2,	SUF_Z,	0x66,	0xF6,	0,	0,	CPU_ADX,	0,	0},
#line 432 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movntpd",	movnt_insn,	2,	SUF_Z,	0x66,	0x2B,	0,	0,	CPU_SSE2,	0,	0},
#line 264 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fnstcw",	fldnstcw_insn,	1,	SUF_Z,	0x07,	0,	0,	0,	CPU_FPU,	0,	0},
#line 671 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rdshr",	rdwrshr_insn,	1,	SUF_Z,	0x00,	0,	0,	0,	CPU_686,	CPU_Cyrix,	CPU_SMM},
#line 545 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"phminposuw",	sse4_insn,	2,	SUF_Z,	0x41,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 502 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pclmullqlqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x00,	0,	0,	0,	CPU_AVX,	0,	0},
#line 1432 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vxorps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x57,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 782 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"tzcnt",	cnt_insn,	3,	SUF_Z,	0xBC,	0,	0,	0,	CPU_BMI1,	0,	0},
#line 1192 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomfalseub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 1251 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomtrueuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 535 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pfrcp",	now3d_insn,	1,	SUF_Z,	0x96,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 503 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pclmulqdq",	pclmulqdq_insn,	2,	SUF_Z,	0x3A,	0x44,	0,	0,	CPU_AVX,	0,	0},
#line 966 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcvttps2dq",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0xF3,	0x5B,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 893 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpngepd",	ssecmp_128_insn,	3,	SUF_Z,	0x09,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 424 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movlhps",	movhllhps_insn,	2,	SUF_Z,	0x16,	0,	0,	0,	CPU_SSE,	0,	0},
#line 243 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fistp",	fildstp_insn,	4,	SUF_Z,	0x03,	0x02,	0x07,	0,	CPU_FPU,	0,	0},
#line 517 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pdistib",	cyrixmmx_insn,	1,	SUF_Z,	0x54,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1152 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpavgb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xE0,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 204 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fabs",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xE1,	0,	0,	CPU_FPU,	0,	0},
#line 876 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpneq_oqss",	ssecmp_32_insn,	4,	SUF_Z,	0x0C,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1103 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovlpd",	movhlp_insn,	3,	SUF_Z,	0x66,	0x12,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 816 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vbroadcastss",	vbroadcastss_insn,	4,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 900 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpngt_uqss",	ssecmp_32_insn,	4,	SUF_Z,	0x1A,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 686 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"roundps",	sse4imm_insn,	2,	SUF_Z,	0x08,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1385 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsrlw",	vpshift_insn,	8,	SUF_Z,	0xD1,	0x71,	0x02,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 447 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movsxd",	movsxd_insn,	1,	SUF_Z,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 288 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fsubrp",	farithp_insn,	3,	SUF_Z,	0xE0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1090 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmlaunch",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xC2,	0,	CPU_P4,	0,	0},
#line 728 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setnz",	setcc_insn,	1,	SUF_Z,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 166 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvtdq2ps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x5B,	0,	0,	CPU_SSE2,	0,	0},
#line 1025 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsubps",	fma_128_256_insn,	4,	SUF_Z,	0x6C,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 468 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"orps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x56,	0,	0,	CPU_SSE,	0,	0},
#line 123 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmplesd",	ssecmp_64_insn,	4,	SUF_Z,	0x02,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 398 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"maskmovdqu",	maskmovdqu_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 609 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"prefetchnta",	twobytemem_insn,	1,	SUF_Z,	0x00,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 382 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"loadall",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x07,	0,	0,	CPU_386,	CPU_Undoc,	0},
#line 154 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpunordsd",	ssecmp_64_insn,	4,	SUF_Z,	0x03,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 78 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"clc",	onebyte_insn,	1,	SUF_Z,	0xF8,	0,	0,	0,	0,	0,	0},
#line 1204 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomgew",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 33 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"addsubpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0xD0,	0,	0,	CPU_SSE3,	0,	0},
#line 544 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"phaddw",	ssse3_insn,	5,	SUF_Z,	0x01,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1280 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphaddsw",	ssse3_insn,	5,	SUF_Z,	0x03,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 823 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpeq_uqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x08,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 155 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpunordss",	ssecmp_32_insn,	4,	SUF_Z,	0x03,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 147 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpsb",	onebyte_insn,	1,	SUF_Z,	0xA6,	0x00,	0,	0,	0,	0,	0},
#line 1127 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmulsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 662 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rcpps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x53,	0,	0,	CPU_SSE,	0,	0},
#line 479 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"packuswb",	mmxsse2_insn,	2,	SUF_Z,	0x67,	0,	0,	0,	CPU_MMX,	0,	0},
#line 843 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpge_oqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x1D,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 84 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"clzero",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xFC,	0,	CPU_AMD,	0,	0},
#line 396 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"ltr",	prot286_insn,	1,	SUF_Z,	0x03,	0x00,	0,	0,	CPU_286,	CPU_Priv,	CPU_Prot},
#line 1284 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphaddudq",	vphaddsub_insn,	1,	SUF_Z,	0xDB,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1282 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphaddubq",	vphaddsub_insn,	1,	SUF_Z,	0xD3,	0,	0,	0,	CPU_XOP,	0,	0},
#line 212 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fcmovbe",	fcmovcc_insn,	1,	SUF_Z,	0xDA,	0xD0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1426 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vucomiss",	avx_xmm_xmm32_insn,	2,	SUF_Z,	0x00,	0x2E,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1446 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xchg",	xchg_insn,	16,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 705 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"seta",	setcc_insn,	1,	SUF_Z,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 588 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmulhrwc",	cyrixmmx_insn,	1,	SUF_Z,	0x59,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1423 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vtestpd",	sse4_insn,	2,	SUF_Z,	0x0F,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1073 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vinserti128",	vinsertif128_insn,	1,	SUF_Z,	0x38,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 130 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpneqps",	ssecmp_128_insn,	3,	SUF_Z,	0x04,	0,	0,	0,	CPU_SSE,	0,	0},
#line 230 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"femms",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x0E,	0,	0,	CPU_3DNow,	0,	0},
#line 560 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmaxsd",	sse4_insn,	2,	SUF_Z,	0x3D,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 833 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpfalse_ospd",	ssecmp_128_insn,	3,	SUF_Z,	0x1B,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1427 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vunpckhpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x15,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 709 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setc",	setcc_insn,	1,	SUF_Z,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 1004 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsub132pd",	vfma_pd_insn,	2,	SUF_Z,	0x9A,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 372 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lea",	lea_insn,	3,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 464 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"o32",	NULL,	X86_OPERSIZE>>8,	0x20,	0,	0,	0,	0,	0,	0,	0},
#line 453 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"mulpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x59,	0,	0,	CPU_SSE2,	0,	0},
#line 20 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"a32",	NULL,	X86_ADDRSIZE>>8,	0x20,	0,	0,	0,	0,	0,	0,	0},
#line 441 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movshdup",	xmm_xmm128_insn,	2,	SUF_Z,	0xF3,	0x16,	0,	0,	CPU_SSE3,	0,	0},
#line 519 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pextrb",	pextrb_insn,	3,	SUF_Z,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 800 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vaesdeclast",	aes_insn,	2,	SUF_Z,	0x38,	0xDF,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 112 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovpe",	cmovcc_insn,	3,	SUF_Z,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 1335 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmovsxwq",	sse4m32_insn,	4,	SUF_Z,	0x24,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1414 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vsqrtpd",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x51,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1310 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmacsww",	vpma_insn,	1,	SUF_Z,	0x95,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1000 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmaddsub231pd",	vfma_pd_insn,	2,	SUF_Z,	0xB6,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 321 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"int3",	onebyte_insn,	1,	SUF_Z,	0xCC,	0,	0,	0,	0,	0,	0},
#line 951 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcvtdq2pd",	avx_cvt_xmm64_insn,	3,	SUF_Z,	0xF3,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 246 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fisubr",	fiarith_insn,	2,	SUF_Z,	0x05,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1156 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpblendw",	sse4imm_256avx2_insn,	4,	SUF_Z,	0x0E,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 601 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"popaw",	onebyte_insn,	1,	SUF_Z,	0x61,	0x10,	0,	NOT_64,	CPU_186,	0,	0},
#line 891 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnge_uqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x19,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 757 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"stc",	onebyte_insn,	1,	SUF_Z,	0xF9,	0,	0,	0,	0,	0,	0},
#line 555 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmachriw",	pmachriw_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 629 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psrld",	pshift_insn,	4,	SUF_Z,	0xD2,	0x72,	0x02,	0,	CPU_MMX,	0,	0},
#line 1301 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmacsdd",	vpma_insn,	1,	SUF_Z,	0x9E,	0,	0,	0,	CPU_XOP,	0,	0},
#line 89 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovbe",	cmovcc_insn,	3,	SUF_Z,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 34 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"addsubps",	xmm_xmm128_insn,	2,	SUF_Z,	0xF2,	0xD0,	0,	0,	CPU_SSE3,	0,	0},
#line 1346 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmulld",	ssse3_insn,	5,	SUF_Z,	0x40,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1454 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xlatb",	onebyte_insn,	1,	SUF_Z,	0xD7,	0x00,	0,	0,	0,	0,	0},
#line 54 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"blcs",	xop_gpr_reg_rm_09_insn,	2,	SUF_Z,	0x01,	0x03,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 1374 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsllvd",	vpshiftv_vexw0_avx2_insn,	2,	SUF_Z,	0x47,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 353 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jnge",	jcc_insn,	9,	SUF_Z,	0x0C,	0,	0,	0,	0,	0,	0},
#line 942 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpunord_sps",	ssecmp_128_insn,	3,	SUF_Z,	0x13,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 625 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psllq",	pshift_insn,	4,	SUF_Z,	0xF3,	0x73,	0x06,	0,	CPU_MMX,	0,	0},
#line 290 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fucom",	fcom2_insn,	2,	SUF_Z,	0xDD,	0xE0,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 1368 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsignb",	ssse3_insn,	5,	SUF_Z,	0x08,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 922 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpord_sps",	ssecmp_128_insn,	3,	SUF_Z,	0x17,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1398 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpunpckhwd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x69,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1271 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpgatherdd",	gather_32x_32y_insn,	2,	SUF_Z,	0x90,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 63 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"blsr",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_Z,	0x00,	0xF3,	0x01,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 799 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vaesdec",	aes_insn,	2,	SUF_Z,	0x38,	0xDE,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 324 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"invept",	eptvpid_insn,	2,	SUF_Z,	0x00,	0,	0,	0,	CPU_386,	CPU_EPTVPID,	0},
#line 682 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rol",	shift_insn,	16,	SUF_Z,	0x00,	0,	0,	0,	0,	0,	0},
#line 644 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"punpckhbw",	mmxsse2_insn,	2,	SUF_Z,	0x68,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1210 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomgtuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 127 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpltsd",	ssecmp_64_insn,	4,	SUF_Z,	0x01,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 221 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fcomip",	fcom2_insn,	2,	SUF_Z,	0xDF,	0xF0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 990 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmadd231sd",	vfma_sd_insn,	2,	SUF_Z,	0xB9,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 57 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"blendvpd",	sse4xmm0_insn,	2,	SUF_Z,	0x15,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 941 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpunord_spd",	ssecmp_128_insn,	3,	SUF_Z,	0x13,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 884 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpneq_usss",	ssecmp_32_insn,	4,	SUF_Z,	0x14,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1163 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpclmullqhqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x10,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 522 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pextrw",	pextrw_insn,	7,	SUF_Z,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 313 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"inc",	incdec_insn,	6,	SUF_Z,	0x40,	0x00,	0,	0,	0,	0,	0},
#line 326 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"invlpga",	invlpga_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_SVM,	0,	0},
#line 792 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"unpcklps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x14,	0,	0,	CPU_SSE,	0,	0},
#line 852 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpgt_oqss",	ssecmp_32_insn,	4,	SUF_Z,	0x1E,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 946 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpunordps",	ssecmp_128_insn,	3,	SUF_Z,	0x03,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 549 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pi2fd",	now3d_insn,	1,	SUF_Z,	0x0D,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1032 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmadd213pd",	vfma_pd_insn,	2,	SUF_Z,	0xAC,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 543 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"phaddsw",	ssse3_insn,	5,	SUF_Z,	0x03,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1447 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xcryptcbc",	padlock_insn,	1,	SUF_Z,	0xD0,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 1347 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmullw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xD5,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 59 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"blsfill",	xop_gpr_reg_rm_09_insn,	2,	SUF_Z,	0x01,	0x02,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 42 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"and",	arith_insn,	22,	SUF_Z,	0x20,	0x04,	0,	0,	0,	0,	0},
#line 1442 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"xacquire",	NULL,	X86_ACQREL>>8,	0xF2,	0,	0,	0,	0,	0,	0,	0},
#line 541 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pfsubr",	now3d_insn,	1,	SUF_Z,	0xAA,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1422 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vsubss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1252 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomtrueuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 702 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"scasd",	onebyte_insn,	1,	SUF_Z,	0xAF,	0x20,	0,	0,	CPU_386,	0,	0},
#line 481 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"paddd",	mmxsse2_insn,	2,	SUF_Z,	0xFE,	0,	0,	0,	CPU_MMX,	0,	0},
#line 492 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pause",	onebyte_prefix_insn,	1,	SUF_Z,	0xF3,	0x90,	0,	0,	CPU_P4,	0,	0},
#line 511 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pcmpgtd",	mmxsse2_insn,	2,	SUF_Z,	0x66,	0,	0,	0,	CPU_MMX,	0,	0},
#line 863 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmplesd",	ssecmp_64_insn,	4,	SUF_Z,	0x02,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1070 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vhsubpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x7D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 812 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vblendvps",	avx_sse4xmm0_insn,	2,	SUF_Z,	0x4A,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 855 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpgtsd",	ssecmp_64_insn,	4,	SUF_Z,	0x0E,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1171 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcmpestri",	sse4pcmpstr_insn,	1,	SUF_Z,	0x61,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 457 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"mulx",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Z,	0xF2,	0x38,	0xF6,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1176 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcmpgtw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x65,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1406 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vroundpd",	avx_sse4imm_insn,	3,	SUF_Z,	0x09,	0,	0,	ONLY_AVX,	CPU_SSE41,	0,	0},
#line 373 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"leave",	onebyte_insn,	1,	SUF_Z,	0xC9,	0x00,	0x40,	0,	CPU_186,	0,	0},
#line 366 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jz",	jcc_insn,	9,	SUF_Z,	0x04,	0,	0,	0,	0,	0,	0},
#line 641 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psubw",	mmxsse2_insn,	2,	SUF_Z,	0xF9,	0,	0,	0,	CPU_MMX,	0,	0},
#line 354 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jnl",	jcc_insn,	9,	SUF_Z,	0x0D,	0,	0,	0,	0,	0,	0},
#line 636 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psubsb",	mmxsse2_insn,	2,	SUF_Z,	0xE8,	0,	0,	0,	CPU_MMX,	0,	0},
#line 658 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pushfq",	onebyte_insn,	1,	SUF_Z,	0x9C,	0x40,	0x40,	ONLY_64,	0,	0,	0},
#line 831 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpeqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x00,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1023 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmsubaddps",	fma_128_256_insn,	4,	SUF_Z,	0x5E,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 158 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpxchg486",	cmpxchgxadd_insn,	4,	SUF_Z,	0xA6,	0,	0,	0,	CPU_486,	CPU_Undoc,	0},
#line 61 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"blsic",	xop_gpr_reg_rm_09_insn,	2,	SUF_Z,	0x01,	0x06,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 343 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jl",	jcc_insn,	9,	SUF_Z,	0x0C,	0,	0,	0,	0,	0,	0},
#line 742 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"shrx",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Z,	0xF2,	0x38,	0xF7,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1403 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpxor",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xEF,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 330 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"iretd",	onebyte_insn,	1,	SUF_Z,	0xCF,	0x20,	0,	0,	CPU_386,	0,	0},
#line 420 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movdqu",	movau_insn,	6,	SUF_Z,	0xF3,	0x6F,	0x10,	0,	CPU_SSE2,	0,	0},
#line 495 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pavgusb",	now3d_insn,	1,	SUF_Z,	0xBF,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 376 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lfs",	lfgss_insn,	3,	SUF_Z,	0xB4,	0,	0,	0,	CPU_386,	0,	0},
#line 1095 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovd",	vmovd_insn,	2,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_386,	CPU_AVX,	0},
#line 1100 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovhpd",	movhlp_insn,	3,	SUF_Z,	0x66,	0x16,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 976 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"verw",	prot286_insn,	1,	SUF_Z,	0x05,	0x00,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1340 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmovzxwd",	sse4m64_insn,	4,	SUF_Z,	0x33,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 122 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpleps",	ssecmp_128_insn,	3,	SUF_Z,	0x02,	0,	0,	0,	CPU_SSE,	0,	0},
#line 487 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"paddusw",	mmxsse2_insn,	2,	SUF_Z,	0xDD,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1425 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vucomisd",	avx_xmm_xmm64_insn,	2,	SUF_Z,	0x66,	0x2E,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 250 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fldenv",	onebytemem_insn,	1,	SUF_Z,	0x04,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 633 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"psubb",	mmxsse2_insn,	2,	SUF_Z,	0xF8,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1177 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcmpistri",	sse4pcmpstr_insn,	1,	SUF_Z,	0x63,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 983 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmadd132ss",	vfma_ss_insn,	2,	SUF_Z,	0x99,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 99 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovnbe",	cmovcc_insn,	3,	SUF_Z,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 173 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvtps2pd",	xmm_xmm64_insn,	4,	SUF_Z,	0x00,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 199 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"emms",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x77,	0,	0,	CPU_MMX,	0,	0},
#line 1111 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovq",	vmovq_insn,	5,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 377 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"lgdt",	twobytemem_insn,	1,	SUF_Z,	0x02,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1354 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vprotw",	vprot_insn,	3,	SUF_Z,	0x01,	0,	0,	0,	CPU_XOP,	0,	0},
#line 309 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"ibts",	ibts_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_Obs,	CPU_Undoc},
#line 180 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvtss2si",	cvt_rx_xmm32_insn,	4,	SUF_Z,	0xF3,	0x2D,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 864 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpless",	ssecmp_32_insn,	4,	SUF_Z,	0x02,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 740 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"shr",	shift_insn,	16,	SUF_Z,	0x05,	0,	0,	0,	0,	0,	0},
#line 964 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcvtss2si",	cvt_rx_xmm32_insn,	4,	SUF_Z,	0xF3,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 822 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpeq_uqps",	ssecmp_128_insn,	3,	SUF_Z,	0x08,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 176 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvtsd2ss",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 570 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pminuw",	sse4_insn,	2,	SUF_Z,	0x3A,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 850 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpgt_oqps",	ssecmp_128_insn,	3,	SUF_Z,	0x1E,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 895 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpngesd",	ssecmp_64_insn,	4,	SUF_Z,	0x09,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 577 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pmovsxwq",	sse4m32_insn,	4,	SUF_Z,	0x24,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 270 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fptan",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF2,	0,	0,	CPU_FPU,	0,	0},
#line 837 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpfalsepd",	ssecmp_128_insn,	3,	SUF_Z,	0x0B,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1275 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vphaddbd",	vphaddsub_insn,	1,	SUF_Z,	0xC2,	0,	0,	0,	CPU_XOP,	0,	0},
#line 194 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"divps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x5E,	0,	0,	CPU_SSE,	0,	0},
#line 523 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pf2id",	now3d_insn,	1,	SUF_Z,	0x1D,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 798 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vaddsubps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0xF2,	0xD0,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 972 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vdivss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 55 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"blendpd",	sse4imm_insn,	2,	SUF_Z,	0x0D,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 132 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpneqss",	ssecmp_32_insn,	4,	SUF_Z,	0x04,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 714 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setle",	setcc_insn,	1,	SUF_Z,	0x0E,	0,	0,	0,	CPU_386,	0,	0},
#line 762 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"stosb",	onebyte_insn,	1,	SUF_Z,	0xAA,	0x00,	0,	0,	0,	0,	0},
#line 22 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"aaa",	onebyte_insn,	1,	SUF_Z,	0x37,	0,	0,	NOT_64,	0,	0,	0},
#line 40 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"aesimc",	aesimc_insn,	1,	SUF_Z,	0x38,	0xDB,	0,	0,	CPU_AES,	0,	0},
#line 231 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"ffree",	ffree_insn,	1,	SUF_Z,	0xDD,	0,	0,	0,	CPU_FPU,	0,	0},
#line 259 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fmulp",	farithp_insn,	3,	SUF_Z,	0xC8,	0,	0,	0,	CPU_FPU,	0,	0},
#line 760 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sti",	onebyte_insn,	1,	SUF_Z,	0xFB,	0,	0,	0,	0,	0,	0},
#line 179 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvtss2sd",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 546 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"phsubd",	ssse3_insn,	5,	SUF_Z,	0x06,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 970 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vdivps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 670 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rdseed",	rdrand_insn,	3,	SUF_Z,	0x07,	0,	0,	0,	CPU_RDSEED,	0,	0},
#line 164 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"crc32",	crc32_insn,	5,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_SSE42,	0},
#line 758 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"std",	onebyte_insn,	1,	SUF_Z,	0xFD,	0,	0,	0,	0,	0,	0},
#line 1380 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpsrld",	vpshift_insn,	8,	SUF_Z,	0xD2,	0x72,	0x02,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 780 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"t1mskc",	xop_gpr_reg_rm_09_insn,	2,	SUF_Z,	0x01,	0x07,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 1040 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmaddpd",	fma_128_256_insn,	4,	SUF_Z,	0x79,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 17 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sha256msg2",	intel_SHA256MSG2_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SHA,	0,	0},
#line 666 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"rdgsbase",	fs_gs_base_insn,	2,	SUF_Z,	0x01,	0,	0,	ONLY_64,	CPU_FSGSBASE,	0,	0},
#line 1213 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomleb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 961 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcvtsi2sd",	cvt_xmm_rmx_insn,	6,	SUF_Z,	0xF2,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 716 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setnae",	setcc_insn,	1,	SUF_Z,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 648 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"punpcklbw",	mmxsse2_insn,	2,	SUF_Z,	0x60,	0,	0,	0,	CPU_MMX,	0,	0},
#line 182 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cvttpd2pi",	cvt_mm_xmm_insn,	1,	SUF_Z,	0x66,	0x2C,	0,	0,	CPU_SSE2,	0,	0},
#line 736 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sgdt",	twobytemem_insn,	1,	SUF_Z,	0x00,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 715 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setna",	setcc_insn,	1,	SUF_Z,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 735 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"sfence",	threebyte_insn,	1,	SUF_Z,	0x0F,	0xAE,	0xF8,	0,	CPU_P3,	0,	0},
#line 451 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"mpsadbw",	sse4imm_insn,	2,	SUF_Z,	0x42,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1300 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpinsrw",	pinsrw_insn,	9,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 909 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpnlepd",	ssecmp_128_insn,	3,	SUF_Z,	0x06,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 808 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vandps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x54,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 391 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"loopne",	loop_insn,	8,	SUF_Z,	0x00,	0,	0,	0,	0,	0,	0},
#line 278 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fsqrt",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xFA,	0,	0,	CPU_FPU,	0,	0},
#line 721 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setng",	setcc_insn,	1,	SUF_Z,	0x0E,	0,	0,	0,	CPU_386,	0,	0},
#line 880 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpneq_osss",	ssecmp_32_insn,	4,	SUF_Z,	0x1C,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1309 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmacswd",	vpma_insn,	1,	SUF_Z,	0x96,	0,	0,	0,	CPU_XOP,	0,	0},
#line 820 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmpeq_osss",	ssecmp_32_insn,	4,	SUF_Z,	0x10,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 730 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setp",	setcc_insn,	1,	SUF_Z,	0x0A,	0,	0,	0,	CPU_386,	0,	0},
#line 149 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpsq",	onebyte_insn,	1,	SUF_Z,	0xA7,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1098 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovdqu",	movau_insn,	6,	SUF_Z,	0xF3,	0x6F,	0x10,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1122 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmresume",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xC3,	0,	CPU_P4,	0,	0},
#line 362 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"jpe",	jcc_insn,	9,	SUF_Z,	0x0A,	0,	0,	0,	0,	0,	0},
#line 1396 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpunpckhdq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x6A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1222 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomltd",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 1114 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovsldup",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0xF3,	0x12,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1146 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpaddusb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xDC,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 749 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"smint",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x38,	0,	0,	CPU_686,	CPU_Cyrix,	0},
#line 512 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pcmpgtq",	sse4_insn,	2,	SUF_Z,	0x37,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1361 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpshld",	amd_vpshift_insn,	2,	SUF_Z,	0x96,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1302 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmacsdqh",	vpma_insn,	1,	SUF_Z,	0x9F,	0,	0,	0,	CPU_XOP,	0,	0},
#line 418 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movdq2q",	movdq2q_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 650 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"punpcklqdq",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x6C,	0,	0,	CPU_SSE2,	0,	0},
#line 1052 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmsub231pd",	vfma_pd_insn,	2,	SUF_Z,	0xBE,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 258 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fmul",	farith_insn,	7,	SUF_Z,	0xC8,	0xC8,	0x01,	0,	CPU_FPU,	0,	0},
#line 53 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"blcmsk",	xop_gpr_reg_rm_09_insn,	2,	SUF_Z,	0x02,	0x01,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 651 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"punpcklwd",	mmxsse2_insn,	2,	SUF_Z,	0x61,	0,	0,	0,	CPU_MMX,	0,	0},
#line 501 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"pclmullqhqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x10,	0,	0,	0,	CPU_AVX,	0,	0},
#line 135 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmpnlesd",	ssecmp_64_insn,	4,	SUF_Z,	0x06,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 1108 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovntdqa",	movntdqa_insn,	2,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 471 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"outsd",	onebyte_insn,	1,	SUF_Z,	0x6F,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1085 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmclear",	vmxthreebytemem_insn,	1,	SUF_Z,	0x66,	0,	0,	0,	CPU_P4,	0,	0},
#line 865 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vcmplt_oqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x11,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 77 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"clac",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xCA,	0,	CPU_SMAP,	0,	0},
#line 1179 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpcomb",	vpcom_imm_insn,	1,	SUF_Z,	0xCC,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1334 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmovsxwd",	sse4m64_insn,	4,	SUF_Z,	0x23,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 417 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"movddup",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x12,	0,	0,	CPU_SSE3,	0,	0},
#line 1362 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpshlq",	amd_vpshift_insn,	2,	SUF_Z,	0x97,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1051 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmsub213ss",	vfma_ss_insn,	2,	SUF_Z,	0xAF,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1345 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmulhw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xE5,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1050 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmsub213sd",	vfma_sd_insn,	2,	SUF_Z,	0xAF,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 111 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"cmovp",	cmovcc_insn,	3,	SUF_Z,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 281 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"fstenv",	twobytemem_insn,	1,	SUF_Z,	0x06,	0x9B,	0xD9,	0,	CPU_FPU,	0,	0},
#line 701 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"scasb",	onebyte_insn,	1,	SUF_Z,	0xAE,	0x00,	0,	0,	0,	0,	0},
#line 996 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfmaddsub132pd",	vfma_pd_insn,	2,	SUF_Z,	0x96,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1394 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vptest",	sse4_insn,	2,	SUF_Z,	0x17,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 476 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"packssdw",	mmxsse2_insn,	2,	SUF_Z,	0x6B,	0,	0,	0,	CPU_MMX,	0,	0},
#line 724 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"setnle",	setcc_insn,	1,	SUF_Z,	0x0F,	0,	0,	0,	CPU_386,	0,	0},
#line 605 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"popfq",	onebyte_insn,	1,	SUF_Z,	0x9D,	0x40,	0x40,	ONLY_64,	0,	0,	0},
#line 783 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"tzmsk",	xop_gpr_reg_rm_09_insn,	2,	SUF_Z,	0x01,	0x04,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 1343 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpmulhrsw",	ssse3_insn,	5,	SUF_Z,	0x0B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1268 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vpextrd",	pextrd_insn,	1,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1102 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmovlhps",	movhllhps_insn,	2,	SUF_Z,	0x16,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1130 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vmxoff",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xC4,	0,	CPU_P4,	0,	0},
#line 1039 "E:/個人用/SDL/SDLTest/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_nasm.gperf"
    {"vfnmadd231ss",	vfma_ss_insn,	2,	SUF_Z,	0xBD,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0}
  };
  static const unsigned short tab[] = {
    1091,83,1140,0,1213,323,1074,864,11,0,281,1140,1020,281,702,0,
    0,1338,0,1312,517,0,1042,323,0,11,11,605,0,0,764,0,
    1529,764,1140,605,323,823,323,1044,988,271,665,1044,665,64,0,1042,
    605,764,427,1044,0,64,1042,1338,281,721,336,333,988,702,64,665,
    0,197,83,764,0,629,1020,0,1213,0,0,988,764,1042,0,11,
    1042,1481,83,159,1044,1140,1042,665,605,1140,351,630,1213,1213,281,1500,
    1042,11,0,517,83,630,702,605,891,1213,1213,281,323,1109,702,1059,
    1185,265,1044,629,323,1212,323,764,111,281,721,1530,1044,1059,1338,629,
    1529,1213,517,11,281,0,764,1042,302,281,1432,1213,605,1203,1212,1020,
    1213,0,1044,0,1218,323,323,0,1140,764,0,508,281,1140,1000,0,
    580,665,0,0,988,1312,1140,517,793,721,281,159,1140,702,1044,1109,
    328,528,1042,1338,0,764,665,605,1059,1034,517,323,553,0,1059,764,
    293,1107,1140,333,1338,1189,733,323,11,1058,1312,1095,0,629,517,1044,
    323,1140,1116,333,215,1140,323,0,702,179,10,0,864,1338,1529,1109,
    1034,665,1042,665,0,1095,0,988,1493,988,1140,1027,1095,988,1140,11,
    567,333,1295,1213,702,83,630,342,1312,762,0,0,11,1379,764,323,
    0,1140,11,764,83,1513,1232,764,1312,159,864,403,94,197,281,665,
    0,891,665,179,51,323,307,764,892,665,764,1044,64,630,1042,281,
    702,1140,665,83,1312,51,517,1383,829,1295,1042,580,764,1042,0,665,
    427,891,874,293,11,1107,83,1045,702,605,0,1140,0,764,517,1140,
    307,665,1519,83,665,824,517,0,665,1213,1481,1481,733,1312,630,702,
    1105,0,281,83,567,83,702,1185,1379,83,473,567,1042,630,1044,444,
    0,281,72,1059,897,517,988,1530,1186,665,824,1140,323,665,702,864,
    864,83,272,1338,0,1312,729,517,1140,159,1432,0,0,823,793,1218,
    427,517,528,180,1312,3,988,302,823,814,1035,281,6,1529,1042,597,
    764,518,75,281,0,0,856,665,88,0,824,1140,1295,83,1140,323,
    1042,1213,0,0,288,1477,567,0,988,517,1312,232,0,764,733,517,
    1232,567,814,197,333,762,702,0,0,630,0,1140,1089,506,1212,395,
    0,1105,597,0,823,0,1425,691,83,1147,1000,75,688,0,6,864,
    518,1109,1489,665,781,281,307,0,733,1165,894,604,351,341,0,1279,
    874,1000,909,665,702,838,1238,332,1044,605,597,1493,1530,665,864,864,
    764,605,620,588,884,0,11,0,94,806,896,775,829,1132,75,937,
  };

  const struct insnprefix_parse_data *ret;
  unsigned long rsl, val = phash_lookup(key, len, 0xbe1e08bbUL);
  rsl = ((val>>23)^tab[val&0x1ff]);
  if (rsl >= 1457) return NULL;
  ret = &pd[rsl];
  if (strcmp(key, ret->name) != 0) return NULL;
  return ret;
}

