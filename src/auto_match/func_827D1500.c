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


void fn_827D1500(int param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  
  piVar14 = (int *)(param_1 + -0x1c);
  lVar19 = 8;
  do {
    iVar9 = piVar14[7] - piVar14[0xe];
    lVar6 = (ulonglong)(uint)piVar14[7] + (ulonglong)(uint)piVar14[0xe];
    iVar11 = piVar14[9] - piVar14[0xc];
    iVar12 = piVar14[10] - piVar14[0xb];
    iVar13 = piVar14[8] - piVar14[0xd];
    lVar5 = (ulonglong)(uint)piVar14[8] + (ulonglong)(uint)piVar14[0xd];
    lVar3 = (ulonglong)(uint)piVar14[0xc] + (ulonglong)(uint)piVar14[9];
    lVar18 = (ulonglong)(uint)piVar14[10] + (ulonglong)(uint)piVar14[0xb];
    iVar15 = (int)lVar5 - (int)lVar3;
    iVar10 = (int)lVar6 - (int)lVar18;
    iVar2 = (iVar11 + iVar9 + iVar12 + iVar13) * 0x25a1;
    iVar1 = (iVar15 + iVar10) * 0x1151;
    iVar7 = iVar2 + (iVar11 + iVar9) * -0xc7c;
    iVar2 = iVar2 + (iVar12 + iVar13) * -0x3ec5;
    iVar8 = (iVar12 + iVar9) * -0x1ccd;
    lVar3 = lVar3 + lVar5;
    iVar4 = (iVar11 + iVar13) * -0x5203;
    lVar18 = lVar18 + lVar6;
    piVar14[9] = iVar10 * 0x187e + iVar1 + 0x400 >> 0xb;
    piVar14[0xd] = iVar1 + iVar15 * -0x3b21 + 0x400 >> 0xb;
    piVar14[0xe] = iVar12 * 0x98e + iVar2 + iVar8 + 0x400 >> 0xb;
    piVar14[0xc] = iVar11 * 0x41b3 + iVar7 + iVar4 + 0x400 >> 0xb;
    piVar14[10] = iVar13 * 0x6254 + iVar2 + iVar4 + 0x400 >> 0xb;
    piVar14[7] = (int)((lVar3 + lVar18 & 0xffffffffU) << 2);
    piVar14[0xb] = (int)((lVar18 - lVar3 & 0xffffffffU) << 2);
    piVar14 = piVar14 + 8;
    *piVar14 = iVar9 * 0x300b + iVar7 + iVar8 + 0x400 >> 0xb;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  piVar14 = (int *)(param_1 + 0x1c);
  lVar19 = 8;
  do {
    iVar10 = piVar14[-7] - piVar14[0x31];
    iVar7 = piVar14[-7] + piVar14[0x31];
    iVar12 = piVar14[9] - piVar14[0x21];
    iVar8 = piVar14[1] - piVar14[0x29];
    iVar9 = piVar14[0x11] - piVar14[0x19];
    iVar2 = piVar14[1] + piVar14[0x29];
    iVar4 = piVar14[0x21] + piVar14[9];
    iVar1 = piVar14[0x11] + piVar14[0x19];
    iVar15 = (iVar12 + iVar10 + iVar9 + iVar8) * 0x25a1;
    iVar16 = iVar7 - iVar1;
    iVar17 = iVar2 - iVar4;
    iVar1 = iVar1 + iVar7;
    iVar4 = iVar4 + iVar2;
    iVar7 = iVar15 + (iVar9 + iVar8) * -0x3ec5;
    iVar11 = (iVar9 + iVar10) * -0x1ccd;
    iVar15 = iVar15 + (iVar12 + iVar10) * -0xc7c;
    iVar2 = (iVar17 + iVar16) * 0x1151;
    iVar13 = (iVar12 + iVar8) * -0x5203;
    piVar14[-7] = iVar4 + iVar1 + 2 >> 2;
    piVar14[0x19] = (iVar1 - iVar4) + 2 >> 2;
    piVar14[9] = iVar16 * 0x187e + iVar2 + 0x4000 >> 0xf;
    piVar14[0x29] = iVar2 + iVar17 * -0x3b21 + 0x4000 >> 0xf;
    piVar14[0x31] = iVar9 * 0x98e + iVar7 + iVar11 + 0x4000 >> 0xf;
    piVar14[0x21] = iVar12 * 0x41b3 + iVar15 + iVar13 + 0x4000 >> 0xf;
    piVar14[0x11] = iVar8 * 0x6254 + iVar7 + iVar13 + 0x4000 >> 0xf;
    piVar14 = piVar14 + 1;
    *piVar14 = iVar10 * 0x300b + iVar15 + iVar11 + 0x4000 >> 0xf;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  return;
}

