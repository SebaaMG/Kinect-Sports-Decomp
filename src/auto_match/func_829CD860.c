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
extern unsigned int lbl_832154A8;
extern unsigned int lbl_832154B0;
extern unsigned int lbl_832154D4;
extern unsigned int *lbl_832155B4;
extern unsigned int lbl_832155C4;
extern unsigned int lbl_832155E4;


void fn_829CD860(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if (lbl_832154A8 != 0) {
    uVar1 = KfAcquireSpinLock(0xffffffff832155b0);
    if (param_1 == 0) {
      iVar2 = 0x153c32 - lbl_832154B0;
    }
    else {
      iVar2 = (param_1 - lbl_832154B0) + -0x43238;
    }
    if (lbl_832155B4 == (int *)0x0) {
      lbl_832155B4 = (int *)(&lbl_832155C4 + lbl_832155E4 * 8);
    }
    *lbl_832155B4 = param_1;
    lbl_832155B4[1] = iVar2;
    lbl_832154D4 = 1;
    KfReleaseSpinLock(0xffffffff832155b0,uVar1);
  }
  return;
}

