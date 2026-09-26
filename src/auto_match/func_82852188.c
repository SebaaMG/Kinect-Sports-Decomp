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


void fn_82852188(ulonglong *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + (param_2 + 0x78) * 2) = *param_3;
  *(undefined4 *)(param_1 + param_2 * 2 + 0xf1) = uVar2;
  *(undefined4 *)((int)param_1 + param_2 * 0x10 + 0x78c) = uVar3;
  *(undefined4 *)((int)param_1 + param_2 * 0x10 + 0x784) = uVar1;
  *param_1 = 0x8000000000000000U >> ((ulonglong)(param_2 >> 2) & 0x7f) | *param_1;
  return;
}

