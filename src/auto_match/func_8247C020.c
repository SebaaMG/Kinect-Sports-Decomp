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
extern int fn_82484BF0();
extern int fn_82484D38();
extern int fn_82484E08();
extern int fn_82484EE0();
extern int fn_82485850();
extern unsigned int uRam832766f1;


void fn_8247C020(int param_1,ulonglong param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_2 & 0xffffffff) == 3) && (param_3 != (undefined4 *)0x0)) {
    *param_3 = 0;
    *(undefined4 *)(param_1 + 0x4c) = 1;
    fn_82484E08(*(undefined4 *)(param_1 + 0x34));
  }
  fn_82484EE0((double)*(float *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x34),param_2,param_3
                  ,param_4,param_5);
  if ((param_2 & 0xffffffff) < 0x11) {
    if (0xe < (param_2 & 0xffffffff)) goto LAB_8247c150;
    if ((param_2 & 0xffffffff) == 1) {
      fn_82484BF0(*(undefined4 *)(param_1 + 0x34));
    }
    else {
      if ((param_2 & 0xffffffff) != 2) {
        if ((param_2 & 0xffffffff) == 3) {
          uRam832766f1 = 1;
          fn_82484E08(*(undefined4 *)(param_1 + 0x34));
          *(undefined4 *)(param_1 + 0x3c) = 1;
          *(undefined4 *)(param_1 + 0x44) = 1;
          return;
        }
        if ((param_2 & 0xffffffff) < 4) {
          return;
        }
        if (9 < (param_2 & 0xffffffff)) {
          if ((param_2 & 0xffffffff) < 0xb) {
            return;
          }
          if (0xd < (param_2 & 0xffffffff)) {
            return;
          }
        }
        goto LAB_8247c150;
      }
      fn_82484D38(*(undefined4 *)(param_1 + 0x34));
    }
  }
  else {
    if (0x1e < (param_2 & 0xffffffff)) {
      if ((param_2 & 0xffffffff) < 0x36) {
        return;
      }
      if (0x3c < (param_2 & 0xffffffff)) {
        return;
      }
      uVar2 = 0;
      if ((param_2 & 0xffffffff) == 0x36) {
        uVar2 = 3;
      }
      else if ((param_2 & 0xffffffff) == 0x37) {
        uVar2 = 4;
      }
      else if ((param_2 & 0xffffffff) == 0x38) {
        uVar2 = 5;
      }
      else if ((param_2 & 0xffffffff) == 0x39) {
        uVar2 = 6;
      }
      else if ((param_2 & 0xffffffff) == 0x3b) {
        uVar2 = 1;
      }
      else if ((param_2 & 0xffffffff) == 0x3c) {
        uVar2 = 2;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x18bc) = uVar2;
      *(undefined4 *)(param_1 + 0x3c) = 1;
      *(undefined4 *)((*(int *)(param_1 + 0x30) + 9) * 4 + *(int *)(param_1 + 0x34)) =
           *(undefined4 *)(*(int *)(param_1 + 0x14) + 100);
      goto LAB_8247c204;
    }
    if ((param_2 & 0xffffffff) < 0x1a) {
      if ((param_2 & 0xffffffff) < 0x12) {
        return;
      }
      if (0x13 < (param_2 & 0xffffffff)) {
        if ((param_2 & 0xffffffff) < 0x15) {
          return;
        }
        if (0x16 < (param_2 & 0xffffffff)) {
          return;
        }
      }
    }
LAB_8247c150:
    fn_82485850((ulonglong)*(uint *)(param_1 + 0x34),
                      (ulonglong)*(uint *)(param_1 + 0x34) + 0x634);
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x14) =
         *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x20);
  }
  *(undefined4 *)((*(int *)(param_1 + 0x30) + 9) * 4 + *(int *)(param_1 + 0x34)) =
       *(undefined4 *)(*(int *)(param_1 + 0x14) + 100);
LAB_8247c204:
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  return;
}

