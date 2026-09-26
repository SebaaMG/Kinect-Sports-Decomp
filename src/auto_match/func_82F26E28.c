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


void fn_82F26E28(int param_1,ulonglong param_2,ulonglong param_3,int *param_4,int *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar4 = *param_4;
  iVar1 = *param_5;
  lVar6 = ((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x1fffffff) * 8;
  lVar5 = ((ulonglong)*(uint *)(param_1 + 0x2d4) & 0x1fffffff) * 8;
  if (iVar4 == 0x4000) {
    *param_4 = 0x4000;
  }
  else {
    lVar3 = (longlong)(iVar4 >> 2) + (param_2 & 0x1fffffff) * 8;
    lVar2 = (longlong)(iVar1 >> 2) + (param_3 & 0x1fffffff) * 8;
    if ((int)lVar3 < -8) {
      iVar4 = iVar4 - (int)((lVar3 + 8U & 0xffffffff) << 2);
    }
    else if ((int)lVar6 < (int)lVar3) {
      iVar4 = (int)((lVar6 - lVar3 & 0xffffffffU) << 2) + iVar4;
    }
    *param_4 = iVar4;
    if ((int)lVar2 < -8) {
      *param_5 = iVar1 - (int)((lVar2 + 8U & 0xffffffff) << 2);
      return;
    }
    if ((int)lVar5 < (int)lVar2) {
      *param_5 = (int)((lVar5 - lVar2 & 0xffffffffU) << 2) + iVar1;
      return;
    }
  }
  *param_5 = iVar1;
  return;
}

