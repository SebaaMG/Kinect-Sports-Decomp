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


void fn_82F24A58(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  longlong lVar10;
  
  puVar8 = (ushort *)(param_1 + -2);
  puVar9 = (ushort *)(param_2 + 4);
  iVar7 = (param_1 - param_2) + -4;
  lVar10 = 0x40;
  do {
    uVar4 = *(ushort *)(iVar7 + (int)puVar9);
    uVar1 = puVar8[2];
    uVar2 = puVar8[4];
    uVar3 = puVar8[3];
    uVar5 = (short)(uVar4 ^ puVar9[-2]) >> 0xf;
    *(ushort *)(iVar7 + (int)puVar9) = puVar9[-2] & ~uVar5 | uVar4 & uVar5;
    uVar4 = (short)(uVar1 ^ puVar9[-1]) >> 0xf;
    puVar8[2] = puVar9[-1] & ~uVar4 | uVar1 & uVar4;
    uVar1 = (short)(*puVar9 ^ uVar3) >> 0xf;
    puVar8[3] = *puVar9 & ~uVar1 | uVar3 & uVar1;
    puVar6 = puVar9 + 1;
    uVar1 = (short)(uVar2 ^ *puVar6) >> 0xf;
    puVar9 = puVar9 + 4;
    puVar8 = puVar8 + 4;
    *puVar8 = *puVar6 & ~uVar1 | uVar2 & uVar1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return;
}

