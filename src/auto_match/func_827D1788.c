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


void fn_827D1788(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  piVar10 = (int *)(param_1 + -4);
  lVar13 = 8;
  do {
    iVar7 = piVar10[2] + piVar10[7];
    iVar1 = piVar10[5];
    iVar11 = piVar10[2] - piVar10[7];
    iVar2 = piVar10[6] + piVar10[3];
    iVar12 = piVar10[3] - piVar10[6];
    iVar3 = iVar2 + iVar7;
    iVar4 = piVar10[4] + iVar1;
    iVar8 = piVar10[1] + piVar10[8];
    iVar6 = iVar4 + iVar8;
    iVar8 = iVar8 - iVar4;
    iVar9 = piVar10[1] - piVar10[8];
    piVar10[1] = iVar3 + iVar6;
    iVar4 = iVar11 + iVar9;
    piVar10[5] = iVar6 - iVar3;
    iVar5 = (piVar10[4] - iVar1) + iVar12;
    iVar1 = ((iVar8 - iVar2) + iVar7) * 0xb5 >> 8;
    iVar6 = (iVar5 - iVar4) * 0x62 >> 8;
    iVar3 = (iVar12 + iVar11) * 0xb5 >> 8;
    iVar2 = (iVar5 * 0x8b >> 8) + iVar6;
    iVar6 = (iVar4 * 0x14e >> 8) + iVar6;
    iVar4 = iVar3 + iVar9;
    iVar9 = iVar9 - iVar3;
    piVar10[3] = iVar1 + iVar8;
    piVar10[7] = iVar8 - iVar1;
    piVar10[6] = iVar9 + iVar2;
    piVar10[4] = iVar9 - iVar2;
    piVar10[2] = iVar4 + iVar6;
    piVar10 = piVar10 + 8;
    *piVar10 = iVar4 - iVar6;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  piVar10 = (int *)(param_1 + 0xdc);
  lVar13 = 8;
  do {
    iVar7 = piVar10[-0x2f] + piVar10[-7];
    iVar1 = piVar10[-0x17];
    iVar11 = piVar10[-0x2f] - piVar10[-7];
    iVar2 = piVar10[-0xf] + piVar10[-0x27];
    iVar12 = piVar10[-0x27] - piVar10[-0xf];
    iVar3 = iVar2 + iVar7;
    iVar4 = piVar10[-0x1f] + iVar1;
    iVar8 = piVar10[-0x37] + piVar10[1];
    iVar6 = iVar4 + iVar8;
    iVar8 = iVar8 - iVar4;
    iVar9 = piVar10[-0x37] - piVar10[1];
    piVar10[-0x37] = iVar3 + iVar6;
    iVar4 = iVar11 + iVar9;
    piVar10[-0x17] = iVar6 - iVar3;
    iVar5 = (piVar10[-0x1f] - iVar1) + iVar12;
    iVar1 = ((iVar8 - iVar2) + iVar7) * 0xb5 >> 8;
    iVar6 = (iVar5 - iVar4) * 0x62 >> 8;
    iVar3 = (iVar12 + iVar11) * 0xb5 >> 8;
    iVar2 = (iVar5 * 0x8b >> 8) + iVar6;
    iVar6 = (iVar4 * 0x14e >> 8) + iVar6;
    iVar4 = iVar3 + iVar9;
    iVar9 = iVar9 - iVar3;
    piVar10[-0x27] = iVar1 + iVar8;
    piVar10[-7] = iVar8 - iVar1;
    piVar10[-0xf] = iVar9 + iVar2;
    piVar10[-0x1f] = iVar9 - iVar2;
    piVar10[-0x2f] = iVar4 + iVar6;
    piVar10 = piVar10 + 1;
    *piVar10 = iVar4 - iVar6;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  return;
}

