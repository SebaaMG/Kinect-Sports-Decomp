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


void fn_82B18128(undefined8 param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)fn_82ACA920(param_1,param_2,param_2[3]);
  uVar1 = *puVar2;
  *puVar2 = uVar1 & 0xf1ffffff | 0x2000000;
  *puVar2 = ((*param_2 >> 5 & 0xff) >> ((param_3 & 0x1f) << 1) & 3) << 5 | 0x1c80 |
            uVar1 & 0xf1fffc9f | 0x2000000;
  return;
}

