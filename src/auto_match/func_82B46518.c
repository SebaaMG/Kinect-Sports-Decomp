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


void fn_82B46518(int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  param_2 = param_2 * 0x28;
  *(uint *)(*(int *)(param_1 + 0xc) + param_2) =
       (param_4 & 0x3fff) << 3 | *(uint *)(*(int *)(param_1 + 0xc) + param_2) & 0xfffe0007;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + param_2 + 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + param_2 + 0x10) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + param_2 + 0xc) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + param_2 + 0x20) = param_3;
  iVar1 = *(int *)(param_1 + 0xc) + param_2;
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x7ffff;
  iVar1 = *(int *)(param_1 + 0xc) + param_2;
  *(uint *)(iVar1 + 8) = (param_5 & 7) << 0x13 | *(uint *)(iVar1 + 8) & 0xffc7ffff;
  iVar1 = *(int *)(param_1 + 0xc) + param_2;
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x70;
  iVar1 = *(int *)(param_1 + 0xc) + param_2;
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 4;
  param_2 = *(int *)(param_1 + 0xc) + param_2;
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 1;
  return;
}

