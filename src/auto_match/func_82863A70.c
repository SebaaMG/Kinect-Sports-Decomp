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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82810240();
extern int fn_82810328();
extern int fn_82862238();
extern unsigned int lbl_832116B8;
extern unsigned int lbl_832116BC;


void fn_82863A70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  fn_82862238((double)lbl_832116BC,param_1,param_2,lbl_832116B8,param_4,param_3,auStack_80);
  fn_82862238((double)lbl_832116BC,param_1,param_2,lbl_832116B8);
  fn_82862238((double)lbl_832116BC,param_1,param_2,lbl_832116B8);
  fn_82810328(auStack_90,auStack_80,auStack_50);
  fn_82810328(auStack_70,auStack_90,auStack_60);
  fn_82810240(auStack_50,auStack_60,param_6);
  return;
}

