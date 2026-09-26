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


void fn_82BBBD28(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x754) = param_2;
  *(undefined1 *)(iVar1 + 0x750) = 0;
  *(undefined1 *)(iVar1 + 0x751) = 0;
  iVar3 = 0;
  lVar5 = param_1 + 0x3d0;
  do {
    puVar2 = (undefined4 *)lVar5;
    puVar2[-0x10] = 0;
    *(undefined1 *)(iVar1 + 0x380 + iVar3) = 0;
    lVar4 = 0;
    *puVar2 = 0;
    puVar2[0x10] = iVar3;
    puVar2[-0xf4] = 0;
    lVar10 = 4;
    puVar2[-0xe4] = iVar3;
    do {
      uVar9 = (-0x370 - param_1) + lVar5 + lVar4;
      uVar8 = (-0x27c - param_1) + lVar5 + lVar4;
      uVar7 = (-0x330 - param_1) + lVar5 + lVar4;
      uVar6 = (-0x23c - param_1) + lVar5 + lVar4;
      *(undefined4 *)((int)(((-0x3b0 - param_1) + lVar5 + lVar4 & 0xffffffffU) << 2) + iVar1) = 0;
      *(undefined4 *)((int)(((-700 - param_1) + lVar5 + lVar4 & 0xffffffffU) << 2) + iVar1) = 0;
      lVar4 = lVar4 + 1;
      *(undefined4 *)((int)((uVar9 & 0xffffffff) << 2) + iVar1) = 0x13;
      *(undefined4 *)((int)((uVar8 & 0xffffffff) << 2) + iVar1) = 0x13;
      *(undefined4 *)((int)((uVar7 & 0xffffffff) << 2) + iVar1) = 0;
      *(undefined4 *)((int)((uVar6 & 0xffffffff) << 2) + iVar1) = 0;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    iVar3 = iVar3 + 1;
    lVar5 = lVar5 + 4;
  } while (iVar3 < 0x10);
  return;
}

