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
extern int fn_82CD52D8();
extern int iRam83177568;


void fn_82CD5570(int param_1,int param_2,int param_3,int param_4,ulonglong param_5,
                  longlong param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  
  iVar17 = (int)param_5;
  if (iRam83177568 == 0) {
    iVar2 = *(int *)(param_7 + 0x38fc);
    uVar20 = (int)param_6 - iVar17;
    uVar26 = *(uint *)(param_7 + 0x390c);
    uVar24 = iVar2 * iVar17;
    uVar27 = *(uint *)(param_7 + 0x38b4);
    uVar14 = *(int *)(param_7 + 0x3910) * iVar2;
    uVar27 = ((int)uVar27 >> 3) + (uint)((int)uVar27 < 0 && (uVar27 & 7) != 0);
    uVar9 = uVar27 * 4;
    uVar11 = iVar2 + (uVar9 & 0x7fffffff) * -2;
    lVar16 = (longlong)((int)uVar20 >> 1) + (ulonglong)((int)uVar20 < 0 && (uVar20 & 1) != 0);
    iVar18 = ((int)uVar26 >> 1) + (uint)((int)uVar26 < 0 && (uVar26 & 1) != 0) +
             ((int)uVar14 >> 2) + (uint)((int)uVar14 < 0 && (uVar14 & 3) != 0) +
             ((int)uVar24 >> 2) + (uint)((int)uVar24 < 0 && (uVar24 & 3) != 0);
    pbVar19 = (byte *)(uVar26 + uVar14 + uVar24 + param_2);
    param_1 = *(int *)(param_7 + 0x389c) * iVar17 + *(int *)(param_7 + 0x38a4) + param_1;
    param_3 = iVar18 + param_3;
    iVar18 = iVar18 + param_4;
    iVar17 = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0);
    if (0 < lVar16) {
      pbVar4 = (byte *)(iVar18 + -1);
      pbVar5 = (byte *)(param_3 + -1);
      lVar22 = lVar16;
      iVar21 = param_1;
      pbVar15 = pbVar19;
      do {
        if (0 < (int)uVar9) {
          pbVar12 = pbVar15 + iVar2 + -1;
          puVar8 = (uint *)(*(int *)(param_7 + 0x389c) + iVar21 + -4);
          puVar10 = (uint *)(iVar21 + -4);
          uVar26 = uVar9;
          do {
            pbVar4 = pbVar4 + 1;
            pbVar3 = pbVar15 + 1;
            pbVar5 = pbVar5 + 1;
            bVar1 = *pbVar15;
            uVar24 = ((uint)*pbVar4 << 0x10 | (uint)*pbVar5) << 8;
            pbVar15 = pbVar15 + 2;
            puVar10 = puVar10 + 1;
            *puVar10 = (uint)*pbVar3 << 0x10 | (uint)bVar1 | uVar24;
            pbVar3 = pbVar12 + 1;
            pbVar12 = pbVar12 + 2;
            puVar8 = puVar8 + 1;
            *puVar8 = (uint)*pbVar12 << 0x10 | (uint)*pbVar3 | uVar24;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
        }
        lVar22 = lVar22 + -1;
        pbVar5 = pbVar5 + iVar17;
        pbVar4 = pbVar4 + iVar17;
        iVar21 = *(int *)(param_7 + 0x38a0) + iVar21;
        pbVar15 = pbVar15 + uVar11 + iVar2;
      } while (lVar22 != 0);
    }
    uVar26 = *(uint *)(param_7 + 0x38b4);
    param_1 = uVar27 * 0x10 + param_1;
    uVar24 = ((int)uVar26 >> 1) + (uint)((int)uVar26 < 0 && (uVar26 & 1) != 0) +
             (uVar27 & 0x3fffffff) * -4;
    pbVar19 = pbVar19 + uVar27 * 8;
    iVar23 = 0;
    uVar26 = *(int *)(param_7 + 0x38fc) + (uVar24 & 0x7fffffff) * -2;
    iVar17 = (int)lVar16;
    iVar21 = ((int)uVar26 >> 1) + (uint)((int)uVar26 < 0 && (uVar26 & 1) != 0);
    if (0 < iVar17) {
      pbVar4 = (byte *)(uVar9 + iVar18 + -1);
      pbVar5 = (byte *)(uVar9 + param_3 + -1);
      do {
        if (0 < (int)uVar24) {
          pbVar15 = pbVar19 + iVar2 + -1;
          puVar8 = (uint *)(*(int *)(param_7 + 0x389c) + param_1 + -4);
          puVar10 = (uint *)(param_1 + -4);
          uVar27 = uVar24;
          do {
            pbVar4 = pbVar4 + 1;
            pbVar12 = pbVar19 + 1;
            pbVar5 = pbVar5 + 1;
            bVar1 = *pbVar19;
            uVar9 = ((uint)*pbVar4 << 0x10 | (uint)*pbVar5) << 8;
            pbVar19 = pbVar19 + 2;
            puVar10 = puVar10 + 1;
            *puVar10 = (uint)*pbVar12 << 0x10 | (uint)bVar1 | uVar9;
            pbVar12 = pbVar15 + 1;
            pbVar15 = pbVar15 + 2;
            puVar8 = puVar8 + 1;
            *puVar8 = (uint)*pbVar15 << 0x10 | (uint)*pbVar12 | uVar9;
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
        }
        pbVar5 = pbVar5 + iVar21;
        pbVar4 = pbVar4 + iVar21;
        if (iVar23 < iVar17 + -1) {
          param_1 = *(int *)(param_7 + 0x38a0) + param_1;
        }
        iVar23 = iVar23 + 1;
        pbVar19 = pbVar19 + iVar2 + uVar26;
      } while (iVar23 < iVar17);
    }
  }
  else {
    iVar2 = *(int *)(param_7 + 0x389c);
    param_6 = param_6 - param_5;
    iVar18 = *(int *)(param_7 + 0x38fc);
    iVar21 = *(int *)(param_7 + 0x38d0);
    iVar23 = *(int *)(param_7 + 0x38d4);
    uVar26 = *(uint *)(param_7 + 0x3890);
    iVar13 = ((iVar17 >> 1) + (uint)(iVar17 < 0 && (param_5 & 1) != 0)) * *(int *)(param_7 + 0x3934)
    ;
    param_1 = iVar2 * iVar17 + *(int *)(param_7 + 0x38a4) + param_1;
    param_2 = iVar18 * iVar17 + *(int *)(param_7 + 0x38cc) + param_2;
    iVar17 = param_1;
    if (0 < param_6) {
      do {
        if (0 < (int)uVar26) {
          puVar6 = (undefined1 *)(iVar17 + -2);
          puVar7 = (undefined1 *)(param_2 + -1);
          uVar25 = (ulonglong)uVar26;
          do {
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 2;
            *puVar6 = *puVar7;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
        param_6 = param_6 + -1;
        param_2 = param_2 + iVar18;
        iVar17 = iVar17 + iVar2;
      } while (param_6 != 0);
    }
    fn_82CD52D8(iVar21 + iVar13 + param_3,iVar23 + iVar13 + param_4,param_1 + 1,param_1 + 3,
                  *(undefined4 *)(param_7 + 0x3934),*(undefined4 *)(param_7 + 0x389c),1,4);
  }
  return;
}

