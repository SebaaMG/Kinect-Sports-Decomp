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


bool fn_829682A8(int param_1,int param_2,ulonglong param_3,int param_4,ulonglong param_5)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  uVar4 = 0;
  if (param_2 != -1) {
    iVar5 = param_2;
    do {
      uVar6 = uVar6 + 1;
      iVar5 = *(int *)(*(int *)(iVar5 * 4 + *(int *)(param_1 + 0x14)) + 0x14);
    } while (iVar5 != -1);
  }
  if (param_4 != -1) {
    iVar5 = param_4;
    do {
      uVar4 = uVar4 + 1;
      iVar5 = *(int *)(*(int *)(iVar5 * 4 + *(int *)(param_1 + 0x14)) + 0x14);
    } while (iVar5 != -1);
  }
  bVar1 = (uVar6 & 0xffffffff) < (uVar4 & 0xffffffff);
  if ((uVar4 & 0xffffffff) < (uVar6 & 0xffffffff)) {
    lVar3 = uVar6 - uVar4;
    do {
      uVar6 = uVar6 - 1;
      iVar5 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x14));
      param_3 = (ulonglong)*(uint *)(iVar5 + 0x18);
      param_2 = *(int *)(iVar5 + 0x14);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    bVar1 = (uVar6 & 0xffffffff) < (uVar4 & 0xffffffff);
  }
  if (bVar1) {
    lVar3 = uVar4 - uVar6;
    do {
      iVar5 = *(int *)(param_4 * 4 + *(int *)(param_1 + 0x14));
      param_5 = (ulonglong)*(uint *)(iVar5 + 0x18);
      param_4 = *(int *)(iVar5 + 0x14);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (param_2 != param_4) {
    do {
      iVar5 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x14));
      iVar2 = *(int *)(param_4 * 4 + *(int *)(param_1 + 0x14));
      param_2 = *(int *)(iVar5 + 0x14);
      param_4 = *(int *)(iVar2 + 0x14);
      param_3 = (ulonglong)*(uint *)(iVar5 + 0x18);
      param_5 = (ulonglong)*(uint *)(iVar2 + 0x18);
    } while (param_2 != param_4);
  }
  return param_5 != param_3;
}

