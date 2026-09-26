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
extern unsigned int lbl_831D0F64;
extern unsigned int lbl_832837E0;
extern unsigned int lbl_832837E4;
extern unsigned int lbl_832837F4;
extern unsigned int lbl_832837F8;
extern unsigned int lbl_83283800;
extern unsigned int lbl_83283804;
extern unsigned int lbl_83283808;
extern unsigned int lbl_8328380C;
extern unsigned int lbl_83283810;
extern unsigned int lbl_83283814;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_83109F98(void)

{
  undefined8 uVar1;
  uint auStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  
  fn_82230110(auStack_40,0xffffffff82198210);
  lbl_832837E0 = 7;
  lbl_832837F8 = 0xf;
  lbl_832837F4 = 0;
  lbl_832837E4 = 0;
  fn_82230218(0xffffffff832837e4,auStack_40,0,0xffffffffffffffff,0xffffffff83280000,7,0,0);
  lbl_83283800 = fn_82238E28;
  lbl_83283814 = &lbl_831D0F64;
  lbl_83283804 = fn_82238E90;
  lbl_83283808 = fn_82516318;
  lbl_8328380C = fn_82238EE8;
  lbl_83283810 = fn_82238F80;
  uVar1 = fn_825154B8();
  fn_82515570(uVar1,0xffffffff832837e0);
  if (0xf < uStack_2c) {
    fn_8265CA20(auStack_40[0]);
  }
  uStack_30 = 0;
  auStack_40[0] = auStack_40[0] & 0xffffff;
  uStack_2c = 0xf;
  fn_82F63EC8(0xffffffff8313b0d8);
  return;
}

