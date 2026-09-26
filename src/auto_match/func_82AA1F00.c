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
#define NAN(x) ((x) != (x))
extern unsigned int INFINITY;
extern double _seed_nan;
extern unsigned int fStack0000001c;
extern int fn_82AA1C90();


void fn_82AA1F00(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fStack0000001c;
  
  fStack0000001c = (float)param_1;
  if (fStack0000001c == -0.0) {
    uVar1 = 0xffffffff820d3160;
  }
  else {
    if (((uint)fStack0000001c & 0x7f800000) != 0x7f800000) {
      fn_82AA1C90(param_2,0xffffffff820083a0,param_1);
      return;
    }
    if (fStack0000001c == INFINITY) {
      uVar1 = 0xffffffff82029748;
    }
    else if (fStack0000001c == -INFINITY) {
      uVar1 = 0xffffffff820d3158;
    }
    else if (fStack0000001c == -(_seed_nan)) {
      uVar1 = 0xffffffff82029750;
    }
    else if (((uint)fStack0000001c & 0x400000) == 0) {
      uVar1 = 0xffffffff82029738;
    }
    else {
      uVar1 = 0xffffffff82029740;
    }
  }
  fn_82AA1C90(param_2,uVar1);
  return;
}

