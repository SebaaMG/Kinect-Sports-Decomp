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
extern unsigned int lbl_820FD898;
extern unsigned int lbl_820FD8C8;
extern unsigned int lbl_820FD8F8;


undefined8
fn_82C88C08(int param_1,int param_2,ulonglong param_3,int param_4,int param_5,longlong param_6,
             int *param_7,undefined4 *param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int *piVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined *puVar20;
  undefined4 *puVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  int in_stack_00000054;
  int in_stack_0000005c;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar15 = (int)param_3;
  if (param_4 == 0) {
    if (param_5 == 0) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      lVar27 = 0xd;
      puVar21 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 8);
      *(int *)(param_1 + 4) = *(int *)(param_1 + 0x14) + 1;
      do {
        puVar21 = puVar21 + 1;
        *puVar21 = 0x80808080;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    else {
      puVar21 = *(undefined4 **)(param_1 + 0x18);
      puVar23 = (undefined4 *)(param_2 - iVar15);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 0x14) + 1;
      puVar13 = (undefined4 *)((int)puVar23 - iVar15);
      if (param_6 + -1 < 1) {
        bVar5 = *(byte *)((int)puVar23 + 7);
        *puVar21 = *puVar23;
        uVar24 = puVar23[1];
        iVar15 = (uint)bVar5 * 0x1010101;
        puVar21[3] = iVar15;
        puVar21[2] = iVar15;
        puVar21[1] = uVar24;
        puVar21[4] = *puVar13;
        puVar21[5] = puVar13[1];
      }
      else {
        *puVar21 = *puVar23;
        puVar21[1] = puVar23[1];
        puVar21[2] = puVar23[2];
        puVar21[3] = puVar23[3];
        puVar21[4] = *puVar13;
        puVar21[5] = puVar13[1];
      }
      pbVar8 = *(byte **)(param_1 + 0x18);
      iVar15 = ((int)((uint)pbVar8[7] + (uint)pbVar8[6] + (uint)pbVar8[5] + (uint)pbVar8[4] +
                      (uint)pbVar8[3] + (uint)pbVar8[2] + (uint)pbVar8[1] + (uint)*pbVar8 + 4) >> 3)
               * 0x1010101;
      *(int *)(pbVar8 + -4) = iVar15;
      *(int *)(pbVar8 + -8) = iVar15;
      *(int *)(pbVar8 + -0xc) = iVar15;
      *(int *)(pbVar8 + -0x10) = iVar15;
      *(int *)(pbVar8 + -0x14) = iVar15;
    }
  }
  else {
    *(int *)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = iVar15;
    if (param_5 == 0) {
      puVar22 = (undefined1 *)(param_2 + -1);
      *(undefined1 *)(*(int *)(param_1 + 0x14) + -1) = *puVar22;
      bVar5 = *(byte *)(*(int *)(param_1 + 0x14) + -1);
      *(undefined1 *)(*(int *)(param_1 + 0x14) + -2) = puVar22[iVar15];
      bVar6 = *(byte *)(*(int *)(param_1 + 0x14) + -2);
      *(undefined1 *)(*(int *)(param_1 + 0x14) + -3) = puVar22[(int)((param_3 & 0xffffffff) << 1)];
      bVar1 = *(byte *)(*(int *)(param_1 + 0x14) + -3);
      *(undefined1 *)(*(int *)(param_1 + 0x14) + -4) =
           puVar22[iVar15 + (int)((param_3 & 0xffffffff) << 1)];
      bVar2 = *(byte *)(*(int *)(param_1 + 0x14) + -4);
      *(undefined1 *)(*(int *)(param_1 + 0x14) + -5) = puVar22[(int)((param_3 & 0xffffffff) << 2)];
      bVar3 = *(byte *)(*(int *)(param_1 + 0x14) + -5);
      *(undefined1 *)(*(int *)(param_1 + 0x14) + -6) =
           puVar22[iVar15 + (int)((param_3 & 0xffffffff) << 2)];
      bVar4 = *(byte *)(*(int *)(param_1 + 0x14) + -6);
      *(undefined1 *)(*(int *)(param_1 + 0x14) + -7) =
           puVar22[(int)((param_3 + (param_3 & 0x7fffffff) * 2 & 0xffffffff) << 1)];
      iVar12 = *(int *)(param_1 + 0x14);
      *(undefined1 *)(iVar12 + -8) = puVar22[(int)((param_3 & 0xffffffff) << 3) - iVar15];
      iVar15 = (int)((uint)(byte)(*(undefined1 **)(param_1 + 0x14))[-8] +
                     (uint)*(byte *)(iVar12 + -7) +
                     (uint)bVar4 +
                     (uint)bVar3 + (uint)bVar2 + (uint)bVar1 + (uint)bVar6 + (uint)bVar5 + 4) >> 3;
      iVar12 = iVar15 * 0x1010101;
      **(undefined1 **)(param_1 + 0x14) = (char)iVar15;
      piVar7 = *(int **)(param_1 + 0x18);
      piVar7[5] = iVar12;
      piVar7[4] = iVar12;
      piVar7[3] = iVar12;
      piVar7[2] = iVar12;
      piVar7[1] = iVar12;
      *piVar7 = iVar12;
    }
    else {
      puVar23 = (undefined4 *)(param_2 - iVar15);
      puVar21 = *(undefined4 **)(param_1 + 0x18);
      if (param_4 < (int)param_6 + -1) {
        *puVar21 = *puVar23;
        puVar21[1] = puVar23[1];
        puVar21[2] = puVar23[2];
        puVar21[3] = puVar23[3];
        puVar21[4] = *(undefined4 *)((int)puVar23 - iVar15);
        uVar24 = ((undefined4 *)((int)puVar23 - iVar15))[1];
      }
      else {
        bVar5 = *(byte *)((int)puVar23 + 7);
        *puVar21 = *puVar23;
        puVar21[1] = puVar23[1];
        iVar12 = (uint)bVar5 * 0x1010101;
        puVar21[3] = iVar12;
        puVar21[2] = iVar12;
        puVar21[4] = *(undefined4 *)((int)puVar23 - iVar15);
        uVar24 = ((undefined4 *)((int)puVar23 - iVar15))[1];
      }
      puVar21[5] = uVar24;
      puVar16 = (undefined1 *)(param_2 + -1);
      puVar11 = puVar16 + iVar15 * 4;
      puVar22 = *(undefined1 **)(param_1 + 0x14);
      *puVar22 = puVar16[-iVar15];
      puVar22[-1] = *puVar16;
      puVar22[-5] = *puVar11;
      puVar16 = puVar16 + iVar15;
      puVar22[-2] = *puVar16;
      puVar11 = puVar11 + iVar15;
      puVar22[-6] = *puVar11;
      puVar22[-3] = puVar16[iVar15];
      puVar22[-7] = puVar11[iVar15];
      puVar22[-4] = (puVar16 + iVar15)[iVar15];
      puVar22[-8] = (puVar11 + iVar15)[iVar15];
    }
  }
  pbVar8 = *(byte **)(param_1 + 0x18);
  pbVar9 = *(byte **)(param_1 + 0x14);
  iVar12 = 0;
  iVar15 = 0;
  lVar27 = 4;
  uVar17 = (uint)*pbVar8;
  uVar26 = (uint)*pbVar9;
  uVar18 = uVar17;
  do {
    bVar5 = pbVar8[iVar12];
    uVar25 = (uint)bVar5;
    bVar6 = pbVar9[iVar12 + -8];
    uVar14 = (uint)bVar6;
    uVar26 = uVar14 + uVar25 + uVar26;
    uVar19 = uVar25;
    if ((bVar5 <= uVar18) && (uVar19 = uVar18, bVar5 < uVar17)) {
      uVar17 = uVar25;
    }
    uVar18 = uVar14;
    if ((bVar6 <= uVar19) && (uVar18 = uVar19, bVar6 < uVar17)) {
      uVar17 = uVar14;
    }
    bVar6 = pbVar9[iVar12 + -7];
    uVar14 = (uint)bVar6;
    bVar5 = pbVar8[iVar12 + 1];
    uVar25 = (uint)bVar5;
    iVar15 = iVar15 + uVar14 + uVar25;
    uVar19 = uVar25;
    if ((bVar5 <= uVar18) && (uVar19 = uVar18, bVar5 < uVar17)) {
      uVar17 = uVar25;
    }
    uVar18 = uVar14;
    if ((bVar6 <= uVar19) && (uVar18 = uVar19, bVar6 < uVar17)) {
      uVar17 = uVar14;
    }
    iVar12 = iVar12 + 2;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  iVar12 = uVar18 - uVar17;
  if (((iVar12 < in_stack_00000054) || (iVar12 < 3)) && (*param_7 = 0, iVar12 < 3)) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    iVar15 = (uint)*(byte *)(*(int *)(param_1 + 0x18) + 9) +
             (uint)*(byte *)(*(int *)(param_1 + 0x18) + 8) + iVar15 + uVar26 + 9;
    *(int *)(param_1 + 0x10) =
         ((((iVar15 * 3 >> 4) + iVar15 * 0xf >> 5) + iVar15 >> 2) + iVar15 >> 1) + iVar15 >> 5;
  }
  iVar15 = *param_7;
  if (in_stack_0000005c == 0) {
    if (iVar15 == 2) {
      puVar20 = &lbl_820FD8C8;
    }
    else if (iVar15 == 1) {
      puVar20 = &lbl_820FD8F8;
    }
    else {
      puVar20 = &lbl_820FD898;
    }
    *param_8 = puVar20;
    iVar15 = *param_7 << 2;
    *param_7 = iVar15;
    if (iVar12 < in_stack_00000054 << 1) {
      if ((param_4 == 0) || (param_5 == 0)) {
        *param_7 = 0;
      }
      else {
        if (iVar15 == 4) {
          *param_7 = 0xb;
          return 0;
        }
        if (iVar15 == 8) {
          *param_7 = 10;
          return 0;
        }
      }
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
  }
  else {
    uVar10 = 0;
    *param_7 = iVar15 << 2;
  }
  return uVar10;
}

