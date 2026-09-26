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
extern int fn_82238E28();
extern int fn_82238E90();
extern int fn_82238EE8();
extern int fn_82238F80();
extern int fn_825154B8();
extern int fn_82515570();
extern int fn_82516318();
extern int fn_8265CA20();
extern int fn_82F63EC8();
extern unsigned int lbl_831D0F54;
extern unsigned int lbl_83283420;
extern unsigned int lbl_83283424;
extern unsigned int lbl_83283434;
extern unsigned int lbl_83283438;
extern unsigned int lbl_83283440;
extern unsigned int lbl_83283444;
extern unsigned int lbl_83283448;
extern unsigned int lbl_8328344C;
extern unsigned int lbl_83283450;
extern unsigned int lbl_83283454;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_831097B0(void)

{
  undefined8 uVar1;
  uint auStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  
  fn_82230110(auStack_40,0xffffffff8219804c);
  lbl_83283420 = 6;
  lbl_83283438 = 0xf;
  lbl_83283434 = 0;
  lbl_83283424 = 0;
  fn_82230218(0xffffffff83283424,auStack_40,0,0xffffffffffffffff,0xffffffff83280000,6,0,0);
  lbl_83283440 = fn_82238E28;
  lbl_83283454 = &lbl_831D0F54;
  lbl_83283444 = fn_82238E90;
  lbl_83283448 = fn_82516318;
  lbl_8328344C = fn_82238EE8;
  lbl_83283450 = fn_82238F80;
  uVar1 = fn_825154B8();
  fn_82515570(uVar1,0xffffffff83283420);
  if (0xf < uStack_2c) {
    fn_8265CA20(auStack_40[0]);
  }
  uStack_30 = 0;
  auStack_40[0] = auStack_40[0] & 0xffffff;
  uStack_2c = 0xf;
  fn_82F63EC8(0xffffffff8313ae00);
  return;
}

