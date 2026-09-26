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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;


undefined8
fn_82C83C40(int param_1,uint *param_2,uint *param_3,int param_4,int param_5,int param_6,
             int param_7)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  short sVar12;
  int iVar11;
  longlong lVar13;
  short sVar15;
  uint uVar14;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint auStack_c0 [4];
  uint auStack_b0 [4];
  uint auStack_a0 [4];
  uint auStack_90 [36];
  
  uVar1 = *param_3;
  uVar2 = *param_2;
  lVar21 = 0;
  auStack_b0[0] = 0;
  auStack_c0[0] = 0;
  lVar19 = 0;
  lVar22 = 0;
  uVar16 = ((longlong)*(int *)(param_1 + 0x88) * (longlong)(int)uVar1 & 0x7fffffffU) * 2 +
           (ulonglong)uVar2;
  iVar18 = *(int *)(param_1 + 0x88) * 0x40 + -4;
  if (param_7 == 0) {
    if (uVar2 == 0) {
      if (*(int *)(param_1 + 0x88) == 1) {
        iVar5 = (int)((uVar16 - 2 & 0xffffffff) << 1);
        auStack_a0[0] = (uint)*(short *)(iVar5 + param_4);
        auStack_90[0] = (uint)*(short *)(iVar5 + param_5);
        goto LAB_82c83ce8;
      }
      uVar25 = 0;
      uVar23 = 0;
    }
    else {
      iVar5 = (int)((uVar16 & 0xffffffff) << 1);
      lVar22 = 1;
      uVar25 = (uint)*(short *)(iVar5 + param_4 + -2);
      uVar23 = (uint)*(short *)(iVar5 + param_5 + -2);
    }
    uVar20 = (uint)LZCOUNT(uVar25 - 0x4000) >> 5;
    if (uVar20 != 0) {
      uVar23 = 0;
      uVar25 = 0;
    }
    iVar5 = (int)((uVar16 + ((ulonglong)*(uint *)(param_1 + 0x88) & 0x7fffffff) * -2 & 0xffffffff)
                 << 1);
    sVar15 = *(short *)(iVar5 + param_4);
    uVar27 = (uint)sVar15;
    uVar24 = (uint)*(short *)(iVar5 + param_5);
    uVar6 = (uint)LZCOUNT(sVar15 + -0x4000) >> 5;
    if (uVar6 != 0) {
      uVar24 = 0;
      uVar27 = 0;
    }
    if (param_6 == 0) {
      if (uVar2 == 0) {
        iVar5 = (int)((uVar16 + ((ulonglong)*(uint *)(param_1 + 0x88) & 0x7fffffff) * -2 &
                      0xffffffff) << 1);
        sVar15 = *(short *)(iVar5 + param_4 + 2);
        sVar12 = *(short *)(iVar5 + param_5 + 2);
      }
      else {
        if ((((uVar1 ^ uVar2) & 1) == 0) ||
           (lVar13 = 0, *(int *)(param_1 + 0x88) * 2 + -1 <= (int)uVar2)) {
          lVar13 = 1;
        }
        iVar5 = (int)((lVar13 * -2 + 1 + ((ulonglong)*(uint *)(param_1 + 0x88) & 0x7fffffff) * -2 +
                       uVar16 & 0xffffffff) << 1);
        sVar15 = *(short *)(iVar5 + param_4);
        sVar12 = *(short *)(iVar5 + param_5);
      }
    }
    else if (uVar2 == *(int *)(param_1 + 0x88) * 2 - 2U) {
      iVar5 = (int)((uVar16 + ((ulonglong)*(uint *)(param_1 + 0x88) + 1 & 0x7fffffff) * -2 &
                    0xffffffff) << 1);
      sVar15 = *(short *)(iVar5 + param_4);
      sVar12 = *(short *)(iVar5 + param_5);
    }
    else {
      iVar5 = (int)((uVar16 + ((ulonglong)*(uint *)(param_1 + 0x88) & 0x7fffffff) * -2 + 2 &
                    0xffffffff) << 1);
      sVar15 = *(short *)(iVar5 + param_4);
      sVar12 = *(short *)(iVar5 + param_5);
    }
    uVar17 = (uint)sVar15;
    uVar14 = (uint)sVar12;
    uVar9 = (uint)LZCOUNT(sVar15 + -0x4000) >> 5;
    if (uVar9 != 0) {
      uVar14 = 0;
      uVar17 = 0;
    }
    if (lVar22 != -2) {
      if (((int)lVar22 != 0) && (uVar20 == 0)) {
        if ((uVar23 & 4) == 0) {
          lVar21 = 1;
          auStack_c0[0] = uVar25;
          auStack_b0[0] = uVar23;
        }
        else {
          lVar19 = 1;
          auStack_a0[0] = uVar25;
          auStack_90[0] = uVar23;
        }
      }
      if (uVar6 == 0) {
        if ((uVar24 & 4) == 0) {
          iVar5 = (int)(lVar21 << 2);
          puVar8 = auStack_c0;
          puVar4 = auStack_b0;
          lVar21 = lVar21 + 1;
        }
        else {
          iVar5 = (int)(lVar19 << 2);
          puVar8 = auStack_a0;
          puVar4 = auStack_90;
          lVar19 = lVar19 + 1;
        }
        *(uint *)(iVar5 + (int)puVar4) = uVar24;
        *(uint *)(iVar5 + (int)puVar8) = uVar27;
      }
      uVar20 = (uint)lVar19;
      uVar6 = (uint)lVar21;
      if (uVar9 == 0) {
        if ((uVar14 & 4) == 0) {
          iVar5 = (int)(lVar21 << 2);
          puVar8 = auStack_c0;
          puVar4 = auStack_b0;
          uVar6 = uVar6 + 1;
        }
        else {
          iVar5 = (int)(lVar19 << 2);
          puVar8 = auStack_a0;
          puVar4 = auStack_90;
          uVar20 = uVar20 + 1;
        }
        *(uint *)(iVar5 + (int)puVar4) = uVar14;
        *(uint *)(iVar5 + (int)puVar8) = uVar17;
      }
      if ((uVar6 == 3) || (uVar20 == 3)) {
        uVar9 = uVar27 - uVar17 ^ uVar27 - uVar25;
        uVar6 = uVar17 - uVar25 ^ uVar27 - uVar25;
        uVar26 = uVar24 - uVar14 ^ uVar24 - uVar23;
        uVar20 = uVar14 - uVar23 ^ uVar24 - uVar23;
        auStack_a0[0] =
             uVar17 & ~((int)(uVar9 | uVar6) >> 0x1f) | (int)uVar9 >> 0x1f & uVar27 |
             (int)uVar6 >> 0x1f & uVar25;
        auStack_90[0] =
             uVar14 & ~((int)(uVar26 | uVar20) >> 0x1f) | (int)uVar26 >> 0x1f & uVar24 |
             (int)uVar20 >> 0x1f & uVar23;
      }
      else if ((uVar20 < uVar6) || (uVar20 <= uVar6)) {
        auStack_a0[0] = auStack_c0[0];
        auStack_90[0] = auStack_b0[0];
      }
LAB_82c83ce8:
      if (auStack_a0[0] != 0x4000) goto LAB_82c83fe8;
    }
    *param_2 = 0;
    uVar3 = 1;
    *param_3 = 0;
  }
  else {
    if (uVar2 != 0) {
      iVar5 = (int)((uVar16 & 0xffffffff) << 1);
      auStack_90[0] = (uint)*(short *)(iVar5 + param_5 + -2);
      auStack_a0[0] = (uint)*(short *)(iVar5 + param_4 + -2);
      goto LAB_82c83ce8;
    }
    auStack_90[0] = 0;
    auStack_a0[0] = 0;
LAB_82c83fe8:
    iVar5 = *(int *)(param_1 + 0x8c) * 0x40;
    if ((auStack_90[0] & 4) == 0) {
      iVar7 = -0x78;
      iVar5 = iVar5 + -4;
    }
    else {
      iVar7 = -0x7c;
      iVar5 = iVar5 + -8;
    }
    iVar11 = auStack_a0[0] + uVar2 * 0x20;
    iVar10 = auStack_90[0] + uVar1 * 0x20;
    if (iVar11 < -0x3c) {
      auStack_a0[0] = (auStack_a0[0] - iVar11) - 0x3c;
    }
    else if (iVar18 < iVar11) {
      auStack_a0[0] = (auStack_a0[0] - iVar11) + iVar18;
    }
    if (iVar10 < iVar7) {
      *param_2 = auStack_a0[0];
      uVar3 = 0;
      *param_3 = (iVar7 - iVar10) + auStack_90[0];
    }
    else {
      if (iVar5 < iVar10) {
        auStack_90[0] = (iVar5 - iVar10) + auStack_90[0];
      }
      *param_2 = auStack_a0[0];
      uVar3 = 0;
      *param_3 = auStack_90[0];
    }
  }
  return uVar3;
}

