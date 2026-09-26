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
extern int fn_824E44A8();
extern int fn_824E4A90();
extern int fn_824E61A8();
extern int fn_824E67E0();
extern int fn_824E6890();
extern int fn_824E6B70();
extern int fn_82522D98();
extern int fn_82576478();
extern int fn_8265C9E0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_83276754;
extern unsigned int lbl_83276758;
extern unsigned int lbl_8327675C;
extern unsigned int lbl_83276760;
extern unsigned int lbl_83276764;
extern unsigned int lbl_83276768;


void fn_8248F530(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  int *piVar21;
  undefined8 uVar19;
  ulonglong uVar20;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  
  piVar21 = (int *)fn_82F6A548();
  iVar22 = *piVar21;
  iVar23 = *(int *)(iVar22 + 4);
  iVar18 = (int)param_2;
  if (iVar23 == 0xaf) {
    iVar23 = *(int *)(iVar18 + 0xd54);
    if (*(int *)(iVar23 + 0x24) == 0) {
      uVar1 = *(undefined4 *)(iVar18 + 0x93c);
      uVar20 = fn_8265C9E0(0x44);
      if ((uVar20 & 0xffffffff) == 0) {
        uVar24 = 0;
      }
      else {
        uVar24 = fn_824E4A90(uVar20,uVar1);
      }
      *(undefined4 *)(iVar23 + 0x24) = uVar24;
      fn_82576478(uVar1);
    }
    if ((*(int *)(iVar23 + 0x24) != 0) && (iVar22 != 0)) {
      fn_824E61A8(iVar22);
    }
  }
  else if (iVar23 == 0xb3) {
    iVar23 = fn_824E67E0(param_2,(ulonglong)*(uint *)(iVar18 + 0xd54) + 0x20);
    if ((iVar23 != 0) && (iVar22 != 0)) {
      lbl_83276754 = *(undefined4 *)(iVar22 + 8);
      lbl_83276758 = *(undefined4 *)(iVar22 + 0xc);
      lbl_8327675C = *(undefined4 *)(iVar22 + 0x10);
      lbl_83276760 = *(undefined4 *)(iVar22 + 0x14);
      lbl_83276764 = *(undefined4 *)(iVar22 + 0x18);
      lbl_83276768 = *(undefined4 *)(iVar22 + 0x1c);
    }
  }
  else if (iVar23 == 0xb4) {
    iVar22 = *(int *)(iVar18 + 0x93c);
    if (iVar22 != 0) {
      uVar20 = fn_8265C9E0(0x14);
      if ((uVar20 & 0xffffffff) == 0) {
        iVar22 = 0;
      }
      else {
        iVar22 = fn_824E44A8(uVar20,iVar22);
      }
      if (iVar22 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82522D98(8);
      }
    }
  }
  else if (iVar23 == 0xb5) {
    if (param_2 != -0x4c0) {
      uVar1 = *(undefined4 *)(iVar22 + 0x4c);
      uVar24 = *(undefined4 *)(iVar22 + 0x48);
      uVar2 = *(undefined4 *)(iVar22 + 0x44);
      uVar3 = *(undefined4 *)(iVar22 + 0x40);
      uVar4 = *(undefined4 *)(iVar22 + 0x3c);
      uVar5 = *(undefined4 *)(iVar22 + 0x38);
      uVar6 = *(undefined4 *)(iVar22 + 0x34);
      uVar7 = *(undefined4 *)(iVar22 + 0x30);
      uVar8 = *(undefined4 *)(iVar22 + 0x2c);
      uVar9 = *(undefined4 *)(iVar22 + 0x28);
      uVar10 = *(undefined4 *)(iVar22 + 0x24);
      uVar11 = *(undefined4 *)(iVar22 + 0x20);
      uVar12 = *(undefined4 *)(iVar22 + 0x1c);
      uVar13 = *(undefined4 *)(iVar22 + 0x18);
      uVar14 = *(undefined4 *)(iVar22 + 0x14);
      uVar15 = *(undefined4 *)(iVar22 + 0x10);
      uVar16 = *(undefined4 *)(iVar22 + 0xc);
      uVar17 = *(undefined4 *)(iVar22 + 8);
      *(undefined1 *)(iVar18 + 0x6c0) = 1;
      *(undefined4 *)(iVar18 + 0x678) = uVar17;
      *(undefined4 *)(iVar18 + 0x67c) = uVar16;
      *(undefined4 *)(iVar18 + 0x680) = uVar15;
      *(undefined4 *)(iVar18 + 0x684) = uVar14;
      *(undefined4 *)(iVar18 + 0x688) = uVar13;
      *(undefined4 *)(iVar18 + 0x68c) = uVar12;
      *(undefined4 *)(iVar18 + 0x690) = uVar11;
      *(undefined4 *)(iVar18 + 0x694) = uVar10;
      *(undefined4 *)(iVar18 + 0x698) = uVar9;
      *(undefined4 *)(iVar18 + 0x69c) = uVar8;
      *(undefined4 *)(iVar18 + 0x6a0) = uVar7;
      *(undefined4 *)(iVar18 + 0x6a4) = uVar6;
      *(undefined4 *)(iVar18 + 0x6a8) = uVar5;
      *(undefined4 *)(iVar18 + 0x6ac) = uVar4;
      *(undefined4 *)(iVar18 + 0x6b0) = uVar3;
      *(undefined4 *)(iVar18 + 0x6b4) = uVar2;
      *(undefined4 *)(iVar18 + 0x6b8) = uVar24;
      *(undefined4 *)(iVar18 + 0x6bc) = uVar1;
    }
  }
  else {
    if (iVar23 != 0xba) {
      uVar19 = 4;
      goto LAB_8248f780;
    }
    uVar20 = fn_824E6890(param_2,(ulonglong)*(uint *)(iVar18 + 0xd54) + 0x20);
    if ((uVar20 & 0xffffffff) != 0) {
      fn_824E6B70(uVar20,iVar22);
    }
  }
  uVar19 = 3;
LAB_8248f780:
  fn_82F6A594(uVar19);
  return;
}

