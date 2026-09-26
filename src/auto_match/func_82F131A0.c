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


void fn_82F131A0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,uint *param_4,
                  int param_5,int param_6,int param_7,int param_8)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  
  if (((uint)param_4 & 0x11) == 0) {
    if (param_8 == 0) {
      if (param_7 == 0) {
        lVar16 = 2;
        puVar13 = param_4;
        do {
          puVar8 = (uint *)((int)puVar13 - param_6);
          piVar5 = (int *)(param_3 + (int)((int)puVar13 + (-param_5 - (int)param_4)));
          lVar17 = 8;
          puVar9 = puVar13;
          do {
            puVar9 = (uint *)((int)puVar9 + param_6);
            uVar3 = *puVar9;
            puVar8 = (uint *)((int)puVar8 + param_6);
            uVar4 = *puVar8;
            uVar15 = (uint)*(byte *)(puVar9 + 1) | uVar3 << 8;
            uVar14 = (uint)*(byte *)((4 - param_6) + (int)puVar9) | uVar4 << 8;
            piVar5 = (int *)((int)piVar5 + param_5);
            *piVar5 = ((uVar15 & 0x3030303) + (uVar3 & 0x3030303) + (uVar14 & 0x3030303) +
                       (uVar4 & 0x3030303) + 0x2020202 >> 2 & 0x3030303) +
                      (uVar15 >> 2 & 0x3f3f3f3f) + (uVar3 >> 2 & 0x3f3f3f3f) +
                      (uVar14 >> 2 & 0x3f3f3f3f) + (uVar4 >> 2 & 0x3f3f3f3f);
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          lVar16 = lVar16 + -1;
          puVar13 = puVar13 + 1;
        } while (lVar16 != 0);
      }
      else {
        lVar16 = 2;
        puVar13 = param_4;
        do {
          piVar5 = (int *)(param_3 + (int)((int)puVar13 + (-param_5 - (int)param_4)));
          lVar17 = 8;
          puVar8 = puVar13;
          do {
            uVar3 = *puVar8;
            puVar9 = (uint *)((int)puVar8 + param_6);
            puVar8 = (uint *)((int)puVar8 + param_6);
            piVar5 = (int *)((int)piVar5 + param_5);
            *piVar5 = ((*puVar9 | uVar3) & 0x1010101) + (*puVar9 >> 1 & 0x7f7f7f7f) +
                      (uVar3 >> 1 & 0x7f7f7f7f);
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          lVar16 = lVar16 + -1;
          puVar13 = puVar13 + 1;
        } while (lVar16 != 0);
      }
    }
    else if (param_7 == 0) {
      lVar16 = 2;
      puVar13 = param_4;
      do {
        piVar5 = (int *)(param_3 + (-param_5 - (int)param_4) + (int)puVar13);
        lVar17 = 8;
        puVar8 = puVar13;
        do {
          uVar3 = *puVar8;
          puVar9 = puVar8 + 1;
          puVar8 = (uint *)((int)puVar8 + param_6);
          uVar4 = (uint)*(byte *)puVar9 | uVar3 << 8;
          piVar5 = (int *)((int)piVar5 + param_5);
          *piVar5 = ((uVar4 | uVar3) & 0x1010101) + (uVar4 >> 1 & 0x7f7f7f7f) +
                    (uVar3 >> 1 & 0x7f7f7f7f);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar16 = lVar16 + -1;
        puVar13 = puVar13 + 1;
      } while (lVar16 != 0);
    }
    else {
      puVar7 = (undefined8 *)(param_3 + -param_5);
      puVar10 = (undefined8 *)((int)param_4 - param_6);
      lVar16 = 8;
      do {
        puVar10 = (undefined8 *)((int)puVar10 + param_6);
        puVar7 = (undefined8 *)((int)puVar7 + param_5);
        *puVar7 = *puVar10;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
  }
  else if (param_8 == 0) {
    if (param_7 == 0) {
      param_3 = param_3 + 2;
      lVar16 = 8;
      do {
        puVar13 = (uint *)((int)param_4 + param_6);
        lVar6 = (ulonglong)*(byte *)((int)puVar13 + 1) + (ulonglong)*(byte *)((int)param_4 + 1) + 2;
        param_3[-2] = (char)((ulonglong)*(byte *)param_4 +
                             (ulonglong)*(byte *)((int)param_4 + param_6) + lVar6 >> 2);
        lVar17 = (ulonglong)*(byte *)((int)puVar13 + 2) + (ulonglong)*(byte *)((int)param_4 + 2);
        param_3[-1] = (char)((ulonglong)(lVar17 + lVar6) >> 2);
        lVar6 = (ulonglong)(byte)*puVar13 + (ulonglong)(byte)*param_4;
        *param_3 = (char)((ulonglong)(lVar6 + lVar17 + 2) >> 2);
        bVar1 = *(byte *)(param_4 + 1);
        bVar2 = *(byte *)(puVar13 + 1);
        param_3[1] = (char)((ulonglong)bVar2 + (ulonglong)bVar1 + lVar6 + 2 >> 2);
        lVar17 = (ulonglong)*(byte *)((int)puVar13 + 5) + (ulonglong)*(byte *)((int)param_4 + 5);
        param_3[2] = (char)(lVar17 + (ulonglong)bVar2 + (ulonglong)bVar1 + 2 >> 2);
        lVar6 = (ulonglong)*(byte *)((int)puVar13 + 6) + (ulonglong)*(byte *)((int)param_4 + 6);
        param_3[3] = (char)((ulonglong)(lVar6 + lVar17 + 2) >> 2);
        lVar17 = (ulonglong)*(byte *)((int)puVar13 + 7) + (ulonglong)*(byte *)((int)param_4 + 7);
        param_3[4] = (char)((ulonglong)(lVar17 + lVar6 + 2) >> 2);
        param_3[5] = (char)((ulonglong)*(byte *)(puVar13 + 2) + (ulonglong)*(byte *)(param_4 + 2) +
                            lVar17 + 2 >> 2);
        param_3 = param_3 + param_5;
        lVar16 = lVar16 + -1;
        param_4 = puVar13;
      } while (lVar16 != 0);
    }
    else {
      lVar16 = 2;
      do {
        pbVar12 = (byte *)((int)param_4 + param_6);
        *param_3 = (char)((int)((uint)*(byte *)param_4 + (uint)*(byte *)((int)param_4 + param_6) + 1
                               ) >> 1);
        param_3[1] = (char)((int)((uint)pbVar12[1] + (uint)*(byte *)((int)param_4 + 1) + 1) >> 1);
        param_3[2] = (char)((int)((uint)pbVar12[2] + (uint)*(byte *)((int)param_4 + 2) + 1) >> 1);
        param_3[3] = (char)((int)((uint)pbVar12[3] + (uint)(byte)*param_4 + 1) >> 1);
        param_3[4] = (char)((int)((uint)pbVar12[4] + (uint)*(byte *)(param_4 + 1) + 1) >> 1);
        param_3[5] = (char)((int)((uint)pbVar12[5] + (uint)*(byte *)((int)param_4 + 5) + 1) >> 1);
        param_3[6] = (char)((int)((uint)pbVar12[6] + (uint)*(byte *)((int)param_4 + 6) + 1) >> 1);
        param_3[7] = (char)((int)((uint)pbVar12[7] + (uint)*(byte *)((int)param_4 + 7) + 1) >> 1);
        pbVar11 = pbVar12 + param_6;
        param_3 = param_3 + param_5;
        *param_3 = (char)((int)((uint)*pbVar12 + (uint)*pbVar11 + 1) >> 1);
        param_3[1] = (char)((int)((uint)pbVar11[1] + (uint)pbVar12[1] + 1) >> 1);
        param_3[2] = (char)((int)((uint)pbVar11[2] + (uint)pbVar12[2] + 1) >> 1);
        param_3[3] = (char)((int)((uint)pbVar11[3] + (uint)pbVar12[3] + 1) >> 1);
        param_3[4] = (char)((int)((uint)pbVar11[4] + (uint)pbVar12[4] + 1) >> 1);
        param_3[5] = (char)((int)((uint)pbVar11[5] + (uint)pbVar12[5] + 1) >> 1);
        param_3[6] = (char)((int)((uint)pbVar11[6] + (uint)pbVar12[6] + 1) >> 1);
        param_3[7] = (char)((int)((uint)pbVar11[7] + (uint)pbVar12[7] + 1) >> 1);
        pbVar12 = pbVar11 + param_6;
        param_3 = param_3 + param_5;
        *param_3 = (char)((int)((uint)*pbVar11 + (uint)*pbVar12 + 1) >> 1);
        param_3[1] = (char)((int)((uint)pbVar12[1] + (uint)pbVar11[1] + 1) >> 1);
        param_3[2] = (char)((int)((uint)pbVar12[2] + (uint)pbVar11[2] + 1) >> 1);
        param_3[3] = (char)((int)((uint)pbVar12[3] + (uint)pbVar11[3] + 1) >> 1);
        param_3[4] = (char)((int)((uint)pbVar12[4] + (uint)pbVar11[4] + 1) >> 1);
        param_3[5] = (char)((int)((uint)pbVar12[5] + (uint)pbVar11[5] + 1) >> 1);
        param_3[6] = (char)((int)((uint)pbVar12[6] + (uint)pbVar11[6] + 1) >> 1);
        param_3[7] = (char)((int)((uint)pbVar12[7] + (uint)pbVar11[7] + 1) >> 1);
        param_4 = (uint *)(pbVar12 + param_6);
        param_3 = param_3 + param_5;
        *param_3 = (char)((int)((uint)*pbVar12 + (uint)*(byte *)param_4 + 1) >> 1);
        param_3[1] = (char)((int)((uint)*(byte *)((int)param_4 + 1) + (uint)pbVar12[1] + 1) >> 1);
        param_3[2] = (char)((int)((uint)*(byte *)((int)param_4 + 2) + (uint)pbVar12[2] + 1) >> 1);
        param_3[3] = (char)((int)((uint)(byte)*param_4 + (uint)pbVar12[3] + 1) >> 1);
        param_3[4] = (char)((int)((uint)*(byte *)(param_4 + 1) + (uint)pbVar12[4] + 1) >> 1);
        param_3[5] = (char)((int)((uint)*(byte *)((int)param_4 + 5) + (uint)pbVar12[5] + 1) >> 1);
        param_3[6] = (char)((int)((uint)*(byte *)((int)param_4 + 6) + (uint)pbVar12[6] + 1) >> 1);
        param_3[7] = (char)((int)((uint)*(byte *)((int)param_4 + 7) + (uint)pbVar12[7] + 1) >> 1);
        param_3 = param_3 + param_5;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
  }
  else if (param_7 == 0) {
    lVar16 = 2;
    do {
      *param_3 = (char)((int)((uint)*(byte *)param_4 + (uint)*(byte *)((int)param_4 + 1) + 1) >> 1);
      param_3[1] = (char)((int)((uint)*(byte *)((int)param_4 + 2) +
                                (uint)*(byte *)((int)param_4 + 1) + 1) >> 1);
      param_3[2] = (char)((int)((uint)(byte)*param_4 + (uint)*(byte *)((int)param_4 + 2) + 1) >> 1);
      param_3[3] = (char)((int)((uint)(byte)*param_4 + (uint)*(byte *)(param_4 + 1) + 1) >> 1);
      param_3[4] = (char)((int)((uint)*(byte *)((int)param_4 + 5) + (uint)*(byte *)(param_4 + 1) + 1
                               ) >> 1);
      param_3[5] = (char)((int)((uint)*(byte *)((int)param_4 + 5) +
                                (uint)*(byte *)((int)param_4 + 6) + 1) >> 1);
      param_3[6] = (char)((int)((uint)*(byte *)((int)param_4 + 7) +
                                (uint)*(byte *)((int)param_4 + 6) + 1) >> 1);
      param_3[7] = (char)((int)((uint)*(byte *)(param_4 + 2) + (uint)*(byte *)((int)param_4 + 7) + 1
                               ) >> 1);
      param_3 = param_3 + param_5;
      *param_3 = (char)((int)((uint)*(byte *)((int)param_4 + param_6) +
                              (uint)*(byte *)((int)param_4 + param_6 + 1) + 1) >> 1);
      param_3[1] = (char)((int)((uint)*(byte *)((int)param_4 + param_6 + 2) +
                                (uint)*(byte *)((int)param_4 + param_6 + 1) + 1) >> 1);
      param_3[2] = (char)((int)((uint)*(byte *)((int)param_4 + param_6 + 3) +
                                (uint)*(byte *)((int)param_4 + param_6 + 2) + 1) >> 1);
      param_3[3] = (char)((int)((uint)*(byte *)((int)param_4 + param_6 + 3) +
                                (uint)*(byte *)((int)param_4 + param_6 + 4) + 1) >> 1);
      param_3[4] = (char)((int)((uint)*(byte *)((int)param_4 + param_6 + 5) +
                                (uint)*(byte *)((int)param_4 + param_6 + 4) + 1) >> 1);
      param_3[5] = (char)((int)((uint)*(byte *)((int)param_4 + param_6 + 5) +
                                (uint)*(byte *)((int)param_4 + param_6 + 6) + 1) >> 1);
      param_3[6] = (char)((int)((uint)*(byte *)((int)param_4 + param_6 + 7) +
                                (uint)*(byte *)((int)param_4 + param_6 + 6) + 1) >> 1);
      pbVar11 = (byte *)((int)param_4 + param_6 * 2);
      param_3[7] = (char)((int)((uint)*(byte *)((int)param_4 + param_6 + 8) +
                                (uint)*(byte *)((int)param_4 + param_6 + 7) + 1) >> 1);
      param_3 = param_3 + param_5;
      *param_3 = (char)((int)((uint)*pbVar11 + (uint)pbVar11[1] + 1) >> 1);
      param_3[1] = (char)((int)((uint)pbVar11[2] + (uint)pbVar11[1] + 1) >> 1);
      param_3[2] = (char)((int)((uint)pbVar11[3] + (uint)pbVar11[2] + 1) >> 1);
      param_3[3] = (char)((int)((uint)pbVar11[3] + (uint)pbVar11[4] + 1) >> 1);
      param_3[4] = (char)((int)((uint)pbVar11[5] + (uint)pbVar11[4] + 1) >> 1);
      param_3[5] = (char)((int)((uint)pbVar11[5] + (uint)pbVar11[6] + 1) >> 1);
      param_3[6] = (char)((int)((uint)pbVar11[7] + (uint)pbVar11[6] + 1) >> 1);
      pbVar12 = pbVar11 + param_6;
      param_4 = (uint *)(pbVar12 + param_6);
      param_3[7] = (char)((int)((uint)pbVar11[8] + (uint)pbVar11[7] + 1) >> 1);
      param_3 = param_3 + param_5;
      *param_3 = (char)((int)((uint)*pbVar12 + (uint)pbVar12[1] + 1) >> 1);
      param_3[1] = (char)((int)((uint)pbVar12[2] + (uint)pbVar12[1] + 1) >> 1);
      param_3[2] = (char)((int)((uint)pbVar12[3] + (uint)pbVar12[2] + 1) >> 1);
      param_3[3] = (char)((int)((uint)pbVar12[3] + (uint)pbVar12[4] + 1) >> 1);
      param_3[4] = (char)((int)((uint)pbVar12[5] + (uint)pbVar12[4] + 1) >> 1);
      param_3[5] = (char)((int)((uint)pbVar12[5] + (uint)pbVar12[6] + 1) >> 1);
      param_3[6] = (char)((int)((uint)pbVar12[7] + (uint)pbVar12[6] + 1) >> 1);
      param_3[7] = (char)((int)((uint)pbVar12[8] + (uint)pbVar12[7] + 1) >> 1);
      param_3 = param_3 + param_5;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  else {
    puVar7 = (undefined8 *)(param_3 + -param_5);
    puVar10 = (undefined8 *)((int)param_4 - param_6);
    lVar16 = 8;
    do {
      puVar10 = (undefined8 *)((int)puVar10 + param_6);
      puVar7 = (undefined8 *)((int)puVar7 + param_5);
      *puVar7 = *puVar10;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}

