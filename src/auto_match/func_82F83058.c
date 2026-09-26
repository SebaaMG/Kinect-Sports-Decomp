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
extern int fn_82F63C78();
extern int fn_82F82DA8();
extern unsigned int lbl_831BC078;
extern unsigned int lbl_831BC07C;
extern unsigned int lbl_831BC080;
extern unsigned int lbl_831BC084;
extern unsigned int lbl_831BC088;
extern unsigned int lbl_831BC08C;


/* WARNING: Removing unreachable block (ram,0x82f83270) */

void fn_82F83058(int param_1,int param_2,ulonglong param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int aiStack_40 [16];
  
  aiStack_40[0] = 0;
  iVar5 = (int)param_3;
  if (param_2 == 1) {
    lVar4 = param_3 + ((longlong)(iVar5 >> 2) + (ulonglong)(iVar5 < 0 && (param_3 & 3) != 0) &
                      0x3fffffff) * -4;
    if (((lVar4 == 0) && (param_3 != (longlong)(iVar5 / 100) * 100)) ||
       (param_3 + 0x76c == (longlong)((int)(param_3 + 0x76c) / 400) * 400)) {
      iVar1 = param_4 * 4 + -0x7ce43a64;
    }
    else {
      iVar1 = param_4 * 4 + -0x7ce43a30;
    }
    uVar2 = iVar5 - 1;
    iVar3 = *(int *)(iVar1 + -4) + 1;
    iVar1 = (int)(((iVar5 + 299) / 400 - (int)uVar2 / 100) +
                  ((int)uVar2 >> 2) + (uint)((int)uVar2 < 0 && (uVar2 & 3) != 0) + iVar5 * 0x16d +
                  iVar3 + -0x63db) % 7;
    param_7 = (param_5 * 7 - iVar1) + iVar3 + param_6;
    if (iVar1 <= param_6) {
      param_7 = param_7 + -7;
    }
    if (param_5 == 5) {
      if ((((int)lVar4 == 0) && (param_3 != (longlong)(iVar5 / 100) * 100)) ||
         (param_3 + 0x76c == (longlong)((int)(param_3 + 0x76c) / 400) * 400)) {
        iVar1 = *(int *)(param_4 * 4 + -0x7ce43a64);
      }
      else {
        iVar1 = *(int *)(param_4 * 4 + -0x7ce43a30);
      }
      if (iVar1 < param_7) {
        param_7 = param_7 + -7;
      }
    }
  }
  else {
    if (((param_3 ==
          ((longlong)(iVar5 >> 2) + (ulonglong)(iVar5 < 0 && (param_3 & 3) != 0) & 0x3fffffff) << 2)
        && (param_3 != (longlong)(iVar5 / 100) * 100)) ||
       (param_3 + 0x76c == (longlong)((int)(param_3 + 0x76c) / 400) * 400)) {
      iVar1 = -0x7ce43a64;
    }
    else {
      iVar1 = -0x7ce43a30;
    }
    param_7 = *(int *)(param_4 * 4 + iVar1 + -4) + param_7;
  }
  in_stack_00000064 =
       ((param_8 * 0x3c + in_stack_00000054) * 0x3c + in_stack_0000005c) * 1000 + in_stack_00000064;
  iVar1 = iVar5;
  if (param_1 != 1) {
    lbl_831BC088 = param_7;
    lbl_831BC08C = in_stack_00000064;
    iVar1 = fn_82F82DA8(aiStack_40);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63C78(0,0,0,0,0);
    }
    lbl_831BC08C = aiStack_40[0] * 1000 + lbl_831BC08C;
    iVar1 = lbl_831BC078;
    param_7 = lbl_831BC07C;
    in_stack_00000064 = lbl_831BC080;
    lbl_831BC084 = iVar5;
    if (86399999 < lbl_831BC08C) {
      lbl_831BC088 = lbl_831BC088 + 1;
      lbl_831BC08C = lbl_831BC08C + -86400000;
    }
  }
  lbl_831BC080 = in_stack_00000064;
  lbl_831BC07C = param_7;
  lbl_831BC078 = iVar1;
  return;
}

