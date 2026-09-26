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
extern unsigned int *auStack_830;
extern unsigned int *auStack_a30;
extern unsigned int *auStack_a70;
extern int fn_8229DCA8();
extern int fn_8229E410();
extern int fn_825129C8();
extern int fn_82528BF8();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_832760A4;
extern unsigned int lbl_83276730;


void fn_822311F0(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_a70 [64];
  undefined1 auStack_a30 [512];
  undefined1 auStack_830 [2096];
  
  if (*(int *)(param_1 + 0x58) == 0) {
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  fn_82528BF8(lbl_83276730,0xffffffff82196330,auStack_a30,0x100,0,1);
  fn_82528BF8(lbl_83276730,0xffffffff82196330,auStack_830,0x400,0,1);
  fn_82528BF8(lbl_83276730,0xffffffff82196344,auStack_a70,0x20,0,1);
  if (param_2 == 1) {
    uVar2 = 0xffffffff82196374;
    goto LAB_822312e8;
  }
  if (param_2 != 2) {
    if (param_2 == 3) {
      uVar2 = 0xffffffff82196384;
      goto LAB_822312e8;
    }
    if (param_2 == 4) {
      uVar2 = 0xffffffff82196394;
      goto LAB_822312e8;
    }
    if (param_2 != 5) {
      if (param_2 != 6) {
        return;
      }
      uVar2 = 0xffffffff821963a8;
      goto LAB_822312e8;
    }
  }
  uVar2 = 0xffffffff82196350;
LAB_822312e8:
  fn_82528BF8(lbl_83276730,uVar2,auStack_830,0x400,0,1);
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar1 = fn_8265C9E0(0x434);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      *(undefined ***)(iVar1 + 0x41c) = &lbl_821A8C90;
      fn_8229DCA8(iVar1,auStack_a30,auStack_830,auStack_a70,0xffffffff820e975c,
                        0xffffffff82231390,param_1,1);
    }
    *(int *)(param_1 + 0x58) = iVar1;
    fn_8229E410();
    if (lbl_832760A4 == 0) {
      lbl_832760A4 = fn_825129C8(0);
    }
  }
  return;
}

