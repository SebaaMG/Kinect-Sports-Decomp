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
extern unsigned int lbl_831D0EE0;
extern unsigned int lbl_83282970;
extern unsigned int lbl_83282974;
extern unsigned int lbl_83282984;
extern unsigned int lbl_83282988;
extern unsigned int lbl_83282990;
extern unsigned int lbl_83282994;
extern unsigned int lbl_83282998;
extern unsigned int lbl_8328299C;
extern unsigned int lbl_832829A0;
extern unsigned int lbl_832829A4;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_83107FB0(void)

{
  undefined8 uVar1;
  uint auStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  
  fn_82230110(auStack_40,0xffffffff821972cc);
  lbl_83282970 = 2;
  lbl_83282988 = 0xf;
  lbl_83282984 = 0;
  lbl_83282974 = 0;
  fn_82230218(0xffffffff83282974,auStack_40,0,0xffffffffffffffff,0xffffffff83280000,2,0,0);
  lbl_83282990 = fn_82238E28;
  lbl_832829A4 = &lbl_831D0EE0;
  lbl_83282994 = fn_82238E90;
  lbl_83282998 = fn_82516318;
  lbl_8328299C = fn_82238EE8;
  lbl_832829A0 = fn_82238F80;
  uVar1 = fn_825154B8();
  fn_82515570(uVar1,0xffffffff83282970);
  if (0xf < uStack_2c) {
    fn_8265CA20(auStack_40[0]);
  }
  uStack_30 = 0;
  auStack_40[0] = auStack_40[0] & 0xffffff;
  uStack_2c = 0xf;
  fn_82F63EC8(0xffffffff8313a4f0);
  return;
}

