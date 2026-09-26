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


void fn_8270A1E0(int *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  iVar2 = (int)param_4;
  uVar3 = param_3 - param_2;
  *param_1 = iVar2;
  param_1[4] = (int)param_2;
  trapWord(6,param_4,0);
  lVar4 = uVar3 - (longlong)((int)uVar3 / iVar2) * (longlong)iVar2;
  iVar1 = (int)uVar3 / iVar2;
  iVar5 = (int)lVar4;
  param_1[2] = iVar5;
  param_1[1] = iVar1;
  trapWord(6,param_4,0);
  param_1[3] = iVar5;
  trapWord(5,param_4 & ~(((uVar3 & 0x7fffffff) << 1 | (uVar3 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,param_4 & ~(((uVar3 & 0x7fffffff) << 1 | (uVar3 & 0xffffffff) >> 0x1f) - 1),0xffff);
  if (lVar4 < 1) {
    param_1[3] = iVar5 + iVar2;
    param_1[2] = iVar5 + iVar2;
    param_1[1] = iVar1 + -1;
  }
  param_1[3] = param_1[3] - iVar2;
  return;
}

