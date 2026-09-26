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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))


void fn_82CB83B8(int param_1,uint *param_2,int param_3,byte *param_4,int param_5,int param_6,
                  int param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int *piVar11;
  uint *puVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  int iVar15;
  uint *puVar16;
  longlong lVar17;
  
  iVar5 = *(int *)(param_1 + 0x100);
  if (param_7 == 0) {
    lVar17 = 8;
    if (param_6 == 0) {
      puVar13 = (undefined1 *)((int)param_2 + 2);
      piVar11 = (int *)(param_3 + -4);
      do {
        pbVar14 = param_4 + param_5;
        iVar15 = (uint)pbVar14[1] + (uint)param_4[1] + 2;
        puVar13[-2] = *(undefined1 *)
                       (((uint)*param_4 + (uint)param_4[param_5] + iVar15 >> 2) + piVar11[1] + iVar5
                       );
        bVar1 = param_4[2];
        bVar2 = pbVar14[2];
        puVar13[-1] = *(undefined1 *)
                       (((uint)bVar2 + (uint)bVar1 + iVar15 >> 2) + piVar11[2] + iVar5);
        bVar3 = param_4[3];
        bVar4 = pbVar14[3];
        *puVar13 = *(undefined1 *)
                    (((uint)bVar4 + (uint)bVar3 + (uint)bVar2 + (uint)bVar1 + 2 >> 2) + piVar11[3] +
                    iVar5);
        bVar1 = param_4[4];
        bVar2 = pbVar14[4];
        puVar13[1] = *(undefined1 *)
                      (((uint)bVar2 + (uint)bVar1 + (uint)bVar4 + (uint)bVar3 + 2 >> 2) + piVar11[4]
                      + iVar5);
        bVar3 = param_4[5];
        bVar4 = pbVar14[5];
        puVar13[2] = *(undefined1 *)
                      (((uint)bVar4 + (uint)bVar3 + (uint)bVar2 + (uint)bVar1 + 2 >> 2) + piVar11[5]
                      + iVar5);
        bVar1 = param_4[6];
        bVar2 = pbVar14[6];
        puVar13[3] = *(undefined1 *)
                      (((uint)bVar2 + (uint)bVar1 + (uint)bVar4 + (uint)bVar3 + 2 >> 2) + piVar11[6]
                      + iVar5);
        bVar3 = param_4[7];
        bVar4 = pbVar14[7];
        puVar13[4] = *(undefined1 *)
                      (((uint)bVar4 + (uint)bVar3 + (uint)bVar2 + (uint)bVar1 + 2 >> 2) + piVar11[7]
                      + iVar5);
        piVar11 = piVar11 + 8;
        puVar13[5] = *(undefined1 *)
                      (((uint)pbVar14[8] + (uint)param_4[8] + (uint)bVar4 + (uint)bVar3 + 2 >> 2) +
                       *piVar11 + iVar5);
        puVar13 = puVar13 + param_5;
        lVar17 = lVar17 + -1;
        param_4 = pbVar14;
      } while (lVar17 != 0);
    }
    else {
      puVar12 = (uint *)(param_3 + 8);
      do {
        pbVar14 = param_4 + param_5;
        uVar10 = (longlong)((int)((uint)pbVar14[2] + (uint)param_4[2] + 1) >> 1) +
                 (ulonglong)*puVar12;
        uVar9 = (longlong)((int)((uint)pbVar14[3] + (uint)param_4[3] + 1) >> 1) +
                (ulonglong)puVar12[1];
        uVar8 = (uint)uVar9;
        uVar7 = (longlong)((int)((uint)pbVar14[1] + (uint)param_4[1] + 1) >> 1) +
                (ulonglong)puVar12[-1];
        uVar6 = (longlong)((int)((uint)*param_4 + (uint)param_4[param_5] + 1) >> 1) +
                (ulonglong)puVar12[-2];
        if (((uVar9 | uVar10 | uVar7 | uVar6) & 0xffffff00) == 0) {
          uVar6 = uVar6 & 0xffffff;
        }
        else {
          uVar6 = (ulonglong)*(byte *)(((uint)uVar6 & 0x3ff) + iVar5);
          uVar7 = (ulonglong)*(byte *)(((uint)uVar7 & 0x3ff) + iVar5);
          uVar10 = (ulonglong)*(byte *)(((uint)uVar10 & 0x3ff) + iVar5);
          uVar8 = (uint)*(byte *)((uVar8 & 0x3ff) + iVar5);
        }
        *param_2 = (uint)((((uVar6 << 8 | uVar7 & 0xffffffff) & 0xffffff) << 8 | uVar10 & 0xffffffff
                          ) << 8) | uVar8;
        uVar10 = (longlong)((int)((uint)pbVar14[6] + (uint)param_4[6] + 1) >> 1) +
                 (ulonglong)puVar12[4];
        uVar9 = (longlong)((int)((uint)pbVar14[7] + (uint)param_4[7] + 1) >> 1) +
                (ulonglong)puVar12[5];
        uVar8 = (uint)uVar9;
        uVar7 = (longlong)((int)((uint)pbVar14[5] + (uint)param_4[5] + 1) >> 1) +
                (ulonglong)puVar12[3];
        uVar6 = (longlong)((int)((uint)pbVar14[4] + (uint)param_4[4] + 1) >> 1) +
                (ulonglong)puVar12[2];
        if (((uVar9 | uVar10 | uVar7 | uVar6) & 0xffffff00) == 0) {
          uVar6 = uVar6 & 0xffffff;
        }
        else {
          uVar6 = (ulonglong)*(byte *)(((uint)uVar6 & 0x3ff) + iVar5);
          uVar7 = (ulonglong)*(byte *)(((uint)uVar7 & 0x3ff) + iVar5);
          uVar10 = (ulonglong)*(byte *)(((uint)uVar10 & 0x3ff) + iVar5);
          uVar8 = (uint)*(byte *)((uVar8 & 0x3ff) + iVar5);
        }
        puVar12 = puVar12 + 8;
        param_2[1] = (uint)((((uVar6 << 8 | uVar7 & 0xffffffff) & 0xffffff) << 8 |
                            uVar10 & 0xffffffff) << 8) | uVar8;
        param_2 = (uint *)((int)param_2 + param_5);
        lVar17 = lVar17 + -1;
        param_4 = pbVar14;
      } while (lVar17 != 0);
    }
  }
  else {
    puVar12 = (uint *)(param_3 + 8);
    pbVar14 = param_4 + 2;
    lVar17 = 8;
    if (param_6 == 0) {
      puVar16 = param_2 + 1;
      iVar15 = (int)param_2 + (-2 - (int)param_4);
      do {
        uVar10 = (longlong)((int)((uint)pbVar14[1] + (uint)*pbVar14 + 1) >> 1) + (ulonglong)*puVar12
        ;
        uVar9 = (longlong)((int)((uint)pbVar14[2] + (uint)pbVar14[1] + 1) >> 1) +
                (ulonglong)puVar12[1];
        uVar7 = (longlong)((int)((uint)pbVar14[-1] + (uint)*pbVar14 + 1) >> 1) +
                (ulonglong)puVar12[-1];
        uVar6 = (longlong)((int)((uint)pbVar14[-2] + (uint)pbVar14[-1] + 1) >> 1) +
                (ulonglong)puVar12[-2];
        uVar8 = (uint)uVar9;
        if (((uVar9 | uVar10 | uVar7 | uVar6) & 0xffffff00) == 0) {
          *(uint *)(pbVar14 + iVar15) =
               (uint)(((((uVar6 & 0xffffff) << 8 | uVar7 & 0xffffffff) & 0xffffff) << 8 |
                      uVar10 & 0xffffffff) << 8) | uVar8;
        }
        else {
          *(uint *)(pbVar14 + iVar15) =
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(((uint)uVar6 & 0x3ff) + iVar5),
                                          *(undefined1 *)(((uint)uVar7 & 0x3ff) + iVar5)),
                                 *(undefined1 *)(((uint)uVar10 & 0x3ff) + iVar5)),
                        *(undefined1 *)((uVar8 & 0x3ff) + iVar5));
        }
        uVar10 = (longlong)((int)((uint)pbVar14[5] + (uint)pbVar14[4] + 1) >> 1) +
                 (ulonglong)puVar12[4];
        uVar9 = (longlong)((int)((uint)pbVar14[6] + (uint)pbVar14[5] + 1) >> 1) +
                (ulonglong)puVar12[5];
        uVar7 = (longlong)((int)((uint)pbVar14[4] + (uint)pbVar14[3] + 1) >> 1) +
                (ulonglong)puVar12[3];
        uVar6 = (longlong)((int)((uint)pbVar14[2] + (uint)pbVar14[3] + 1) >> 1) +
                (ulonglong)puVar12[2];
        uVar8 = (uint)uVar9;
        if (((uVar9 | uVar10 | uVar7 | uVar6) & 0xffffff00) == 0) {
          *puVar16 = (uint)(((((uVar6 & 0xffffff) << 8 | uVar7 & 0xffffffff) & 0xffffff) << 8 |
                            uVar10 & 0xffffffff) << 8) | uVar8;
        }
        else {
          *puVar16 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(((uint)uVar6 & 0x3ff) + iVar5),
                                                *(undefined1 *)(((uint)uVar7 & 0x3ff) + iVar5)),
                                       *(undefined1 *)(((uint)uVar10 & 0x3ff) + iVar5)),
                              *(undefined1 *)((uVar8 & 0x3ff) + iVar5));
        }
        pbVar14 = pbVar14 + param_5;
        puVar16 = (uint *)((int)puVar16 + param_5);
        puVar12 = puVar12 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    else {
      do {
        uVar9 = (ulonglong)*pbVar14 + (ulonglong)*puVar12;
        uVar7 = (ulonglong)pbVar14[-1] + (ulonglong)puVar12[-1];
        uVar6 = (ulonglong)pbVar14[-2] + (ulonglong)puVar12[-2];
        uVar8 = (uint)((ulonglong)pbVar14[1] + (ulonglong)puVar12[1]);
        if ((((ulonglong)pbVar14[1] + (ulonglong)puVar12[1] | uVar9 | uVar7 | uVar6) & 0xffffff00)
            == 0) {
          *param_2 = (uint)(((((uVar6 & 0xffffff) << 8 | uVar7 & 0xffffffff) & 0xffffff) << 8 |
                            uVar9 & 0xffffffff) << 8) | uVar8;
        }
        else {
          *param_2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(((uint)uVar6 & 0x3ff) + iVar5),
                                                *(undefined1 *)(((uint)uVar7 & 0x3ff) + iVar5)),
                                       *(undefined1 *)(((uint)uVar9 & 0x3ff) + iVar5)),
                              *(undefined1 *)((uVar8 & 0x3ff) + iVar5));
        }
        uVar9 = (ulonglong)pbVar14[4] + (ulonglong)puVar12[4];
        uVar7 = (ulonglong)pbVar14[3] + (ulonglong)puVar12[3];
        uVar6 = (ulonglong)pbVar14[2] + (ulonglong)puVar12[2];
        uVar8 = (uint)((ulonglong)pbVar14[5] + (ulonglong)puVar12[5]);
        if ((((ulonglong)pbVar14[5] + (ulonglong)puVar12[5] | uVar9 | uVar7 | uVar6) & 0xffffff00)
            == 0) {
          param_2[1] = (uint)(((((uVar6 & 0xffffff) << 8 | uVar7 & 0xffffffff) & 0xffffff) << 8 |
                              uVar9 & 0xffffffff) << 8) | uVar8;
        }
        else {
          param_2[1] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(((uint)uVar6 & 0x3ff) + iVar5),
                                                  *(undefined1 *)(((uint)uVar7 & 0x3ff) + iVar5)),
                                         *(undefined1 *)(((uint)uVar9 & 0x3ff) + iVar5)),
                                *(undefined1 *)((uVar8 & 0x3ff) + iVar5));
        }
        pbVar14 = pbVar14 + param_5;
        param_2 = (uint *)((int)param_2 + param_5);
        puVar12 = puVar12 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
  }
  return;
}

