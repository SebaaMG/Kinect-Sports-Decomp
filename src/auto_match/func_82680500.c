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
extern int fn_8267FD48();


longlong fn_82680500(int param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 10) {
    uVar1 = (param_2 + 3U & 0xffffffff) >> 2;
    iVar3 = (int)uVar1;
    if (uVar1 == 0) {
      iVar3 = 1;
    }
    uVar1 = ((ulonglong)param_3 + 3 & 0xffffffff) >> 2;
    iVar4 = (int)uVar1;
    if (uVar1 == 0) {
      iVar4 = 1;
    }
    lVar2 = ((longlong)iVar3 * (longlong)iVar4 & 0x1fffffffU) << 3;
  }
  else if ((param_1 < 0xb) || (0xc < param_1)) {
    iVar3 = fn_8267FD48();
    lVar2 = (longlong)iVar3 * (longlong)(int)param_3;
  }
  else {
    uVar1 = (param_2 + 3U & 0xffffffff) >> 2;
    iVar3 = (int)uVar1;
    if (uVar1 == 0) {
      iVar3 = 1;
    }
    uVar1 = ((ulonglong)param_3 + 3 & 0xffffffff) >> 2;
    iVar4 = (int)uVar1;
    if (uVar1 == 0) {
      iVar4 = 1;
    }
    lVar2 = ((longlong)iVar4 * (longlong)iVar3 & 0xfffffffU) << 4;
  }
  return lVar2;
}

