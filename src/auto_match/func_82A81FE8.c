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
extern unsigned int *auStack_60;
extern int fn_8265C940();
extern int fn_82A81F68();
extern int fn_82A82458();
extern int fn_82A84B10();
extern int fn_82A84D98();
extern int fn_82A86178();
extern int fn_82A86220();
extern int fn_82A86B30();
extern unsigned int lbl_8315FA80;
extern unsigned int lbl_8322344C;
extern unsigned int lbl_8322344D;
extern unsigned int lbl_83223450;
extern unsigned int lbl_832234AC;


longlong fn_82A81FE8(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                      ulonglong param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_60 [96];
  
  if (lbl_8322344C != '\0') {
    return -0x7fff0001;
  }
  iVar2 = (int)param_1;
  if ((((iVar2 != 0) && (iVar2 != 1)) || (5 < (param_3 & 0xffffffff))) ||
     (((param_2 & 1) != 0 &&
      ((((param_4 & 0xffffffff) < 2 || (4 < (param_4 & 0xffffffff))) ||
       ((param_5 & 0xffffffff) == 0)))))) {
    return -0x7ff8ffa9;
  }
  lbl_83223450 = fn_8265C940(0x300000,0x20980000);
  if (lbl_83223450 == 0) {
    lVar3 = -0x7ff8fff2;
  }
  else {
    lbl_832234AC = 4;
    lbl_8315FA80 = iVar2;
    fn_82A86B30(auStack_60);
    iVar2 = lbl_83223450;
    if ((param_2 & 2) != 0) {
      uVar1 = fn_82A84B10();
      lVar3 = fn_82A84D98(uVar1,0x300000,iVar2);
      if (lVar3 < 0) goto LAB_82a82140;
    }
    lVar3 = XamAvatarInitialize(4,param_1,param_3,auStack_60,lbl_83223450,0x300000);
    if (-1 < lVar3) {
      if ((param_5 & 0xffffffff) != 0) {
        lVar3 = fn_82A82458(param_5);
      }
      if (-1 < (int)lVar3) {
        lbl_8322344C = '\x01';
        if ((param_2 & 1) != 0) {
          fn_82A86220(param_4);
          lVar3 = fn_82A86178(param_5);
          lbl_8322344D = (byte)((ulonglong)lVar3 >> 0x18) >> 7 ^ 1;
        }
        if (-1 < (int)lVar3) {
          return lVar3;
        }
      }
    }
  }
LAB_82a82140:
  fn_82A81F68();
  return lVar3;
}

