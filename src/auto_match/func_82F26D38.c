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


void fn_82F26D38(int param_1,ulonglong param_2,ulonglong param_3,int *param_4,uint *param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar1 = *param_5;
  iVar5 = *param_4;
  lVar7 = ((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x1fffffff) * 8;
  if ((uVar1 & 4) == 0) {
    lVar2 = -8;
    lVar6 = ((ulonglong)*(uint *)(param_1 + 0x2d4) & 0x1fffffff) << 3;
  }
  else {
    lVar2 = -9;
    lVar6 = ((ulonglong)*(uint *)(param_1 + 0x2d4) & 0x1fffffff) * 8 + 1;
  }
  if (iVar5 == 0x4000) {
    *param_4 = 0x4000;
  }
  else {
    lVar4 = (longlong)(iVar5 >> 2) + (param_2 & 0x1fffffff) * 8;
    lVar3 = (longlong)((int)uVar1 >> 2) + (param_3 & 0x1fffffff) * 8;
    if ((int)lVar4 < -8) {
      iVar5 = iVar5 - (int)((lVar4 + 8U & 0xffffffff) << 2);
    }
    else if ((int)lVar7 < (int)lVar4) {
      iVar5 = (int)((lVar7 - lVar4 & 0xffffffffU) << 2) + iVar5;
    }
    *param_4 = iVar5;
    if ((int)lVar3 < (int)lVar2) {
      *param_5 = (int)((lVar2 - lVar3 & 0xffffffffU) << 2) + uVar1;
      return;
    }
    if ((int)lVar6 < (int)lVar3) {
      *param_5 = (int)((lVar6 - lVar3 & 0xffffffffU) << 2) + uVar1;
      return;
    }
  }
  *param_5 = uVar1;
  return;
}

