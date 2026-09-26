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
extern unsigned int *auStack_48;
extern unsigned int *auStack_4c;
extern int fn_82E826C8();
extern int fn_82E8D6A0();
extern int fn_82E8E390();
extern int fn_82E8E7A8();
extern int fn_82E8EF60();
extern int fn_82E8FE90();
extern int fn_82E94780();
extern int fn_82E94CC8();
extern int fn_82E97450();
extern int fn_82E978E0();
extern int fn_82EFE758();
extern int fn_82EFEBA0();
extern int fn_82F000C0();
extern int fn_82F004D8();
extern int fn_82F180E0();
extern int fn_82F691F0();
extern unsigned int iStack_50;


void fn_82E90020(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iStack_50;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [72];
  
  uVar1 = *(undefined4 *)(param_1 + 0x2a4);
  uVar2 = *(undefined4 *)(param_1 + 0x590);
  iStack_50 = 0;
  iVar3 = fn_82E8D6A0();
  if ((*(int *)(iVar3 + 0x1f58) == 0) || (*(int *)(iVar3 + 0xaf0) != 2)) {
    if (*(int *)(param_1 + 0xaf0) == 1) {
      if (*(int *)(param_1 + 0x1dac) == 5) {
        fn_82E94780();
      }
      else {
        fn_82EFEBA0(param_1);
      }
    }
    else if (*(int *)(param_1 + 0xaf0) == 2) {
      fn_82EFE758(param_1);
    }
    do {
      *(undefined4 *)(param_1 + 0x1a50) = 1;
      if (*(int *)(param_1 + 0xaf0) == 0) {
        if (((*(int *)(param_1 + 0x7660) != 0) && (*(longlong *)(param_1 + 0x2e0) == 1)) &&
           (*(int *)(param_1 + 0x1db0) == 2)) {
          iVar3 = *(int *)(param_1 + 0x2a0);
          iVar5 = *(int *)(*(int *)(param_1 + 0x7664) + 0x1c);
          if ((iVar3 <= iVar5 + -4) || (iVar5 + 4 <= iVar3)) {
            uVar4 = iVar3 + iVar5;
            *(undefined4 *)(param_1 + 0x76c4) = 1;
            *(uint *)(param_1 + 0x2a0) =
                 ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0);
          }
        }
        iVar3 = *(int *)(param_1 + 0x1f44);
        iVar5 = iVar3;
        if (*(int *)(param_1 + 0x1f10) <= iVar3) {
          iVar5 = *(int *)(param_1 + 0x1f10);
        }
        if (*(int *)(param_1 + 0x76c8) == 0) {
          if (((*(int *)(param_1 + 0x844) != 0) || (*(int *)(param_1 + 0x7808) != 0)) &&
             ((*(int *)(param_1 + 0x7800) != 0 || (*(int *)(param_1 + 0x7804) != 0)))) {
            fn_82E826C8(param_1,0,*(undefined4 *)(param_1 + 0x2a0));
          }
          fn_82E8E7A8(param_1,*(undefined4 *)(param_1 + 0xaf0),*(undefined4 *)(param_1 + 0x2a0),
                        *(undefined4 *)(param_1 + 0x590),param_2,auStack_48,&iStack_50,auStack_4c);
          fn_82E97450(param_1,(((0x27 - (ulonglong)
                                              *(uint *)(*(int *)(param_1 + 0x1ebc) + 0x10) &
                                      0xffffffff) >> 3) +
                                     (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 4) &
                                    0x1fffffff) << 3,iVar5,4,auStack_48,&iStack_50,auStack_4c);
        }
        else {
          if (*(int *)(param_1 + 0x1dac) == 5) {
            iVar5 = iVar3;
          }
          fn_82E978E0(param_1,iVar5,auStack_48,&iStack_50,auStack_4c);
        }
LAB_82e90314:
        if (*(int *)(param_1 + 0x1a50) != 0) goto LAB_82e90344;
      }
      else {
        if ((((*(int *)(param_1 + 0x7660) != 0) && (*(int *)(param_1 + 0x1db0) == 2)) &&
            (iVar3 = **(int **)(param_1 + 0x766c), iVar3 != 0)) &&
           ((longlong)*(int *)(iVar3 + 8) <= *(longlong *)(param_1 + 0x2e0))) {
          *(int *)(param_1 + 0x766c) = iVar3;
        }
        if ((((*(int *)(param_1 + 0x76c8) != 0) || (*(int *)(param_1 + 0x844) != 0)) ||
            (*(int *)(param_1 + 0x7808) != 0)) &&
           ((*(int *)(param_1 + 0x7820) != 0 || (*(int *)(param_1 + 0x7824) != 0)))) {
          fn_82F004D8(param_1,0,0);
        }
        fn_82E8E7A8(param_1,*(undefined4 *)(param_1 + 0xaf0),*(undefined4 *)(param_1 + 0x2a4),
                      *(undefined4 *)(param_1 + 0x590),param_2,auStack_48,&iStack_50,auStack_4c);
        if (((*(int *)(param_1 + 0x7660) == 0) || (iStack_50 == 0)) ||
           (*(int *)(param_1 + 0xaf0) != 0)) goto LAB_82e90314;
        if (*(int *)(param_1 + 0x1a50) != 0) {
          fn_82E8EF60(param_1,1);
          if (*(int *)(param_1 + 0x7660) != 0) {
            fn_82F180E0(param_1);
          }
          fn_82E8E390(param_1);
          goto LAB_82e90314;
        }
      }
      if ((0x1d < *(int *)(param_1 + 0x2a0)) || (0x1d < *(int *)(param_1 + 0x2a4))) {
LAB_82e90344:
        if ((*(int *)(param_1 + 0x1a68) != 0) && (*(int *)(param_1 + 0x1a6c) != 0)) {
          *(undefined4 *)(param_1 + 0x1a64) = 0;
        }
        *(undefined4 *)(param_1 + 0x1a6c) = 1;
        *(undefined4 *)(param_1 + 0x1a60) = 0;
        *(undefined4 *)(param_1 + 0x1a58) = 0;
        *(undefined4 *)(param_1 + 0x1a68) = 1;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(undefined4 *)(param_1 + 0x1a5c),0,*(int *)(param_1 + 0x2d4) << 2);
      }
      fn_82E8FE90(param_1);
    } while (((*(int *)(param_1 + 0x1a50) == 0) && (*(int *)(param_1 + 0x2a0) < 0x1e)) &&
            (*(int *)(param_1 + 0x2a4) < 0x1e));
    if (*(int *)(param_1 + 0x1dac) == 5) {
      fn_82E94CC8();
    }
    else {
      fn_82F000C0(param_1);
    }
  }
  if (*(int *)(param_1 + 0x1f58) == 0) {
    fn_82E8EF60(param_1,0);
    *(undefined4 *)(param_1 + 0x1fec) = 0;
  }
  else {
    fn_82E8EF60(param_1,1);
    *(undefined4 *)(param_1 + 0x1fec) = 1;
  }
  if ((*(int *)(param_1 + 0xaf0) == 2) || (*(int *)(param_1 + 0xaf0) == 4)) {
    *(undefined4 *)(param_1 + 0x2a4) = uVar1;
    *(undefined4 *)(param_1 + 0x2a0) = uVar1;
    *(undefined4 *)(param_1 + 0x590) = uVar2;
  }
  return;
}

