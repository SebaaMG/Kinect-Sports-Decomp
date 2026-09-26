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
extern int fn_8225F160();
extern int fn_822B17A8();
extern int fn_823571B0();
extern int fn_82526AF8();
extern int fn_82670C10();
extern int fn_828EA5F8();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int iStack_f0;
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_82195600;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831DB304;
extern unsigned int lbl_83265A40;
extern unsigned int lbl_83265A44;
extern unsigned int lbl_832765BC;
extern unsigned int uStack_c8;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;


void fn_82356050(void)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  bool bVar5;
  int iVar7;
  char cVar10;
  longlong lVar6;
  int *piVar8;
  int iVar9;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int iVar20;
  ulonglong uVar19;
  int *piVar21;
  ulonglong uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  int iStack_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  int *piStack_d0;
  int *piStack_cc;
  undefined4 uStack_c8;
  
  iVar7 = fn_82F6A544();
  fVar2 = lbl_831DB304;
  if (*(int *)(iVar7 + 0x2b0) == 2) {
    fVar2 = lbl_82195600;
  }
  dVar26 = (double)fVar2;
  piVar11 = *(int **)(iVar7 + 0x1c);
  piVar13 = (int *)0x0;
  uStack_c8 = 0;
  piVar21 = (int *)0x0;
  piStack_d0 = (int *)0x0;
  iVar20 = 0;
  piStack_cc = (int *)0x0;
  if ((piVar11[1] - *piVar11 & 0xfffffffcU) != 0) {
    iVar16 = 0;
    dVar24 = (double)lbl_8218EC10;
    do {
      uVar14 = 0;
      piVar11 = *(int **)(iVar16 + *piVar11);
      iVar9 = *piVar11;
      if (piVar11[1] - iVar9 >> 2 != 0) {
        iVar18 = 0;
        do {
          dVar23 = (double)*(float *)(*(int *)(iVar18 + iVar9) + 0x20);
          if ((dVar23 < (double)(float)(dVar26 - dVar24)) ||
             ((double)(float)(dVar26 + dVar24) < dVar23)) {
            if (*(int *)(iVar7 + 0x2b0) == 2) {
              if (dVar23 < dVar26) {
LAB_82356140:
                if (piVar13 != piVar21) {
                  piStack_cc = piVar13;
                }
                piVar21 = (int *)&uStack_e8;
                uStack_e8 = CONCAT44(iVar20,uVar14);
                goto LAB_8235615c;
              }
            }
            else if (dVar26 < dVar23) goto LAB_82356140;
          }
          else {
            piVar21 = &iStack_f0;
            dVar23 = dVar26;
            iStack_f0 = iVar20;
            uStack_ec = uVar14;
LAB_8235615c:
            fn_823571B0(&piStack_d0,piVar21);
            dVar26 = dVar23;
            piVar21 = piStack_cc;
            piVar13 = piStack_d0;
          }
          iVar9 = *piVar11;
          uVar14 = uVar14 + 1;
          iVar18 = iVar18 + 4;
        } while (uVar14 < (uint)(piVar11[1] - iVar9 >> 2));
      }
      piVar11 = *(int **)(iVar7 + 0x1c);
      iVar20 = iVar20 + 1;
      iVar16 = iVar16 + 4;
    } while (iVar20 < piVar11[1] - *piVar11 >> 2);
  }
  piVar11 = *(int **)(iVar7 + 0x298);
  if (piVar11 != (int *)0x0) {
    iStack_f0 = 0;
    iVar20 = 0;
    uVar14 = 0;
    piVar17 = (int *)*piVar11;
    piVar11 = (int *)piVar11[1];
    if (piVar17 != piVar11) {
      dVar24 = (double)lbl_821CC160;
      dVar26 = (double)lbl_821CA460;
      do {
        iVar16 = piVar17[3];
        if (iVar16 != 0) {
          cVar10 = fn_828EA5F8(iVar16);
          if ((cVar10 == '\0') && (*(char *)(iVar16 + 0xd8) == '\0')) {
            iVar20 = iVar20 + 1;
            iStack_f0 = iVar20;
          }
          else {
            cVar10 = fn_828EA5F8(iVar16);
            if ((cVar10 != '\0') && (*(char *)(iVar16 + 0xd8) == '\0')) {
              uVar14 = uVar14 + 1;
              iVar9 = *piVar17;
              iVar15 = 0;
              iVar18 = *(int *)(*(int *)(**(int **)(iVar9 * 4 + **(int **)(iVar7 + 0x1c)) +
                                        piVar17[1] * 4) + 0x1c);
              piVar8 = piVar13;
              dVar23 = dVar24;
              dVar25 = dVar24;
              dVar27 = dVar24;
              if (piVar13 == piVar21) {
LAB_823563e4:
                bVar5 = false;
                if (*(int *)(*(int *)(iVar16 + 0x100) + 0x8f0) != 0) {
                  *(undefined4 *)(*(int *)(iVar16 + 0x100) + 0x8f0) = 0;
                }
              }
              else {
                do {
                  if ((*piVar8 != iVar9) || (bVar5 = true, piVar8[1] != piVar17[1])) {
                    bVar5 = false;
                  }
                } while ((!bVar5) && (piVar8 = piVar8 + 2, piVar8 != piVar21));
                if ((piVar8 == piVar21) ||
                   ((((int)piVar21 - (int)piVar13 & 0xfffffff8U) != 8 ||
                    ((uint)(((*(int **)(iVar7 + 0x298))[1] - **(int **)(iVar7 + 0x298)) / 0x5c) < 2)
                    ))) goto LAB_823563e4;
                bVar5 = true;
                uVar3 = *(uint *)(*(int *)(iVar16 + 0x100) + 0x8f0);
                uVar12 = uVar3 + 1;
                if (uVar3 != uVar12) {
                  *(uint *)(*(int *)(iVar16 + 0x100) + 0x8f0) = uVar12;
                }
                if (*(uint *)(*(int *)(iVar16 + 0x100) + 0x8d8) < uVar12) {
                  *(uint *)(*(int *)(iVar16 + 0x100) + 0x8d8) = uVar12;
                }
                if ((ulonglong)*(uint *)(iVar7 + 0x2c4) != 0) {
                  lVar6 = fn_82526AF8(0x358,0xffffffff831cf9d4,
                                            (ulonglong)*(uint *)(iVar7 + 0x2c4) + 0x20);
                  piVar8 = (int *)**(int **)(iVar7 + 0x298);
                  uVar19 = -(ulonglong)(lVar6 != -1) & lVar6 + 1U;
                  if (piVar8 != (int *)(*(int **)(iVar7 + 0x298))[1]) {
                    do {
                      iVar20 = piVar8[3];
                      if (iVar9 != *piVar8) {
                        if (iVar20 == 0) {
                          iVar15 = iVar15 + 1;
                        }
                        else {
                          dVar25 = (double)(float)(dVar25 + dVar26);
                          cVar10 = fn_828EA5F8(iVar20);
                          if ((cVar10 != '\0') && (*(char *)(iVar20 + 0xd8) == '\0')) {
                            uStack_e8 = (ulonglong)
                                        *(uint *)(*(int *)(iVar20 + 0x100) +
                                                 (int)((uVar19 & 0xffffffff) << 2));
                            dVar23 = (double)(float)((double)uStack_e8 + dVar23);
                          }
                        }
                      }
                      piVar8 = piVar8 + 0x17;
                    } while (piVar8 != *(int **)(*(int *)(iVar7 + 0x298) + 4));
                    if (dVar25 != dVar27) {
                      dVar24 = (double)(float)(dVar23 / dVar25);
                    }
                  }
                  uStack_e0 = (ulonglong)
                              *(uint *)((int)((uVar19 & 0xffffffff) << 2) + *(int *)(iVar16 + 0x100)
                                       );
                  dVar23 = (double)uStack_e0;
                  iVar20 = iStack_f0;
                }
              }
              pfVar4 = *(float **)(iVar7 + 0x2c4);
              if (pfVar4 != (float *)0x0) {
                if (bVar5) {
                  piVar17[0x16] = (int)(pfVar4[1] + (float)piVar17[0x16]);
                  piVar8 = (int *)fn_8225F160();
                  if (*piVar8 == 2) {
                    iVar9 = fn_8225F160();
                    iVar9 = *(int *)(iVar9 + 0x5c) + 3;
LAB_8235643c:
                    fVar1 = (float)piVar17[0x16];
                    fVar2 = *(float *)(iVar9 * 4 + *(int *)(iVar7 + 0x2c4));
                  }
                  else {
                    if ((dVar25 == dVar27) && (iVar15 != 0)) {
                      iVar9 = fn_8225F160();
                      iVar9 = *(int *)(iVar9 + 0x14) + 4;
                      goto LAB_8235643c;
                    }
                    iVar9 = *(int *)(iVar7 + 0x2c4);
                    fVar1 = (float)piVar17[0x16];
                    if (dVar24 == dVar27) {
                      fVar2 = *(float *)(iVar9 + 0x10);
                    }
                    else if (dVar23 <= dVar24) {
                      fVar2 = *(float *)(iVar9 + 0x18);
                    }
                    else {
                      fVar2 = *(float *)(iVar9 + 0x14);
                    }
                  }
                  fVar2 = fVar2 + fVar1;
                }
                else {
                  fVar2 = *pfVar4 + (float)piVar17[0x16];
                }
                piVar17[0x16] = (int)fVar2;
                if (iVar18 != 0) {
                  piVar17[0x16] = (int)(*(float *)(*(int *)(iVar7 + 0x2c4) + 8) + fVar2);
                }
              }
              dVar24 = dVar27;
              if (((*(int *)(iVar7 + 0x2c0) != 0) && (bVar5)) && (lbl_832765BC == 0)) {
                lVar6 = fn_82526AF8((ulonglong)lbl_83265A40 - 1,(ulonglong)lbl_83265A44 + 4);
                uVar22 = 0;
                uVar19 = -(ulonglong)(lVar6 != -1) & lVar6 + 1U;
                iVar9 = fn_8225F160();
                if (*(int *)(iVar9 + 0x14) == 3) {
                  lVar6 = fn_82526AF8((ulonglong)lbl_83265A40 - 1,(ulonglong)lbl_83265A44 + 4,
                                            (ulonglong)*(uint *)(iVar7 + 0x2c0) + 0x40);
                  uVar22 = -(ulonglong)(lVar6 != -1) & lVar6 + 1U;
                }
                piVar8 = (int *)fn_8225F160();
                if (*piVar8 != 1) {
                  if ((uVar19 & 0xffffffff) != 0) {
                    fn_822B17A8(iVar16,uVar19,0);
                  }
                  if ((uVar22 & 0xffffffff) != 0) {
                    fn_822B17A8(iVar16,uVar22,0);
                  }
                }
              }
            }
          }
        }
        piVar17 = piVar17 + 0x17;
      } while (piVar17 != piVar11);
    }
    for (piVar21 = (int *)**(undefined4 **)(iVar7 + 0x298); piVar21 != piVar11;
        piVar21 = piVar21 + 0x17) {
      iVar7 = piVar21[3];
      if (((iVar7 != 0) && (cVar10 = fn_828EA5F8(iVar7), cVar10 != '\0')) &&
         (*(char *)(iVar7 + 0xd8) == '\0')) {
        if ((1 < uVar14) &&
           (iVar16 = *(int *)(*(int *)(iVar7 + 0x100) + 0x8e8), iVar9 = iVar16 + uVar14 + -1,
           iVar16 != iVar9)) {
          *(int *)(*(int *)(iVar7 + 0x100) + 0x8e8) = iVar9;
        }
        if ((iVar20 != 0) &&
           (iVar16 = *(int *)(*(int *)(iVar7 + 0x100) + 0x8e4), iVar9 = iVar16 + iVar20,
           iVar16 != iVar9)) {
          *(int *)(*(int *)(iVar7 + 0x100) + 0x8e4) = iVar9;
        }
      }
    }
  }
  fn_82670C10(&piStack_d0);
  fn_82F6A590();
  return;
}

