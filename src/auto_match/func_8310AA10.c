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
extern int fn_8225A310();
extern int fn_82359C18();
extern int fn_82517C10();
extern int fn_82518120();
extern int fn_82518248();
extern int fn_8265CA20();
extern int fn_82F63EC8();
extern unsigned int lbl_82196E7C;
extern unsigned int lbl_83283D78;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


/* WARNING: Removing unreachable block (ram,0x8310aa48) */

void fn_8310AA10(void)

{
  undefined8 uVar1;
  undefined **ppuStack_60;
  code *pcStack_5c;
  undefined ***pppuStack_50;
  uint auStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  
  fn_82230110(auStack_40,0xffffffff821982ec);
  pcStack_5c = fn_8225A310;
  pppuStack_50 = &ppuStack_60;
  ppuStack_60 = &lbl_82196E7C;
  fn_82517C10(0xffffffff83283d28,auStack_40,9,1,0xffffffff82259e98,0xffffffff8251c5a0,
                    0xffffffff82259f10,0xffffffff82259f58);
  fn_82359C18(&ppuStack_60);
  lbl_83283D78 = 3;
  uVar1 = fn_82518120();
  fn_82518248(uVar1,3,0xffffffff83283d28);
  if (0xf < uStack_2c) {
    fn_8265CA20(auStack_40[0]);
  }
  uStack_30 = 0;
  auStack_40[0] = auStack_40[0] & 0xffffff;
  uStack_2c = 0xf;
  fn_82F63EC8(0xffffffff8313b490);
  return;
}

