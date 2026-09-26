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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define TBLr 0
extern unsigned int *auStack_c8;
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEA120();
extern int fn_82CEA160();
extern int fn_82CEA280();
extern int fn_82CEA4B8();
extern unsigned int iStack_114;
extern unsigned int iStack_118;
extern unsigned int iStack_d4;
extern unsigned int iStack_e4;
extern unsigned int iStack_f0;
extern unsigned int iStack_fc;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f8;


void fn_82DC5D38(int param_1,char param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar5;
  undefined2 uVar16;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  longlong lVar17;
  int *piVar18;
  undefined8 *puVar19;
  int iVar21;
  ulonglong uVar20;
  ulonglong *puVar22;
  uint *puVar23;
  undefined4 *puVar24;
  undefined8 *puVar25;
  undefined4 *puVar26;
  uint *puVar27;
  undefined4 *puVar28;
  short *psVar29;
  longlong lVar30;
  undefined8 *puVar31;
  short sVar32;
  int *piVar33;
  undefined8 *puVar34;
  uint uVar35;
  uint uVar36;
  uint *puVar37;
  longlong lVar38;
  uint uVar39;
  int iVar40;
  char cStack0000001f;
  undefined4 *puStack0000002c;
  undefined4 *puStack00000034;
  undefined4 *puStack_11c;
  int iStack_118;
  int iStack_114;
  undefined8 *puStack_110;
  int iStack_fc;
  undefined8 uStack_f8;
  int iStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  int iStack_e4;
  uint uStack_e0;
  uint uStack_d8;
  int iStack_d4;
  uint uStack_d0;
  undefined1 auStack_c8 [28];
  uint uStack_ac;
  uint uStack_a8;
  
  cStack0000001f = param_2;
  puStack0000002c = param_4;
  puStack00000034 = param_5;
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar26 = *(undefined4 **)(iVar6 + 4);
  if (puVar26 < *(undefined4 **)(iVar6 + 0xc)) {
    *puVar26 = "TtBuildJacTask";
    uVar5 = TBLr;
    puVar26[1] = (int)uVar5;
    *(undefined4 **)(iVar6 + 4) = puVar26 + 3;
  }
  uVar36 = *(uint *)(param_1 + 0x4c);
  puVar23 = *(uint **)(param_1 + 0x48);
  uStack_d8 = 0;
  iStack_f0 = uVar36 * 4;
  iStack_d4 = 0;
  uStack_d0 = 0x80000000;
  puVar27 = puVar23 + uVar36;
  iVar6 = *(int *)(param_1 + 0x1c);
  uStack_ec = uVar36;
  iVar7 = fn_82CE5410();
  if ((int)(uStack_d0 & 0x3fffffff) < iVar6) {
    iVar21 = (uStack_d0 & 0x3fffffff) << 1;
    if (iVar21 <= iVar6) {
      iVar21 = iVar6;
    }
    fn_82CE6310(*(undefined4 *)(iVar7 + 0xc),&uStack_d8,iVar21,8);
  }
  uStack_e8 = 0;
  iStack_e4 = 0;
  uStack_e0 = 0x80000000;
  iVar6 = *(int *)(param_1 + 0x1c);
  iVar7 = fn_82CE5410();
  if ((int)(uStack_e0 & 0x3fffffff) < iVar6) {
    iVar21 = (uStack_e0 & 0x3fffffff) << 1;
    if (iVar21 <= iVar6) {
      iVar21 = iVar6;
    }
    fn_82CE6310(*(undefined4 *)(iVar7 + 0xc),&uStack_e8,iVar21,8);
  }
  uVar35 = *(uint *)(param_1 + 0x1c);
  uStack_ac = 0;
  piVar8 = (int *)fn_82CE5410();
  uStack_a8 = uVar35 | 0x80000000;
  bVar4 = true;
  iVar6 = *piVar8;
  uVar20 = 0x40;
  *piVar8 = (uVar35 * 0x10 + 0x7f & 0xffffff80) + iVar6;
  if (0x40 < (int)uVar36) {
    do {
      uVar20 = (uVar20 & 0x7fffffff) << 1;
    } while ((int)uVar20 < (int)uVar36);
  }
  iVar7 = fn_82CE5410();
  lVar30 = (uVar20 & 0xfffffff) << 4;
  uVar5 = (**(code **)(**(int **)(iVar7 + 0xc) + 4))(*(int **)(iVar7 + 0xc),lVar30);
  fn_82CEA120(auStack_c8,uVar5,lVar30);
  lVar38 = 0;
  if (0 < (int)uVar36) {
    puVar37 = puVar23 + -1;
    do {
      puVar37 = puVar37 + 1;
      uVar35 = *puVar37;
      iVar7 = fn_82CE5410();
      fn_82CEA160(auStack_c8,*(undefined4 *)(iVar7 + 0x10),uVar35,lVar38);
      lVar38 = lVar38 + 1;
    } while ((int)lVar38 < (int)uVar36);
  }
  iVar7 = 0x80;
  sVar32 = 0;
  if (puVar23 < puVar27) {
    puVar37 = puVar23 + 4;
    lVar38 = (ulonglong)((uint)((int)puVar27 + (-1 - (int)puVar23)) >> 2) + 1;
    do {
      uVar35 = puVar37[-4];
      if (puVar37 < puVar27) {
        uVar20 = (ulonglong)*(uint *)(puVar37[-2] + 0xac);
        lVar17 = (ulonglong)*(ushort *)(puVar37[-2] + 0xb0) * 0x30;
        do {
          dataCacheBlockTouch(uVar20);
          dataCacheBlockTouch(uVar20 + 0x80);
          lVar17 = lVar17 + -0x100;
          uVar20 = uVar20 + 0x100;
        } while (0 < lVar17);
        dataCacheBlockTouch((ulonglong)*puVar37 + 0xa4);
      }
      if (iVar7 != *(int *)(uVar35 + 0xa4)) {
        *(int *)(uVar35 + 0xa4) = iVar7;
      }
      uVar39 = *(uint *)(uVar35 + 0xac);
      iVar7 = iVar7 + 0x80;
      uVar35 = (uint)*(ushort *)(uVar35 + 0xb0) * 0x30 + uVar39;
      for (; uVar39 < uVar35; uVar39 = uVar39 + 0x30) {
        uStack_f8 = CONCAT44(uVar39,(undefined4)uStack_f8);
        lVar17 = -(ulonglong)*(byte *)(uVar39 + 0x1a);
        *(short *)((int)&uStack_f8 + (uint)*(byte *)(uVar39 + 0x1a) * 2 + 4) = sVar32;
        uVar16 = fn_82CEA280(auStack_c8,
                              *(undefined4 *)((int)((lVar17 + 2U & 0xffffffff) << 2) + uVar39),
                              0xffff);
        cVar1 = *(char *)(uVar39 + 0x1b);
        bVar2 = *(byte *)(uVar39 + 0x13);
        *(undefined2 *)((int)&uStack_f8 + (int)((lVar17 + 1U & 0xffffffff) << 1) + 4) = uVar16;
        bVar4 = (bool)(cVar1 != '\0' & bVar4);
        if (bVar2 < 4) {
          puVar22 = (ulonglong *)(iStack_d4 * 8 + uStack_d8);
          if (puVar22 != (ulonglong *)0x0) {
            *puVar22 = uStack_f8;
          }
          iStack_d4 = iStack_d4 + 1;
        }
        else {
          puVar22 = (ulonglong *)(iStack_e4 * 8 + uStack_e8);
          if (puVar22 != (ulonglong *)0x0) {
            *puVar22 = uStack_f8;
          }
          iStack_e4 = iStack_e4 + 1;
        }
      }
      lVar38 = lVar38 + -1;
      puVar37 = puVar37 + 1;
      sVar32 = sVar32 + 1;
    } while (lVar38 != 0);
  }
  iVar7 = fn_82CE5410();
  fn_82CEA4B8(auStack_c8,*(undefined4 *)(iVar7 + 0x10));
  fn_82BA02A8(auStack_c8);
  iVar7 = fn_82CE5410();
  (**(code **)(**(int **)(iVar7 + 0xc) + 8))(*(int **)(iVar7 + 0xc),uVar5,lVar30);
  iVar7 = KeTlsGetValue(lbl_8323B4A0);
  puVar26 = *(undefined4 **)(iVar7 + 4);
  if (puVar26 < *(undefined4 **)(iVar7 + 0xc)) {
    uStack_f8 = (ulonglong)(int)uVar36;
    puVar26[1] = (float)(longlong)uStack_f8;
    *puVar26 = "MiNumEntities";
    *(undefined4 **)(iVar7 + 4) = puVar26 + 2;
  }
  iVar7 = KeTlsGetValue(lbl_8323B4A0);
  puVar26 = *(undefined4 **)(iVar7 + 4);
  if (puVar26 < *(undefined4 **)(iVar7 + 0xc)) {
    *puVar26 = "MiNumConstraints";
    uStack_f8 = (ulonglong)*(int *)(param_1 + 0x1c);
    puVar26[1] = (float)(longlong)uStack_f8;
    *(undefined4 **)(iVar7 + 4) = puVar26 + 2;
  }
  iVar7 = KeTlsGetValue(lbl_8323B4A0);
  puVar26 = *(undefined4 **)(iVar7 + 4);
  if (puVar26 < *(undefined4 **)(iVar7 + 0xc)) {
    *puVar26 = "MiNumJacobians";
    uStack_f8 = (ulonglong)*(int *)(param_1 + 0x10);
    puVar26[1] = (float)(longlong)uStack_f8;
    *(undefined4 **)(iVar7 + 4) = puVar26 + 2;
  }
  puStack_11c = (undefined4 *)0x0;
  iStack_118 = -1;
  psVar29 = (short *)(puStack00000034 + 1);
  iStack_114 = -1;
  puVar14 = (undefined4 *)0x0;
  *(bool *)(param_3 + 0x59) = !bVar4;
  puVar13 = (undefined4 *)0x0;
  puVar26 = (undefined4 *)0x0;
  cVar1 = '\x01' - bVar4;
  iVar21 = 0;
  *(char *)(param_3 + 0x58) = cVar1;
  iVar7 = *(int *)(param_3 + 0x3c);
  uVar36 = *(uint *)(param_3 + 0x40);
  *psVar29 = 0;
  bVar4 = cVar1 == '\0';
  piVar9 = (int *)fn_82CE5410();
  piVar8 = (int *)*piVar9;
  *piVar9 = (int)(piVar8 + 0x120);
  iVar10 = fn_82CE5410();
  iVar10 = (**(code **)(**(int **)(iVar10 + 0xc) + 4))(*(int **)(iVar10 + 0xc),iStack_f0);
  iStack_fc = 0;
  do {
    if (iStack_fc == 0) {
      puVar23 = &uStack_d8;
      puVar14 = (undefined4 *)0x0;
    }
    else {
      puVar23 = &uStack_e8;
    }
    uVar35 = puVar23[1];
    while (cVar1 = cStack0000001f, uVar35 != 0) {
      uVar20 = (ulonglong)uStack_ec;
      if ((0 < (int)uStack_ec) && (puVar24 = (undefined4 *)(iVar10 + -4), uStack_ec != 0)) {
        do {
          puVar24 = puVar24 + 1;
          *puVar24 = 0;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      iVar15 = 1;
      iStack_118 = iStack_118 + 1;
      puStack_110 = (undefined8 *)*puVar23;
      puVar31 = puStack_110 + puVar23[1];
      puVar19 = puStack_110;
      iVar40 = iVar7;
      uVar35 = uVar36;
      puVar24 = puStack_11c;
      puVar28 = puVar13;
      for (puVar34 = puStack_110; puStack_11c = puVar24, puVar11 = puVar14, puVar34 < puVar31;
          puVar34 = puVar34 + 1) {
        uStack_f8 = uStack_f8 & 0xffffffff;
        if (*(ushort *)((int)puVar34 + 4) == 0xffff) {
          piVar9 = (int *)&uStack_f8;
        }
        else {
          piVar9 = (int *)((uint)*(ushort *)((int)puVar34 + 4) * 4 + iVar10);
        }
        if (*(ushort *)((int)puVar34 + 6) == 0xffff) {
          piVar33 = (int *)&uStack_f8;
        }
        else {
          piVar33 = (int *)((uint)*(ushort *)((int)puVar34 + 6) * 4 + iVar10);
        }
        if (iVar21 == 0x90) {
          iVar7 = fn_82CE5410();
          puVar11 = (undefined4 *)
                    (**(code **)(**(int **)(iVar7 + 0x10) + 4))(*(int **)(iVar7 + 0x10),0x1000);
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = (undefined4 *)0x0;
          }
          else {
            puVar11[5] = 0;
            puVar11[4] = 0;
            *puVar11 = 0;
          }
          if (puVar14 == (undefined4 *)0x0) {
            *puStack0000002c = puVar11;
            puStack0000002c[1] = 0;
          }
          else {
            *puVar14 = puVar11;
            puVar14[4] = iVar40;
          }
          puStack0000002c[1] = puStack0000002c[1] + 1;
          puVar11[5] = 0x90;
          lVar30 = 0x90;
          puVar11[1] = param_3;
          puVar11[2] = *(undefined4 *)(param_3 + 0x30);
          puVar11[3] = iVar40;
          iVar7 = iVar40;
          uVar36 = uVar35;
          piVar18 = piVar8;
          puVar13 = puVar11;
          do {
            puVar14 = (undefined4 *)*piVar18;
            if ((*(byte *)((int)puVar14 + 0x12) & 0xb) != 0) {
              iVar21 = uStack_ac * 0x10;
              uStack_ac = uStack_ac + 1;
              *(undefined8 *)(iVar21 + iVar6) = *(undefined8 *)piVar18;
              *(undefined4 **)(iVar21 + iVar6 + 8) = puVar13 + 6;
            }
            puVar13[6] = puVar14[3];
            *(undefined2 *)(puVar13 + 0xb) = *(undefined2 *)(puVar14 + 4);
            puVar13[7] = *puVar14;
            puVar13[8] = puVar14[7];
            *(undefined2 *)((int)puVar13 + 0x2e) = *(undefined2 *)(puVar14 + 8);
            sVar32 = *(short *)((int)piVar18 + 6);
            *(short *)(puVar13 + 0xc) = *(short *)(piVar18 + 1) + 1;
            piVar18 = piVar18 + 2;
            *(short *)((int)puVar13 + 0x32) = sVar32 + 1;
            puVar13[9] = puVar14[1] + 0xf0;
            puVar13[10] = puVar14[2] + 0xf0;
            uVar36 = (uint)*(ushort *)(puVar14 + 6) * 4 + uVar36;
            iVar7 = (uint)*(ushort *)(puVar14 + 5) + iVar7;
            lVar30 = lVar30 + -1;
            puVar13 = puVar13 + 7;
          } while (lVar30 != 0);
          iVar7 = iVar7 + 0x10;
          puVar11[4] = iVar7;
          iVar21 = 0;
          uVar36 = uVar36 + 0xf & 0xfffffff0;
          puVar13 = puVar28;
          if (bVar4) {
            iVar12 = fn_82CE5410();
            puVar13 = (undefined4 *)
                      (**(code **)(**(int **)(iVar12 + 0x10) + 4))(*(int **)(iVar12 + 0x10),0x30);
            if (puVar13 == (undefined4 *)0x0) {
              puVar13 = (undefined4 *)0x0;
            }
            else {
              *puVar13 = 0;
              *(undefined1 *)(puVar13 + 7) = 0;
              *(undefined2 *)((int)puVar13 + 0x1e) = 0;
              puVar13[8] = 0;
            }
            if (puVar28 != (undefined4 *)0x0) {
              *puVar28 = puVar13;
            }
            puVar14 = puVar26;
            if (iStack_118 != iStack_114) {
              if (iStack_118 == 0) {
                *puStack00000034 = puVar13;
              }
              puVar14 = puVar24;
              puStack_11c = puVar13;
              iStack_114 = iStack_118;
              if (puVar28 != (undefined4 *)0x0) {
                sVar32 = *psVar29;
                for (; (puVar26 != (undefined4 *)0x0 && (puVar26 != puVar24));
                    puVar26 = (undefined4 *)*puVar26) {
                  *(short *)((int)puVar26 + 0x1e) = sVar32;
                  puVar26[8] = puVar24;
                }
                psVar29 = (short *)((int)puVar28 + 0x1e);
                *(undefined1 *)(puVar28 + 7) = 1;
              }
            }
            puVar26 = puVar14;
            *psVar29 = *psVar29 + 1;
            puVar13[1] = param_3;
            uVar3 = *(undefined4 *)(param_3 + 0x30);
            puVar13[3] = iVar40;
            puVar13[4] = uVar35;
            puVar13[5] = iVar7 - iVar40;
            puVar13[6] = uVar36 - uVar35;
            puVar13[2] = uVar3;
          }
          iVar15 = (uint)bVar4 + iVar15;
          iVar40 = iVar7;
          uVar35 = uVar36;
          puVar19 = puStack_110;
          puVar28 = puVar13;
        }
        if ((cVar1 != '\0') && (1 < iVar15)) {
          if (puVar34 < puVar31) {
            puVar25 = puVar34 + -1;
            lVar30 = (ulonglong)((uint)((int)puVar31 + (-1 - (int)puVar34)) >> 3) + 1;
            puStack_110 = puVar19;
            do {
              puVar25 = puVar25 + 1;
              *puStack_110 = *puVar25;
              puStack_110 = puStack_110 + 1;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
          }
          break;
        }
        if (((*piVar9 == 0) || (*piVar9 == iVar15)) && ((*piVar33 == 0 || (*piVar33 == iVar15)))) {
          if (piVar8 + iVar21 * 2 != (int *)0x0) {
            *(undefined8 *)(piVar8 + iVar21 * 2) = *puVar34;
          }
          *piVar9 = iVar15;
          iVar21 = iVar21 + 1;
          *piVar33 = iVar15;
        }
        else {
          *puVar19 = *puVar34;
          puStack_110 = puVar19 + 1;
          puVar19 = puStack_110;
        }
        puVar24 = puStack_11c;
        puVar14 = puVar11;
      }
      iVar7 = iVar40;
      uVar36 = uVar35;
      puVar13 = puVar28;
      puVar14 = puVar11;
      if (iVar21 != 0) {
        iVar7 = fn_82CE5410();
        puVar14 = (undefined4 *)
                  (**(code **)(**(int **)(iVar7 + 0x10) + 4))(*(int **)(iVar7 + 0x10),0x1000);
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = (undefined4 *)0x0;
        }
        else {
          puVar14[5] = 0;
          puVar14[4] = 0;
          *puVar14 = 0;
        }
        if (puVar11 == (undefined4 *)0x0) {
          *puStack0000002c = puVar14;
          puStack0000002c[1] = 0;
        }
        else {
          *puVar11 = puVar14;
          puVar11[4] = iVar40;
        }
        puStack0000002c[1] = puStack0000002c[1] + 1;
        puVar14[1] = param_3;
        puVar14[5] = iVar21;
        uVar3 = *(undefined4 *)(param_3 + 0x30);
        puVar14[3] = iVar40;
        puVar14[2] = uVar3;
        iVar7 = iVar40;
        piVar9 = piVar8;
        puVar24 = puVar14;
        if (0 < iVar21) {
          do {
            puVar11 = (undefined4 *)*piVar9;
            if ((*(byte *)((int)puVar11 + 0x12) & 0xb) != 0) {
              iVar15 = uStack_ac * 0x10;
              uStack_ac = uStack_ac + 1;
              *(undefined8 *)(iVar15 + iVar6) = *(undefined8 *)piVar9;
              *(undefined4 **)(iVar15 + iVar6 + 8) = puVar24 + 6;
            }
            puVar24[6] = puVar11[3];
            *(undefined2 *)(puVar24 + 0xb) = *(undefined2 *)(puVar11 + 4);
            puVar24[7] = *puVar11;
            puVar24[8] = puVar11[7];
            *(undefined2 *)((int)puVar24 + 0x2e) = *(undefined2 *)(puVar11 + 8);
            sVar32 = *(short *)(piVar9 + 1);
            *(short *)((int)puVar24 + 0x32) = *(short *)((int)piVar9 + 6) + 1;
            *(short *)(puVar24 + 0xc) = sVar32 + 1;
            puVar24[9] = puVar11[1] + 0xf0;
            puVar24[10] = puVar11[2] + 0xf0;
            iVar7 = (uint)*(ushort *)(puVar11 + 5) + iVar7;
            uVar36 = (uint)*(ushort *)(puVar11 + 6) * 4 + uVar36;
            iVar21 = iVar21 + -1;
            piVar9 = piVar9 + 2;
            puVar24 = puVar24 + 7;
          } while (iVar21 != 0);
        }
        iVar7 = iVar7 + 0x10;
        puVar14[4] = iVar7;
        iVar21 = 0;
        uVar36 = uVar36 + 0xf & 0xfffffff0;
        if (bVar4) {
          iVar15 = fn_82CE5410();
          puVar13 = (undefined4 *)
                    (**(code **)(**(int **)(iVar15 + 0x10) + 4))(*(int **)(iVar15 + 0x10),0x30);
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = (undefined4 *)0x0;
          }
          else {
            *puVar13 = 0;
            *(undefined1 *)(puVar13 + 7) = 0;
            *(undefined2 *)((int)puVar13 + 0x1e) = 0;
            puVar13[8] = 0;
          }
          if (puVar28 != (undefined4 *)0x0) {
            *puVar28 = puVar13;
          }
          puVar24 = puVar26;
          puVar11 = puStack_11c;
          if (iStack_118 != iStack_114) {
            if (iStack_118 == 0) {
              *puStack00000034 = puVar13;
            }
            puVar24 = puStack_11c;
            puVar11 = puVar13;
            iStack_114 = iStack_118;
            if (puVar28 != (undefined4 *)0x0) {
              sVar32 = *psVar29;
              for (; (puVar26 != (undefined4 *)0x0 && (puVar26 != puStack_11c));
                  puVar26 = (undefined4 *)*puVar26) {
                *(short *)((int)puVar26 + 0x1e) = sVar32;
                puVar26[8] = puStack_11c;
              }
              psVar29 = (short *)((int)puVar28 + 0x1e);
              *(undefined1 *)(puVar28 + 7) = 1;
            }
          }
          puStack_11c = puVar11;
          puVar26 = puVar24;
          *psVar29 = *psVar29 + 1;
          puVar13[1] = param_3;
          uVar3 = *(undefined4 *)(param_3 + 0x30);
          puVar13[3] = iVar40;
          puVar13[4] = uVar35;
          puVar13[5] = iVar7 - iVar40;
          puVar13[6] = uVar36 - uVar35;
          puVar13[2] = uVar3;
        }
      }
      uVar35 = (int)((int)puStack_110 - *puVar23) >> 3;
      puVar23[1] = uVar35;
    }
    iStack_fc = iStack_fc + 1;
    if (1 < iStack_fc) {
      iVar7 = fn_82CE5410();
      (**(code **)(**(int **)(iVar7 + 0xc) + 8))(*(int **)(iVar7 + 0xc),iVar10,iStack_f0);
      uVar36 = uStack_ac;
      puVar14 = puStack0000002c;
      if (bVar4) {
        sVar32 = *psVar29;
        for (; (puVar26 != (undefined4 *)0x0 && (puVar26 != puStack_11c));
            puVar26 = (undefined4 *)*puVar26) {
          *(short *)((int)puVar26 + 0x1e) = sVar32;
          puVar26[8] = puStack_11c;
        }
        *(undefined1 *)(puVar13 + 7) = 1;
        sVar32 = (*(ushort *)(param_3 + 0x54) >> 7) + 1;
        *(uint *)(param_3 + 0x34) =
             (*(ushort *)(param_3 + 0x54) + 1) * 0x80 + *(int *)(param_3 + 0x30);
        *(short *)(param_3 + 0x38) = sVar32;
        *(short *)(param_3 + 0x3a) = sVar32;
      }
      uVar20 = (ulonglong)uStack_ac;
      puStack0000002c[3] = 0;
      puStack0000002c[2] = 0;
      if (uStack_ac != 0) {
        iVar7 = fn_82CE5410();
        iVar7 = (**(code **)(**(int **)(iVar7 + 0x10) + 4))(*(int **)(iVar7 + 0x10),uVar36 << 3);
        puVar14[3] = uVar36;
        puVar14[2] = iVar7;
        if (0 < (int)uVar36) {
          puVar13 = (undefined4 *)(iVar7 + -4);
          puVar26 = (undefined4 *)(iVar6 + -8);
          do {
            puVar13[1] = puVar26[2];
            puVar26 = puVar26 + 4;
            puVar13 = puVar13 + 2;
            *puVar13 = *puVar26;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
      }
      piVar9 = (int *)fn_82CE5410();
      *piVar9 = (int)piVar8;
      fn_82CE5410();
      piVar8 = (int *)fn_82CE5410();
      *piVar8 = iVar6;
      iVar7 = fn_82CE5410();
      if ((uStack_a8 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar7 + 0x10) + 0x10))
                  (*(int **)(iVar7 + 0x10),iVar6,uStack_a8 & 0x3fffffff,0x10);
      }
      iVar6 = fn_82CE5410();
      iStack_e4 = 0;
      if ((uStack_e0 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar6 + 0xc) + 0x10))
                  (*(int **)(iVar6 + 0xc),uStack_e8,uStack_e0 & 0x3fffffff,8);
      }
      uStack_e8 = 0;
      uStack_e0 = 0x80000000;
      iVar6 = fn_82CE5410();
      iStack_d4 = 0;
      if ((uStack_d0 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar6 + 0xc) + 0x10))
                  (*(int **)(iVar6 + 0xc),uStack_d8,uStack_d0 & 0x3fffffff,8);
      }
      uStack_d8 = 0;
      uStack_d0 = 0x80000000;
      iVar6 = KeTlsGetValue(lbl_8323B4A0);
      puVar26 = *(undefined4 **)(iVar6 + 4);
      if (puVar26 < *(undefined4 **)(iVar6 + 0xc)) {
        *puVar26 = &lbl_82132BC4;
        uVar5 = TBLr;
        puVar26[1] = (int)uVar5;
        *(undefined4 **)(iVar6 + 4) = puVar26 + 3;
      }
      return;
    }
  } while( true );
}

