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
extern int fn_82AB15D0();
extern int fn_82BA0310();
extern int fn_82BA0690();
extern int fn_82BAF540();
extern int fn_82BB1B88();
extern int fn_82BB1BE8();
extern int fn_82BBBFB8();
extern int fn_82BBCB40();
extern unsigned int lbl_820E4F30;


void fn_82BC7030(int param_1)

{
  int iVar1;
  char cVar5;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  cVar5 = fn_82BA0310();
  lVar9 = 0;
  if (cVar5 == '\0') {
    if (*(char *)(param_1 + 0x844) == '\0') {
      iVar2 = fn_82BBCB40(param_1 + 0xb8,param_1,0,0,0);
      *(undefined4 *)(param_1 + 0x854) = 0;
    }
    else {
      *(int *)(param_1 + 0x854) = -*(int *)(param_1 + 0x84c);
      iVar2 = fn_82BBCB40(param_1 + 0xb8,param_1,*(undefined4 *)(param_1 + 0x848),
                                *(int *)(param_1 + 0x84c),*(undefined4 *)(param_1 + 0x850));
    }
    piVar4 = (int *)(param_1 + 0x448);
    *(int *)(param_1 + 0x824) = iVar2 + 1;
    do {
      if ((((*piVar4 != 0) && (fn_82BB1BE8(param_1,lVar9), *(char *)(param_1 + 0x844) != '\0')) &&
          (*(int *)(*piVar4 + 0x20) == *(int *)(param_1 + 0x848))) &&
         ((int)lVar9 < *(int *)(param_1 + 0x850) - *(int *)(param_1 + 0x84c))) {
        fn_82BB1B88(param_1,lVar9);
      }
      lVar9 = lVar9 + 1;
      piVar4 = piVar4 + 1;
    } while ((int)lVar9 < 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x840) = 0;
    *(undefined4 *)(param_1 + 0x854) = 0;
    iVar2 = 1;
    if (*(char *)(param_1 + 0x834) != '\0') {
      uVar7 = *(uint *)(param_1 + 0x838);
      uVar6 = (ulonglong)uVar7;
      *(uint *)(param_1 + 0x840) = 1 - uVar7;
      iVar2 = (*(int *)(param_1 + 0x83c) - uVar7) + 1;
      if ((int)uVar7 < *(int *)(param_1 + 0x83c)) {
        do {
          iVar3 = fn_82BAF540(*(undefined4 *)(param_1 + 0xac),
                               *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x2c),uVar6);
          if (iVar3 != 0) {
            iVar8 = 0;
            for (uVar7 = 1; uVar7 <= *(uint *)(*(int *)(iVar3 + 0x28) + 4); uVar7 = uVar7 + 1) {
              iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x28) + 8) + iVar8);
              if ((*(uint *)(iVar1 + 0xe4) & 1) != 0) {
                *(uint *)(iVar1 + 0xe4) = *(uint *)(iVar1 + 0xe4) | 0x10;
                fn_82BA0690(param_1,iVar1);
              }
              iVar8 = iVar8 + 4;
            }
            iVar8 = *(int *)(param_1 + 0x840);
            *(undefined1 *)(iVar3 + 5) = 1;
            *(int *)(iVar3 + 0x10) = iVar8 + (int)uVar6;
            fn_82BB1BE8(param_1,*(uint *)(param_1 + 0x840) + uVar6);
            fn_82BB1B88(param_1,*(uint *)(param_1 + 0x840) + uVar6);
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < *(int *)(param_1 + 0x83c));
      }
    }
    if (*(char *)(param_1 + 0x844) != '\0') {
      uVar7 = *(uint *)(param_1 + 0x84c);
      uVar6 = (ulonglong)uVar7;
      *(uint *)(param_1 + 0x854) = iVar2 - uVar7;
      if ((int)uVar7 < *(int *)(param_1 + 0x850)) {
        do {
          piVar4 = (int *)fn_82BAF540(*(undefined4 *)(param_1 + 0xac),
                                       *(undefined4 *)(param_1 + 0x848),uVar6);
          if (piVar4 != (int *)0x0) {
            *(uint *)(piVar4[0xe] + 0xe4) = *(uint *)(piVar4[0xe] + 0xe4) | 8;
            piVar4 = (int *)(**(code **)(*piVar4 + 0x20))(piVar4,lbl_820E4F30,param_1);
            if (piVar4 == (int *)0x0) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e75d4,0xffffffff820e74a8,0x1199);
            }
            cVar5 = (**(code **)(*piVar4 + 0x10))(piVar4);
            if (cVar5 == '\0') {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e75dc,0xffffffff820e74a8,0x119a);
            }
            iVar2 = *(int *)(param_1 + 0x854);
            *(undefined1 *)((int)piVar4 + 5) = 1;
            piVar4[4] = iVar2 + (int)uVar6;
            fn_82BB1BE8(param_1,*(uint *)(param_1 + 0x854) + uVar6);
            fn_82BB1B88(param_1,*(uint *)(param_1 + 0x854) + uVar6);
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < *(int *)(param_1 + 0x850));
      }
    }
    iVar2 = fn_82BBCB40(param_1 + 0xb8,param_1,0,0,0);
    *(int *)(param_1 + 0x824) = iVar2 + 1;
  }
  fn_82BBBFB8(param_1 + 0xb8);
  return;
}

