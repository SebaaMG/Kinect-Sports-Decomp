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
extern int fn_82A2A618();


void fn_82CE8758(int param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar4 = (ulonglong)uVar1;
  bVar2 = false;
  uVar7 = uVar4;
  if ((int)uVar1 < *(int *)(param_1 + 0x54)) {
    lVar6 = (uVar4 + 0x11 & 0x7fffffff) * 2 + param_2;
    lVar5 = (uVar4 + 3 + (uVar4 + 3 & 0x3fffffff) * 4 & 0x3fffffff) * 4 + param_2;
    do {
      if ((*(int *)lVar5 != 0) && (bVar2 = true, *(short *)lVar6 != 0)) goto LAB_82ce8850;
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 0x14;
      lVar6 = lVar6 + 2;
    } while ((int)uVar7 < *(int *)(param_1 + 0x54));
  }
  if ((int)uVar7 < *(int *)(param_1 + 0x38)) {
    lVar5 = (uVar7 + 3 + (uVar7 + 3 & 0x3fffffff) * 4 & 0x3fffffff) * 4 + param_2;
    do {
      if (*(int *)lVar5 != 0) {
        bVar2 = true;
        break;
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 0x14;
    } while ((int)uVar7 < *(int *)(param_1 + 0x38));
  }
  if (!bVar2) {
    return;
  }
  if (*(int *)(param_1 + 0x88) <= (int)uVar1) {
    return;
  }
  lVar5 = (uVar4 + 0x11 & 0x7fffffff) * 2 + param_2;
  while (uVar7 = uVar4, *(short *)lVar5 == 0) {
    uVar4 = uVar4 + 1;
    lVar5 = lVar5 + 2;
    if (*(int *)(param_1 + 0x88) <= (int)uVar4) {
      return;
    }
  }
LAB_82ce8850:
  iVar3 = (int)((uVar7 + 0x11 & 0xffffffff) << 1);
  *(short *)(iVar3 + (int)param_2) = *(short *)(iVar3 + (int)param_2) + -1;
  fn_82A2A618(**(undefined4 **)((int)((uVar7 + 0x1e & 0xffffffff) << 2) + param_1),1,0);
  return;
}

