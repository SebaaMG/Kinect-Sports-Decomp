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


undefined8 fn_82965618(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *param_2;
  if ((iVar7 == -1) && (*param_3 == 0)) {
    *param_3 = param_5;
  }
  else {
    if ((param_4 == -1) && (param_5 == 0)) {
      return 0;
    }
    uVar5 = 0;
    uVar4 = 0;
    if (iVar7 != -1) {
      iVar6 = iVar7;
      do {
        uVar5 = uVar5 + 1;
        iVar6 = *(int *)(*(int *)(iVar6 * 4 + *(int *)(param_1 + 0x14)) + 0x14);
      } while (iVar6 != -1);
    }
    if (param_4 != -1) {
      iVar6 = param_4;
      do {
        uVar4 = uVar4 + 1;
        iVar6 = *(int *)(*(int *)(iVar6 * 4 + *(int *)(param_1 + 0x14)) + 0x14);
      } while (iVar6 != -1);
    }
    iVar6 = *param_3;
    bVar1 = (uVar5 & 0xffffffff) < (uVar4 & 0xffffffff);
    if ((uVar4 & 0xffffffff) < (uVar5 & 0xffffffff)) {
      lVar3 = uVar5 - uVar4;
      do {
        uVar5 = uVar5 - 1;
        iVar7 = *(int *)(iVar7 * 4 + *(int *)(param_1 + 0x14));
        iVar6 = *(int *)(iVar7 + 0x18);
        iVar7 = *(int *)(iVar7 + 0x14);
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      bVar1 = (uVar5 & 0xffffffff) < (uVar4 & 0xffffffff);
    }
    if (bVar1) {
      lVar3 = uVar4 - uVar5;
      do {
        iVar2 = *(int *)(param_4 * 4 + *(int *)(param_1 + 0x14));
        param_5 = *(int *)(iVar2 + 0x18);
        param_4 = *(int *)(iVar2 + 0x14);
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    while( true ) {
      if ((iVar6 == param_5) && (iVar7 == param_4)) {
        *param_3 = iVar6;
        *param_2 = iVar7;
        return 0;
      }
      if ((iVar7 == -1) || (param_4 == -1)) break;
      iVar7 = *(int *)(iVar7 * 4 + *(int *)(param_1 + 0x14));
      iVar2 = *(int *)(param_4 * 4 + *(int *)(param_1 + 0x14));
      iVar6 = *(int *)(iVar7 + 0x18);
      iVar7 = *(int *)(iVar7 + 0x14);
      param_5 = *(int *)(iVar2 + 0x18);
      param_4 = *(int *)(iVar2 + 0x14);
    }
    param_4 = -1;
    *param_3 = 0;
  }
  *param_2 = param_4;
  return 0;
}

