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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_82E25E88();
extern int fn_82E25F80();
extern int fn_82E26138();
extern int fn_82E26360();
extern int fn_82E26630();
extern int fn_82E26C90();
extern unsigned int lbl_8208E054;
extern unsigned int lbl_8208E058;
extern unsigned int lbl_8208E05C;
extern unsigned int lbl_83187510;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong fn_82E27DB8(int *param_1,uint *param_2,uint *param_3,uint param_4,int param_5)

{
  ushort uVar1;
  int iVar4;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint auStack_b0 [4];
  undefined1 auStack_a0 [4];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [4];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  auStack_b0[0] = 0;
  iVar10 = 0;
  iVar12 = 0;
  uVar13 = 0;
  uVar16 = 0;
  puVar9 = (uint *)0x0;
  iVar11 = 0;
  lVar14 = 0x28;
  if (param_4 < *param_3) {
    return -0x7ff8ffa9;
  }
  if (param_5 == 0) {
LAB_82e27e58:
    lVar3 = fn_82E26C90(param_3,param_4,auStack_b0,0);
    if (lVar3 < 0) {
      return lVar3;
    }
    uVar2 = (ulonglong)auStack_b0[0];
    if (uVar2 != 0) goto LAB_82e27e80;
    if (param_5 == 0) {
      return -0x7ff8ffa9;
    }
    uStack_8c = *(undefined4 *)(param_5 + 4);
    uStack_88 = *(undefined4 *)(param_5 + 8);
    uStack_84 = *(undefined4 *)(param_5 + 0xc);
  }
  else {
    iVar4 = fn_82E25E88(auStack_a0,param_5);
    uStack_8c = *(undefined4 *)(iVar4 + 4);
    uStack_88 = *(undefined4 *)(iVar4 + 8);
    uStack_84 = *(undefined4 *)(iVar4 + 0xc);
    uVar2 = fn_82E25F80(auStack_90);
    auStack_b0[0] = (uint)uVar2;
    if (uVar2 == 0) goto LAB_82e27e58;
LAB_82e27e80:
    uStack_94 = lbl_8208E05C;
    uStack_9c = lbl_8208E054;
    uStack_98 = lbl_8208E058;
    uStack_8c = lbl_8208E054;
    uStack_88 = lbl_8208E058;
    uStack_84 = lbl_8208E05C;
    if (param_3[4] == 3) {
      if ((*(short *)((int)param_3 + 0xe) != 0x10) && (*(short *)((int)param_3 + 0xe) != 0x20)) {
        return -0x3ff2c94c;
      }
      lVar14 = 0x34;
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x60))(param_1,0xffffffff82153488,auStack_90);
  if (lVar3 < 0) {
    return lVar3;
  }
  uVar1 = *(ushort *)((int)param_3 + 0xe);
  if ((uVar1 < 9) && (uVar1 != 0)) {
    if ((param_3[4] == 0) && (param_3[8] == 0)) {
      uVar5 = 0;
      uVar6 = 1 << (uVar1 & 0x3f);
    }
    else {
      uVar5 = param_3[8];
      uVar6 = uVar5;
    }
    if (uVar6 == 0) goto LAB_82e27ff0;
    if (0x100 < uVar6) {
      return -0x3ff2c94c;
    }
    iVar12 = uVar6 * 4;
    iVar11 = *param_3 + (int)param_3;
    if (param_4 < *param_3 + iVar12) {
      if (uVar5 != 0) {
        return -0x3ff2c94c;
      }
      iVar12 = 0;
      iVar11 = 0;
      goto LAB_82e27ff0;
    }
    if (iVar12 == 0) goto LAB_82e27ff0;
  }
  else {
LAB_82e27ff0:
    if ((lVar14 == 0x28) && ((uVar5 = *param_3, 0x28 < uVar5 || (uVar5 = param_4, 0x28 < param_4))))
    {
      iVar10 = uVar5 - 0x28;
      puVar9 = param_3 + 10;
    }
  }
  uVar5 = param_3[1];
  if (uVar5 != 0) {
    uVar6 = param_3[2];
    if (uVar6 != 0) {
      uVar17 = (ulonglong)param_2[2] - (ulonglong)*param_2;
      uVar7 = ((ulonglong)uVar6 ^ (longlong)((int)uVar6 >> 0x1f)) - (longlong)((int)uVar6 >> 0x1f);
      uVar15 = (ulonglong)param_2[3] - (ulonglong)param_2[1];
      uVar13 = uVar7;
      uVar16 = (ulonglong)uVar5;
      if (((uVar17 != 0) && ((uVar15 & 0xffffffff) != 0)) &&
         ((*param_2 != 0 ||
          (((param_2[1] != 0 || ((uVar17 & 0xffffffff) != (ulonglong)uVar5)) ||
           (uVar13 = uVar15, uVar16 = uVar17, (uVar15 & 0xffffffff) != (ulonglong)uVar6)))))) {
        lVar14 = (**(code **)(*param_1 + 0x54))(param_1,0xffffffff82153678,1);
        if (lVar14 < 0) {
          return lVar14;
        }
        uStack_98 = (undefined4)uVar17;
        uStack_94 = (undefined4)uVar15;
        uStack_9c = CONCAT22((((U64)(uStack_9c) >> 0) & 0xFFFF),(short)param_2[1]);
        lVar14 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff82153668,auStack_a0,0x10);
        if (lVar14 < 0) {
          return lVar14;
        }
        lVar14 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff82153658,auStack_a0,0x10);
        if (lVar14 < 0) {
          return lVar14;
        }
        uVar5 = param_3[1];
        uVar13 = uVar7;
        uVar16 = (ulonglong)uVar5;
        if ((uVar5 == 0x300) && ((uVar17 & 0xffffffff) == 0x21c)) {
          uVar16 = 0x2d0;
        }
      }
      lVar3 = (**(code **)(*param_1 + 0x58))
                        (param_1,0xffffffff82153578,uVar16 << 0x20 | uVar13 & 0xffffffff);
      if (lVar3 < 0) {
        return lVar3;
      }
      if ((((uVar2 & 0xffffffff) != 0) &&
          (lVar14 = fn_82E26360(uVar2,param_3[1],param_3[2]), lVar14 != 0)) &&
         (lVar3 = (**(code **)(*param_1 + 0x54))(param_1,0xffffffff821536b8), lVar3 < 0)) {
        return lVar3;
      }
    }
  }
  uVar7 = 0;
  puVar8 = &lbl_83187510;
  do {
    if ((uVar2 & 0xffffffff) == (ulonglong)*puVar8) {
      lVar3 = (**(code **)(*param_1 + 0x54))(param_1,0xffffffff82153498,1);
      if (lVar3 < 0) {
        return lVar3;
      }
      break;
    }
    uVar7 = uVar7 + 0x24;
    puVar8 = puVar8 + 9;
  } while ((uVar7 & 0xffffffff) != 0x804);
  iVar4 = fn_82E26138(uVar2,0);
  if (iVar4 == 0) {
    uVar5 = param_3[5];
LAB_82e2827c:
    if (uVar5 == 0) goto LAB_82e282a8;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x54))(param_1,0xffffffff821534a8,1);
    if (lVar3 < 0) {
      return lVar3;
    }
    if (param_3[5] == 0) {
      uVar5 = fn_82E26630(uVar2,uVar16,uVar13);
      goto LAB_82e2827c;
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x54))(param_1,0xffffffff821534b8);
  if (lVar3 < 0) {
    return lVar3;
  }
LAB_82e282a8:
  if (((iVar12 == 0) ||
      (lVar3 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff821536c8,iVar11,iVar12), -1 < lVar3)
      ) && (iVar10 != 0)) {
    lVar3 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff821536d8,puVar9,iVar10);
  }
  return lVar3;
}

