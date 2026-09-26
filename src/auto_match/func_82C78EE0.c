typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82C69588();
extern int fn_82C787E8();
extern unsigned int lbl_820FC514;
extern unsigned int lbl_8329F088;
extern unsigned int lbl_8329F090;
extern V16 vectorSplatHalfWord();
extern V16 vectorSplatImmediateSignedHalfWord();
extern V16 vectorSubtractSignedHalfWordSaturate();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82C78EE0(int param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  ushort uVar3;
  int in_r0;
  ulonglong uVar4;
  undefined2 *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined1 *puVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar20 [16];
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  
  iVar10 = *(int *)(param_1 + 0xee4);
  if (*(int *)(param_1 + 0xed0) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xed0);
  }
  if (*(int *)(param_1 + 0xed4) == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xed4);
  }
  iVar13 = *(int *)(param_1 + 0xef4);
  if (*(int *)(param_1 + 0xeec) == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xeec);
  }
  if (*(int *)(param_1 + 0xef0) == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xef0);
  }
  fn_82C787E8(param_1,param_2);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x16c);
  *(int *)(param_2 + 0xc) = *(int *)(param_1 + 0x50d0) * 0x90 + *(int *)(param_1 + 0x170);
  *(int *)(param_2 + 0x10) = *(int *)(param_1 + 0x50d0) * 0x120 + *(int *)(param_1 + 0x174);
  *(int *)(param_2 + 0x14) = *(int *)(param_1 + 0x50d0) * 0x1f8 + *(int *)(param_1 + 0x178);
  *(char *)(param_2 + 0x18) =
       (char)*(undefined4 *)(param_1 + 0xf8) * '\x02' + (char)*(undefined4 *)(param_1 + 0xfc) + -1;
  *(char *)(param_2 + 0x19) = (char)*(undefined4 *)(param_1 + 0x160);
  *(char *)(param_2 + 0x1a) = (char)*(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(param_2 + 0x150) = *(undefined4 *)(param_1 + 0x94c);
  *(undefined4 *)(param_2 + 0x154) = *(undefined4 *)(param_1 + 0x51e8);
  *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(param_1 + 0x51fc);
  *(char *)(param_2 + 0x1b) = (char)*(undefined4 *)(param_1 + 0x11c);
  *(char *)(param_2 + 0x1c) = (char)*(undefined4 *)(param_1 + 0x18c);
  *(char *)(param_2 + 0x1d) = (char)*(undefined4 *)(param_1 + 0x14c);
  *(bool *)(param_2 + 0x1e) = *(int *)(param_1 + 0xfb0) == 3 || *(int *)(param_1 + 0xfb0) == 2;
  *(undefined4 *)(param_2 + 0x164) = *(undefined4 *)(param_1 + 0x860);
  *(undefined4 *)(param_2 + 0x168) = *(undefined4 *)(param_1 + 0x9d8);
  *(undefined2 *)(param_2 + 0x2e) = 0;
  *(undefined2 *)(param_2 + 0x2c) = 0;
  *(short *)(param_2 + 0x3e) = (short)*(undefined4 *)(param_1 + 0x1a4);
  *(short *)(param_2 + 0x40) = (short)*(undefined4 *)(param_1 + 0x1a8);
  *(short *)(param_2 + 0x42) = (short)*(undefined4 *)(param_1 + 0x1ac);
  *(short *)(param_2 + 0x44) = (short)*(undefined4 *)(param_1 + 0x1b0);
  *(short *)(param_2 + 0x46) = (short)*(undefined4 *)(param_1 + 0x19c);
  *(short *)(param_2 + 0x48) = (short)*(undefined4 *)(param_1 + 0x1a0);
  *(char *)(param_2 + 0x20) = (char)*(undefined4 *)(param_1 + 0x39f4);
  *(char *)(param_2 + 0x1f) = (char)*(undefined4 *)(param_1 + 0x704);
  *(char *)(param_2 + 0x22) = (char)*(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(param_2 + 0x184) = *(undefined4 *)(param_1 + 0x19d0);
  uVar16 = *(undefined4 *)(param_1 + 0x39e0);
  *(int *)(param_2 + 400) = param_1 + 0xb88;
  *(undefined4 *)(param_2 + 0x188) = uVar16;
  *(int *)(param_2 + 0x18c) = param_1 + 0xb7c;
  *(undefined4 *)(param_2 + 0x194) = *(undefined4 *)(param_1 + 0xb64);
  *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_1 + 0xb68);
  *(undefined4 *)(param_2 + 0x19c) = *(undefined4 *)(param_1 + 0xb6c);
  *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_1 + 0xb70);
  *(undefined4 *)(param_2 + 0x1a4) = *(undefined4 *)(param_1 + 0xb74);
  *(undefined4 *)(param_2 + 0x1a8) = *(undefined4 *)(param_1 + 0xb78);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x798);
  *(char *)(param_2 + 0x21) = (char)*(undefined4 *)(param_1 + 0xbbc);
  *(undefined4 *)(param_2 + 0x1bc) = *(undefined4 *)(param_1 + 0x72c);
  *(char *)(param_2 + 0x30) = (char)*(undefined4 *)(param_1 + 0x1cc);
  *(undefined1 *)(param_2 + 0x31) = 0;
  *(char *)(param_2 + 0x23) = (char)*(undefined4 *)(param_1 + 0xf78);
  *(short *)(param_2 + 0x170) = (short)*(undefined4 *)(param_1 + 0x88) * -6;
  *(short *)(param_2 + 0x172) = (short)*(undefined4 *)(param_1 + 0x88) << 1;
  *(short *)(param_2 + 0x174) = (short)*(undefined4 *)(param_1 + 0x88) << 1;
  *(short *)(param_2 + 0x176) = (short)*(undefined4 *)(param_1 + 0x88) << 1;
  *(short *)(param_2 + 0x16c) = -(short)*(undefined4 *)(param_1 + 0x88);
  *(short *)(param_2 + 0x16e) = (short)*(undefined4 *)(param_1 + 0x88);
  if (iVar10 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (*(int *)(param_1 + 0xcc) >> 1) * *(int *)(param_1 + 0x50d0) + iVar10;
  }
  *(int *)(param_2 + 0x1d0) = iVar9;
  iVar8 = iVar9 + 8;
  if (iVar9 == 0) {
    iVar8 = 0;
  }
  *(int *)(param_2 + 0x1d4) = iVar8;
  if (iVar9 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 0xcc) * 8 + iVar9;
  }
  *(int *)(param_2 + 0x1d8) = iVar8;
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (*(int *)(param_1 + 0xcc) + 1) * 8 + iVar9;
  }
  *(int *)(param_2 + 0x1dc) = iVar9;
  if (iVar11 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (*(int *)(param_1 + 0xd0) >> 1) * *(int *)(param_1 + 0x50d0) + iVar11;
  }
  *(int *)(param_2 + 0x1e0) = iVar9;
  if (iVar12 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (*(int *)(param_1 + 0xd0) >> 1) * *(int *)(param_1 + 0x50d0) + iVar12;
  }
  *(int *)(param_2 + 0x1e4) = iVar9;
  if (iVar13 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (*(int *)(param_1 + 0xcc) >> 1) * *(int *)(param_1 + 0x50d0) + iVar13;
  }
  *(int *)(param_2 + 0x200) = iVar9;
  iVar8 = iVar9 + 8;
  if (iVar9 == 0) {
    iVar8 = 0;
  }
  *(int *)(param_2 + 0x204) = iVar8;
  if (iVar9 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 0xcc) * 8 + iVar9;
  }
  *(int *)(param_2 + 0x208) = iVar8;
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (*(int *)(param_1 + 0xcc) + 1) * 8 + iVar9;
  }
  *(int *)(param_2 + 0x20c) = iVar9;
  if (iVar14 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (*(int *)(param_1 + 0xd0) >> 1) * *(int *)(param_1 + 0x50d0) + iVar14;
  }
  *(int *)(param_2 + 0x210) = iVar9;
  if (iVar15 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (*(int *)(param_1 + 0xd0) >> 1) * *(int *)(param_1 + 0x50d0) + iVar15;
  }
  *(int *)(param_2 + 0x214) = iVar9;
  if (*(int *)(param_1 + 0x54c8) == 0) {
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (*(int *)(param_1 + 0xcc) >> 1) * *(int *)(param_1 + 0x50d0) + iVar10;
    }
    *(int *)(param_2 + 0x1e8) = iVar10;
    iVar9 = iVar10 + 8;
    if (iVar10 == 0) {
      iVar9 = 0;
    }
    *(int *)(param_2 + 0x1ec) = iVar9;
    if (iVar10 == 0) {
LAB_82c7936c:
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(param_1 + 0xcc) * 8 + iVar10;
    }
LAB_82c79370:
    *(int *)(param_2 + 0x1f0) = iVar9;
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (*(int *)(param_1 + 0xcc) + 1) * 8 + iVar10;
    }
    *(int *)(param_2 + 500) = iVar10;
    if (iVar11 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = (*(int *)(param_1 + 0xd0) >> 1) * (*(uint *)(param_1 + 0x50d0) ^ 1) + iVar11;
    }
    *(int *)(param_2 + 0x1f8) = iVar11;
    if (iVar12 != 0) {
      iVar12 = (*(int *)(param_1 + 0xd0) >> 1) * (*(uint *)(param_1 + 0x50d0) ^ 1) + iVar12;
      goto LAB_82c79544;
    }
  }
  else {
    if ((*(int *)(param_1 + 0x120) == 2) && (*(int *)(param_1 + 0x50f8) != 0)) {
      if (iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = (*(int *)(param_1 + 0xcc) >> 1) + iVar10;
      }
      *(int *)(param_2 + 0x1e8) = iVar10;
      iVar9 = iVar10 + 8;
      if (iVar10 == 0) {
        iVar9 = 0;
      }
      *(int *)(param_2 + 0x1ec) = iVar9;
      if (iVar10 == 0) goto LAB_82c7936c;
      iVar9 = *(int *)(param_1 + 0xcc) * 8 + iVar10;
      goto LAB_82c79370;
    }
    if (*(int *)(param_1 + 0xec0) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (*(int *)(param_1 + 0xcc) >> 1) * *(int *)(param_1 + 0x50d0) +
               *(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xec0);
    }
    *(int *)(param_2 + 0x1e8) = iVar10;
    iVar11 = iVar10 + 8;
    if (iVar10 == 0) {
      iVar11 = 0;
    }
    *(int *)(param_2 + 0x1ec) = iVar11;
    if (iVar10 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(param_1 + 0xcc) * 8 + iVar10;
    }
    *(int *)(param_2 + 0x1f0) = iVar11;
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (*(int *)(param_1 + 0xcc) + 1) * 8 + iVar10;
    }
    *(int *)(param_2 + 500) = iVar10;
    if (*(int *)(param_1 + 0xec4) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (*(int *)(param_1 + 0xd0) >> 1) * (*(uint *)(param_1 + 0x50d0) ^ 1) +
               *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xec4);
    }
    *(int *)(param_2 + 0x1f8) = iVar10;
    if (*(int *)(param_1 + 0xec8) != 0) {
      iVar12 = (*(int *)(param_1 + 0xd0) >> 1) * (*(uint *)(param_1 + 0x50d0) ^ 1) +
               *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xec8);
      goto LAB_82c79544;
    }
  }
  iVar12 = 0;
LAB_82c79544:
  *(int *)(param_2 + 0x1fc) = iVar12;
  if (iVar13 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = (*(int *)(param_1 + 0xcc) >> 1) * *(int *)(param_1 + 0x50d0) + iVar13;
  }
  *(int *)(param_2 + 0x218) = iVar13;
  iVar10 = iVar13 + 8;
  if (iVar13 == 0) {
    iVar10 = 0;
  }
  *(int *)(param_2 + 0x21c) = iVar10;
  if (iVar13 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(param_1 + 0xcc) * 8 + iVar13;
  }
  *(int *)(param_2 + 0x220) = iVar10;
  if (iVar13 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = (*(int *)(param_1 + 0xcc) + 1) * 8 + iVar13;
  }
  *(int *)(param_2 + 0x224) = iVar13;
  if (iVar14 == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = (*(int *)(param_1 + 0xd0) >> 1) * (*(uint *)(param_1 + 0x50d0) ^ 1) + iVar14;
  }
  *(int *)(param_2 + 0x228) = iVar14;
  if (iVar15 == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = (*(int *)(param_1 + 0xd0) >> 1) * (*(uint *)(param_1 + 0x50d0) ^ 1) + iVar15;
  }
  *(int *)(param_2 + 0x22c) = iVar15;
  *(undefined2 *)(param_2 + 0x498) = 2;
  iVar10 = 0;
  uVar7 = *(int *)(param_1 + 0xcc) + 0x20;
  lVar18 = 0x10;
  puVar5 = (undefined2 *)(param_2 + 0x4a6);
  *(short *)(param_2 + 0x49a) = (short)((int)(uVar7 * 4 | uVar7 >> 0x1e) >> 6);
  uVar7 = *(int *)(param_1 + 0xcc) + 0x10;
  *(short *)(param_2 + 0x49c) = (short)((int)(uVar7 * 8 | uVar7 >> 0x1d) >> 6);
  *(short *)(param_2 + 0x49e) = (short)(*(int *)(param_1 + 0xcc) * 0xc + 0x80 >> 6);
  uVar7 = *(int *)(param_1 + 0xcc) + 8;
  *(short *)(param_2 + 0x4a0) = (short)((int)(uVar7 * 0x10 | uVar7 >> 0x1c) >> 6);
  *(short *)(param_2 + 0x4a2) = (short)(*(int *)(param_1 + 0xcc) * 0x14 + 0x80 >> 6);
  *(short *)(param_2 + 0x4a4) = (short)(*(int *)(param_1 + 0xcc) * 0x18 + 0x80 >> 6);
  *(short *)(param_2 + 0x4a6) = (short)(*(int *)(param_1 + 0xcc) * 0x1c + 0x80 >> 6);
  do {
    iVar11 = *(int *)(param_1 + 0xd0) * iVar10;
    iVar10 = iVar10 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = (short)(iVar11 + 0x80 >> 6);
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  if (*(int *)(param_1 + 0xec0) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = (*(int *)(param_1 + 0xcc) >> 1) * *(int *)(param_1 + 0x50d0) + *(int *)(param_1 + 0xdc)
             + *(int *)(param_1 + 0xec0);
  }
  *(int *)(param_2 + 0x230) = iVar10;
  iVar11 = iVar10 + 8;
  if (iVar10 == 0) {
    iVar11 = 0;
  }
  *(int *)(param_2 + 0x234) = iVar11;
  if (iVar10 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(param_1 + 0xcc) * 8 + iVar10;
  }
  *(int *)(param_2 + 0x238) = iVar11;
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = (*(int *)(param_1 + 0xcc) + 1) * 8 + iVar10;
  }
  *(int *)(param_2 + 0x23c) = iVar10;
  if (*(int *)(param_1 + 0xec4) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = (*(int *)(param_1 + 0xd0) >> 1) * *(int *)(param_1 + 0x50d0) + *(int *)(param_1 + 0xe0)
             + *(int *)(param_1 + 0xec4);
  }
  *(int *)(param_2 + 0x240) = iVar10;
  if (*(int *)(param_1 + 0xec8) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = (*(int *)(param_1 + 0xd0) >> 1) * *(int *)(param_1 + 0x50d0) + *(int *)(param_1 + 0xe0)
             + *(int *)(param_1 + 0xec8);
  }
  *(int *)(param_2 + 0x244) = iVar10;
  uVar16 = *(undefined4 *)(param_1 + 0xbc8);
  *(undefined4 *)(param_2 + 0x24c) = uVar16;
  *(undefined4 *)(param_2 + 0x248) = uVar16;
  uVar16 = *(undefined4 *)(param_1 + 0xbd0);
  *(undefined4 *)(param_2 + 0x254) = uVar16;{ V16 _vt0 = vectorSplatImmediateSignedHalfWord(8); memcpy(auVar20, &_vt0, 16); }
  *(undefined4 *)(param_2 + 0x250) = uVar16;
  *(undefined4 *)(param_2 + 600) = *(undefined4 *)(param_1 + 0xbd4);
  *(undefined4 *)(param_2 + 0x25c) = *(undefined4 *)(param_1 + 0xbdc);
  *(undefined4 *)(param_2 + 0x260) = *(undefined4 *)(param_1 + 0xa00);
  *(undefined4 *)(param_2 + 0x264) = *(undefined4 *)(param_1 + 0x9b0);
  bVar1 = *(byte *)(param_2 + 0x23);
  *(undefined4 *)(param_2 + 0x26c) = *(undefined4 *)(param_1 + 0x740);
  *(undefined4 *)(param_2 + 0x270) = *(undefined4 *)(param_1 + 0x744);
  uVar16 = *(undefined4 *)(param_1 + 0x748);
  *(uint *)(param_2 + 0x484) = 0x400040 - (uint)bVar1;
  *(uint *)(param_2 + 0x470) = bVar1 + 0x1f001f;
  *(uint *)(param_2 + 0x474) = bVar1 + 0xf000f;
  *(uint *)(param_2 + 0x478) = bVar1 + 0x70007;
  *(uint *)(param_2 + 0x47c) = bVar1 + 0x30003;
  *(undefined4 *)(param_2 + 0x278) = uVar16;
  *(uint *)(param_2 + 0x480) = 0x200020 - (uint)bVar1;
  *(uint *)(param_2 + 0x488) = 0x80008 - (uint)bVar1;
  *(ushort *)(param_2 + 0x46e) = (ushort)*(byte *)(param_2 + 0x23);{ V16 _vt1 = vectorSplatHalfWord(in_vs44,7); memcpy(auVar19, &_vt1, 16); }
  vectorSubtractSignedHalfWordSaturate(auVar20,auVar19);
  puVar2 = (undefined4 *)(in_r0 + param_2 + 0x460 & 0xfffffff0);
  *puVar2 = in_register_00010000;
  puVar2[1] = in_ACC;
  puVar2[2] = in_register_00010008;
  puVar2[3] = in_vr0;
  puVar2 = (undefined4 *)(param_2 + 0x450U & 0xfffffff0);
  *puVar2 = in_register_000100b0;
  puVar2[1] = in_register_000100b4;
  puVar2[2] = in_register_000100b8;
  puVar2[3] = in_vr11;
  *(undefined4 *)(param_2 + 0x4c8) = *(undefined4 *)(param_1 + 0x830);
  *(undefined4 *)(param_2 + 0x4cc) = *(undefined4 *)(param_1 + 0x834);
  *(undefined4 *)(param_2 + 0x4d4) = *(undefined4 *)(param_1 + 0x54d0);
  *(undefined4 *)(param_2 + 0x4d8) = *(undefined4 *)(param_1 + 0x54d4);
  *(char *)(param_2 + 0x4dc) = (char)*(undefined4 *)(param_1 + 0xf8);
  *(char *)(param_2 + 0x4dd) = (char)*(undefined4 *)(param_1 + 0xfc4);
  *(char *)(param_2 + 0x4de) = (char)*(undefined4 *)(param_1 + 0xfcc);
  *(char *)(param_2 + 0x4e1) = (char)*(undefined4 *)(param_1 + 0xfc);
  *(char *)(param_2 + 0x4e2) = (char)*(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(param_2 + 0x518) = *(undefined4 *)(param_1 + 0x55d0);
  *(undefined4 *)(param_2 + 0x51c) = *(undefined4 *)(param_1 + 0x120);
  *(char *)(param_2 + 0x4df) = (char)*(undefined4 *)(param_1 + 0x7a0);
  *(char *)(param_2 + 0x4e0) = (char)*(undefined4 *)(param_1 + 0x7a4);
  *(char *)(param_2 + 0x4e3) = (char)*(undefined4 *)(param_1 + 0x79c);
  *(int *)(param_2 + 0x4ec) = param_1 + 0x5db0;
  *(int *)(param_2 + 0x4d0) = param_1 + 0x848;
  *(char *)(param_2 + 0x4e6) = (char)*(undefined4 *)(param_1 + 0x50e4);
  *(char *)(param_2 + 0x4e7) = (char)*(undefined4 *)(param_1 + 0x548c);
  *(int *)(param_2 + 0x4f0) = param_1 + 0x5eb0;
  if ((*(int *)(param_1 + 0x50c8) == 0) || (*(int *)(param_1 + 0x50cc) != 0)) {
    if (*(int *)(param_1 + 0x3cb0) == 7) {
      *(undefined4 *)(param_2 + 0x4f4) = *(undefined4 *)(param_1 + 0x718);
      *(undefined4 *)(param_2 + 0x4f8) = *(undefined4 *)(param_1 + 0x718);
      *(undefined4 *)(param_2 + 0x4fc) = *(undefined4 *)(param_1 + 0x720);
      *(undefined4 *)(param_2 + 0x500) = *(undefined4 *)(param_1 + 0x71c);
      *(undefined4 *)(param_2 + 0x504) = *(undefined4 *)(param_1 + 0x720);
      *(undefined4 *)(param_2 + 0x508) = *(undefined4 *)(param_1 + 0x71c);
      *(undefined4 *)(param_2 + 0x50c) = *(undefined4 *)(param_1 + 0x720);
      *(undefined4 *)(param_2 + 0x510) = *(undefined4 *)(param_1 + 0x71c);
    }
    else {
      *(undefined4 *)(param_2 + 0x4f4) = *(undefined4 *)(param_1 + 0x714);
      *(undefined4 *)(param_2 + 0x4f8) = *(undefined4 *)(param_1 + 0x720);
      *(undefined4 *)(param_2 + 0x4fc) = *(undefined4 *)(param_1 + 0x710);
      *(undefined4 *)(param_2 + 0x500) = *(undefined4 *)(param_1 + 0x71c);
      *(undefined4 *)(param_2 + 0x504) = *(undefined4 *)(param_1 + 0x70c);
      *(undefined4 *)(param_2 + 0x508) = *(undefined4 *)(param_1 + 0x718);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x4f4) = *(undefined4 *)(param_1 + 0x72c);
    *(undefined4 *)(param_2 + 0x4f8) = *(undefined4 *)(param_1 + 0x5110);
    *(undefined4 *)(param_2 + 0x514) = *(undefined4 *)(param_1 + 0x5114);
  }
  *(undefined2 *)(param_2 + 0x4e8) = 0;
  *(char *)(param_2 + 0x4e4) = (char)*(undefined4 *)(param_1 + 0x708);
  *(char *)(param_2 + 0x4e5) = (char)*(undefined4 *)(param_1 + 0x794);
  *(undefined4 *)(param_2 + 0x520) = *(undefined4 *)(param_1 + 0x570c);
  *(undefined4 *)(param_2 + 0x524) = *(undefined4 *)(param_1 + 0xf84);
  *(undefined4 *)(param_2 + 0x528) = *(undefined4 *)(param_1 + 0xf88);
  *(undefined4 *)(param_2 + 0x564) = *(undefined4 *)(param_1 + 0x50d4);
  *(undefined4 *)(param_2 + 0x568) = *(undefined4 *)(param_1 + 0x3bb4);
  *(byte *)(param_2 + 0x52c) = -(*(int *)(param_1 + 0x3cb0) == 7) & 4;
  *(undefined4 *)(param_2 + 0x530) = *(undefined4 *)(param_1 + 0xbc8);
  *(undefined4 *)(param_2 + 0x534) = *(undefined4 *)(param_1 + 0xbcc);
  *(undefined4 *)(param_2 + 0x538) = *(undefined4 *)(param_1 + 0xbd0);
  *(undefined4 *)(param_2 + 0x53c) = *(undefined4 *)(param_1 + 0xbd4);
  *(undefined4 *)(param_2 + 0x540) = *(undefined4 *)(param_1 + 0xbd8);
  *(undefined4 *)(param_2 + 0x544) = *(undefined4 *)(param_1 + 0xbdc);
  *(undefined4 *)(param_2 + 0x548) = *(undefined4 *)(param_1 + 0xbe0);
  *(int *)(param_2 + 0x54c) = param_1 + 0x5ef0;
  *(int *)(param_2 + 0x550) = param_1 + 0x5fb0;
  *(undefined4 *)(param_2 + 0x56c) = *(undefined4 *)(param_1 + 0x5120);
  *(undefined4 *)(param_2 + 0x570) = *(undefined4 *)(param_1 + 0xfb0);
  uVar4 = fn_82C69588(param_1);
  *(int *)(param_2 + 0x17c) = (int)uVar4;
  trapWord(6,uVar4,0);
  uVar3 = *(ushort *)(param_2 + 0x34) >> 1;
  *(int *)(param_2 + 0x180) = (int)(uint)uVar3 / (int)uVar4;
  trapWord(5,uVar4 & ~((ulonglong)uVar3 * 2 - 1),0xffff);
  *(int *)(param_2 + 0x63c) = *(int *)(param_1 + 0x39f8) * *(int *)(param_1 + 0xd64);
  *(undefined4 *)(param_2 + 0x6a0) = *(undefined4 *)(param_1 + 0x3bec);
  *(undefined4 *)(param_2 + 0x6a4) = *(undefined4 *)(param_1 + 0x3bf0);
  *(undefined4 *)(param_2 + 0x6a8) = *(undefined4 *)(param_1 + 0x3bf4);
  *(undefined4 *)(param_2 + 0x6ac) = *(undefined4 *)(param_1 + 0x3bf8);
  *(undefined4 *)(param_2 + 0x57c) = *(undefined4 *)(param_1 + 0x51a4);
  *(undefined4 *)(param_2 + 0x574) = *(undefined4 *)(param_1 + 0x54c4);
  *(undefined4 *)(param_2 + 0x578) = *(undefined4 *)(param_1 + 0x54c0);
  *(undefined4 *)(param_2 + 0x618) = *(undefined4 *)(param_1 + 0xfb4);
  *(undefined4 *)(param_2 + 0x61c) = *(undefined4 *)(param_1 + 0x50f8);
  *(undefined4 *)(param_2 + 0x620) = *(undefined4 *)(param_1 + 0x50fc);
  *(undefined4 *)(param_2 + 0x624) = *(undefined4 *)(param_1 + 0x5100);
  *(undefined4 *)(param_2 + 0x628) = *(undefined4 *)(param_1 + 0x5104);
  *(undefined4 *)(param_2 + 0x62c) = *(undefined4 *)(param_1 + 0x5108);
  *(undefined4 *)(param_2 + 0x630) = *(undefined4 *)(param_1 + 0x510c);
  *(undefined4 *)(param_2 + 0x558) = *(undefined4 *)(param_1 + 0x50d0);
  *(undefined4 *)(param_2 + 0x55c) = *(undefined4 *)(param_1 + 0x54c8);
  *(undefined4 *)(param_2 + 0x634) = *(undefined4 *)(param_1 + 0x567c);
  if (*(int *)(param_1 + 0x567c) == 1) {
    *(undefined4 *)(param_2 + 0x5b0) = *(undefined4 *)(param_1 + 0x5538);
    *(undefined4 *)(param_2 + 0x5b4) = *(undefined4 *)(param_1 + 0x569c);
    *(undefined4 *)(param_2 + 0x5b8) = *(undefined4 *)(param_1 + 0x5554);
    *(undefined4 *)(param_2 + 0x5cc) = *(undefined4 *)(param_1 + 0xb2dc);
    *(undefined4 *)(param_2 + 0x5c8) = *(undefined4 *)(param_1 + 0xb2e0);
  }
  uVar16 = lbl_8329F088;
  if ((*(int *)(param_1 + 0x3cb0) == 6) && ((*(uint *)(param_1 + 0xbbc) & 1) == 0)) {
    uVar16 = lbl_8329F090;
  }
  *(undefined4 *)(param_2 + 0x554) = uVar16;
  puVar6 = &lbl_820FC514;
  lVar18 = 4;
  iVar10 = *(int *)(param_1 + 0xcc);
  puVar17 = (undefined1 *)(*(int *)(param_2 + 0x54c) + 1);
  do {
    uVar7 = puVar6[-1];
    *puVar17 = 0xff;
    puVar17[-1] = (char)(uVar7 >> 8);
    *(uint *)(puVar17 + 3) = (uVar7 & 0xfe) * iVar10;
    if ((uVar7 & 1) != 0) {
      *puVar17 = (char)(uVar7 >> 0x18);
      *(uint *)(puVar17 + 7) = (uVar7 >> 0x10 & 0xfe) * iVar10;
    }
    uVar7 = *puVar6;
    puVar17[0xc] = 0xff;
    puVar17[0xb] = (char)(uVar7 >> 8);
    *(uint *)(puVar17 + 0xf) = (uVar7 & 0xfe) * iVar10;
    if ((uVar7 & 1) != 0) {
      puVar17[0xc] = (char)(uVar7 >> 0x18);
      *(uint *)(puVar17 + 0x13) = (uVar7 >> 0x10 & 0xfe) * iVar10;
    }
    uVar7 = puVar6[1];
    puVar17[0x18] = 0xff;
    puVar17[0x17] = (char)(uVar7 >> 8);
    *(uint *)(puVar17 + 0x1b) = (uVar7 & 0xfe) * iVar10;
    if ((uVar7 & 1) != 0) {
      puVar17[0x18] = (char)(uVar7 >> 0x18);
      *(uint *)(puVar17 + 0x1f) = (uVar7 >> 0x10 & 0xfe) * iVar10;
    }
    uVar7 = puVar6[2];
    puVar17[0x24] = 0xff;
    puVar17[0x23] = (char)(uVar7 >> 8);
    *(uint *)(puVar17 + 0x27) = (uVar7 & 0xfe) * iVar10;
    if ((uVar7 & 1) != 0) {
      puVar17[0x24] = (char)(uVar7 >> 0x18);
      *(uint *)(puVar17 + 0x2b) = (uVar7 >> 0x10 & 0xfe) * iVar10;
    }
    puVar6 = puVar6 + 4;
    puVar17 = puVar17 + 0x30;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  iVar10 = *(int *)(param_1 + 0xd0);
  puVar6 = &lbl_820FC514;
  puVar17 = (undefined1 *)(*(int *)(param_2 + 0x550) + 1);
  lVar18 = 4;
  do {
    uVar7 = puVar6[-1];
    *puVar17 = 0xff;
    puVar17[-1] = (char)(uVar7 >> 8);
    *(uint *)(puVar17 + 3) = (uVar7 & 0xfe) * iVar10;
    if ((uVar7 & 1) != 0) {
      *puVar17 = (char)(uVar7 >> 0x18);
      *(uint *)(puVar17 + 7) = (uVar7 >> 0x10 & 0xfe) * iVar10;
    }
    uVar7 = *puVar6;
    puVar17[0xc] = 0xff;
    puVar17[0xb] = (char)(uVar7 >> 8);
    *(uint *)(puVar17 + 0xf) = (uVar7 & 0xfe) * iVar10;
    if ((uVar7 & 1) != 0) {
      puVar17[0xc] = (char)(uVar7 >> 0x18);
      *(uint *)(puVar17 + 0x13) = (uVar7 >> 0x10 & 0xfe) * iVar10;
    }
    uVar7 = puVar6[1];
    puVar17[0x18] = 0xff;
    puVar17[0x17] = (char)(uVar7 >> 8);
    *(uint *)(puVar17 + 0x1b) = (uVar7 & 0xfe) * iVar10;
    if ((uVar7 & 1) != 0) {
      puVar17[0x18] = (char)(uVar7 >> 0x18);
      *(uint *)(puVar17 + 0x1f) = (uVar7 >> 0x10 & 0xfe) * iVar10;
    }
    uVar7 = puVar6[2];
    puVar17[0x24] = 0xff;
    puVar17[0x23] = (char)(uVar7 >> 8);
    *(uint *)(puVar17 + 0x27) = (uVar7 & 0xfe) * iVar10;
    if ((uVar7 & 1) != 0) {
      puVar17[0x24] = (char)(uVar7 >> 0x18);
      *(uint *)(puVar17 + 0x2b) = (uVar7 >> 0x10 & 0xfe) * iVar10;
    }
    puVar6 = puVar6 + 4;
    puVar17 = puVar17 + 0x30;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  if ((*(int *)(param_2 + 0x640) != 0) && (*(int *)(*(int *)(param_2 + 0x640) + 0xc) == 3)) {
    iVar10 = *(int *)(param_2 + 0x26c);
    iVar11 = 0;
    lVar18 = 8;
    *(int *)(param_2 + 0x644) = param_1 + 0xb1fc;
    do {
      *(byte *)(iVar11 + param_1 + 0xb1fc) =
           (*(byte *)(iVar11 + iVar10) & 3) << 4 | *(byte *)(iVar11 + iVar10) >> 1 & 0x7e;
      bVar1 = *(byte *)(iVar10 + 1 + iVar11);
      *(byte *)(iVar11 + param_1 + 0xb1fd) = (bVar1 & 3) << 4 | bVar1 >> 1 & 0x7e;
      bVar1 = *(byte *)(iVar11 + iVar10 + 2);
      *(byte *)(param_1 + 0xb1fe + iVar11) = (bVar1 & 3) << 4 | bVar1 >> 1 & 0x7e;
      bVar1 = *(byte *)(iVar10 + 3 + iVar11);
      *(byte *)(param_1 + 0xb1ff + iVar11) = (bVar1 & 3) << 4 | bVar1 >> 1 & 0x7e;
      iVar11 = iVar11 + 4;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    iVar10 = *(int *)(param_2 + 0x270);
    iVar11 = 0;
    lVar18 = 8;
    *(int *)(param_2 + 0x648) = param_1 + 0xb21c;
    do {
      *(byte *)(iVar11 + param_1 + 0xb21c) =
           (*(byte *)(iVar11 + iVar10) << 3 | *(byte *)(iVar11 + iVar10) >> 2) & 0x3e;
      bVar1 = *(byte *)(iVar10 + 1 + iVar11);
      *(byte *)(iVar11 + param_1 + 0xb21d) = (bVar1 << 3 | bVar1 >> 2) & 0x3e;
      bVar1 = *(byte *)(iVar11 + iVar10 + 2);
      *(byte *)(param_1 + 0xb21e + iVar11) = (bVar1 << 3 | bVar1 >> 2) & 0x3e;
      bVar1 = *(byte *)(iVar10 + 3 + iVar11);
      *(byte *)(param_1 + 0xb21f + iVar11) = (bVar1 << 3 | bVar1 >> 2) & 0x3e;
      iVar11 = iVar11 + 4;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    iVar10 = *(int *)(param_2 + 0x278);
    iVar11 = 0;
    lVar18 = 4;
    *(int *)(param_2 + 0x650) = param_1 + 0xb23c;
    do {
      *(byte *)(iVar11 + param_1 + 0xb23c) =
           (*(byte *)(iVar11 + iVar10) & 3) << 3 | *(byte *)(iVar11 + iVar10) >> 1 & 0x7e;
      bVar1 = *(byte *)(iVar10 + 1 + iVar11);
      *(byte *)(iVar11 + param_1 + 0xb23d) = (bVar1 & 3) << 3 | bVar1 >> 1 & 0x7e;
      bVar1 = *(byte *)(iVar11 + iVar10 + 2);
      *(byte *)(param_1 + 0xb23e + iVar11) = (bVar1 & 3) << 3 | bVar1 >> 1 & 0x7e;
      bVar1 = *(byte *)(iVar10 + 3 + iVar11);
      *(byte *)(param_1 + 0xb23f + iVar11) = (bVar1 & 3) << 3 | bVar1 >> 1 & 0x7e;
      iVar11 = iVar11 + 4;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    iVar10 = *(int *)(param_2 + 0x1bc);
    iVar11 = 0;
    lVar18 = 0x10;
    *(int *)(param_2 + 0x654) = param_1 + 0xb1bc;
    do {
      *(byte *)(iVar11 + param_1 + 0xb1bc) =
           *(byte *)(iVar11 + iVar10) >> 2 & 0xfe | (*(byte *)(iVar11 + iVar10) & 7) << 4;
      bVar1 = *(byte *)(iVar10 + 1 + iVar11);
      *(byte *)(iVar11 + param_1 + 0xb1bd) = bVar1 >> 2 & 0xfe | (bVar1 & 7) << 4;
      bVar1 = *(byte *)(iVar11 + iVar10 + 2);
      *(byte *)(param_1 + 0xb1be + iVar11) = bVar1 >> 2 & 0xfe | (bVar1 & 7) << 4;
      bVar1 = *(byte *)(iVar10 + 3 + iVar11);
      *(byte *)(param_1 + 0xb1bf + iVar11) = bVar1 >> 2 & 0xfe | (bVar1 & 7) << 4;
      iVar11 = iVar11 + 4;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  return;
}

