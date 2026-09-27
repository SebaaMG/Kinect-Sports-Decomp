extern unsigned int *puRam8322b1e0;
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
extern int fn_82BA02A8();
extern int fn_82BEA1F8();
extern int fn_82BEA230();
extern unsigned int lbl_831751CC;
extern unsigned int *lbl_8322B1DC;
extern unsigned int lbl_8322B1E8;
extern U64 storeWordConditionalIndexed();


void fn_82BE7678(void)

{
  longlong lVar1;
  int *piVar2;
  char in_RESERVE;
  byte in_cr0;

  if (lbl_8322B1DC != (undefined4 *)0x0) {
    (**(code **)*lbl_8322B1DC)(lbl_8322B1DC,1);
    lbl_8322B1DC = (undefined4 *)0x0;
    fn_82BA02A8();
    if (puRam8322b1e0 != (undefined4 *)0x0) {
      (**(code **)*puRam8322b1e0)(puRam8322b1e0,1);
      puRam8322b1e0 = (undefined4 *)0x0;
    }
    do {
      if (in_RESERVE != '\0') {
        lbl_8322B1E8 = storeWordConditionalIndexed((ulonglong)lbl_8322B1E8 - 1,0,0xffffffff8322b1e8)
        ;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (lbl_8322B1E8 == 0) {
      fn_82BEA1F8(0xffffffff8322b1ec,0xffffffff820e9990);
      lVar1 = 0x10;
      piVar2 = (int *)0x83175250;
      do {
        piVar2[-2] = 0;
        *(undefined2 *)(piVar2 + -1) = 1000;
        if (*piVar2 != 0) {
          (*(code *)lbl_831751CC)();
          *piVar2 = 0;
        }
        lVar1 = lVar1 + -1;
        piVar2 = piVar2 + 3;
      } while (lVar1 != 0);
      fn_82BEA230(0xffffffff8322b1ec,0xffffffff820e9990);
    }
  }
  return;
}
