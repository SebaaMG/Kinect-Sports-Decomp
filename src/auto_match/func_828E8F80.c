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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82887890();
extern int fn_828A2240();
extern int fn_828DFD60();
extern int fn_82F63EC8();
extern unsigned int lbl_8321448C;
extern unsigned int lbl_83214490;
extern unsigned int lbl_83214494;
extern unsigned int uRam83214498;


uint fn_828E8F80(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [60];
  
  uVar2 = uRam83214498 & 1;
  if ((uRam83214498 & 1) == 0) {
    uRam83214498 = uRam83214498 | 1;
    lbl_83214494 = uVar2;
    fn_82F63EC8(0xffffffff831417f8);
  }
  uVar2 = uRam83214498 & 2;
  if ((uRam83214498 & 2) == 0) {
    uRam83214498 = uRam83214498 | 2;
    lbl_83214490 = uVar2;
    fn_82F63EC8(0xffffffff83141798);
  }
  uVar2 = uRam83214498 & 4;
  if ((uRam83214498 & 4) == 0) {
    uRam83214498 = uRam83214498 | 4;
    lbl_8321448C = uVar2;
    fn_82F63EC8(0xffffffff83141738);
  }
  if (lbl_83214494 == 0) {
    uVar2 = fn_8265C9E0(0x10);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      fn_828A2240(uVar2,auStack_40,auStack_40);
    }
    uVar1 = lbl_83214494;
    if ((uVar2 != lbl_83214494) && (lbl_83214494 != 0)) {
      fn_82887890(auStack_3c,lbl_83214494,**(undefined4 **)(lbl_83214494 + 4));
      fn_8265CA20(*(undefined4 *)(uVar1 + 4));
      fn_8265CA20(uVar1);
    }
    lbl_83214494 = uVar2;
    uVar2 = fn_8265C9E0(0x10);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      fn_828A2240(uVar2,auStack_40,auStack_40);
    }
    uVar1 = lbl_83214490;
    if ((uVar2 != lbl_83214490) && (lbl_83214490 != 0)) {
      fn_82887890(auStack_3c,lbl_83214490,**(undefined4 **)(lbl_83214490 + 4));
      fn_8265CA20(*(undefined4 *)(uVar1 + 4));
      fn_8265CA20(uVar1);
    }
    lbl_83214490 = uVar2;
    uVar2 = fn_8265C9E0(0x10);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      fn_828A2240(uVar2,auStack_40,auStack_40);
    }
    uVar1 = lbl_8321448C;
    if ((uVar2 != lbl_8321448C) && (lbl_8321448C != 0)) {
      fn_82887890(auStack_3c,lbl_8321448C,**(undefined4 **)(lbl_8321448C + 4));
      fn_8265CA20(*(undefined4 *)(uVar1 + 4));
      fn_8265CA20(uVar1);
    }
    lbl_8321448C = uVar2;
    fn_828DFD60(lbl_83214494,0xffffffff83159ff0,lbl_83214490);
    fn_828DFD60(lbl_83214490,0xffffffff8315a35c,lbl_8321448C);
    fn_828DFD60(lbl_8321448C,0xffffffff8315a2ec,0);
  }
  return lbl_83214494;
}

