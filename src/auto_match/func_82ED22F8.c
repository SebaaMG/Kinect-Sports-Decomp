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


undefined8 fn_82ED22F8(int param_1,uint *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar13 = 0x5fb;
  lVar12 = 0;
  lVar11 = 0;
  uVar8 = ((ulonglong)*(uint *)(param_1 + 0x3c) +
           ((ulonglong)*(uint *)(param_1 + 0x3c) & 0x1fffffff) * 8 & 0xffffffff) +
          ((ulonglong)*(uint *)(param_1 + 0x38) & 0x1fffffff) * 8 +
          (((ulonglong)*(uint *)(param_1 + 0x34) & 0x1fffffff) * 8 -
           (ulonglong)*(uint *)(param_1 + 0x34) & 0xffffffff) +
          ((ulonglong)*(uint *)(param_1 + 0x30) +
           ((ulonglong)*(uint *)(param_1 + 0x30) & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
          ((ulonglong)*(uint *)(param_1 + 0x2c) +
           ((ulonglong)*(uint *)(param_1 + 0x2c) & 0x3fffffff) * 4 & 0xffffffff) +
          ((ulonglong)*(uint *)(param_1 + 0x28) & 0x3fffffff) * 4 +
          ((ulonglong)*(uint *)(param_1 + 0x24) +
           ((ulonglong)*(uint *)(param_1 + 0x24) & 0x7fffffff) * 2 & 0xffffffff) +
          ((ulonglong)*(uint *)(param_1 + 0x20) & 0x7fffffff) * 2 +
          (ulonglong)*(uint *)(param_1 + 0x1c);
  iVar10 = 10;
  iVar3 = 0xb;
  piVar7 = (int *)(param_1 + 0x40);
  uVar6 = uVar8;
  uVar9 = uVar8;
  iVar5 = 10;
  do {
    iVar4 = iVar5;
    uVar1 = (longlong)*piVar7 * (longlong)iVar4 & 0xffffffff;
    lVar12 = uVar1 + lVar12;
    uVar9 = (uVar1 - ((longlong)(iVar3 + -0xb) * (longlong)piVar7[-10] & 0xffffffffU)) + uVar9;
    if (uVar6 < uVar9) {
      uVar6 = uVar9;
      iVar10 = iVar4;
    }
    uVar1 = (longlong)piVar7[1] * (longlong)iVar3 & 0xffffffff;
    lVar11 = uVar1 + lVar11;
    uVar9 = (uVar1 - ((longlong)piVar7[-9] * (longlong)(iVar3 + -10) & 0xffffffffU)) + uVar9;
    if (uVar6 < uVar9) {
      uVar6 = uVar9;
      iVar10 = iVar3;
    }
    iVar5 = iVar4 + 2;
    piVar7 = piVar7 + 2;
    iVar3 = iVar3 + 2;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  if (iVar5 < 0xc00) {
    uVar1 = (longlong)*(int *)((iVar4 + 8) * 4 + param_1) * (longlong)iVar5 & 0xffffffff;
    uVar8 = uVar1 + uVar8;
    uVar9 = (uVar1 - ((longlong)*(int *)((iVar4 + -2) * 4 + param_1) * (longlong)(iVar4 + -8) &
                     0xffffffffU)) + uVar9;
    if (uVar6 < uVar9) {
      uVar6 = uVar9;
      iVar10 = iVar5;
    }
  }
  if ((iVar10 - 10U < 0x1f) || (uVar6 * 10 <= lVar11 + lVar12 + uVar8)) {
    uVar2 = 0;
  }
  else {
    *param_2 = iVar10 - 10U;
    uVar2 = 1;
  }
  return uVar2;
}

