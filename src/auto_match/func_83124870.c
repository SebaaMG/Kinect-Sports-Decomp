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
extern unsigned int *auStack_40;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82238E90();
extern int fn_825154B8();
extern int fn_82515570();
extern int fn_825162B8();
extern int fn_82516318();
extern int fn_82516380();
extern int fn_82516410();
extern int fn_8265CA20();
extern int fn_82F63EC8();
extern unsigned int lbl_83295EE0;
extern unsigned int lbl_83295EE4;
extern unsigned int lbl_83295EF4;
extern unsigned int lbl_83295EF8;
extern unsigned int lbl_83295F00;
extern unsigned int lbl_83295F04;
extern unsigned int lbl_83295F08;
extern unsigned int lbl_83295F0C;
extern unsigned int lbl_83295F10;
extern unsigned int lbl_83295F14;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_83124870(void)

{
  undefined8 uVar1;
  uint auStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  
  fn_82230110(auStack_40,0xffffffff821c2558);
  lbl_83295EE0 = 0;
  lbl_83295EF4 = 0;
  lbl_83295EF8 = 0xf;
  lbl_83295EE4 = 0;
  fn_82230218(0xffffffff83295ee4,auStack_40,0,0xffffffffffffffff,0xffffffff83290000,0,0,0);
  lbl_83295F14 = 0;
  lbl_83295F00 = fn_825162B8;
  lbl_83295F04 = fn_82238E90;
  lbl_83295F0C = fn_82516380;
  lbl_83295F08 = fn_82516318;
  lbl_83295F10 = fn_82516410;
  uVar1 = fn_825154B8();
  fn_82515570(uVar1,0xffffffff83295ee0);
  if (0xf < uStack_2c) {
    fn_8265CA20(auStack_40[0]);
  }
  uStack_30 = 0;
  auStack_40[0] = auStack_40[0] & 0xffffff;
  uStack_2c = 0xf;
  fn_82F63EC8(0xffffffff8313f130);
  return;
}

