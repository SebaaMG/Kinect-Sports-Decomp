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


longlong fn_82D02880(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar2 = (ulonglong)(param_1 >> 8);
  if (uVar2 == 0) {
    return 0;
  }
  if (0xffff < uVar2) {
    return 0x1f;
  }
  uVar4 = (uVar2 - 0x100 & 0xffffffff) >> 0x10 & 8;
  iVar1 = (param_1 >> 8) << (int)uVar4;
  uVar3 = (ulonglong)(iVar1 - 0x1000U >> 0x10) & 4;
  iVar1 = iVar1 << (int)uVar3;
  uVar2 = (ulonglong)(iVar1 - 0x4000U >> 0x10) & 2;
  lVar5 = (((uint)(iVar1 << (int)uVar2) >> 0xf) - uVar2) - (uVar3 + uVar4);
  return ((ulonglong)(param_1 >> ((int)lVar5 + 0x15U & 0x3f)) & 1) + (lVar5 + 0xeU & 0x7fffffff) * 2
  ;
}

