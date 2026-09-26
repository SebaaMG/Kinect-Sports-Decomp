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


void fn_82D49540(char *param_1,undefined8 param_2,uint *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  
  uVar1 = (param_4 & 0xffffffff) * 0x8421085 >> 0x20;
  uVar1 = ((param_4 - uVar1 & 0xffffffff) >> 1) + uVar1 >> 4;
  *param_1 = '\x01' - ((1 << ((int)param_4 - ((int)(uVar1 << 5) - (int)uVar1) & 0x3fU) &
                       *(uint *)((int)(((param_4 & 0xffffffff) / 0x1f + (ulonglong)*param_3 + 1 &
                                       0xffffffff) << 2) + (int)param_3)) == 0);
  return;
}

