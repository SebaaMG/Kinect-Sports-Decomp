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
extern unsigned int *auStack_60;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_8280E418();
extern int fn_8280E7D0();
extern int fn_8280EA40();
extern int fn_8280FC18();
extern int fn_8280FD40();
extern int fn_82810280();
extern int fn_82810530();
extern unsigned int lbl_8201DFF8;


void fn_8281DEF0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [96];
  
  fn_8280FC18(param_1,auStack_90);
  fn_8280EA40(auStack_90,auStack_a0);
  fn_8280E418(auStack_a0,auStack_a0);
  fn_8280E7D0(auStack_a0,auStack_60);
  fn_8280FD40(auStack_60,param_2);
  lVar1 = 3;
  param_1 = param_1 - param_2;
  dVar3 = (double)lbl_8201DFF8;
  do {
    dVar2 = (double)fn_82810280(param_1 + param_2,param_2);
    if (dVar2 < dVar3) {
      fn_82810530(param_2,param_2);
    }
    lVar1 = lVar1 + -1;
    param_2 = param_2 + 0xc;
  } while (lVar1 != 0);
  return;
}

