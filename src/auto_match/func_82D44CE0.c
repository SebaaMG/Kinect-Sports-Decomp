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


ulonglong fn_82D44CE0(int param_1,longlong param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar10;
  longlong lVar9;
  
  iVar2 = 0;
  *param_3 = 0;
  if ((int)param_2 < 0) {
    return -(ulonglong)(*(int *)(param_1 + 0x20) == 0);
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar6 = param_2 + 1;
  uVar8 = 0;
  iVar3 = 0;
  iVar7 = (int)uVar6;
  if (iVar1 != 0) {
    puVar5 = *(ushort **)(param_1 + 0x28);
    uVar10 = (uint)*puVar5;
    uVar4 = 0;
    uVar8 = (ulonglong)*puVar5;
    while (iVar3 = (int)uVar4, (int)uVar10 <= iVar7) {
      iVar2 = iVar2 + 1;
      puVar5 = puVar5 + 1;
      if (iVar1 <= iVar2) goto LAB_82d44d58;
      uVar10 = (uint)(*puVar5 + uVar8);
      uVar4 = uVar8;
      uVar8 = *puVar5 + uVar8;
    }
  }
  if (iVar2 < iVar1) {
    if (iVar7 < (int)uVar8 + -2) {
      *param_3 = iVar7 - iVar3 & 1;
      uVar8 = uVar6;
    }
  }
  else {
LAB_82d44d58:
    lVar9 = uVar6 - uVar8;
    uVar8 = (longlong)(int)lVar9 / 3 + ((longlong)(int)lVar9 >> 0x3f);
    uVar4 = (uVar8 & 0xffffffff) + ((uVar8 & 0xffffffff) >> 0x1f);
    uVar8 = uVar6;
    if (lVar9 != uVar4 + (uVar4 & 0x7fffffff) * 2) {
      do {
        lVar9 = lVar9 + 1;
        uVar8 = uVar8 + 1;
        uVar6 = (longlong)(int)lVar9 / 3 + ((longlong)(int)lVar9 >> 0x3f);
        uVar6 = (uVar6 & 0xffffffff) + ((uVar6 & 0xffffffff) >> 0x1f);
      } while (lVar9 != uVar6 + (uVar6 & 0x7fffffff) * 2);
    }
  }
  uVar6 = 0xffffffffffffffff;
  if ((int)uVar8 < *(int *)(param_1 + 0x20)) {
    uVar6 = uVar8;
  }
  return uVar6;
}

