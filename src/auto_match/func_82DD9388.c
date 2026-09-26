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
extern int fn_82DD8470();
extern int fn_82DD8FF8();


undefined8
fn_82DD9388(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
             short *param_6,int param_7,int param_8)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_r0;
  int iVar7;
  ushort uVar8;
  short *psVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte *pbVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int *in_stack_00000054;
  int in_stack_0000005c;
  
  pbVar3 = (byte *)param_1;
  uVar20 = 4;
  if (pbVar3[2] == 4) {
    uVar20 = fn_82DD8FF8(param_8);
    iVar7 = (int)uVar20;
    if (iVar7 == 4) {
      return 5;
    }
    (**(code **)(*in_stack_00000054 + 0x14))
              (in_stack_00000054,*(undefined2 *)(pbVar3 + iVar7 * 8 + 6),
               *(undefined4 *)(param_5 + 4));
    if (iVar7 == 0) {
      *(undefined4 *)(pbVar3 + 4) = *(undefined4 *)(pbVar3 + 0xc);
      uVar21 = *(undefined4 *)(pbVar3 + 0x10);
    }
    else {
      *(undefined4 *)(pbVar3 + iVar7 * 8 + 4) = *(undefined4 *)(pbVar3 + 4);
      uVar21 = *(undefined4 *)(pbVar3 + 8);
    }
    *(undefined4 *)(pbVar3 + iVar7 * 8 + 8) = uVar21;
    fn_82DD8470(param_1);
    uVar8 = (**(code **)(*in_stack_00000054 + 0xc))
                      (in_stack_00000054,param_2,param_3,param_4,param_5,param_6,param_7);
    if (uVar8 == 0xffff) {
      bVar1 = pbVar3[2];
      uVar17 = (ulonglong)bVar1 - 1;
      *(undefined4 *)(pbVar3 + 4) = *(undefined4 *)(pbVar3 + 0x1c);
      *(undefined4 *)(pbVar3 + 8) = *(undefined4 *)(pbVar3 + 0x20);
      lVar18 = (uVar17 & 0x1fffffff) * 8 + param_1 + 4;
      pbVar3[2] = (byte)uVar17;
      lVar14 = (longlong)((int)((uint)pbVar3[1] + (uint)*pbVar3 + -1) >> 1);
      if (-1 < lVar14) {
        lVar14 = lVar14 + 1;
        iVar10 = (int)lVar18;
        do {
          *(undefined4 *)lVar18 =
               *(undefined4 *)
                (pbVar3 + (((uint)bVar1 * 8 + 4) - iVar10) + (int)(undefined4 *)lVar18);
          lVar18 = lVar18 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      iVar7 = iVar7 * 0x30 + param_8;
      puVar4 = (undefined4 *)(in_r0 + param_8 + 0x90 & 0xfffffff0);
      uVar21 = puVar4[1];
      uVar22 = puVar4[2];
      uVar23 = puVar4[3];
      puVar5 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar21;
      puVar5[2] = uVar22;
      puVar5[3] = uVar23;
      puVar4 = (undefined4 *)(param_8 + 0xa0U & 0xfffffff0);
      uVar21 = puVar4[1];
      uVar22 = puVar4[2];
      uVar23 = puVar4[3];
      puVar5 = (undefined4 *)(iVar7 + 0x10U & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar21;
      puVar5[2] = uVar22;
      puVar5[3] = uVar23;
      *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(param_8 + 0xb0);
      return 6;
    }
    *(uint *)(param_7 + 0x20) = (uint)uVar8;
    puVar4 = (undefined4 *)(in_r0 + param_7 & 0xfffffff0);
    uVar21 = puVar4[1];
    uVar22 = puVar4[2];
    uVar23 = puVar4[3];
    param_8 = iVar7 * 0x30 + param_8;
    puVar5 = (undefined4 *)(in_r0 + param_8 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar21;
    puVar5[2] = uVar22;
    puVar5[3] = uVar23;
    puVar4 = (undefined4 *)(param_7 + 0x10U & 0xfffffff0);
    uVar21 = puVar4[1];
    uVar22 = puVar4[2];
    uVar23 = puVar4[3];
    puVar5 = (undefined4 *)(param_8 + 0x10U & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar21;
    puVar5[2] = uVar22;
    puVar5[3] = uVar23;
    *(undefined4 *)(param_8 + 0x20) = *(undefined4 *)(param_7 + 0x20);
  }
  else {
    if ((in_stack_0000005c == 0) || (*(char *)((int)param_6 + 9) == '\x03')) {
      uVar8 = (**(code **)(*in_stack_00000054 + 0xc))
                        (in_stack_00000054,param_2,param_3,param_4,param_5,param_6,param_7);
      if (uVar8 == 0xffff) {
        return 5;
      }
    }
    else {
      uVar8 = 0xffff;
    }
    *(uint *)(param_7 + 0x20) = (uint)uVar8;
    bVar1 = pbVar3[2];
    lVar14 = (ulonglong)bVar1 + 1;
    lVar18 = (longlong)((int)((uint)pbVar3[1] + (uint)*pbVar3 + -1) >> 1);
    if (-1 < lVar18) {
      lVar12 = lVar18 + 1;
      lVar13 = ((ulonglong)bVar1 * 2 + lVar18 + 1 & 0x3fffffff) * 4 + param_1 + 4;
      lVar18 = (lVar14 * 2 + lVar18 + 1U & 0x3fffffff) * 4 + param_1 + 4;
      do {
        lVar13 = lVar13 + -4;
        lVar18 = lVar18 + -4;
        *(undefined4 *)lVar18 = *(undefined4 *)lVar13;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    *(undefined4 *)(pbVar3 + (uint)bVar1 * 8 + 4) = *(undefined4 *)(pbVar3 + 4);
    *(undefined4 *)(pbVar3 + (uint)bVar1 * 8 + 8) = *(undefined4 *)(pbVar3 + 8);
    pbVar3[2] = (byte)lVar14;
  }
  iVar7 = 0;
  iVar10 = 0;
  pbVar3[4] = *(byte *)(param_6 + 4);
  bVar1 = *(byte *)((int)param_6 + 9);
  *(ushort *)(pbVar3 + 6) = uVar8;
  pbVar3[8] = 0;
  pbVar3[9] = 0;
  pbVar3[10] = 0;
  pbVar3[0xb] = 0;
  pbVar3[5] = bVar1;
  lVar14 = (ulonglong)pbVar3[2] * 8 + param_1 + 4;
  psVar9 = param_6;
  if (*(char *)(param_6 + 4) != '\0') {
    do {
      uVar17 = 0;
      sVar2 = *psVar9;
      lVar18 = lVar14;
      if ((ulonglong)*pbVar3 != 0) {
        do {
          if (*(short *)lVar18 == sVar2) goto LAB_82dd9700;
          uVar17 = uVar17 + 1;
          lVar18 = lVar18 + 2;
        } while ((uVar17 & 0xffffffff) < (ulonglong)*pbVar3);
      }
      uVar15 = (ulonglong)pbVar3[1] + (ulonglong)*pbVar3;
      if ((uVar17 & 0xffffffff) < uVar15) {
        lVar13 = uVar15 - uVar17;
        lVar18 = (uVar15 + 1) * 2 + lVar14;
        do {
          iVar6 = (int)lVar18;
          lVar18 = lVar18 + -2;
          *(undefined2 *)lVar18 = *(undefined2 *)(iVar6 + -4);
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      iVar7 = iVar7 + 0x10;
      *(short *)((int)((uVar17 & 0xffffffff) << 1) + (int)lVar14) = sVar2;
      *pbVar3 = *pbVar3 + 1;
LAB_82dd9700:
      pbVar3[iVar10 + 8] = (byte)((uVar17 & 0xffffffff) << 4);
      iVar10 = iVar10 + 1;
      psVar9 = psVar9 + 1;
    } while (iVar10 < (int)(uint)*(byte *)(param_6 + 4));
    if (iVar7 != 0) {
      param_1 = param_1 + 0xc;
      uVar11 = 1;
      if (1 < pbVar3[2]) {
        do {
          pbVar16 = (byte *)param_1;
          uVar19 = (uint)*pbVar16;
          if (uVar19 < pbVar16[1] + uVar19) {
            do {
              pbVar16[uVar19 + 4] = pbVar16[uVar19 + 4] + (char)iVar7;
              uVar19 = uVar19 + 1;
            } while (uVar19 < (uint)pbVar16[1] + (uint)*pbVar16);
          }
          uVar11 = uVar11 + 1;
          param_1 = param_1 + 8;
        } while (uVar11 < pbVar3[2]);
      }
    }
  }
  iVar7 = 0;
  if (*(char *)((int)param_6 + 9) != '\0') {
    do {
      bVar1 = *pbVar3;
      uVar17 = (ulonglong)bVar1;
      if ((uint)bVar1 < (uint)pbVar3[1] + (uint)bVar1) {
        lVar18 = uVar17 * 2 + lVar14;
        do {
          if (*(short *)lVar18 == param_6[(uint)*(byte *)(param_6 + 4) + iVar7]) goto LAB_82dd97f8;
          uVar17 = uVar17 + 1;
          lVar18 = lVar18 + 2;
        } while ((int)uVar17 < (int)((uint)pbVar3[1] + (uint)bVar1));
      }
      *(short *)((int)((uVar17 & 0xffffffff) << 1) + (int)lVar14) =
           param_6[(uint)*(byte *)(param_6 + 4) + iVar7];
      pbVar3[1] = pbVar3[1] + 1;
LAB_82dd97f8:
      iVar10 = (uint)*(byte *)(param_6 + 4) + iVar7;
      iVar7 = iVar7 + 1;
      pbVar3[iVar10 + 8] = (byte)((uVar17 & 0xffffffff) << 4);
    } while (iVar7 < (int)(uint)*(byte *)((int)param_6 + 9));
  }
  return uVar20;
}

