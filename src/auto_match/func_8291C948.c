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


void fn_8291C948(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  *param_1 = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
             ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_2[1];
  param_1[1] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_2[2];
  param_1[2] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  *(ushort *)(param_1 + 3) = *(ushort *)(param_2 + 3) << 8 | *(ushort *)(param_2 + 3) >> 8;
  *(ushort *)((int)param_1 + 0xe) =
       *(ushort *)((int)param_2 + 0xe) << 8 | *(ushort *)((int)param_2 + 0xe) >> 8;
  uVar1 = param_2[4];
  param_1[4] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_2[5];
  param_1[5] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_2[6];
  param_1[6] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_2[7];
  param_1[7] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_2[8];
  param_1[8] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_2[9];
  param_1[9] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  return;
}

