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


longlong fn_8263ABD0(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_4 = param_4 & 0x7fffffff;
  uVar2 = param_3 + param_4 * -2;
  uVar4 = uVar2;
  if ((int)uVar2 < 2) {
    uVar4 = 1;
  }
  uVar1 = param_2 + param_4 * -2;
  uVar3 = uVar1;
  if ((uVar1 <= uVar4) && (uVar3 = uVar2, (int)uVar2 < 2)) {
    uVar3 = 1;
  }
  uVar4 = param_1 + param_4 * -2;
  if (uVar4 <= uVar3) {
    uVar3 = uVar2;
    if ((int)uVar2 < 2) {
      uVar3 = 1;
    }
    uVar4 = uVar1;
    if ((uVar1 <= uVar3) && (uVar4 = uVar2, (int)uVar2 < 2)) {
      uVar4 = 1;
    }
  }
  return 0x20 - LZCOUNT(uVar4);
}

