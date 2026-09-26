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


void fn_82DFFEF8(int *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar2 = (**(code **)(*param_1 + 0x34))();
  iVar3 = 0;
  uVar6 = 0;
  if (3 < (int)lVar2) {
    lVar7 = param_3 + 0x80;
    lVar8 = ((lVar2 - 4U & 0xffffffff) >> 2) + 1;
    uVar6 = lVar8 * 4 & 0xfffffffc;
    do {
      piVar1 = (int *)lVar7;
      if ((piVar1[-0x12] != 0) &&
         ((iVar3 == 0 || (*(float *)(piVar1[-0x14] + 0x1c) < *(float *)(iVar3 + 0x1c))))) {
        iVar3 = piVar1[-0x14];
      }
      iVar4 = iVar3;
      if (((piVar1[2] != 0) && (iVar4 = *piVar1, iVar3 != 0)) &&
         (*(float *)(iVar3 + 0x1c) <= *(float *)(iVar4 + 0x1c))) {
        iVar4 = iVar3;
      }
      iVar5 = iVar4;
      if (((piVar1[0x16] != 0) && (iVar5 = piVar1[0x14], iVar4 != 0)) &&
         (*(float *)(iVar4 + 0x1c) <= *(float *)(iVar5 + 0x1c))) {
        iVar5 = iVar4;
      }
      iVar3 = iVar5;
      if (((piVar1[0x2a] != 0) && (iVar3 = piVar1[0x28], iVar5 != 0)) &&
         (*(float *)(iVar5 + 0x1c) <= *(float *)(iVar3 + 0x1c))) {
        iVar3 = iVar5;
      }
      lVar7 = lVar7 + 0x140;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if ((int)uVar6 < (int)lVar2) {
    lVar2 = lVar2 - uVar6;
    lVar7 = (uVar6 + (uVar6 & 0x3fffffff) * 4 & 0xfffffff) * 0x10 + param_3 + 0x30;
    do {
      iVar4 = iVar3;
      if (((((int *)lVar7)[2] != 0) && (iVar4 = *(int *)lVar7, iVar3 != 0)) &&
         (*(float *)(iVar3 + 0x1c) <= *(float *)(iVar4 + 0x1c))) {
        iVar4 = iVar3;
      }
      iVar3 = iVar4;
      lVar7 = lVar7 + 0x50;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

