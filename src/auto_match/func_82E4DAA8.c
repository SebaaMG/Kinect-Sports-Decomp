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
extern int fn_8265C940();
extern int fn_82E4B7F8();
extern int fn_82E4B850();
extern int fn_82E4BA10();
extern int fn_82E4D860();
extern int fn_82E4D918();
extern int fn_82E81668();
extern int fn_82E82680();
extern int fn_82E83390();
extern int fn_82E833A0();
extern int fn_82E836E0();
extern int fn_82E86830();
extern int fn_82E89AF8();
extern int fn_82ED46A0();
extern unsigned int lbl_82005710;
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000048;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;


undefined8
fn_82E4DAA8(undefined8 param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
             ,ulonglong param_6,ulonglong param_7)

{
  int iVar1;
  double dVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 in_r10;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uStack00000024;
  uint uStack0000002c;
  undefined8 uStack00000048;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000084;
  uint *in_stack_0000008c;
  undefined4 in_stack_00000094;
  undefined4 in_stack_0000009c;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000bc;
  undefined4 in_stack_000000c4;
  undefined4 in_stack_000000cc;
  undefined4 in_stack_000000d4;
  undefined4 in_stack_000000dc;
  uint in_stack_000000ec;
  uint in_stack_000000f4;
  undefined4 in_stack_000000fc;
  int in_stack_00000104;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int aiStack_d0 [2];
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  
  iVar5 = in_stack_00000074;
  dVar2 = lbl_82005710;
  uStack00000024 = (uint)param_6;
  uStack0000002c = (uint)param_7;
  iVar6 = (int)param_5;
  iVar1 = (int)param_4;
  *(int *)(iVar1 + 0x3c) = in_stack_00000104;
  if (((iVar6 == 5) || (iVar6 == 0)) && (param_3 <= dVar2)) {
    param_3 = param_2;
  }
  if ((in_stack_00000104 == 0) || (((iVar6 != 1 && (iVar6 != 3)) && (iVar6 != 6)))) {
    *(uint *)(iVar1 + 0x24) = uStack00000024;
    *(uint *)(iVar1 + 0x28) = uStack0000002c;
    if ((((iVar6 != 0) && (iVar6 != 1)) && ((iVar6 != 3 || (param_3 <= dVar2)))) ||
       ((in_stack_00000064 != 0 && (in_stack_0000006c != 0)))) {
      *(int *)(iVar1 + 0x2c) = in_stack_0000006c;
      uVar3 = (ulonglong)in_stack_000000ec;
      if (in_stack_000000ec == 0) {
        uVar3 = param_6;
      }
      uVar9 = (ulonglong)in_stack_000000f4;
      if (in_stack_000000f4 == 0) {
        uVar9 = param_7;
      }
      *(undefined8 *)(iVar1 + 0x220) = param_1;
      *(undefined4 *)(iVar1 + 0x50) = 0;
      *(undefined4 *)(iVar1 + 0x58) = 0;
      *(undefined4 *)(iVar1 + 0x108) = 0;
      *(int *)(iVar1 + 0x1bc) = in_stack_00000074;
      uStack00000048 = in_r10;
      fn_82E4D860(param_4);
      uVar11 = in_stack_000000fc;
      iVar6 = *(int *)(iVar1 + 0x10);
      if ((iVar6 == 0x574d5633) || (iVar6 == 0x776d7633)) {
        uVar12 = 6;
      }
      else if ((iVar6 == 0x574d5641) || (iVar6 == 0x776d7661)) {
        uVar12 = (*(int *)(iVar1 + 0x3c) == 0) + 7;
      }
      else {
        if ((iVar6 != 0x574d5652) && (iVar6 != 0x776d7672)) {
          return 0xffffffffffffff9c;
        }
        uVar12 = 7;
      }
      *(undefined2 *)(iVar1 + 0x1ce) = 0;
      *(undefined4 *)(iVar1 + 0x1e4) = 0;
      *(undefined4 *)(iVar1 + 0x1e0) = 0;
      *(undefined4 *)(iVar1 + 0x1d0) = 0;
      *(undefined4 *)(iVar1 + 0x1c8) = 0;
      *(undefined2 *)(iVar1 + 0x1cc) = 0;
      *(undefined4 *)(iVar1 + 0x1c0) = 0;
      *(undefined4 *)(iVar1 + 0x1d4) = 0;
      *(undefined4 *)(iVar1 + 0x1c4) = 0;
      *(undefined4 *)(iVar1 + 0x1d8) = 0;
      *(undefined4 *)(iVar1 + 0x1dc) = 0;
      *(undefined4 *)(iVar1 + 500) = 0;
      uStack_dc = uVar12;
      if ((*(int *)(iVar1 + 0x11c) != 1) || (*(int *)(iVar1 + 0x148) != 0)) {
        fn_82E4BA10(param_3,param_4,uVar12,param_5,&stack0x00000024,&stack0x0000002c);
        param_7 = (ulonglong)uStack0000002c;
        param_6 = (ulonglong)uStack00000024;
      }
      if (((param_6 & 0xffffffff) != (uVar3 & 0xffffffff)) ||
         ((param_7 & 0xffffffff) != (uVar9 & 0xffffffff))) {
        *(undefined4 *)(iVar1 + 0x200) = 1;
      }
      uVar3 = fn_8265C940(0x7b50,0x248c8000);
      iVar1 = in_stack_00000074;
      iVar13 = (int)param_6;
      iVar6 = (int)param_7;
      if ((uVar3 & 0xffffffff) == 0) {
        iVar4 = 0;
      }
      else {
        uStack_b8 = iVar13 + 0xfU & 0xfffffff0;
        uStack_d4 = in_stack_0000005c;
        uStack_b4 = iVar6 + 0xfU & 0xfffffff0;
        uStack_c0 = 0;
        uStack_bc = 0;
        uStack_c8 = param_4;
        iVar4 = fn_82E89AF8(param_2,param_3,param_1,uVar3,uVar12,param_5,param_6,param_7,
                                  &uStack_c0);
        param_4 = uStack_c8;
        iVar5 = iVar1;
        uVar11 = in_stack_000000fc;
        uVar12 = uStack_dc;
      }
      iVar1 = (int)param_4;
      *(int *)(iVar1 + 0xc) = iVar4;
      if (iVar4 == 0) {
        fn_82E4D860(param_4);
        return 0;
      }
      if ((*(int *)(iVar1 + 0x14) != 0) && (*(int *)(iVar4 + 4) == 8)) {
        *(undefined4 *)(iVar4 + 8) = 1;
        *(undefined4 *)(iVar4 + 0xc) = 1;
      }
      fn_82E83390(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x1fc),
                      *(undefined4 *)(iVar1 + 0x1f0));
      fn_82E833A0(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x1f8),
                      *(undefined4 *)(iVar1 + 0x20c));
      *(int *)(iVar1 + 0x1c) = iVar13;
      *(int *)(iVar1 + 0x20) = iVar6;
      *(undefined4 *)(iVar1 + 0x38) = 0;
      uStack_dc = 0;
      iVar4 = fn_82E4B850(param_4,&uStack_dc,uVar11);
      if (iVar4 != 0) {
        *(uint *)(iVar1 + 0x60) = (-uStack_dc & ~uStack_dc) >> 0x1f;
      }
      if (*(int *)(iVar1 + 0x60) != 0) {
        fn_82E86830(*(undefined4 *)(iVar1 + 0xc));
      }
      if ((uVar12 == 8) || (uVar12 == 7)) {
        *(undefined4 *)(iVar1 + 0x54) = 0x48;
        *(undefined4 *)(iVar1 + 0x58) = 0xb0;
        iVar4 = fn_8265C940(0xb0,0x248c8000);
        *(int *)(iVar1 + 0x48) = iVar4;
        if (iVar4 == 0) {
          return 0xffffffffffffff9c;
        }
      }
      *(undefined4 *)(iVar1 + 0x18) = in_stack_000000c4;
      uVar7 = iVar13 + 0xfU & 0xfffffff0;
      if (in_stack_0000008c == (uint *)0x0) {
        uVar3 = (longlong)(int)uVar7 * (longlong)(int)(iVar6 + 0xfU & 0xfffffff0);
        uVar3 = uVar3 + (uVar3 & 0x7fffffff) * 2;
        if ((uVar3 & 0xffffffff) < 0x8000) {
          uVar3 = 0x8000;
        }
      }
      else {
        uVar9 = (longlong)(int)uVar7 * (longlong)(int)(iVar6 + 0xfU & 0xfffffff0);
        uVar9 = uVar9 + (uVar9 & 0x7fffffff) * 2;
        if ((uVar9 & 0xffffffff) < 0x8000) {
          uVar9 = 0x8000;
        }
        uVar7 = *in_stack_0000008c;
        uVar3 = (ulonglong)uVar7;
        if ((int)(uint)uVar9 < (int)uVar7) {
          *in_stack_0000008c = (uint)uVar9;
          uVar3 = uVar9;
        }
        else {
          if ((int)uVar7 < 0x8000) {
            uVar3 = 0x8000;
          }
          *in_stack_0000008c = (uint)uVar3;
        }
      }
      fn_82E81668(*(undefined4 *)(iVar1 + 0xc),uVar3);
      *(undefined4 *)(iVar1 + 0x108) = 0;
      *(int *)(iVar1 + 0x110) = iVar13 * iVar6 * 4;
      if (*(int *)(iVar1 + 0x60) == 0) {
        uVar7 = *(uint *)(*(int *)(iVar1 + 0xc) + 0x84c);
        uVar3 = (ulonglong)uVar7;
        if ((int)uVar7 < 0) {
          uVar3 = 0;
        }
        else if (7 < (int)uVar7) {
          uVar3 = 7;
        }
      }
      else {
        uVar3 = 1;
      }
      iVar6 = (int)uVar3;
      *(int *)(iVar1 + 0x108) = iVar6;
      fn_82E82680(*(undefined4 *)(iVar1 + 0xc),uVar3 & 7);
      if (iVar5 < 4) {
        *(undefined1 *)(iVar1 + 0x228) = 0;
      }
      else {
        *(undefined1 *)(iVar1 + 0x228) = 6;
      }
      if (((uVar12 == 8) || (uVar12 == 6)) || (uVar12 == 7)) {
        if ((iVar6 < 1) || (uVar3 + 2 == 0)) {
          *(undefined4 *)(iVar1 + 0x244) = 0;
        }
        else {
          *(int *)(iVar1 + 0x244) = (int)(uVar3 + 2);
        }
        uVar9 = (ulonglong)*(byte *)(*(int *)(iVar1 + 0xc) + 0x7b30);
        if (1 < uVar9) {
          if (0 < iVar6) {
            uVar9 = uVar9 + uVar3;
          }
          lVar10 = uVar9 + 1;
          if (*(int *)(iVar1 + 0x244) < (int)lVar10) {
            if (0x12 < (int)lVar10) {
              lVar8 = 0x11 - uVar3;
              lVar10 = 0x12;
              if ((int)lVar8 < 1) {
                lVar8 = 1;
              }
              *(char *)(*(int *)(iVar1 + 0xc) + 0x7b30) = (char)lVar8;
            }
            *(int *)(iVar1 + 0x244) = (int)lVar10;
          }
          fn_82ED46A0(*(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x7b40),0xffffffffffffffff,
                            0xffffffffffffffff,lVar10 + -1,
                            *(undefined1 *)(*(int *)(iVar1 + 0xc) + 0x7b30));
        }
      }
      else {
        *(undefined4 *)(iVar1 + 0x244) = 0;
      }
      uStack_d8 = 0;
      iVar5 = fn_82E4B7F8(param_4,&uStack_d8,uVar11);
      if ((iVar5 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
        *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x7b34) = uStack_d8;
      }
      fn_82E4D918(param_4,aiStack_d0,*(undefined4 *)(iVar1 + 0x244));
      if ((aiStack_d0[0] == 0) && (*(int *)(iVar1 + 0xc) != 0)) {
        fn_82E836E0(*(int *)(iVar1 + 0xc),0);
        return 0;
      }
    }
  }
  return 0xffffffffffffff9c;
}

