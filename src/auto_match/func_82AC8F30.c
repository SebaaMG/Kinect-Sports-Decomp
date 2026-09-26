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


void fn_82AC8F30(int param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar1 = (param_2 & 0xffffffff) >> 2;
  uVar2 = uVar1 & 0x3c;
  uVar1 = ((2L << ((uVar1 & 0x3ffffffc) + 3 & 0x3f)) - 1U &
           *(ulonglong *)((((uint)(param_2 >> 8) & 0xffffff) + 1) * 8 + param_1) & -1L << uVar2) >>
          uVar2 & 0xffffffff & param_2 & 0xf;
  if (uVar1 == 0) {
    return;
  }
  iVar3 = ((int)((param_2 & 0xfffffff0) >> 8) + 1) * 8;
  *(ulonglong *)(iVar3 + param_1) =
       *(longlong *)(iVar3 + param_1) - (uVar1 << ((param_2 & 0xfffffff0) >> 2 & 0x3c));
  return;
}

