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
extern int fn_82F65350();
extern int fn_82FA5190();
extern int fn_8300E6B8();
extern int fn_8300EA70();
extern unsigned int lbl_831BC768;
extern unsigned int *uStack_1c;
extern unsigned int *uStack_20;
extern unsigned int *uStack_24;
extern unsigned int uStack_28;


int fn_8300E790(int param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  piStack_30 = (int *)0x0;
  piStack_2c = (int *)0x0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  fn_8300E6B8(param_1,*(undefined4 *)(param_1 + 4),param_2,param_3,&piStack_30);
  if (piStack_2c != piStack_30) {
    if (uStack_24 == 0) {
      if (uStack_20 < (uint)((int)piStack_2c - (int)piStack_30 >> 2)) {
        uVar2 = fn_82F65350();
        trapWord(6,(ulonglong)uStack_1c,0);
        uVar2 = uVar2 - (uVar2 / uStack_1c) * uStack_1c;
        for (piVar5 = piStack_30; piVar5 != piStack_2c; piVar5 = piVar5 + 1) {
          iVar4 = *piVar5;
          if (uVar2 < *(ushort *)(iVar4 + 8)) goto LAB_8300e874;
          uVar2 = uVar2 - *(ushort *)(iVar4 + 8);
        }
      }
      else {
        uVar2 = fn_82F65350();
        trapWord(6,(ulonglong)uStack_20,0);
        iVar4 = uVar2 - (uVar2 / uStack_20) * uStack_20;
        for (piVar5 = piStack_30; piVar5 != piStack_2c; piVar5 = piVar5 + 1) {
          iVar3 = *piVar5;
          if ((*(short *)(iVar3 + 8) == 0) && (bVar1 = iVar4 == 0, iVar4 = iVar4 + -1, bVar1)) {
            fn_8300EA70(&piStack_30);
            return iVar3;
          }
        }
      }
    }
    else {
      uVar2 = fn_82F65350();
      trapWord(6,(ulonglong)uStack_24,0);
      iVar3 = uVar2 - (uVar2 / uStack_24) * uStack_24;
      for (piVar5 = piStack_30; piVar5 != piStack_2c; piVar5 = piVar5 + 1) {
        iVar4 = *piVar5;
        if ((*(short *)(iVar4 + 8) == 100) && (bVar1 = iVar3 == 0, iVar3 = iVar3 + -1, bVar1)) {
LAB_8300e874:
          if (piStack_30 != (int *)0x0) {
            piStack_2c = piStack_30;
            fn_82FA5190(lbl_831BC768);
          }
          return iVar4;
        }
      }
    }
  }
  if (piStack_30 != (int *)0x0) {
    piStack_2c = piStack_30;
    fn_82FA5190(lbl_831BC768);
  }
  return 0;
}

