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
extern unsigned int lbl_831D0F44;
extern unsigned int lbl_83282FA8;
extern unsigned int lbl_83282FAC;
extern unsigned int lbl_83282FBC;
extern unsigned int lbl_83282FC0;
extern unsigned int lbl_83282FC8;
extern unsigned int lbl_83282FCC;
extern unsigned int lbl_83282FD0;
extern unsigned int lbl_83282FD4;
extern unsigned int lbl_83282FD8;
extern unsigned int lbl_83282FDC;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_83108F20(void)

{
  undefined8 uVar1;
  uint auStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  
  fn_82230110(auStack_40,0xffffffff82197e6c);
  lbl_83282FA8 = 5;
  lbl_83282FC0 = 0xf;
  lbl_83282FBC = 0;
  lbl_83282FAC = 0;
  fn_82230218(0xffffffff83282fac,auStack_40,0,0xffffffffffffffff,0xffffffff83280000,5,0,0);
  lbl_83282FC8 = fn_82238E28;
  lbl_83282FDC = &lbl_831D0F44;
  lbl_83282FCC = fn_82238E90;
  lbl_83282FD0 = fn_82516318;
  lbl_83282FD4 = fn_82238EE8;
  lbl_83282FD8 = fn_82238F80;
  uVar1 = fn_825154B8();
  fn_82515570(uVar1,0xffffffff83282fa8);
  if (0xf < uStack_2c) {
    fn_8265CA20(auStack_40[0]);
  }
  uStack_30 = 0;
  auStack_40[0] = auStack_40[0] & 0xffffff;
  uStack_2c = 0xf;
  fn_82F63EC8(0xffffffff8313aac8);
  return;
}

