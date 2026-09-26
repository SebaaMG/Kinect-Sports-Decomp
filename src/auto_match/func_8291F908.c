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
extern int fn_8291F7E0();


void fn_8291F908(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  
  uVar1 = *param_2;
  lVar3 = 0xb;
  puVar2 = param_2 + 7;
  *param_1 = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
             ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_2[1];
  param_1[1] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_2[2];
  param_1[2] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_2[3];
  param_1[3] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_2[4];
  param_1[4] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_2[5];
  param_1[5] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_2[6];
  param_1[6] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
               ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  do {
    uVar1 = *puVar2;
    *(uint *)(((int)param_1 - (int)param_2) + (int)puVar2) =
         uVar1 >> 0x18 | uVar1 >> 8 & 0xff00 | ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
    puVar2 = puVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fn_8291F7E0(param_1 + 0x12,param_2 + 0x12);
  uVar1 = param_2[0x1a];
  param_1[0x1a] =
       (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
       ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_2[0x1b];
  param_1[0x1b] =
       (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
       ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_2[0x1c];
  param_1[0x1c] =
       (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
       ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_2[0x1d];
  param_1[0x1d] =
       (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
       ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  uVar1 = param_2[0x1e];
  param_1[0x1e] =
       (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
       ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
  return;
}

