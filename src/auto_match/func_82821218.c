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


void fn_82821218(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
             ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_1[4];
  param_1[4] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_1[8];
  param_1[8] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_1[0xc];
  param_1[0xc] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
                 ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_1[1];
  param_1[1] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_1[5];
  param_1[5] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_1[9];
  param_1[9] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_1[0xd];
  param_1[0xd] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
                 ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_1[2];
  param_1[2] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_1[6];
  param_1[6] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_1[10];
  param_1[10] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
                ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_1[0xe];
  param_1[0xe] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
                 ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_1[3];
  param_1[3] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_1[7];
  param_1[7] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_1[0xb];
  param_1[0xb] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
                 ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_1[0xf];
  param_1[0xf] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
                 ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  return;
}

