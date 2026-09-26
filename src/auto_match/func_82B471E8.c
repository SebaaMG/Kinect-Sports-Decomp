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
extern int fn_82ACA920();


uint * fn_82B471E8(undefined8 param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  if (((*param_2 & 0xe000000) != 0x2000000) || (param_3 != 0)) {
    param_2 = (uint *)fn_82ACA920(param_1,param_2,param_2[3]);
    uVar1 = *param_2 >> 5 & 0xff;
    *param_2 = ((((uVar1 >> ((param_3 | 0xe4) >> 5 & 6) & 3) << 2 | 0x10000 |
                 uVar1 >> ((param_3 | 0xe4) >> 3 & 6) & 3) << 2 |
                uVar1 >> ((param_3 | 0xe4) >> 1 & 6) & 3) << 2 | uVar1 >> ((param_3 & 3) << 1) & 3)
               << 5 | *param_2 & 0xf3ffe01f;
  }
  return param_2;
}

