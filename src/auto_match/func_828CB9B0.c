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
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82887890();
extern int fn_828A2240();
extern int fn_828DFD60();
extern int fn_82F63EC8();
extern unsigned int lbl_832143C4;
extern unsigned int lbl_832143C8;


uint fn_828CB9B0(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [44];
  
  uVar2 = lbl_832143C8 & 1;
  if ((lbl_832143C8 & 1) == 0) {
    lbl_832143C8 = lbl_832143C8 | 1;
    lbl_832143C4 = uVar2;
    fn_82F63EC8(0xffffffff83141378);
  }
  if (lbl_832143C4 == 0) {
    uVar2 = fn_8265C9E0(0x10);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      fn_828A2240(uVar2,auStack_30,auStack_30);
    }
    uVar1 = lbl_832143C4;
    if ((uVar2 != lbl_832143C4) && (lbl_832143C4 != 0)) {
      fn_82887890(auStack_2c,lbl_832143C4,**(undefined4 **)(lbl_832143C4 + 4));
      fn_8265CA20(*(undefined4 *)(uVar1 + 4));
      fn_8265CA20(uVar1);
    }
    lbl_832143C4 = uVar2;
    fn_828DFD60(uVar2,0xffffffff83159ff0,0);
  }
  return lbl_832143C4;
}

