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
extern int fn_82FA5B20();
extern int fn_82FA5BC0();
extern unsigned int uStack_20;


ulonglong fn_82FA61A0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  uint uStack_20;
  int aiStack_1c [3];
  
  uVar1 = 0;
  if (param_2 != 0) {
    if (0x1f < param_2) {
      param_2 = ((1 << (0x1aU - (int)LZCOUNT(param_2) & 0x3f)) + param_2) - 1;
    }
    if (param_2 < 0x80) {
      aiStack_1c[0] = 0;
      uStack_20 = param_2 >> 2;
    }
    else {
      aiStack_1c[0] = -(int)LZCOUNT(param_2) + 0x19;
      uStack_20 = param_2 >> (-(int)LZCOUNT(param_2) + 0x1aU & 0x3f) ^ 0x20;
    }
    uVar1 = fn_82FA5B20(param_1,aiStack_1c,&uStack_20);
    if ((uVar1 & 0xffffffff) != 0) {
      fn_82FA5BC0(param_1,uVar1,aiStack_1c[0],uStack_20);
    }
  }
  return uVar1;
}

