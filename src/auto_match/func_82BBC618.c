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


void fn_82BBC618(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((*(char *)(param_3 + param_1 + 0x380) == '\0') &&
     (*(char *)(param_4 + param_1 + 0x380) == '\0')) {
    iVar3 = (param_3 + 0xf4) * 4;
    iVar4 = (param_4 + 0xf4) * 4;
    iVar5 = (param_4 + 0x104) * 4;
    iVar1 = (param_3 + 0x104) * 4;
    uVar2 = *(undefined4 *)(iVar4 + param_1);
    *(undefined4 *)(iVar4 + param_1) = *(undefined4 *)(iVar3 + param_1);
    *(undefined4 *)(iVar3 + param_1) = uVar2;
    lVar6 = 0;
    uVar2 = *(undefined4 *)(iVar5 + param_1);
    lVar7 = 4;
    *(undefined4 *)(iVar5 + param_1) = *(undefined4 *)(iVar1 + param_1);
    *(undefined4 *)(iVar1 + param_1) = uVar2;
    do {
      iVar3 = (int)((((ulonglong)param_3 + 0x45 & 0x3fffffff) * 4 + lVar6 & 0xffffffff) << 2);
      iVar4 = (int)((((ulonglong)param_4 + 0x45 & 0x3fffffff) * 4 + lVar6 & 0xffffffff) << 2);
      lVar6 = lVar6 + 1;
      uVar2 = *(undefined4 *)(iVar4 + param_1);
      *(undefined4 *)(iVar4 + param_1) = *(undefined4 *)(iVar3 + param_1);
      *(undefined4 *)(iVar3 + param_1) = uVar2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar6 = 0;
    lVar7 = 4;
    do {
      iVar3 = (int)((((ulonglong)param_3 + 0x55 & 0x3fffffff) * 4 + lVar6 & 0xffffffff) << 2);
      iVar4 = (int)((((ulonglong)param_4 + 0x55 & 0x3fffffff) * 4 + lVar6 & 0xffffffff) << 2);
      lVar6 = lVar6 + 1;
      uVar2 = *(undefined4 *)(iVar4 + param_1);
      *(undefined4 *)(iVar4 + param_1) = *(undefined4 *)(iVar3 + param_1);
      *(undefined4 *)(iVar3 + param_1) = uVar2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar6 = 0;
    lVar7 = 4;
    do {
      iVar3 = (int)((((ulonglong)param_3 + 0x65 & 0x3fffffff) * 4 + lVar6 & 0xffffffff) << 2);
      iVar4 = (int)((((ulonglong)param_4 + 0x65 & 0x3fffffff) * 4 + lVar6 & 0xffffffff) << 2);
      lVar6 = lVar6 + 1;
      uVar2 = *(undefined4 *)(iVar4 + param_1);
      *(undefined4 *)(iVar4 + param_1) = *(undefined4 *)(iVar3 + param_1);
      *(undefined4 *)(iVar3 + param_1) = uVar2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    iVar4 = (param_3 + 0xe4) * 4;
    iVar5 = (param_4 + 0xe4) * 4;
    iVar3 = *(int *)(iVar5 + param_1);
    *(undefined4 *)(iVar5 + param_1) = *(undefined4 *)(iVar4 + param_1);
    *(int *)(iVar4 + param_1) = iVar3;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x38);
      *(uint *)(iVar3 + 0x10) = param_3;
      if (iVar1 != 0) {
        uVar2 = *(undefined4 *)(iVar3 + 0x20);
        *(uint *)(iVar1 + 0x38) = param_3;
        *(undefined4 *)(iVar1 + 0x50) = uVar2;
      }
    }
    iVar3 = *(int *)(iVar5 + param_1);
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x38);
      *(uint *)(iVar3 + 0x10) = param_4;
      if (iVar1 != 0) {
        uVar2 = *(undefined4 *)(iVar3 + 0x20);
        *(uint *)(iVar1 + 0x38) = param_4;
        *(undefined4 *)(iVar1 + 0x50) = uVar2;
      }
    }
    if ((*(int *)(iVar4 + param_1) != 0) && (*(int *)(*(int *)(iVar4 + param_1) + 0x20) == 0x12)) {
      *(uint *)(param_2 + 0x81c) = param_3;
    }
    if ((*(int *)(iVar5 + param_1) != 0) && (*(int *)(*(int *)(iVar5 + param_1) + 0x20) == 0x12)) {
      *(uint *)(param_2 + 0x81c) = param_4;
    }
  }
  return;
}

