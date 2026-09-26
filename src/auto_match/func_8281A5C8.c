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
extern int fn_8281C448();
extern int fn_8281C4B0();


void fn_8281A5C8(int param_1,ulonglong param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  fn_8281C448(0xffffffff8201e824,param_1);
  fn_8281C448(0xffffffff8201e830,*(undefined4 *)(param_1 + 0x7c));
  fn_8281C448(0xffffffff8201e844,*(undefined2 *)(param_1 + 0x80));
  fn_8281C448(0xffffffff8201e858,*(undefined2 *)(param_1 + 0x82));
  fn_8281C448(0xffffffff8201e86c,*(undefined2 *)(param_1 + 0x84));
  fn_8281C448(0xffffffff8201e880,*(undefined2 *)(param_1 + 0x108));
  iVar2 = *(int *)(param_1 + 0x7c);
  if ((param_2 & 0x200) == 0) {
    iVar3 = *(short *)(param_1 + 0x82) + 1;
  }
  else {
    iVar3 = (int)*(short *)(param_1 + 0x80);
  }
  lVar4 = 0;
  if (0 < iVar3) {
    piVar7 = (int *)(iVar2 + 0x38);
    do {
      if ((((param_2 & 0x80) == 0) || ((*(byte *)((int)piVar7 + -2) & 1) != 0)) &&
         (((param_2 & 0x100) == 0 || ((*(byte *)((int)piVar7 + -2) & 1) == 0)))) {
        fn_8281C448(0xffffffff8201e894,lVar4);
        fn_8281C448(0xffffffff8201e8a0,(ulonglong)(uint)piVar7[-6],
                          (ulonglong)(uint)piVar7[-5] + (ulonglong)(uint)piVar7[-6]);
        fn_8281C448(0xffffffff8201e8b4,piVar7[1]);
        fn_8281C448(0xffffffff8201e8c4,piVar7[-5]);
        fn_8281C448(0xffffffff8201e8d0,*(undefined1 *)((int)piVar7 + -2));
        fn_8281C448(0xffffffff8201e8e0,*(undefined2 *)(piVar7 + -3));
        fn_8281C448(0xffffffff8201e8f0,*(undefined2 *)((int)piVar7 + -10));
        fn_8281C448(0xffffffff8201e900,*(undefined2 *)(piVar7 + -2));
        fn_8281C448(0xffffffff8201e910,*(undefined2 *)((int)piVar7 + -6));
        fn_8281C448(0xffffffff8201e920,*(undefined2 *)(piVar7 + -1));
        fn_8281C448(0xffffffff8201e92c);
        if (((param_2 & 0x400) != 0) && ((*(byte *)((int)piVar7 + -2) & 1) != 0)) {
          fn_8281C448(0xffffffff8201e930,(ulonglong)(uint)piVar7[1],
                            (ulonglong)(uint)piVar7[-4] + (ulonglong)(uint)piVar7[1]);
          fn_8281C448(0xffffffff8201e948,piVar7[-4]);
          fn_8281C448(0xffffffff8201e954);
          iVar5 = *piVar7;
          if (iVar5 != 0) {
            fn_8281C448(0xffffffff8201e958,*(undefined1 *)(iVar5 + 0x10),
                              *(undefined1 *)(iVar5 + 0x11),*(undefined1 *)(iVar5 + 0x12),
                              *(undefined1 *)(iVar5 + 0x13));
            fn_8281C448(0xffffffff8201e978,*(undefined4 *)(*piVar7 + 0x14));
            fn_8281C448(0xffffffff8201e988,*(undefined4 *)(*piVar7 + 0x18));
            if (*(int *)(*piVar7 + 0x1c) != 0) {
              fn_8281C448(0xffffffff8201e998,*(undefined4 *)(*piVar7 + 0x1c),
                                *(undefined4 *)(*piVar7 + 0x20));
            }
            fn_8281C448(0xffffffff8201e9a4,*(undefined4 *)(*piVar7 + 0x24));
            if (*(int *)(*piVar7 + 0x24) != 0) {
              fn_8281C448();
            }
            fn_8281C448(0xffffffff8201e9b8);
          }
          if ((*(uint *)(param_1 + 0xc) & 4) != 0) {
            iVar5 = piVar7[1] - *(int *)(param_1 + 0x78);
            fn_8281C448(0xffffffff8201e9bc,iVar5);
            if ((iVar5 != 0) && (*(int *)(param_1 + 0x78) != 0)) {
              uVar6 = 0;
              do {
                fn_8281C448(0xffffffff8201e9d0,*(undefined1 *)(uVar6 + iVar5));
                uVar6 = uVar6 + 1 & 0xffff;
              } while (uVar6 < *(uint *)(param_1 + 0x78));
            }
            fn_8281C448(0xffffffff8201e9d8);
          }
          fn_8281C448(0xffffffff8201e9dc,piVar7[1]);
          if ((uint)piVar7[-4] < 0x20) {
            if (0 < piVar7[-4]) {
              uVar6 = 0;
              do {
                fn_8281C448(0xffffffff8201ea38,*(undefined1 *)(piVar7[1] + uVar6));
                uVar6 = uVar6 + 1 & 0xffff;
              } while ((int)uVar6 < piVar7[-4]);
            }
          }
          else {
            uVar6 = 0;
            do {
              fn_8281C448(0xffffffff8201e9f0,*(undefined1 *)(piVar7[1] + uVar6));
              uVar6 = uVar6 + 1 & 0xffff;
            } while (uVar6 < 0x20);
            if (0x3f < (uint)piVar7[-4]) {
              fn_8281C448(0xffffffff8201e9f8);
              fn_8281C448(0xffffffff8201e9fc);
              fn_8281C448(0xffffffff8201ea14);
              fn_8281C448(0xffffffff8201ea18);
              uVar6 = 0;
              do {
                fn_8281C448(0xffffffff8201ea30,
                                  *(undefined1 *)(piVar7[1] + piVar7[-4] + uVar6 + -0x20));
                uVar6 = uVar6 + 1 & 0xffff;
              } while (uVar6 < 0x20);
            }
          }
          fn_8281C448(0xffffffff8201ea40);
          if ((*(uint *)(param_1 + 0xc) & 4) != 0) {
            iVar5 = piVar7[-4] + piVar7[1];
            fn_8281C448(0xffffffff8201ea44,iVar5);
            if ((iVar5 != 0) && (*(int *)(param_1 + 0x78) != 0)) {
              uVar6 = 0;
              do {
                fn_8281C448(0xffffffff8201ea58,*(undefined1 *)(uVar6 + iVar5));
                uVar6 = uVar6 + 1 & 0xffff;
              } while (uVar6 < *(uint *)(param_1 + 0x78));
            }
            fn_8281C448(0xffffffff8201ea60);
          }
          fn_8281C448(0xffffffff8201ea64);
        }
      }
      lVar4 = lVar4 + 1;
      piVar7 = piVar7 + 0x10;
    } while ((int)lVar4 < iVar3);
  }
  if ((param_2 & 1) != 0) {
    fn_8281C4B0(0xffffffff8201ea68);
    fn_8281C4B0(0xffffffff8201ea78);
    for (sVar1 = *(short *)(param_1 + 0x108); sVar1 != -1;
        sVar1 = *(short *)(sVar1 * 0x40 + iVar2 + 0x30)) {
      fn_8281C4B0(0xffffffff8201ea7c,(int)sVar1);
    }
    fn_8281C4B0(0xffffffff8201ea80);
    fn_8281C4B0(0xffffffff8201ea84);
    fn_8281C4B0(0xffffffff8201ea90);
    for (sVar1 = *(short *)(param_1 + 0x84); sVar1 != -1;
        sVar1 = *(short *)(sVar1 * 0x40 + iVar2 + 0x30)) {
      fn_8281C4B0(0xffffffff8201ea94,(int)sVar1);
    }
    fn_8281C4B0(0xffffffff8201ea98);
  }
  if ((param_2 & 0x800) != 0) {
    fn_8281C4B0(0xffffffff8201ea9c);
    uVar6 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      do {
        if (uVar6 == (((int)uVar6 >> 5) + (uint)((int)uVar6 < 0 && (uVar6 & 0x1f) != 0)) * 0x20) {
          fn_8281C4B0(0xffffffff8201eaa4);
        }
        fn_8281C4B0(0xffffffff8201eaa8,*(undefined1 *)(uVar6 + param_1));
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *(int *)(param_1 + 0x28));
    }
    fn_8281C4B0(0xffffffff8201eab0);
  }
  return;
}

