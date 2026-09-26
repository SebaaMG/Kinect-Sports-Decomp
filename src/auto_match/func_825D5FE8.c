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


void fn_825D5FE8(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if ((*param_1 == 0) && (param_1[1] == 0)) {
    *(uint *)(param_2 + 0x2934) = *(uint *)(param_2 + 0x2934) & 0xfffe3fff | 0x8000;
    *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x800;
    *(uint *)(param_2 + 0x2934) = *(uint *)(param_2 + 0x2934) | 0x700;
    *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x800;
    *(undefined4 *)(param_2 + 0x2f18) = 1;
    *(uint *)(param_2 + 0x2934) =
         *(uint *)(param_2 + 0x2934) & 0xfffffffe | -(uint)(*(int *)(param_2 + 0x3158) != 0) & 1;
    *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x20800;
  }
  uVar1 = param_1[1];
  param_1[1] = param_3 | uVar1;
  *(byte *)(param_2 + 0x2901) = (byte)(param_3 | uVar1) | (byte)*param_1;
  *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x10000000;
  return;
}

