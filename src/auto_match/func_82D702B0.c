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
#define ZEXT48(x) ((U64)((U32)(x)))
#define TBLr 0
extern unsigned int *auStack_8d0;
extern unsigned int fStack_8f0;
extern unsigned int fStack_8f8;
extern unsigned int fStack_900;
extern int fn_82DDDAB8();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005340;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005718;
extern unsigned int lbl_820579A8;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_821344F4;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D702B0(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ushort uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined8 in_r0;
  ulonglong uVar12;
  int *piVar13;
  short sVar16;
  int iVar14;
  int iVar15;
  int *piVar18;
  ulonglong uVar17;
  ulonglong uVar19;
  uint *puVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  short sVar25;
  uint *puVar26;
  longlong lVar27;
  uint *puVar29;
  ulonglong uVar28;
  int *piVar30;
  int *piVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 in_vs32 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fStack_900;
  float fStack_8f8;
  float fStack_8f0;
  ushort auStack_8d0 [256];
  short asStack_6d0 [872];
  
  uVar12 = ZEXT48(&stack0x00000000);
  piVar13 = (int *)fn_82F6A53C();
  puVar2 = *(uint **)((int)param_3 + 0x3080);
  puVar29 = puVar2 + 0x102;
  piVar18 = (int *)param_2;
  uVar23 = 0;
  sVar25 = 0;
  iVar14 = *(int *)*piVar13;
  if (puVar2 + 0x102 < (uint *)*puVar2) {
    lVar24 = uVar12 - 0x8d2;
    dVar36 = (double)lbl_821AAD20;
    dVar35 = (double)lbl_82005718;
    dVar37 = (double)lbl_82005340;
    dVar40 = (double)lbl_82186E6C;
    dVar38 = (double)lbl_820579A8;
    dVar39 = (double)lbl_821344F4;
    lVar27 = uVar12 - 0x6d0;
    dVar41 = (double)lbl_82002AE0;
    puVar26 = puVar29;
    do {
      puVar3 = (uint *)puVar2[1];
      uVar4 = *puVar29;
      bVar11 = false;
      *(short *)lVar27 = -1;
      for (puVar20 = puVar2 + 2; puVar20 < puVar3; puVar20 = puVar20 + 1) {
        uVar5 = *puVar20;
        if (uVar4 != uVar5) {{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(in_vs44, &_vt0, 16); }
          dVar32 = (double)*(float *)(iVar14 + 0x10);
          pfVar6 = *(float **)(piVar13[3] + 0x60);
          uVar42 = storeVectorElementWordIndexed(in_vs42,0,uVar12 - 0x8f8);
          *(undefined4 *)(uVar12 - 0x8f8) = uVar42;
          uVar42 = storeVectorElementWordIndexed(in_vs40,0,uVar12 - 0x900);
          *(undefined4 *)(uVar12 - 0x900) = uVar42;
          uVar42 = storeVectorElementWordIndexed(in_vs39,0,uVar12 - 0x8f0);
          *(undefined4 *)(uVar12 - 0x8f0) = uVar42;
          dVar34 = (double)fStack_8f0;
          dVar33 = (double)(float)((double)(float)(dVar34 - dVar41) * dVar32 + -(double)fStack_900);
          if ((dVar33 <= dVar32) && ((dVar34 <= dVar39 || (*(int *)(uVar5 + 0x20) != 0xffff)))) {
            if ((*(int *)(uVar5 + 0x20) != 0xffff) ||
               (((dVar38 <= dVar34 ||
                 (dVar40 <= (double)(float)((double)(float)((double)(float)(dVar34 - dVar41) *
                                                            dVar32 + (double)fStack_8f8) + dVar33)))
                || ((float)(dVar32 * dVar37) <= *(float *)(uVar5 + 0x1c) + *(float *)(uVar4 + 0x1c))
                ))) {
              dVar32 = dVar36;
              if (*(int *)(uVar5 + 0x20) != 0xffff) {
                dVar32 = (double)(float)((double)*pfVar6 * dVar35);
              }
              if ((float)((double)*(float *)(uVar5 + 0x1c) - dVar32) < *(float *)(uVar4 + 0x1c))
              goto LAB_82d70518;
            }
            else {
              bVar11 = true;
            }
          }
        }
      }
      if (bVar11) {
        uVar23 = uVar23 + 1;
        lVar24 = lVar24 + 2;
        *(short *)lVar24 = sVar25;
      }
      (**(code **)(*piVar18 + 0x14))(param_2,*(undefined4 *)(puVar26[1] + 8),uVar12 - 0x4d0);
      sVar16 = (**(code **)(*(int *)piVar13[4] + 0xc))
                         ((int *)piVar13[4],*piVar13,uVar12 - 0x8e0,piVar13[3],param_3,0,*puVar26);
      *(short *)lVar27 = sVar16;
      if (sVar16 != -1) {
        (**(code **)(*(int *)piVar13[4] + 0x10))((int *)piVar13[4],0xffffffffffffffff);
      }
LAB_82d70518:
      puVar29 = puVar29 + 3;
      sVar25 = sVar25 + 1;
      puVar26 = puVar26 + 3;
      lVar27 = lVar27 + 2;
    } while (puVar29 < (uint *)*puVar2);
  }
  piVar30 = piVar13 + 3;
  iVar14 = *(int *)piVar13[3];
  if (0 < (int)uVar23) {
    lVar24 = uVar12 - 0x8d2;
    uVar28 = uVar23;
    do {
      lVar24 = lVar24 + 2;
      iVar22 = *(ushort *)lVar24 + 0x56;
      (**(code **)((uint)*(byte *)(puVar2[iVar22 * 3 + 1] + 1) * 0x50 + iVar14 + 0x16c4))
                (puVar2[iVar22 * 3 + 1],puVar2[iVar22 * 3 + 2],0xffffffffffffffff);
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
  }
  if (1 < (int)uVar23) {
    lVar24 = (uVar23 & 0x7fffffff) * 2 + (uVar12 - 0x8d0);
    dVar35 = (double)lbl_82005344;
    do {
      iVar14 = KeTlsGetValue(lbl_8323B4A0);
      puVar7 = *(undefined4 **)(iVar14 + 4);
      if (puVar7 < *(undefined4 **)(iVar14 + 0xc)) {
        *puVar7 = "TtConflicts";
        uVar9 = TBLr;
        puVar7[1] = (int)uVar9;
        *(undefined4 **)(iVar14 + 4) = puVar7 + 3;
      }
      uVar17 = 0;
      uVar28 = 1;
      iVar14 = (int)uVar23;
      if (0 < iVar14) {
        uVar21 = 1;
        dVar36 = dVar35;
        do {
          iVar22 = (int)uVar21;
          if (iVar22 < iVar14) {
            lVar27 = uVar23 - uVar21;
            uVar19 = uVar21;
            do {
              uVar42 = storeVectorElementWordIndexed(in_vs44,0,uVar12 - 0x900);
              *(undefined4 *)(uVar12 - 0x900) = uVar42;
              if ((double)fStack_900 < dVar36) {
                uVar17 = uVar21 - 1;
                uVar28 = uVar19;
                dVar36 = (double)fStack_900;
              }
              uVar19 = uVar19 + 1;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
          }
          uVar21 = uVar21 + 1;
        } while (iVar22 < iVar14);
      }
      iVar22 = (int)((uVar17 & 0xffffffff) << 1);
      iVar8 = (int)((uVar28 & 0xffffffff) << 1);
      iVar14 = *(int *)*piVar13;
      uVar4 = puVar2[(*(ushort *)((int)auStack_8d0 + iVar8) + 0x56) * 3 + 1];
      if ((((*(uint *)((*(int *)(iVar14 + 0xc) + 0x44) * 4 + *(int *)*piVar30) & 0x40000) == 0) ||
          (iVar15 = (**(code **)(*piVar18 + 0x14))
                              (piVar18,*(undefined4 *)
                                        (puVar2[(*(ushort *)((int)auStack_8d0 + iVar22) + 0x56) * 3
                                                + 1] + 8),uVar12 - 0x4d0),
          (*(uint *)((*(int *)(iVar15 + 0xc) + 0x44) * 4 + *(int *)*piVar30) & 0x40000) == 0)) ||
         (iVar15 = (**(code **)(*piVar18 + 0x14))(piVar18,*(undefined4 *)(uVar4 + 8),uVar12 - 0x2d0)
         , (*(uint *)((*(int *)(iVar15 + 0xc) + 0x44) * 4 + *(int *)*piVar30) & 0x40000) == 0))
      break;
      fn_82DDDAB8(*(undefined4 *)(*piVar13 + 8),iVar14,uVar12 - 0x8f0,2,piVar13 + 8,uVar12 - 0x8f8
                   );
      uVar42 = lbl_8323B4A0;
      uVar23 = uVar23 - 2;
      *(undefined2 *)((int)auStack_8d0 + iVar8) = *(undefined2 *)((int)lVar24 + -2);
      lVar24 = lVar24 + -4;
      *(undefined2 *)((int)auStack_8d0 + iVar22) = *(undefined2 *)lVar24;
      iVar14 = KeTlsGetValue(uVar42);
      puVar7 = *(undefined4 **)(iVar14 + 4);
      if (puVar7 < *(undefined4 **)(iVar14 + 0xc)) {
        *puVar7 = &lbl_82132BC4;
        uVar9 = TBLr;
        puVar7[1] = (int)uVar9;
        *(undefined4 **)(iVar14 + 4) = puVar7 + 3;
      }
    } while (1 < (int)uVar23);
    param_3 = param_3 & 0xffffffff;
  }
  piVar18 = (int *)param_3;
  if ((int)uVar23 != 0) {
    if (asStack_6d0[auStack_8d0[0]] != -1) {
      (**(code **)(*(int *)piVar13[4] + 0x14))
                ((int *)piVar13[4],asStack_6d0[auStack_8d0[0]],piVar18[1]);
      piVar31 = (int *)piVar13[4];
      asStack_6d0[auStack_8d0[0]] = -1;
      (**(code **)(*piVar31 + 0x10))(piVar31,1);
    }
  }
  iVar14 = *(int *)*piVar30;
  uVar23 = (longlong)(((int)*puVar2 + (-0x408 - (int)puVar2)) / 0xc) - 1;
  if (-1 < (longlong)uVar23) {
    lVar24 = (uVar23 & 0x7fffffff) * 2 + (uVar12 - 0x6d0);
    piVar30 = (int *)*puVar2;
    do {
      uVar1 = *(ushort *)lVar24;
      piVar31 = piVar30 + -3;
      if (uVar1 == 0xffff) {
        (**(code **)(*(int *)piVar13[4] + 0x10))((int *)piVar13[4],0xffffffffffffffff);
        (**(code **)((uint)*(byte *)(piVar30[-2] + 1) * 0x50 + iVar14 + 0x16bc))
                  (piVar30[-2],piVar30[-1],0xffff);
        iVar22 = *piVar18;
        *piVar18 = iVar22 + -0x30;
        iVar8 = *piVar31;
        puVar7 = (undefined4 *)((int)in_r0 + iVar22 + -0x30 & 0xfffffff0);
        uVar42 = puVar7[1];
        uVar43 = puVar7[2];
        uVar44 = puVar7[3];
        puVar10 = (undefined4 *)((int)in_r0 + iVar8 & 0xfffffff0);
        *puVar10 = *puVar7;
        puVar10[1] = uVar42;
        puVar10[2] = uVar43;
        puVar10[3] = uVar44;
        puVar7 = (undefined4 *)(iVar22 - 0x20U & 0xfffffff0);
        uVar42 = puVar7[1];
        uVar43 = puVar7[2];
        uVar44 = puVar7[3];
        puVar10 = (undefined4 *)(iVar8 + 0x10U & 0xfffffff0);
        *puVar10 = *puVar7;
        puVar10[1] = uVar42;
        puVar10[2] = uVar43;
        puVar10[3] = uVar44;
        *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar22 + -0x10);
      }
      else {
        (**(code **)((uint)*(byte *)(piVar30[-2] + 1) * 0x50 + iVar14 + 0x16c0))
                  (piVar30[-2],piVar30[-1],uVar1);
        *(uint *)(*piVar31 + 0x20) = (uint)uVar1;
      }
      uVar23 = uVar23 - 1;
      lVar24 = lVar24 + -2;
      piVar30 = piVar31;
    } while (-1 < (longlong)uVar23);
  }
  fn_82F6A588();
  return;
}

