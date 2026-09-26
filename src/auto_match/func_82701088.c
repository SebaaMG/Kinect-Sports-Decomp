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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_150;
extern unsigned int fStack_154;
extern unsigned int fStack_158;
extern unsigned int fStack_15c;
extern unsigned int fStack_160;
extern unsigned int fStack_164;
extern unsigned int fStack_168;
extern unsigned int fStack_16c;
extern unsigned int fStack_170;
extern unsigned int fStack_184;
extern unsigned int fStack_188;
extern unsigned int fStack_18c;
extern unsigned int fStack_190;
extern int fn_8267C498();
extern int fn_8268CC00();
extern int fn_8268D280();
extern int fn_8269A2C8();
extern int fn_82700F80();
extern int fn_82F68918();
extern int fn_82F6A510();
extern int fn_82F6A55C();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005718;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005C88;
extern unsigned int lbl_8200DBB4;
extern unsigned int lbl_8200DE18;
extern unsigned int lbl_8200DE1C;
extern unsigned int lbl_820885C8;
extern unsigned int lbl_821AAD20;


void fn_82701088(undefined8 param_1,short param_2,int param_3,byte *param_4,undefined8 param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  int iVar10;
  char cVar11;
  undefined8 uVar9;
  bool bVar12;
  ulonglong uVar13;
  bool bVar14;
  int iVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  longlong alStack_180 [2];
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [256];
  
  iVar10 = fn_82F6A510();
  if ((param_3 == 5) &&
     ((piVar5 = (int *)param_5, param_2 == 9 ||
      ((((*(ushort *)(iVar10 + 0xb00) & 1) != 0 || (*(char *)((int)piVar5 + 0x1a) != '\0')) &&
       ((param_2 == 0x25 || (((param_2 == 0x27 || (param_2 == 0x26)) || (param_2 == 0x28)))))))))) {
    fn_82700F80(iVar10,param_5,0);
    uVar1 = *(uint *)(iVar10 + 0xad0);
    uVar13 = (ulonglong)uVar1;
    if (param_2 == 9) {
      uVar16 = (ulonglong)(uint)piVar5[1];
      iVar15 = 0;
      piVar5[1] = -1;
      if (0 < (int)uVar1) {
        do {
          if ((*param_4 & 1) == 0) {
            uVar16 = uVar16 + 1;
            uVar16 = (ulonglong)(uVar1 >> 0x1f) -
                     (((uVar16 & 0xffffffff) >> 0x1f) + (ulonglong)(uVar16 < uVar13)) & uVar16;
          }
          else {
            uVar16 = uVar16 - 1;
            if ((longlong)uVar16 < 0) {
              uVar16 = uVar13 - 1;
            }
          }
          piVar2 = *(int **)((int)((uVar16 & 0xffffffff) << 2) + *(int *)(iVar10 + 0xacc));
          if ((piVar2 != (int *)0x0) &&
             ((*(char *)((int)piVar5 + 0x1b) != '\0' ||
              (cVar11 = (**(code **)(*piVar2 + 0xb4))(), cVar11 != '\0')))) {
            piVar5[1] = (int)uVar16;
            break;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < (int)uVar1);
      }
      *(uint *)(iVar10 + 0xb00) = *(uint *)(iVar10 + 0xb00) | 0x400;
    }
    else if (((int *)*piVar5 != (int *)0x0) &&
            ((cVar11 = (**(code **)(*(int *)*piVar5 + 0xb8))(), cVar11 != '\0' ||
             ((bVar6 = *(byte *)(iVar10 + 0xb00) & 3, bVar6 != 3 && (bVar6 == 1)))))) {
      iVar15 = *piVar5;
      fn_8268CC00(auStack_150);
      fn_8269A2C8(iVar15,auStack_150);
      uVar9 = (**(code **)(*(int *)*piVar5 + 0xd4))(alStack_180);
      dVar29 = (double)lbl_821AAD20;
      fStack_190 = lbl_821AAD20;
      fStack_18c = lbl_821AAD20;
      fStack_188 = lbl_821AAD20;
      fStack_184 = lbl_821AAD20;
      fn_8268D280(auStack_150,&fStack_190,uVar9);
      if (*(short *)(piVar5 + 6) == param_2) {
        if ((param_2 == 0x26) || (param_2 == 0x28)) {
          fStack_188 = (float)piVar5[4];
          fStack_190 = (float)piVar5[2];
        }
        else if ((param_2 == 0x27) || (param_2 == 0x25)) {
          fStack_18c = (float)piVar5[3];
          fStack_184 = (float)piVar5[5];
        }
      }
      else {
        piVar5[2] = (int)fStack_190;
        piVar5[3] = (int)fStack_18c;
        piVar5[4] = (int)fStack_188;
        piVar5[5] = (int)fStack_184;
        *(short *)(piVar5 + 6) = param_2;
      }
      if ((param_2 == 0x27) || (param_2 == 0x25)) {
        *(uint *)(iVar10 + 0xb00) = *(uint *)(iVar10 + 0xb00) | 0x400;
        dVar17 = (double)lbl_8200DE1C;
        uVar16 = (ulonglong)(uint)piVar5[1];
        dVar31 = dVar17;
        if (param_2 != 0x27) {
          dVar31 = (double)lbl_8200DE18;
        }
        uVar13 = uVar13 - 1;
        bVar14 = false;
        iVar15 = 0;
        if (0 < (longlong)uVar13) {
          dVar34 = (double)lbl_82005718;
          dVar33 = (double)lbl_82002C5C;
          dVar24 = (double)lbl_820885C8;
          dVar26 = (double)lbl_8200DBB4;
          dVar25 = (double)lbl_82005C88;
          dVar28 = (double)lbl_82002AE0;
          dVar27 = lbl_82005730;
          dVar30 = dVar31;
          dVar32 = dVar17;
          do {
            if (param_2 == 0x27) {
              uVar16 = uVar16 + 1;
            }
            else {
              uVar16 = uVar16 - 1;
            }
            if ((int)uVar16 < (int)uVar1) {
              if ((int)uVar16 < 0) {
                uVar16 = uVar13;
              }
            }
            else {
              uVar16 = 0;
            }
            iVar4 = *(int *)(iVar10 + 0xacc);
            iVar8 = (int)((uVar16 & 0xffffffff) << 2);
            iVar3 = *(int *)(iVar8 + iVar4);
            if (iVar3 != 0) {
              *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
            }
            piVar2 = *(int **)(iVar8 + iVar4);
            if ((*(char *)((int)piVar5 + 0x1b) == '\0') &&
               (cVar11 = (**(code **)(*piVar2 + 0xb4))(piVar2), cVar11 == '\0')) goto LAB_82701c18;
            fn_8268CC00(auStack_100);
            fn_8269A2C8(piVar2,auStack_100);
            uVar9 = (**(code **)(*piVar2 + 0xd4))(auStack_110,piVar2);
            fStack_170 = (float)dVar29;
            fStack_16c = (float)dVar29;
            fStack_168 = (float)dVar29;
            fStack_164 = (float)dVar29;
            fn_8268D280(auStack_100,&fStack_170,uVar9);
            dVar21 = (double)fStack_190;
            bVar12 = false;
            dVar36 = (double)fStack_188;
            if (param_2 == 0x27) {
              dVar35 = (double)(float)(dVar36 + dVar28);
              dVar19 = dVar25;
            }
            else {
              dVar19 = (double)(float)(dVar21 - dVar28);
              dVar35 = dVar26;
            }
            dVar20 = (double)fStack_164;
            dVar18 = (double)fStack_18c;
            dVar38 = (double)fStack_168;
            dVar22 = (double)fStack_184;
            dVar23 = (double)fStack_16c;
            dVar37 = (double)fStack_170;
            if ((((dVar20 < dVar18) || (dVar22 < dVar23)) || (dVar19 < dVar37)) ||
               (bVar7 = true, dVar38 < dVar35)) {
              bVar7 = false;
            }
            if (bVar7) {
              if (((dVar20 < dVar18) || (dVar22 < dVar23)) ||
                 ((dVar19 < dVar37 || (bVar7 = true, dVar38 < dVar35)))) {
                bVar7 = false;
              }
              dVar35 = dVar29;
              dVar19 = dVar29;
              if (bVar7) {
                dVar35 = dVar23;
                if (dVar23 <= dVar18) {
                  dVar35 = dVar18;
                }
                dVar19 = dVar20;
                if (dVar22 < dVar20) {
                  dVar19 = dVar22;
                }
              }
              if (dVar24 <= (double)(float)(dVar19 - dVar35)) {
                bVar12 = true;
              }
            }
            if ((!bVar12) || (bVar14)) {
              if ((!bVar14) || (bVar12)) {
                dVar35 = (double)(float)((double)(float)(dVar22 - dVar18) * dVar33 + dVar18);
                if (param_2 == 0x27) {
                  if (dVar37 < dVar36) {
                    dVar37 = dVar36;
                  }
                  dVar21 = dVar31;
                  if (dVar31 < dVar36) {
                    dVar21 = dVar36;
                  }
                  if ((dVar38 < dVar37) || (bVar12 = true, dVar20 < dVar23)) {
                    bVar12 = false;
                  }
                  if (bVar12) {
                    dVar19 = (double)(float)((double)(float)(dVar38 - dVar37) * dVar34);
                    if (dVar19 <= dVar29) {
                      dVar19 = dVar19 - dVar27;
                    }
                    else {
                      dVar19 = dVar19 + dVar27;
                    }
                    alStack_180[0] = (longlong)(int)dVar19;
                    if (3 < (int)dVar19) {
                      dVar20 = (double)(float)((double)(float)(dVar20 - dVar23) * dVar33 + dVar23);
                      dVar18 = (double)(float)((double)(float)(dVar17 - dVar32) * dVar33 + dVar32);
                      dVar19 = (double)fn_82F68918((double)(float)((double)(float)(dVar37 - dVar36)
                                                                   * dVar34));
                      dVar38 = (double)(float)dVar19;
                      dVar19 = (double)fn_82F68918((double)(float)((double)(float)(dVar20 - dVar35)
                                                                   * dVar34));
                      dVar19 = (double)(float)dVar19;
                      dVar21 = (double)fn_82F68918((double)(float)((double)(float)(dVar21 - dVar36)
                                                                   * dVar34));
                      dVar36 = (double)(float)dVar21;
                      dVar21 = (double)fn_82F68918((double)(float)((double)(float)(dVar18 - dVar35)
                                                                   * dVar34));
                      if (dVar29 <= dVar38) {
LAB_82701ba4:
                        dVar21 = (double)(float)dVar21;
                        if (bVar14) {
                          dVar35 = dVar38;
                          if (dVar38 < 0.0) {
                            dVar35 = -dVar38;
                          }
                          dVar37 = dVar36;
                          if (dVar36 < 0.0) {
                            dVar37 = -dVar36;
                          }
                          if (dVar37 <= dVar35) {
                            if (dVar38 == dVar36) {
                              dVar35 = dVar19;
                              if (dVar19 < 0.0) {
                                dVar35 = -dVar19;
                              }
                              dVar37 = dVar21;
                              if (dVar21 < 0.0) {
                                dVar37 = -dVar21;
                              }
                              if (dVar35 < dVar37) goto LAB_82701c04;
                            }
                            if (bVar14) goto LAB_82701c18;
                            goto LAB_82701bec;
                          }
                        }
                        else {
LAB_82701bec:
                          if ((float)(dVar21 * dVar21 + (double)(float)(dVar36 * dVar36)) <=
                              (float)(dVar19 * dVar19 + (double)(float)(dVar38 * dVar38)))
                          goto LAB_82701c18;
                        }
LAB_82701c04:
                        dVar31 = (double)fStack_170;
                        dVar32 = (double)fStack_16c;
                        dVar30 = (double)fStack_168;
                        dVar17 = (double)fStack_164;
                        goto LAB_82701c14;
                      }
                    }
                  }
                }
                else {
                  if (dVar21 < dVar38) {
                    dVar38 = dVar21;
                  }
                  dVar36 = dVar30;
                  if (dVar21 < dVar30) {
                    dVar36 = dVar21;
                  }
                  if ((dVar38 < dVar37) || (bVar12 = true, dVar20 < dVar23)) {
                    bVar12 = false;
                  }
                  if (bVar12) {
                    dVar19 = (double)(float)((double)(float)(dVar38 - dVar37) * dVar34);
                    if (dVar19 <= dVar29) {
                      dVar19 = dVar19 - dVar27;
                    }
                    else {
                      dVar19 = dVar19 + dVar27;
                    }
                    alStack_180[0] = (longlong)(int)dVar19;
                    if (3 < (int)dVar19) {
                      dVar18 = (double)(float)((double)(float)(dVar20 - dVar23) * dVar33 + dVar23);
                      dVar37 = (double)(float)((double)(float)(dVar17 - dVar32) * dVar33 + dVar32);
                      dVar19 = (double)fn_82F68918((double)(float)((double)(float)(dVar38 - dVar21)
                                                                   * dVar34));
                      dVar38 = (double)(float)dVar19;
                      dVar19 = (double)fn_82F68918((double)(float)((double)(float)(dVar18 - dVar35)
                                                                   * dVar34));
                      dVar19 = (double)(float)dVar19;
                      dVar21 = (double)fn_82F68918((double)(float)((double)(float)(dVar36 - dVar21)
                                                                   * dVar34));
                      dVar36 = (double)(float)dVar21;
                      dVar21 = (double)fn_82F68918((double)(float)((double)(float)(dVar37 - dVar35)
                                                                   * dVar34));
                      if (dVar38 <= dVar29) goto LAB_82701ba4;
                    }
                  }
                }
              }
            }
            else {
              bVar14 = true;
              dVar31 = dVar37;
              dVar30 = dVar38;
              dVar17 = dVar20;
              dVar32 = dVar23;
LAB_82701c14:
              piVar5[1] = (int)uVar16;
            }
LAB_82701c18:
            fn_8267C498(piVar2);
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)uVar13);
        }
      }
      else if ((param_2 == 0x26) || (param_2 == 0x28)) {
        *(uint *)(iVar10 + 0xb00) = *(uint *)(iVar10 + 0xb00) | 0x400;
        dVar17 = (double)lbl_8200DE1C;
        uVar16 = (ulonglong)(uint)piVar5[1];
        dVar31 = dVar17;
        if (param_2 != 0x28) {
          dVar31 = (double)lbl_8200DE18;
        }
        uVar13 = uVar13 - 1;
        bVar14 = false;
        iVar15 = 0;
        if (0 < (longlong)uVar13) {
          dVar34 = (double)lbl_82005718;
          dVar33 = (double)lbl_82002C5C;
          dVar24 = (double)lbl_820885C8;
          dVar25 = (double)lbl_8200DBB4;
          dVar26 = (double)lbl_82005C88;
          dVar28 = (double)lbl_82002AE0;
          dVar27 = lbl_82005730;
          dVar30 = dVar29;
          dVar32 = dVar29;
          do {
            if (param_2 == 0x28) {
              uVar16 = uVar16 + 1;
            }
            else {
              uVar16 = uVar16 - 1;
            }
            if ((int)uVar16 < (int)uVar1) {
              if ((int)uVar16 < 0) {
                uVar16 = uVar13;
              }
            }
            else {
              uVar16 = 0;
            }
            iVar4 = *(int *)(iVar10 + 0xacc);
            iVar8 = (int)((uVar16 & 0xffffffff) << 2);
            iVar3 = *(int *)(iVar8 + iVar4);
            if (iVar3 != 0) {
              *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
            }
            piVar2 = *(int **)(iVar8 + iVar4);
            if ((*(char *)((int)piVar5 + 0x1b) == '\0') &&
               (cVar11 = (**(code **)(*piVar2 + 0xb4))(piVar2), cVar11 == '\0')) goto LAB_82701774;
            fn_8268CC00(auStack_130);
            fn_8269A2C8(piVar2,auStack_130);
            uVar9 = (**(code **)(*piVar2 + 0xd4))(auStack_110,piVar2);
            fStack_160 = (float)dVar29;
            fStack_15c = (float)dVar29;
            fStack_158 = (float)dVar29;
            fStack_154 = (float)dVar29;
            fn_8268D280(auStack_130,&fStack_160,uVar9);
            dVar21 = (double)fStack_18c;
            bVar12 = false;
            dVar36 = (double)fStack_184;
            if (param_2 == 0x28) {
              dVar35 = dVar26;
              dVar19 = (double)(float)(dVar36 + dVar28);
            }
            else {
              dVar35 = (double)(float)(dVar21 - dVar28);
              dVar19 = dVar25;
            }
            dVar37 = (double)fStack_154;
            dVar18 = (double)fStack_190;
            dVar20 = (double)fStack_158;
            dVar22 = (double)fStack_188;
            dVar38 = (double)fStack_15c;
            dVar23 = (double)fStack_160;
            if ((((dVar37 < dVar19) || (dVar35 < dVar38)) || (dVar22 < dVar23)) ||
               (bVar7 = true, dVar20 < dVar18)) {
              bVar7 = false;
            }
            if (bVar7) {
              if (((dVar37 < dVar19) || (dVar35 < dVar38)) ||
                 ((dVar22 < dVar23 || (bVar7 = true, dVar20 < dVar18)))) {
                bVar7 = false;
              }
              dVar35 = dVar29;
              dVar19 = dVar29;
              if (bVar7) {
                dVar35 = dVar23;
                if (dVar23 <= dVar18) {
                  dVar35 = dVar18;
                }
                dVar19 = dVar20;
                if (dVar22 < dVar20) {
                  dVar19 = dVar22;
                }
              }
              if (dVar24 <= (double)(float)(dVar19 - dVar35)) {
                bVar12 = true;
              }
            }
            if ((!bVar12) || (bVar14)) {
              if ((!bVar14) || (bVar12)) {
                dVar35 = (double)(float)((double)(float)(dVar22 - dVar18) * dVar33 + dVar18);
                if (param_2 == 0x26) {
                  if (dVar21 < dVar37) {
                    dVar37 = dVar21;
                  }
                  dVar36 = dVar30;
                  if (dVar21 < dVar30) {
                    dVar36 = dVar21;
                  }
                  if ((dVar20 < dVar23) || (bVar12 = true, dVar37 < dVar38)) {
                    bVar12 = false;
                  }
                  if (bVar12) {
                    dVar19 = (double)(float)((double)(float)(dVar37 - dVar38) * dVar34);
                    if (dVar19 <= dVar29) {
                      dVar19 = dVar19 - dVar27;
                    }
                    else {
                      dVar19 = dVar19 + dVar27;
                    }
                    alStack_180[0] = (longlong)(int)dVar19;
                    if (3 < (int)dVar19) {
                      dVar38 = (double)(float)((double)(float)(dVar32 - dVar17) * dVar33 + dVar17);
                      dVar19 = (double)fn_82F68918((double)(float)((double)(float)((double)(float)(
                                                  (double)(float)(dVar20 - dVar23) * dVar33 + dVar23
                                                  ) - dVar35) * dVar34));
                      dVar18 = (double)(float)dVar19;
                      dVar19 = (double)fn_82F68918((double)(float)((double)(float)(dVar37 - dVar21)
                                                                   * dVar34));
                      dVar19 = (double)(float)dVar19;
                      dVar35 = (double)fn_82F68918((double)(float)((double)(float)(dVar38 - dVar35)
                                                                   * dVar34));
                      dVar35 = (double)(float)dVar35;
                      dVar21 = (double)fn_82F68918((double)(float)((double)(float)(dVar36 - dVar21)
                                                                   * dVar34));
                      if (dVar19 <= dVar29) {
LAB_82701700:
                        dVar21 = (double)(float)dVar21;
                        if (bVar14) {
                          dVar36 = dVar19;
                          if (dVar19 < 0.0) {
                            dVar36 = -dVar19;
                          }
                          dVar37 = dVar21;
                          if (dVar21 < 0.0) {
                            dVar37 = -dVar21;
                          }
                          if (dVar37 <= dVar36) {
                            if (dVar19 == dVar21) {
                              dVar36 = dVar18;
                              if (dVar18 < 0.0) {
                                dVar36 = -dVar18;
                              }
                              dVar37 = dVar35;
                              if (dVar35 < 0.0) {
                                dVar37 = -dVar35;
                              }
                              if (dVar36 < dVar37) goto LAB_82701760;
                            }
                            if (bVar14) goto LAB_82701774;
                            goto LAB_82701748;
                          }
                        }
                        else {
LAB_82701748:
                          if ((float)(dVar35 * dVar35 + (double)(float)(dVar21 * dVar21)) <=
                              (float)(dVar19 * dVar19 + (double)(float)(dVar18 * dVar18)))
                          goto LAB_82701774;
                        }
LAB_82701760:
                        dVar17 = (double)fStack_160;
                        dVar31 = (double)fStack_15c;
                        dVar32 = (double)fStack_158;
                        dVar30 = (double)fStack_154;
                        goto LAB_82701770;
                      }
                    }
                  }
                }
                else {
                  if (dVar38 < dVar36) {
                    dVar38 = dVar36;
                  }
                  dVar21 = dVar31;
                  if (dVar31 < dVar36) {
                    dVar21 = dVar36;
                  }
                  if ((dVar20 < dVar23) || (bVar12 = true, dVar37 < dVar38)) {
                    bVar12 = false;
                  }
                  if (bVar12) {
                    dVar19 = (double)(float)((double)(float)(dVar37 - dVar38) * dVar34);
                    if (dVar19 <= dVar29) {
                      dVar19 = dVar19 - dVar27;
                    }
                    else {
                      dVar19 = dVar19 + dVar27;
                    }
                    alStack_180[0] = (longlong)(int)dVar19;
                    if (3 < (int)dVar19) {
                      dVar37 = (double)(float)((double)(float)(dVar32 - dVar17) * dVar33 + dVar17);
                      dVar19 = (double)fn_82F68918((double)(float)((double)(float)((double)(float)(
                                                  (double)(float)(dVar20 - dVar23) * dVar33 + dVar23
                                                  ) - dVar35) * dVar34));
                      dVar18 = (double)(float)dVar19;
                      dVar19 = (double)fn_82F68918((double)(float)((double)(float)(dVar38 - dVar36)
                                                                   * dVar34));
                      dVar19 = (double)(float)dVar19;
                      dVar35 = (double)fn_82F68918((double)(float)((double)(float)(dVar37 - dVar35)
                                                                   * dVar34));
                      dVar35 = (double)(float)dVar35;
                      dVar21 = (double)fn_82F68918((double)(float)((double)(float)(dVar21 - dVar36)
                                                                   * dVar34));
                      if (dVar29 <= dVar19) goto LAB_82701700;
                    }
                  }
                }
              }
            }
            else {
              bVar14 = true;
              dVar30 = dVar37;
              dVar31 = dVar38;
              dVar32 = dVar20;
              dVar17 = dVar23;
LAB_82701770:
              piVar5[1] = (int)uVar16;
            }
LAB_82701774:
            fn_8267C498(piVar2);
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)uVar13);
        }
      }
    }
    iVar15 = piVar5[1];
    if ((iVar15 < 0) || ((int)uVar1 <= iVar15)) {
      if (*piVar5 != 0) {
        fn_8267C498();
      }
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(iVar10 + 0xacc);
      iVar4 = *(int *)(iVar15 * 4 + iVar10);
      if (iVar4 != 0) {
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      }
      if (*piVar5 != 0) {
        fn_8267C498();
      }
      iVar10 = *(int *)(iVar15 * 4 + iVar10);
    }
    *piVar5 = iVar10;
  }
  fn_82F6A55C();
  return;
}

