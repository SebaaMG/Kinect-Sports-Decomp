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


void fn_828AC498(int param_1,uint param_2,uint param_3,longlong param_4,longlong param_5)

{
  bool bVar1;
  undefined1 uVar2;
  
  *(uint *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 0xc) = param_3;
  *(uint *)(param_1 + 0x10) = (uint)param_4;
  *(uint *)(param_1 + 0x14) = (uint)param_5;
  if ((param_4 + param_5 == 0) || (bVar1 = true, (uint)param_4 < param_2)) {
    bVar1 = false;
  }
  if ((!bVar1) || (uVar2 = 1, (uint)param_5 < param_3)) {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 4) = uVar2;
  return;
}

