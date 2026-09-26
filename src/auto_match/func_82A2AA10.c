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
extern unsigned int *auStack_4c;
extern int fn_82F69148();
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82A2AA10(undefined4 param_1,uint param_2,uint param_3,undefined8 param_4)

{
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  code *pcStack_54;
  uint uStack_50;
  undefined1 auStack_4c [76];
  
  uStack_5c = param_2 & 1;
  uStack_58 = 0;
  pcStack_54 = fn_82A2AA10;
  uStack_60 = param_1;
  if ((int)param_4 == 0) {
    uStack_50 = 0;
  }
  else {
    if (0xf < param_3) {
      param_3 = 0xf;
    }
    uStack_50 = param_3;
    if (param_3 != 0) {
      fn_82F69148(auStack_4c,param_4,param_3 << 2);
    }
  }
  RtlRaiseException(&uStack_60);
  return;
}

