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
extern int fn_82258360();
extern int fn_82359C18();
extern int fn_82517C10();
extern int fn_82518120();
extern int fn_82518248();
extern int fn_8265CA20();
extern int fn_82F63EC8();
extern unsigned int lbl_82196E7C;
extern unsigned int lbl_83283A10;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


/* WARNING: Removing unreachable block (ram,0x8310a338) */

void fn_8310A300(void)

{
  undefined8 uVar1;
  undefined **ppuStack_60;
  code *pcStack_5c;
  undefined ***pppuStack_50;
  uint auStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  
  fn_82230110(auStack_40,0xffffffff8219822c);
  pcStack_5c = fn_82258360;
  pppuStack_50 = &ppuStack_60;
  ppuStack_60 = &lbl_82196E7C;
  fn_82517C10(0xffffffff832839c0,auStack_40,0xb,4,0xffffffff82257d48,0xffffffff8251c5a0,
                    0xffffffff82257db8,0xffffffff82257e20);
  fn_82359C18(&ppuStack_60);
  lbl_83283A10 = 7;
  uVar1 = fn_82518120();
  fn_82518248(uVar1,7,0xffffffff832839c0);
  if (0xf < uStack_2c) {
    fn_8265CA20(auStack_40[0]);
  }
  uStack_30 = 0;
  auStack_40[0] = auStack_40[0] & 0xffffff;
  uStack_2c = 0xf;
  fn_82F63EC8(0xffffffff8313b218);
  return;
}

