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


void fn_82F02778(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  
  *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(param_1 + 0x548);
  *(undefined4 *)(param_1 + 0x6ac) = *(undefined4 *)(param_1 + 0x554);
  *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(param_1 + 0x550);
  *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(param_1 + 0x55c);
  *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_1 + 0x31c);
  *(undefined4 *)(param_1 + 0x6bc) = *(undefined4 *)(param_1 + 800);
  *(undefined4 *)(param_1 + 0x6c0) = *(undefined4 *)(param_1 + 0x54c);
  *(undefined4 *)(param_1 + 0x6c4) = *(undefined4 *)(param_1 + 0x558);
  *(undefined4 *)(param_1 + 0x6c8) = *(undefined4 *)(param_1 + 0x560);
  *(undefined4 *)(param_1 + 0x6cc) = *(undefined4 *)(param_1 + 0x340);
  *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_1 + 0x2d0);
  *(undefined4 *)(param_1 + 0x6d4) = *(undefined4 *)(param_1 + 0x2d4);
  *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_1 + 0x2d8);
  *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x6e0) = *(undefined4 *)(param_1 + 0x564);
  *(undefined4 *)(param_1 + 0x6e4) = *(undefined4 *)(param_1 + 0x568);
  *(undefined4 *)(param_1 + 0x6e8) = *(undefined4 *)(param_1 + 0x56c);
  *(undefined4 *)(param_1 + 0x6ec) = *(undefined4 *)(param_1 + 0x570);
  *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_1 + 0x574);
  *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(param_1 + 0x578);
  *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_1 + 0x57c);
  *(undefined4 *)(param_1 + 0x6fc) = *(undefined4 *)(param_1 + 0x580);
  if ((param_2 == 0) || ((*(int *)(param_1 + 4) != 8 && (*(int *)(param_1 + 4) != 7)))) {
    uVar11 = (*(int *)(param_1 + 0x550) >> 1) + 0xf;
    uVar10 = (longlong)(*(int *)(param_1 + 0x548) >> 1) + 0xfU & 0xfffffff0;
    uVar14 = uVar11 & 0xfffffff0;
    iVar15 = (int)uVar10;
    *(int *)(param_1 + 0x700) = iVar15;
    iVar1 = iVar15 >> 1;
    iVar2 = (int)uVar14 >> 1;
    *(int *)(param_1 + 0x704) = iVar1;
    iVar3 = *(int *)(param_1 + 0x31c) >> 1;
    iVar12 = iVar1 + 0x20;
    uVar4 = *(int *)(param_1 + 800) >> 1;
    iVar5 = iVar15 >> 4;
    iVar6 = (int)uVar11 >> 4;
    uVar9 = (undefined4)((uVar10 + 0x41 & 0xffffffff) << 5);
    iVar7 = (iVar1 + 0x21) * 0x10;
    uVar8 = (undefined4)((uVar10 + 0x40 & 0xffffffff) << 4);
    *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_1 + 0x550);
    *(undefined4 *)(param_1 + 0x70c) = *(undefined4 *)(param_1 + 0x55c);
    *(int *)(param_1 + 0x710) = iVar3;
    *(undefined4 *)(param_1 + 0x714) = *(undefined4 *)(param_1 + 800);
    *(int *)(param_1 + 0x718) = iVar15 + 0x20;
    *(int *)(param_1 + 0x71c) = iVar1 + 0x10;
    *(int *)(param_1 + 0x720) = *(int *)(param_1 + 0x550) * iVar15;
    if ((iVar15 != iVar3) || (uVar13 = 1, *(int *)(param_1 + 0x550) != *(int *)(param_1 + 800))) {
      uVar13 = 0;
    }
    *(undefined4 *)(param_1 + 0x724) = uVar13;
    *(int *)(param_1 + 0x728) = iVar5;
    *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(param_1 + 0x2d4);
    *(int *)(param_1 + 0x730) = *(int *)(param_1 + 0x2d4) * iVar5;
    *(int *)(param_1 + 0x734) = iVar5 + -1;
    uVar13 = (undefined4)(uVar10 + 0x40);
    *(undefined4 *)(param_1 + 0x738) = uVar13;
    *(int *)(param_1 + 0x73c) = iVar12;
    *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(param_1 + 0x56c);
    *(undefined4 *)(param_1 + 0x744) = *(undefined4 *)(param_1 + 0x570);
    *(int *)(param_1 + 0x74c) = iVar7;
    *(undefined4 *)(param_1 + 0x750) = uVar8;
    *(int *)(param_1 + 0x754) = iVar12 * 8;
    *(undefined4 *)(param_1 + 0x748) = uVar9;
    *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_1 + 0x548);
    *(undefined4 *)(param_1 + 0x75c) = *(undefined4 *)(param_1 + 0x554);
    *(uint *)(param_1 + 0x760) = uVar14;
    *(int *)(param_1 + 0x764) = iVar2;
    *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(param_1 + 0x31c);
    *(uint *)(param_1 + 0x76c) = uVar4;
    *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(param_1 + 0x54c);
    *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(param_1 + 0x558);
    *(uint *)(param_1 + 0x778) = *(int *)(param_1 + 0x548) * uVar14;
    if ((*(int *)(param_1 + 0x548) != *(int *)(param_1 + 0x31c)) || (uVar16 = 1, uVar14 != uVar4)) {
      uVar16 = 0;
    }
    *(undefined4 *)(param_1 + 0x77c) = uVar16;
    *(int *)(param_1 + 0x784) = iVar6;
    *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(param_1 + 0x2d0);
    *(int *)(param_1 + 0x788) = *(int *)(param_1 + 0x2d0) * iVar6;
    *(undefined4 *)(param_1 + 0x78c) = *(undefined4 *)(param_1 + 0x2dc);
    *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x564);
    *(uint *)(param_1 + 0x798) = uVar14 + 0x40;
    *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_1 + 0x568);
    *(int *)(param_1 + 0x79c) = iVar2 + 0x20;
    *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(param_1 + 0x574);
    *(undefined4 *)(param_1 + 0x7a4) = *(undefined4 *)(param_1 + 0x578);
    *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(param_1 + 0x57c);
    *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(param_1 + 0x580);
    *(int *)(param_1 + 0x7b0) = iVar15;
    *(int *)(param_1 + 0x7b4) = iVar1;
    *(uint *)(param_1 + 0x7b8) = uVar14;
    *(int *)(param_1 + 0x7bc) = iVar2;
    *(int *)(param_1 + 0x7c0) = iVar3;
    *(uint *)(param_1 + 0x7c4) = uVar4;
    *(int *)(param_1 + 0x7c8) = iVar15 + 0x20;
    *(int *)(param_1 + 0x7cc) = iVar1 + 0x10;
    *(uint *)(param_1 + 2000) = uVar14 * iVar15;
    if ((iVar15 != iVar3) || (uVar16 = 1, uVar14 != uVar4)) {
      uVar16 = 0;
    }
    *(undefined4 *)(param_1 + 0x7d4) = uVar16;
    *(int *)(param_1 + 0x7d8) = iVar5;
    *(int *)(param_1 + 0x7dc) = iVar6;
    *(int *)(param_1 + 0x7e0) = iVar6 * iVar5;
    *(int *)(param_1 + 0x7e4) = iVar5 + -1;
    *(undefined4 *)(param_1 + 0x7e8) = uVar13;
    *(int *)(param_1 + 0x7ec) = iVar12;
    *(uint *)(param_1 + 0x7f0) = uVar14 + 0x40;
    *(int *)(param_1 + 0x7f4) = iVar2 + 0x20;
    *(undefined4 *)(param_1 + 0x7f8) = uVar9;
    *(int *)(param_1 + 0x7fc) = iVar7;
    *(undefined4 *)(param_1 + 0x800) = uVar8;
    *(int *)(param_1 + 0x804) = iVar12 * 8;
  }
  return;
}

