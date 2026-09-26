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


double fn_82CECC88(double param_1)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  fVar2 = (float)param_1;
  uVar5 = ((uint)fVar2 >> 0x17 & 0xff) - 0x7f;
  uVar1 = (int)(0x17 - uVar5) >> 0x1f;
  uVar3 = ~uVar1;
  uVar4 = (uint)fVar2 & ~((int)ABS(fVar2) + -1 >> 0x1f);
  uVar1 = -0x800000 >> ((uVar3 & 0x17) - (uVar3 & 0x17 - uVar5) & 0x3f) | uVar1;
  return (double)(float)((0x800000 >> (uVar5 & 0x3f) & ~((uVar4 & ~uVar1) - 1) & (int)uVar4 >> 0x1f)
                         + uVar4 & ~((int)uVar5 >> 0x1f) & uVar1 |
                        (int)(uVar5 & uVar4) >> 0x1f & 0xbf800000U);
}

