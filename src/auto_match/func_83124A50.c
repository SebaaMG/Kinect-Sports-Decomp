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
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82359C18();
extern int fn_82517C10();
extern int fn_82518120();
extern int fn_82518248();
extern int fn_8265CA20();
extern int fn_82F63EC8();
extern unsigned int lbl_83295F90;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_50;


void fn_83124A50(void)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  uint auStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  
  fn_82230110(auStack_40,0xffffffff821c2764);
  uStack_50 = 0;
  fn_82517C10(0xffffffff83295f40,auStack_40,0,1,0xffffffff825176e0,0xffffffff8251c5a0,
                    0xffffffff82517768,0xffffffff825177e8);
  fn_82359C18(auStack_60);
  lbl_83295F90 = 0;
  uVar1 = fn_82518120();
  fn_82518248(uVar1,0,0xffffffff83295f40);
  if (0xf < uStack_2c) {
    fn_8265CA20(auStack_40[0]);
  }
  uStack_30 = 0;
  auStack_40[0] = auStack_40[0] & 0xffffff;
  uStack_2c = 0xf;
  fn_82F63EC8(0xffffffff8313f1f0);
  return;
}

