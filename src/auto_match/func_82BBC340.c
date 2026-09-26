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


void fn_82BBC340(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar4 = param_1 + 0x3d0;
  lVar9 = 0x10;
  puVar2 = param_2;
  do {
    lVar3 = 0;
    puVar2[0x10] = ((undefined4 *)lVar4)[0x10];
    *puVar2 = *(undefined4 *)lVar4;
    lVar10 = 4;
    do {
      uVar8 = (-0x27c - param_1) + lVar4 + lVar3;
      uVar7 = (-0x370 - param_1) + lVar4 + lVar3;
      uVar6 = (-0x23c - param_1) + lVar4 + lVar3;
      iVar1 = (int)param_1;
      uVar5 = (-0x330 - param_1) + lVar4 + lVar3;
      *(undefined4 *)((int)(((-0x3b0 - param_1) + lVar4 + lVar3 & 0xffffffffU) << 2) + (int)param_2)
           = *(undefined4 *)((int)(((-700 - param_1) + lVar4 + lVar3 & 0xffffffffU) << 2) + iVar1);
      lVar3 = lVar3 + 1;
      *(undefined4 *)((int)((uVar7 & 0xffffffff) << 2) + (int)param_2) =
           *(undefined4 *)((int)((uVar8 & 0xffffffff) << 2) + iVar1);
      *(undefined4 *)((int)((uVar5 & 0xffffffff) << 2) + (int)param_2) =
           *(undefined4 *)((int)((uVar6 & 0xffffffff) << 2) + iVar1);
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    lVar9 = lVar9 + -1;
    lVar4 = lVar4 + 4;
    puVar2 = puVar2 + 1;
  } while (lVar9 != 0);
  *(undefined1 *)(param_2 + 0x1d4) = 1;
  return;
}

