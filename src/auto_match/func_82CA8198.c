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


void fn_82CA8198(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  
  uVar11 = (*(int *)(param_1 + 0xb4) >> 1) + 0xf;
  uVar8 = uVar11 & 0xfffffff0;
  iVar2 = (int)uVar8 >> 1;
  iVar19 = *(int *)(param_1 + 0x4fb0) + uVar8;
  uVar9 = (*(int *)(param_1 + 0xbc) >> 1) + 0xf;
  uVar16 = uVar9 & 0xfffffff0;
  iVar3 = (int)uVar16 >> 1;
  uVar4 = *(int *)(param_1 + 0x9c) >> 1;
  uVar5 = *(int *)(param_1 + 0xa0) >> 1;
  iVar6 = (int)uVar11 >> 4;
  iVar7 = (int)uVar9 >> 4;
  if (*(int *)(param_1 + 0xf8c) != 0) {
    iVar2 = (int)uVar8 >> 2;
    iVar3 = (int)uVar16 >> 2;
  }
  iVar1 = *(int *)(param_1 + 0x4fb4);
  *(int *)(param_1 + 0x3a30) = *(int *)(param_1 + 0xb4);
  iVar13 = *(int *)(param_1 + 0x4fb0) * 2;
  iVar10 = iVar1 * 2 + iVar2;
  iVar12 = iVar13 + uVar8;
  iVar18 = (iVar12 + 1) * *(int *)(param_1 + 0x4fb0);
  iVar15 = (iVar10 + 1) * iVar1;
  *(undefined4 *)(param_1 + 0x3a34) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x3a38) = *(undefined4 *)(param_1 + 0xbc);
  iVar13 = iVar13 + uVar16;
  iVar14 = iVar1 * 2 + iVar3;
  *(undefined4 *)(param_1 + 0x3a3c) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0x3a40) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x3a44) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x3a48) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0x3a4c) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0x3a50) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x3a54) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x3a58) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x3a5c) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x3a60) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x3a64) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0x3a68) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0x3a6c) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(param_1 + 0x3a70) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0x3a74) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0x3a78) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x3a7c) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0x3a80) = *(undefined4 *)(param_1 + 0xe8);
  *(uint *)(param_1 + 0x3a84) = uVar8;
  *(int *)(param_1 + 0x3a88) = iVar2;
  *(undefined4 *)(param_1 + 0x3a8c) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0x3a90) = *(undefined4 *)(param_1 + 200);
  *(uint *)(param_1 + 0x3a94) = uVar4;
  *(undefined4 *)(param_1 + 15000) = *(undefined4 *)(param_1 + 0xa0);
  *(int *)(param_1 + 0x3a9c) = iVar19;
  *(int *)(param_1 + 0x3aa0) = iVar1 + iVar2;
  if ((uVar8 != uVar4) || (uVar17 = 1, *(int *)(param_1 + 0xbc) != *(int *)(param_1 + 0xa0))) {
    uVar17 = 0;
  }
  *(undefined4 *)(param_1 + 0x3aa4) = uVar17;
  *(int *)(param_1 + 0x3aa8) = iVar6;
  *(undefined4 *)(param_1 + 0x3aac) = *(undefined4 *)(param_1 + 0x8c);
  *(int *)(param_1 + 0x3ab0) = *(int *)(param_1 + 0x8c) * iVar6;
  *(int *)(param_1 + 0x3ab4) = iVar6 + -1;
  *(int *)(param_1 + 0x3ab8) = iVar12;
  *(int *)(param_1 + 0x3abc) = iVar10;
  *(undefined4 *)(param_1 + 0x3ac0) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(param_1 + 0x3ac4) = *(undefined4 *)(param_1 + 0xd8);
  *(int *)(param_1 + 0x3acc) = iVar15;
  *(int *)(param_1 + 0x3ad0) = iVar12 * 0x10;
  *(int *)(param_1 + 0x3ad4) = iVar10 * 8;
  *(int *)(param_1 + 0x3ac8) = iVar18;
  *(undefined4 *)(param_1 + 0x3ad8) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0x3adc) = *(undefined4 *)(param_1 + 0xc0);
  *(uint *)(param_1 + 0x3ae0) = uVar16;
  *(int *)(param_1 + 0x3ae4) = iVar3;
  *(undefined4 *)(param_1 + 0x3ae8) = *(undefined4 *)(param_1 + 0x9c);
  *(uint *)(param_1 + 0x3aec) = uVar5;
  *(undefined4 *)(param_1 + 0x3af0) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0x3af4) = *(undefined4 *)(param_1 + 0xc4);
  if ((*(int *)(param_1 + 0xb4) != *(int *)(param_1 + 0x9c)) || (uVar17 = 1, uVar16 != uVar5)) {
    uVar17 = 0;
  }
  *(undefined4 *)(param_1 + 0x3af8) = uVar17;
  *(int *)(param_1 + 0x3b00) = iVar7;
  *(undefined4 *)(param_1 + 0x3afc) = *(undefined4 *)(param_1 + 0x88);
  *(int *)(param_1 + 0x3b04) = *(int *)(param_1 + 0x88) * iVar7;
  *(undefined4 *)(param_1 + 0x3b08) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x3b0c) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0x3b10) = *(undefined4 *)(param_1 + 0xd0);
  *(int *)(param_1 + 0x3b14) = iVar13;
  *(int *)(param_1 + 0x3b18) = iVar14;
  *(undefined4 *)(param_1 + 0x3b1c) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0x3b20) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x3b24) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0x3b28) = *(undefined4 *)(param_1 + 0xe8);
  *(uint *)(param_1 + 0x3b2c) = uVar8;
  *(int *)(param_1 + 0x3b30) = iVar2;
  *(uint *)(param_1 + 0x3b34) = uVar16;
  *(int *)(param_1 + 0x3b38) = iVar3;
  *(uint *)(param_1 + 0x3b3c) = uVar4;
  *(uint *)(param_1 + 0x3b40) = uVar5;
  *(int *)(param_1 + 0x3b44) = iVar19;
  *(int *)(param_1 + 0x3b48) = iVar1 + iVar2;
  if ((uVar8 != uVar4) || (uVar17 = 1, uVar16 != uVar5)) {
    uVar17 = 0;
  }
  *(undefined4 *)(param_1 + 0x3b4c) = uVar17;
  *(int *)(param_1 + 0x3b50) = iVar6;
  *(int *)(param_1 + 0x3b54) = iVar7;
  *(int *)(param_1 + 0x3b58) = iVar7 * iVar6;
  *(int *)(param_1 + 0x3b5c) = iVar6 + -1;
  *(int *)(param_1 + 0x3b60) = iVar12;
  *(int *)(param_1 + 0x3b64) = iVar10;
  *(int *)(param_1 + 0x3b68) = iVar13;
  *(int *)(param_1 + 0x3b6c) = iVar14;
  *(int *)(param_1 + 0x3b70) = iVar18;
  *(int *)(param_1 + 0x3b74) = iVar15;
  *(int *)(param_1 + 0x3b78) = iVar12 * 0x10;
  *(int *)(param_1 + 0x3b7c) = iVar10 * 8;
  return;
}

