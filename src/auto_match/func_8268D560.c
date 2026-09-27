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
extern unsigned int fStack_20;
extern int fn_8268D4B8();
extern float lbl_82005718;
extern unsigned int uStack_10;


/* WARNING: Type propagation algorithm not settling */

void fn_8268D560(int param_1,undefined4 param_2)

{
  float fStack_20;
  float afStack_1c [3];
  undefined4 uStack_10;
  
  afStack_1c[1] = 2.8026e-45;
  uStack_10 = 0x200;
  fStack_20 = *(float *)(param_1 + 0x14) * lbl_82005718;
  afStack_1c[0] = *(float *)(param_1 + 8) * lbl_82005718;
  afStack_1c[2] = (float)param_2;
  fn_8268D4B8(afStack_1c + 1,0xffffffff82005c90,param_1,param_1 + 4,afStack_1c,param_1 + 0xc,
                param_1 + 0x10,&fStack_20);
  return;
}

