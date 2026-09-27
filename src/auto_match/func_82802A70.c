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
extern unsigned int *auStack_138;
extern int fn_82808758();
extern int fn_82A1DDC0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_140;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_100;
extern unsigned int uStack_108;
extern unsigned int uStack_110;
extern unsigned int uStack_118;
extern unsigned int uStack_120;
extern unsigned int uStack_128;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;


void fn_82802A70(undefined8 param_1,int *param_2,longlong param_3,int param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint *puVar19;
  ulonglong uVar18;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint *puVar26;
  uint uVar27;
  undefined4 *puVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  int iStack_140;
  ulonglong auStack_138 [1];
  ulonglong uStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  float afStack_c8 [50];
  
  piVar10 = (int *)fn_82F6A548();
  uVar24 = (ulonglong)*(uint *)(param_4 + 4);
  puVar26 = (uint *)piVar10[8];
  dVar31 = (double)lbl_821AAD20;
  uVar22 = 0;
  uVar21 = 0;
  dVar32 = (double)((float)uVar24 + (float)piVar10[4]);
  auStack_138[0] = uVar24;
  if (piVar10[2] != 0) {
    puVar28 = (undefined4 *)(*param_2 + -0xc);
    iStack_140 = 0;
    iVar20 = 0;
    dVar30 = (double)lbl_82002AE0;
    dVar33 = dVar31;
    do {
      uVar25 = 0;
      if (piVar10[7] == 0) {
LAB_82802b24:
        if ((piVar10[5] == 0) || (*(char *)(piVar10[5] + uVar21) != '\0')) {
          bVar9 = false;
          uVar23 = 0;
          if (*piVar10 != 0) {
            uVar27 = 0;
            lVar11 = param_3 + -4;
            do {
              if (*(ushort *)((int)param_2 + 10) <= uVar23) break;
              uVar4 = (*(uint *)((int)param_2 + (uVar22 >> 3 & 0x1ffffffc) + 0x10) &
                      3 << (uVar22 & 0x1f)) >> (uVar22 & 0x1f);
              iVar7 = (int)lVar11;
              if (uVar4 == 0) {
                uVar3 = *(undefined4 *)(param_2[3] + uVar27);
                *(undefined4 *)((int)afStack_c8 + uVar27) = uVar3;
                *(undefined4 *)(iVar7 + 4) = uVar3;
                *(float *)((int)auStack_138 + uVar27) = (float)dVar31;
              }
              else {
                if (uVar4 == 1) {
                  uVar3 = puVar28[4];
                  *(undefined4 *)((int)afStack_c8 + uVar27) = uVar3;
                  *(undefined4 *)(iVar7 + 4) = uVar3;
                  *(float *)((int)auStack_138 + uVar27) = (float)dVar31;
                }
                else if (uVar4 == 3) {
                  uVar4 = puVar28[6];
                  fVar1 = (float)puVar28[5];
                  fVar2 = (float)puVar28[4];
                  uVar15 = (longlong)*(int *)(param_4 + 4) * (longlong)(int)uVar4;
                  uVar14 = (uint)uVar15 & 0x1f;
                  puVar19 = (uint *)(((uint)((uVar15 & 0xffffffff) >> 3) & 0x1ffffffc) + puVar28[3])
                  ;
                  uVar15 = (ulonglong)(uint)(1 << (uVar4 & 0x3f)) - 1;
                  uStack_128 = ((puVar19[1] << 1) << (0x1f - uVar14 & 0x3f) | *puVar19 >> uVar14) &
                               uVar15;
                  fVar5 = (float)uStack_128 * fVar1 + fVar2;
                  if (piVar10[1] == 0) {
                    *(float *)(iVar7 + 4) = fVar5;
                    if (*piVar10 != 1) goto LAB_82802f60;
                  }
                  else {
                    uVar17 = (longlong)*(int *)(param_4 + 8) * (longlong)(int)uVar4;
                    uVar6 = (uint)uVar17 & 0x1f;
                    puVar19 = (uint *)(((uint)((uVar17 & 0xffffffff) >> 3) & 0x1ffffffc) +
                                      puVar28[3]);
                    uVar4 = puVar19[1];
                    uVar14 = *puVar19;
                    *(float *)(iVar7 + 4) = fVar5;
                    dVar33 = (double)(float)piVar10[4];
                    *(int *)((int)auStack_138 + uVar27) = piVar10[4];
                    uStack_120 = ((uVar4 << 1) << (0x1f - uVar6 & 0x3f) | uVar14 >> uVar6) & uVar15;
                    *(float *)((int)afStack_c8 + uVar27) = (float)uStack_120 * fVar1 + fVar2;
                  }
                  bVar9 = true;
                }
                else {
                  uVar4 = *puVar26 & 0x1f;
                  puVar19 = (uint *)((*puVar26 >> 3 & 0x1ffffffc) + puVar28[3]);
                  uVar15 = (ulonglong)(puVar28[6] + (uint)*(ushort *)(param_2 + 2)) & 0xffff;
                  uVar17 = (ulonglong)
                           ((puVar19[1] << 1) << (0x1f - uVar4 & 0x3f) | *puVar19 >> uVar4) &
                           (ulonglong)(uint)(1 << (*(ushort *)(param_2 + 2) & 0x3f)) - 1;
                  if (uVar24 < uVar17) {
                    uVar17 = 0;
                    *puVar26 = 0;
                  }
                  iVar20 = puVar28[3];
                  uVar4 = (uint)(*puVar26 + uVar15) & 0x1f;
                  puVar19 = (uint *)(((uint)((*puVar26 + uVar15 & 0xffffffff) >> 3) & 0x1ffffffc) +
                                    iVar20);
                  uVar14 = *puVar19 >> uVar4;
                  uVar4 = (puVar19[1] << 1) << (0x1f - uVar4 & 0x3f);
                  while( true ) {
                    uVar18 = (ulonglong)(uVar4 | uVar14) &
                             (ulonglong)(uint)(1 << (*(ushort *)(param_2 + 2) & 0x3f)) - 1;
                    if (uVar24 < uVar18) break;
                    uVar17 = *puVar26 + uVar15 + uVar15;
                    *puVar26 = (uint)(*puVar26 + uVar15);
                    iVar20 = puVar28[3];
                    uVar4 = (uint)uVar17 & 0x1f;
                    puVar19 = (uint *)(((uint)((uVar17 & 0xffffffff) >> 3) & 0x1ffffffc) + iVar20);
                    uVar14 = *puVar19 >> uVar4;
                    uVar4 = (puVar19[1] << 1) << (0x1f - uVar4 & 0x3f);
                    uVar17 = uVar18;
                  }
                  fVar1 = (float)puVar28[5];
                  fVar2 = (float)puVar28[4];
                  uVar16 = (ulonglong)*puVar26 + (ulonglong)*(ushort *)(param_2 + 2);
                  uVar4 = (uint)uVar16 & 0x1f;
                  puVar19 = (uint *)(((uint)((uVar16 & 0xffffffff) >> 3) & 0x1ffffffc) + iVar20);
                  uVar14 = 0x1f - uVar4;
                  auStack_138[0] = CONCAT44(uVar14,((uint)(auStack_138[0])));
                  uVar13 = (ulonglong)(uint)(1 << (puVar28[6] & 0x3f)) - 1;
                  uStack_118 = ((puVar19[1] << 1) << (uVar14 & 0x3f) | *puVar19 >> uVar4) & uVar13;
                  fVar5 = (float)uStack_118 * fVar1 + fVar2;
                  if (piVar10[1] == 0) {
                    *(float *)(iVar7 + 4) = fVar5;
                    if (*piVar10 == 1) goto LAB_82802f50;
                  }
                  else {
                    uStack_108 = uVar18 - uVar17 & 0xffffffff;
                    uVar6 = (uint)(uVar16 + uVar15) & 0x1f;
                    puVar19 = (uint *)(((uint)((uVar16 + uVar15 & 0xffffffff) >> 3) & 0x1ffffffc) +
                                      iVar20);
                    uVar4 = puVar19[1];
                    uVar14 = *puVar19;
                    *(float *)(iVar7 + 4) = fVar5;
                    uStack_100 = ((uVar4 << 1) << (0x1f - uVar6 & 0x3f) | uVar14 >> uVar6) & uVar13;
                    fVar5 = (float)(dVar32 - (double)uVar17) / (float)uStack_108;
                    dVar33 = (double)fVar5;
                    *(float *)((int)auStack_138 + uVar27) = fVar5;
                    *(float *)((int)afStack_c8 + uVar27) = (float)uStack_100 * fVar1 + fVar2;
                    uStack_110 = uVar17;
LAB_82802f50:
                    bVar9 = true;
                  }
                  puVar26 = puVar26 + 1;
                  iVar20 = iStack_140;
                }
LAB_82802f60:
                puVar28 = puVar28 + 4;
              }
              uVar25 = uVar25 + 1;
              lVar11 = lVar11 + 4;
              uVar27 = uVar27 + 4;
              uVar22 = uVar22 + 2;
              uVar23 = uVar23 + 1;
            } while (uVar27 < 0xc);
            iVar8 = uVar25 * 4;
            uVar25 = uVar25 + 1;
            iVar7 = (int)param_3;
            *(float *)(iVar8 + iVar7) = (float)dVar30;
            if (bVar9) {
              if (piVar10[1] == 0) {
                if ((double)*(float *)(iVar7 + 0xc) < dVar31) {
                  *(float *)(iVar7 + 0xc) = (float)-(double)*(float *)(iVar7 + 0xc);
                }
              }
              else {
                fn_82808758(dVar33,param_3,afStack_c8);
              }
            }
          }
          if (uVar23 < *(ushort *)((int)param_2 + 10)) {
            lVar11 = ((ulonglong)uVar25 & 0x3fffffff) * 4 + param_3 + -4;
            do {
              uVar25 = (*(uint *)((int)param_2 + (uVar22 >> 3 & 0x1ffffffc) + 0x10) &
                       3 << (uVar22 & 0x1f)) >> (uVar22 & 0x1f);
              iVar7 = (int)lVar11;
              if (uVar25 == 0) {
                uVar3 = *(undefined4 *)(uVar23 * 4 + param_2[3]);
LAB_82803010:
                *(undefined4 *)(iVar7 + 4) = uVar3;
              }
              else {
                if (uVar25 == 1) {
                  puVar28 = puVar28 + 4;
                  uVar3 = *puVar28;
                  goto LAB_82803010;
                }
                if (uVar25 == 3) {
                  uVar25 = puVar28[6];
                  uVar15 = (longlong)*(int *)(param_4 + 4) * (longlong)(int)uVar25;
                  puVar19 = (uint *)(((uint)((uVar15 & 0xffffffff) >> 3) & 0x1ffffffc) + puVar28[3])
                  ;
                  uVar27 = (uint)uVar15 & 0x1f;
                  uVar15 = (ulonglong)(uint)(1 << (uVar25 & 0x3f)) - 1;
                  uStack_f8 = ((puVar19[1] << 1) << (0x1f - uVar27 & 0x3f) | *puVar19 >> uVar27) &
                              uVar15;
                  fVar1 = (float)uStack_f8 * (float)puVar28[5] + (float)puVar28[4];
                  if (piVar10[1] != 0) {
                    uVar17 = (longlong)*(int *)(param_4 + 8) * (longlong)(int)uVar25;
                    uVar25 = (uint)uVar17 & 0x1f;
                    puVar19 = (uint *)(((uint)((uVar17 & 0xffffffff) >> 3) & 0x1ffffffc) +
                                      puVar28[3]);
                    uStack_f0 = ((puVar19[1] << 1) << (0x1f - uVar25 & 0x3f) | *puVar19 >> uVar25) &
                                uVar15;
                    fVar1 = (((float)uStack_f0 * (float)puVar28[5] + (float)puVar28[4]) - fVar1) *
                            (float)piVar10[4] + fVar1;
                  }
                  *(float *)(iVar7 + 4) = fVar1;
                }
                else {
                  uVar25 = *puVar26 & 0x1f;
                  puVar19 = (uint *)((*puVar26 >> 3 & 0x1ffffffc) + puVar28[3]);
                  uVar15 = (ulonglong)(puVar28[6] + (uint)*(ushort *)(param_2 + 2)) & 0xffff;
                  uVar17 = (ulonglong)
                           ((puVar19[1] << 1) << (0x1f - uVar25 & 0x3f) | *puVar19 >> uVar25) &
                           (ulonglong)(uint)(1 << (*(ushort *)(param_2 + 2) & 0x3f)) - 1;
                  if (uVar24 < uVar17) {
                    uVar17 = 0;
                    *puVar26 = 0;
                  }
                  iVar8 = puVar28[3];
                  uVar25 = (uint)(*puVar26 + uVar15) & 0x1f;
                  puVar19 = (uint *)(((uint)((*puVar26 + uVar15 & 0xffffffff) >> 3) & 0x1ffffffc) +
                                    iVar8);
                  uVar25 = (puVar19[1] << 1) << (0x1f - uVar25 & 0x3f) | *puVar19 >> uVar25;
                  while( true ) {
                    uVar18 = (ulonglong)uVar25 &
                             (ulonglong)(uint)(1 << (*(ushort *)(param_2 + 2) & 0x3f)) - 1;
                    if (uVar24 < uVar18) break;
                    uVar17 = *puVar26 + uVar15 + uVar15;
                    *puVar26 = (uint)(*puVar26 + uVar15);
                    iVar8 = puVar28[3];
                    uVar25 = (uint)uVar17 & 0x1f;
                    puVar19 = (uint *)(((uint)((uVar17 & 0xffffffff) >> 3) & 0x1ffffffc) + iVar8);
                    uVar25 = (puVar19[1] << 1) << (0x1f - uVar25 & 0x3f) | *puVar19 >> uVar25;
                    uVar17 = uVar18;
                  }
                  uVar16 = (ulonglong)*puVar26 + (ulonglong)*(ushort *)(param_2 + 2);
                  uVar25 = (uint)uVar16 & 0x1f;
                  puVar19 = (uint *)(((uint)((uVar16 & 0xffffffff) >> 3) & 0x1ffffffc) + iVar8);
                  uVar13 = (ulonglong)(uint)(1 << (puVar28[6] & 0x3f)) - 1;
                  uStack_e8 = ((puVar19[1] << 1) << (0x1f - uVar25 & 0x3f) | *puVar19 >> uVar25) &
                              uVar13;
                  fVar1 = (float)uStack_e8 * (float)puVar28[5] + (float)puVar28[4];
                  dVar29 = (double)fVar1;
                  if (piVar10[1] == 0) {
                    *(float *)(iVar7 + 4) = fVar1;
                  }
                  else {
                    uStack_d8 = uVar18 - uVar17 & 0xffffffff;
                    uVar25 = (uint)(uVar16 + uVar15) & 0x1f;
                    puVar19 = (uint *)(((uint)((uVar16 + uVar15 & 0xffffffff) >> 3) & 0x1ffffffc) +
                                      iVar8);
                    uStack_d0 = ((puVar19[1] << 1) << (0x1f - uVar25 & 0x3f) | *puVar19 >> uVar25) &
                                uVar13;
                    dVar33 = (double)((float)(dVar32 - (double)uVar17) / (float)uStack_d8);
                    *(float *)(iVar7 + 4) =
                         (float)((double)(float)((double)((float)uStack_d0 * (float)puVar28[5] +
                                                         (float)puVar28[4]) - dVar29) * dVar33 +
                                dVar29);
                    uStack_e0 = uVar17;
                  }
                  puVar26 = puVar26 + 1;
                }
                puVar28 = puVar28 + 4;
              }
              lVar12 = lVar11 + 4;
              uVar22 = uVar22 + 2;
              if ((*piVar10 != 0) && (uVar23 == 5)) {
                lVar12 = lVar11 + 8;
              }
              uVar23 = uVar23 + 1;
              lVar11 = lVar12;
            } while (uVar23 < *(ushort *)((int)param_2 + 10));
          }
          goto LAB_82803318;
        }
        fn_82A1DDC0(param_3,piVar10[6],piVar10[3] << 2);
        uVar25 = 0;
        if (*(ushort *)((int)param_2 + 10) != 0) {
          do {
            uVar23 = uVar22 >> 3;
            uVar27 = uVar22 & 0x1f;
            uVar22 = uVar22 + 2;
            uVar23 = (*(uint *)((int)param_2 + (uVar23 & 0x1ffffffc) + 0x10) & 3 << uVar27) >>
                     uVar27;
            if ((uVar23 == 1) || (uVar23 == 3)) {
LAB_82802b98:
              puVar28 = puVar28 + 4;
            }
            else if (uVar23 == 2) {
              puVar26 = puVar26 + 1;
              goto LAB_82802b98;
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 < *(ushort *)((int)param_2 + 10));
        }
      }
      else {
        if (*(ushort *)(piVar10[7] + iVar20) == uVar21) {
          iVar20 = iVar20 + 2;
          iStack_140 = iVar20;
          goto LAB_82802b24;
        }
LAB_82803318:
        param_3 = ((ulonglong)(uint)piVar10[3] & 0x3fffffff) * 4 + param_3;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < (uint)piVar10[2]);
  }
  fn_82F6A594();
  return;
}

