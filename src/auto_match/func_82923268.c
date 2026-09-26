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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82922700();
extern int fn_829229F8();
extern int fn_82F691F0();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


undefined8 fn_82923268(int *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint *puVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  lVar18 = 0;
  puVar20 = (uint *)0x0;
  puVar16 = (uint *)0x0;
  iVar6 = 0;
  if ((*(int *)(param_1[1] + 0x70) != 1) || (*(int *)(*param_1 + 0x70) != 1)) {
    return 0xffffffff80004005;
  }
  uVar7 = param_1[2];
  lVar3 = fn_82922700(*(undefined4 *)(*param_1 + 0x68),*(undefined4 *)(param_1[1] + 0x68),
                        (~(ulonglong)uVar7 & 0xffffffff) >> 0x10 & 1);
  if ((lVar3 == 0) ||
     (lVar18 = fn_82922700(*(undefined4 *)(*param_1 + 0x6c),*(undefined4 *)(param_1[1] + 0x6c),
                             (~(ulonglong)uVar7 & 0xffffffff) >> 0x11 & 1), lVar18 == 0)) {
    uVar22 = 0xffffffff80004005;
  }
  else {
    lVar4 = -1;
    uVar17 = (ulonglong)*(uint *)lVar3 + lVar3;
    uVar19 = (ulonglong)*(uint *)lVar18 + lVar18;
    uVar7 = *(uint *)(param_1[1] + 0x6c);
    uVar21 = (ulonglong)uVar7;
    uVar13 = uVar21 * 0xc;
    if (0x15555555 < uVar21) {
      uVar13 = 0xffffffffffffffff;
    }
    if ((uVar13 & 0xffffffff) < 0xfffffffc) {
      lVar4 = uVar13 + 4;
    }
    puVar5 = (uint *)fn_8265C940(lVar4,0x24810000);
    if (puVar5 == (uint *)0x0) {
      puVar20 = (uint *)0x0;
    }
    else {
      *puVar5 = uVar7;
      puVar20 = puVar5 + 1;
      if (-1 < (longlong)(uVar21 - 1)) {
        do {
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5 = puVar5 + 3;
          *puVar5 = 0;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
    }
    if ((puVar20 == (uint *)0x0) ||
       (iVar6 = fn_8265C940(*(int *)(*param_1 + 0x68) << 4,0x24810000), iVar6 == 0)) {
LAB_82923914:
      uVar22 = 0xffffffff8007000e;
    }
    else {
      uVar21 = lVar18 + 4;
      uVar13 = uVar21;
      if ((uVar21 & 0xffffffff) < (uVar19 & 0xffffffff)) {
        do {
          uVar10 = *(uint *)uVar13 + uVar13;
          if ((uVar13 + 4 & 0xffffffff) < (uVar10 & 0xffffffff)) {
            lVar4 = uVar13 - 4;
            lVar14 = (((uVar10 - (uVar13 + 4)) - 1 & 0xffffffff) >> 3) + 1;
            do {
              lVar4 = lVar4 + 8;
              puVar20[*(int *)lVar4 * 3 + 2] = puVar20[*(int *)lVar4 * 3 + 2] + 1;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          uVar13 = uVar10;
        } while ((uVar10 & 0xffffffff) < (uVar19 & 0xffffffff));
      }
      lVar4 = 0;
      if ((uVar21 & 0xffffffff) < (uVar19 & 0xffffffff)) {
        dVar25 = (double)lbl_821AAD20;
        dVar27 = (double)lbl_82002AE0;
        dVar26 = (double)lbl_8200133C;
        do {
          uVar10 = uVar21 + 4;
          uVar21 = *(uint *)uVar21 + uVar21;
          uVar13 = uVar10;
          if ((uVar10 & 0xffffffff) < (uVar21 & 0xffffffff)) {
            do {
              iVar15 = *(int *)uVar13;
              if (puVar20[iVar15 * 3] == 0) {
                if (puVar16 == (uint *)0x0) {
                  uVar7 = fn_8265C940(*(int *)(param_1[1] + 0x68) << 4,0x24810000);
                  puVar20[iVar15 * 3] = uVar7;
                  if (uVar7 == 0) goto LAB_82923914;
                }
                else {
                  puVar20[iVar15 * 3] = *puVar16;
                  *puVar16 = 0;
                }
                    /* WARNING: Subroutine does not return */
                fn_82F691F0(puVar20[iVar15 * 3],0,*(int *)(param_1[1] + 0x68) << 4);
              }
              uVar13 = uVar13 + 8;
            } while ((uVar13 & 0xffffffff) < (uVar21 & 0xffffffff));
          }
          (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,lVar4,0,iVar6);
          if ((lVar3 + 4U & 0xffffffff) < (uVar17 & 0xffffffff)) {
            pfVar11 = (float *)(iVar6 + 8);
            uVar13 = lVar3 + 4U;
            do {
              uVar8 = *(uint *)uVar13 + uVar13;
              if ((uVar10 & 0xffffffff) < (uVar21 & 0xffffffff)) {
                uVar9 = uVar10;
                do {
                  uVar7 = puVar20[*(int *)uVar9 * 3];
                  if ((uVar13 + 4 & 0xffffffff) < (uVar8 & 0xffffffff)) {
                    lVar14 = uVar13 - 4;
                    lVar12 = (((uVar8 - (uVar13 + 4)) - 1 & 0xffffffff) >> 3) + 1;
                    do {
                      iVar2 = (int)lVar14;
                      fVar1 = (float)((int *)uVar9)[1] * *(float *)(iVar2 + 0xc);
                      iVar15 = *(int *)(iVar2 + 8) * 0x10;
                      *(float *)(iVar15 + uVar7) = pfVar11[-2] * fVar1 + *(float *)(iVar15 + uVar7);
                      iVar15 = *(int *)(iVar2 + 8) * 0x10 + uVar7;
                      *(float *)(iVar15 + 4) = pfVar11[-1] * fVar1 + *(float *)(iVar15 + 4);
                      iVar15 = *(int *)(iVar2 + 8) * 0x10 + uVar7;
                      *(float *)(iVar15 + 8) = *pfVar11 * fVar1 + *(float *)(iVar15 + 8);
                      lVar14 = lVar14 + 8;
                      iVar15 = *(int *)lVar14 * 0x10 + uVar7;
                      *(float *)(iVar15 + 0xc) = pfVar11[1] * fVar1 + *(float *)(iVar15 + 0xc);
                      lVar12 = lVar12 + -1;
                    } while (lVar12 != 0);
                  }
                  uVar9 = uVar9 + 8;
                } while ((uVar9 & 0xffffffff) < (uVar21 & 0xffffffff));
              }
              pfVar11 = pfVar11 + 4;
              uVar13 = uVar8;
            } while ((uVar8 & 0xffffffff) < (uVar17 & 0xffffffff));
          }
          if ((uVar10 & 0xffffffff) < (uVar21 & 0xffffffff)) {
            do {
              puVar5 = puVar20 + *(int *)uVar10 * 3;
              uVar7 = puVar5[2];
              puVar5[2] = (uint)((ulonglong)uVar7 - 1);
              if ((ulonglong)uVar7 - 1 == 0) {
                iVar15 = *(int *)(*param_1 + 8);
                if (iVar15 == 1) {
                  uVar7 = 0;
                  if (*(int *)(param_1[1] + 0x68) != 0) {
                    iVar15 = 0;
                    do {
                      dVar23 = (double)*(float *)(*puVar5 + iVar15);
                      dVar24 = dVar25;
                      if ((dVar25 <= dVar23) && (dVar24 = dVar23, dVar27 <= dVar23)) {
                        dVar24 = dVar27;
                      }
                      *(float *)(*puVar5 + iVar15) = (float)dVar24;
                      dVar23 = (double)*(float *)(*puVar5 + iVar15 + 4);
                      dVar24 = dVar25;
                      if ((dVar25 <= dVar23) && (dVar24 = dVar23, dVar27 <= dVar23)) {
                        dVar24 = dVar27;
                      }
                      *(float *)(*puVar5 + iVar15 + 4) = (float)dVar24;
                      dVar23 = (double)*(float *)(*puVar5 + iVar15 + 8);
                      dVar24 = dVar25;
                      if ((dVar25 <= dVar23) && (dVar24 = dVar23, dVar27 <= dVar23)) {
                        dVar24 = dVar27;
                      }
                      *(float *)(*puVar5 + iVar15 + 8) = (float)dVar24;
                      dVar23 = (double)*(float *)(*puVar5 + iVar15 + 0xc);
                      dVar24 = dVar25;
                      if ((dVar25 <= dVar23) && (dVar24 = dVar23, dVar27 <= dVar23)) {
                        dVar24 = dVar27;
                      }
                      *(float *)(*puVar5 + iVar15 + 0xc) = (float)dVar24;
                      uVar7 = uVar7 + 1;
                      iVar15 = iVar15 + 0x10;
                    } while (uVar7 < *(uint *)(param_1[1] + 0x68));
                  }
                }
                else if (iVar15 == 2) {
                  uVar7 = 0;
                  if (*(int *)(param_1[1] + 0x68) != 0) {
                    iVar15 = 0;
                    do {
                      dVar23 = (double)*(float *)(*puVar5 + iVar15);
                      dVar24 = dVar26;
                      if ((dVar26 <= dVar23) && (dVar24 = dVar23, dVar27 <= dVar23)) {
                        dVar24 = dVar27;
                      }
                      *(float *)(*puVar5 + iVar15) = (float)dVar24;
                      dVar23 = (double)*(float *)(*puVar5 + iVar15 + 4);
                      dVar24 = dVar26;
                      if ((dVar26 <= dVar23) && (dVar24 = dVar23, dVar27 <= dVar23)) {
                        dVar24 = dVar27;
                      }
                      *(float *)(*puVar5 + iVar15 + 4) = (float)dVar24;
                      dVar23 = (double)*(float *)(*puVar5 + iVar15 + 8);
                      dVar24 = dVar26;
                      if ((dVar26 <= dVar23) && (dVar24 = dVar23, dVar27 <= dVar23)) {
                        dVar24 = dVar27;
                      }
                      *(float *)(*puVar5 + iVar15 + 8) = (float)dVar24;
                      dVar23 = (double)*(float *)(*puVar5 + iVar15 + 0xc);
                      dVar24 = dVar25;
                      if ((dVar25 <= dVar23) && (dVar24 = dVar23, dVar27 <= dVar23)) {
                        dVar24 = dVar27;
                      }
                      *(float *)(*puVar5 + iVar15 + 0xc) = (float)dVar24;
                      uVar7 = uVar7 + 1;
                      iVar15 = iVar15 + 0x10;
                    } while (uVar7 < *(uint *)(param_1[1] + 0x68));
                  }
                }
                else if ((iVar15 == 3) && (uVar7 = 0, *(int *)(param_1[1] + 0x68) != 0)) {
                  iVar15 = 0;
                  do {
                    dVar23 = (double)*(float *)(*puVar5 + iVar15);
                    dVar24 = dVar26;
                    if ((dVar26 <= dVar23) && (dVar24 = dVar23, dVar27 <= dVar23)) {
                      dVar24 = dVar27;
                    }
                    *(float *)(*puVar5 + iVar15) = (float)dVar24;
                    dVar23 = (double)*(float *)(*puVar5 + iVar15 + 4);
                    dVar24 = dVar26;
                    if ((dVar26 <= dVar23) && (dVar24 = dVar23, dVar27 <= dVar23)) {
                      dVar24 = dVar27;
                    }
                    *(float *)(*puVar5 + iVar15 + 4) = (float)dVar24;
                    dVar23 = (double)*(float *)(*puVar5 + iVar15 + 8);
                    dVar24 = dVar26;
                    if ((dVar26 <= dVar23) && (dVar24 = dVar23, dVar27 <= dVar23)) {
                      dVar24 = dVar27;
                    }
                    *(float *)(*puVar5 + iVar15 + 8) = (float)dVar24;
                    dVar23 = (double)*(float *)(*puVar5 + iVar15 + 0xc);
                    dVar24 = dVar26;
                    if ((dVar26 <= dVar23) && (dVar24 = dVar23, dVar27 <= dVar23)) {
                      dVar24 = dVar27;
                    }
                    *(float *)(*puVar5 + iVar15 + 0xc) = (float)dVar24;
                    uVar7 = uVar7 + 1;
                    iVar15 = iVar15 + 0x10;
                  } while (uVar7 < *(uint *)(param_1[1] + 0x68));
                }
                (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1],*(int *)uVar10,0,*puVar5);
                puVar5[1] = (uint)puVar16;
                puVar16 = puVar5;
              }
              uVar10 = uVar10 + 8;
            } while ((uVar10 & 0xffffffff) < (uVar21 & 0xffffffff));
          }
          lVar4 = lVar4 + 1;
        } while ((uVar21 & 0xffffffff) < (uVar19 & 0xffffffff));
      }
      uVar22 = 0;
    }
  }
  if (puVar20 != (uint *)0x0) {
    fn_829229F8(puVar20,3);
  }
  fn_8265C990(lVar18,0x24810000);
  fn_8265C990(lVar3,0x24810000);
  fn_8265C990(iVar6,0x24810000);
  fn_8265C990(0,0x24810000);
  return uVar22;
}

