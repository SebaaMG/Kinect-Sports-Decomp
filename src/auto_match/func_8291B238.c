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
extern unsigned int fStack0000002c;
extern int fn_829191A0();
extern unsigned int stack0x0000002c;


undefined8 fn_8291B238(double param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  float fStack0000002c;
  
  fStack0000002c = (float)param_1;
  param_4 = ~param_4;
  do {
    uVar1 = fn_829191A0(param_4,param_3,&stack0x0000002c,1,0);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    param_4 = *(uint *)(param_4 + 0x24);
  } while (param_4 != 0);
  return 0;
}

