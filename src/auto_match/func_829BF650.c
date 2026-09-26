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


void fn_829BF650(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  
  iVar1 = *(int *)(param_1 + 0x1cc);
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x20) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x28) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x2c) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x34) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x38) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x3c) = uVar2;
  lVar24 = 0x100;
  iVar11 = 0xfe81;
  iVar12 = 0xfe81;
  iVar13 = 0xfe81;
  iVar14 = 0xfe81;
  iVar15 = 0xfe81;
  iVar16 = 0xfe81;
  iVar17 = 0xfe81;
  iVar7 = 0;
  iVar10 = 0;
  iVar19 = -0x4a24e1;
  iVar23 = -0x447a1;
  iVar3 = -0x2153e1;
  iVar20 = -0x569fe1;
  iVar4 = -0x165be1;
  iVar5 = -0x8f6e1;
  iVar6 = -0x1812a1;
  iVar21 = -0x4b5fe1;
  iVar22 = -0x41cfe1;
  iVar18 = 0xfe81;
  do {
    iVar8 = iVar18;
    if (0xbf < iVar7) {
      iVar8 = 0x57c0 - iVar22 / 0x3f;
    }
    *(int *)(iVar10 + *(int *)(iVar1 + 0x18)) = iVar8;
    iVar8 = iVar17;
    if (0xbf < iVar7) {
      iVar8 = 0x6480 - iVar21 / 0x3f;
    }
    *(int *)(iVar10 + *(int *)(iVar1 + 0x1c)) = iVar8;
    *(uint *)(iVar10 + *(int *)(iVar1 + 0x1c)) =
         (uint)(ushort)((ulonglong)((longlong)*(int *)(iVar10 + *(int *)(iVar1 + 0x1c)) * 0x10101)
                       >> 0x10);
    iVar8 = iVar16;
    if (0xbf < iVar7) {
      iVar8 = 0xb880 - iVar6 / 0x3f;
    }
    *(int *)(iVar10 + *(int *)(iVar1 + 0x20)) = iVar8;
    *(uint *)(iVar10 + *(int *)(iVar1 + 0x20)) =
         (uint)(ushort)((ulonglong)((longlong)*(int *)(iVar10 + *(int *)(iVar1 + 0x20)) * 0x10101)
                       >> 0x10);
    if (iVar7 < 0xc0) {
      iVar8 = 0xfe81;
    }
    else {
      iVar8 = 0xff00 - iVar5 / 0x3f;
    }
    *(int *)(iVar10 + *(int *)(iVar1 + 0x24)) = iVar8;
    *(uint *)(iVar10 + *(int *)(iVar1 + 0x24)) =
         (uint)(ushort)((ulonglong)((longlong)*(int *)(iVar10 + *(int *)(iVar1 + 0x24)) * 0x10101)
                       >> 0x10);
    iVar8 = iVar15;
    if (0xbf < iVar7) {
      iVar8 = 0xed00 - iVar4 / 0x3f;
    }
    *(int *)(iVar10 + *(int *)(iVar1 + 0x28)) = iVar8;
    *(uint *)(iVar10 + *(int *)(iVar1 + 0x28)) =
         (uint)(ushort)((ulonglong)((longlong)*(int *)(iVar10 + *(int *)(iVar1 + 0x28)) * 0x10101)
                       >> 0x10);
    iVar8 = iVar14;
    if (0xbf < iVar7) {
      iVar8 = 0x7380 - iVar20 / 0x3f;
    }
    *(int *)(iVar10 + *(int *)(iVar1 + 0x2c)) = iVar8;
    *(uint *)(iVar10 + *(int *)(iVar1 + 0x2c)) =
         (uint)(ushort)((ulonglong)((longlong)*(int *)(iVar10 + *(int *)(iVar1 + 0x2c)) * 0x10101)
                       >> 0x10);
    iVar8 = iVar13;
    if (0xbf < iVar7) {
      iVar8 = 0x9c00 - iVar3 / 0x3f;
    }
    *(int *)(iVar10 + *(int *)(iVar1 + 0x30)) = iVar8;
    *(uint *)(iVar10 + *(int *)(iVar1 + 0x30)) =
         (uint)(ushort)((ulonglong)((longlong)*(int *)(iVar10 + *(int *)(iVar1 + 0x30)) * 0x10101)
                       >> 0x10);
    uVar2 = 0xfe81;
    if (0xbf < iVar7) {
      uVar2 = 0xff00;
    }
    *(undefined4 *)(iVar10 + *(int *)(iVar1 + 0x34)) = uVar2;
    *(uint *)(iVar10 + *(int *)(iVar1 + 0x34)) =
         (uint)(ushort)((ulonglong)((longlong)*(int *)(iVar10 + *(int *)(iVar1 + 0x34)) * 0x10101)
                       >> 0x10);
    iVar8 = iVar12;
    if (0xbf < iVar7) {
      iVar8 = 0xf9c0 - iVar23 / 0x3f;
    }
    *(int *)(iVar10 + *(int *)(iVar1 + 0x38)) = iVar8;
    *(uint *)(iVar10 + *(int *)(iVar1 + 0x38)) =
         (uint)(ushort)((ulonglong)((longlong)*(int *)(iVar10 + *(int *)(iVar1 + 0x38)) * 0x10101)
                       >> 0x10);
    iVar8 = iVar11;
    if (0xbf < iVar7) {
      iVar8 = 0x7ec0 - iVar19 / 0x3f;
    }
    iVar7 = iVar7 + 1;
    iVar18 = iVar18 + -0xdf;
    iVar22 = iVar22 + 0x57c0;
    iVar17 = iVar17 + -0xce;
    iVar21 = iVar21 + 0x6480;
    *(int *)(iVar10 + *(int *)(iVar1 + 0x3c)) = iVar8;
    iVar16 = iVar16 + -0x5e;
    puVar9 = (uint *)(iVar10 + *(int *)(iVar1 + 0x3c));
    iVar6 = iVar6 + 0x2019;
    iVar5 = iVar5 + 0xbf4;
    *puVar9 = (uint)(ushort)((ulonglong)((longlong)(int)*puVar9 * 0x10101) >> 0x10);
    iVar15 = iVar15 + -0x18;
    iVar4 = iVar4 + 0x1dd0;
    iVar14 = iVar14 + -0xba;
    iVar20 = iVar20 + 0x7380;
    iVar13 = iVar13 + -0x84;
    iVar3 = iVar3 + 0x2c70;
    iVar12 = iVar12 + -7;
    iVar23 = iVar23 + 0x5b5;
    iVar11 = iVar11 + -0xab;
    iVar19 = iVar19 + 0x62dc;
    iVar10 = iVar10 + 4;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  return;
}

