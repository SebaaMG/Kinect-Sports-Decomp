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
extern int fn_828FFA80();
extern int fn_82F65B18();
extern int fn_82F66A40();
extern int fn_82F66A80();
extern int fn_82F68CC0();
extern unsigned int iStack00000014;
extern unsigned int iStack_108;
extern unsigned int iStack_110;
extern unsigned int iStack_11c;
extern unsigned int iStack_120;
extern unsigned int iStack_128;
extern unsigned int iStack_12c;
extern unsigned int iStack_ec;
extern unsigned int lbl_8202BD28;
extern unsigned int uStack_150;


uint fn_828FFAC8(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  char cVar11;
  char *pcVar9;
  char *pcVar10;
  char cVar14;
  uint uVar12;
  char *pcVar13;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined *puVar18;
  int iStack00000014;
  uint uStack_150;
  char acStack_140 [16];
  char *pcStack_130;
  int iStack_12c;
  int iStack_128;
  undefined *puStack_124;
  int iStack_120;
  int iStack_11c;
  char *pcStack_118;
  char *pcStack_114;
  int iStack_110;
  char *pcStack_10c;
  int iStack_108;
  char *pcStack_104;
  char *pcStack_100;
  char *pcStack_fc;
  char *pcStack_f8;
  char *pcStack_f4;
  char *pcStack_f0;
  int iStack_ec;
  char *pcStack_e8;
  char *pcStack_e4;
  char *pcStack_e0;
  char *pcStack_dc;
  char *pcStack_d8;
  char *pcStack_d4;
  char *pcStack_d0;
  char *pcStack_cc;
  char *pcStack_c8;
  char *pcStack_c4;
  char *pcStack_c0;
  char *pcStack_bc;
  char *pcStack_b8;
  char *pcStack_b4;
  char *pcStack_b0;
  char *pcStack_ac;
  char *pcStack_a8;
  
  pcStack_130 = *(char **)(param_2 + 8);
  uStack_150 = 0x10d;
  *(undefined4 *)(param_1 + 0x58) = 0;
  iVar16 = 0;
  uVar15 = 0;
  uVar17 = 0;
  iStack_ec = 1;
  iStack_128 = 0;
  iStack_11c = 0;
  iStack_108 = 0;
  iStack_120 = 0;
  iStack_12c = 0;
  iStack_110 = 0;
  iStack00000014 = param_1;
  if (*pcStack_130 == '\0') {
LAB_82900d34:
    *(int *)(iStack00000014 + 0x40) = iVar16;
    *(uint *)(iStack00000014 + 0x44) = uVar15;
    *(uint *)(iStack00000014 + 0x48) = uVar17;
    *(undefined4 *)(iStack00000014 + 0x58) = 0;
  }
  else {
    puStack_124 = &lbl_8202BD28;
    pcStack_a8 = "volume";
    pcStack_c4 = "d4";
    pcStack_b0 = "le";
    pcStack_b8 = "ne";
    pcStack_b4 = "ge";
    pcStack_c0 = "lt";
    pcStack_ac = "eq";
    pcStack_d4 = "sample";
    pcStack_bc = "gt";
    pcStack_c8 = "depth";
    pcStack_dc = "positiont is not a valid semantic for Alpha, Alpha2 or Final GPU.";
    pcStack_d0 = "color";
    pcStack_f8 = "positiont";
    pcStack_e4 = "binormal";
    pcStack_d8 = "tessfactor";
    pcStack_f0 = "tangent";
    pcStack_e0 = "psize";
    pcStack_f4 = "texcoord";
    pcStack_e8 = "normal";
    pcStack_cc = "blendindices";
    bVar3 = false;
    pcStack_118 = "d2";
    bVar2 = false;
    uVar17 = 0;
    iVar16 = 0;
    uVar15 = 0;
    iVar5 = 0;
    puVar18 = &lbl_8202BD28;
    pcStack_114 = "x2";
    pcStack_10c = "x4";
    pcStack_104 = "x8";
    pcStack_fc = "centroid";
    pcStack_100 = pcStack_130;
    do {
      cVar11 = *pcStack_130;
      while ((cVar11 != '\0' && (cVar11 != '_'))) {
        pcStack_130 = pcStack_130 + 1;
        cVar11 = *pcStack_130;
      }
      uVar4 = (int)pcStack_130 - (int)pcStack_100;
      if (0xf < uVar4) goto LAB_82900d54;
      fn_82F68CC0(acStack_140,pcStack_100,uVar4);
      acStack_140[uVar4] = '\0';
      if (cVar11 != '\0') {
        pcStack_130 = pcStack_130 + 1;
      }
      pcStack_100 = pcStack_130;
      if (iStack_ec == 0) {
        if (iStack_11c != 0) {
          pcVar10 = acStack_140;
          pcVar9 = "sat";
          do {
            cVar11 = *pcVar10;
            cVar14 = *pcVar9;
            if (cVar11 == '\0') break;
            pcVar10 = pcVar10 + 1;
            pcVar9 = pcVar9 + 1;
          } while (cVar11 == cVar14);
          if (cVar11 == cVar14) {
            uVar15 = uVar15 | 0x100000;
            iStack_128 = 0;
            iStack_11c = 0;
            goto LAB_82900ca0;
          }
        }
        if (iStack_108 != 0) {
          pcVar10 = acStack_140;
          pcVar9 = pcStack_fc;
          do {
            cVar11 = *pcVar10;
            cVar14 = *pcVar9;
            if (cVar11 == '\0') break;
            pcVar10 = pcVar10 + 1;
            pcVar9 = pcVar9 + 1;
          } while (cVar11 == cVar14);
          if (cVar11 == cVar14) {
            uVar15 = uVar15 | 0x400000;
            iStack_108 = 0;
            goto LAB_82900ca0;
          }
        }
        if (iStack_128 == 0) {
          if (bVar2) {
            uVar4 = 0;
            pcVar10 = acStack_140;
            pcVar9 = "2d";
            do {
              cVar11 = *pcVar10;
              cVar14 = *pcVar9;
              if (cVar11 == '\0') break;
              pcVar10 = pcVar10 + 1;
              pcVar9 = pcVar9 + 1;
            } while (cVar11 == cVar14);
            if (cVar11 == cVar14) {
              uVar4 = 0x10000000;
            }
            else {
              pcVar10 = acStack_140;
              pcVar9 = "cube";
              do {
                cVar11 = *pcVar10;
                cVar14 = *pcVar9;
                if (cVar11 == '\0') break;
                pcVar10 = pcVar10 + 1;
                pcVar9 = pcVar9 + 1;
              } while (cVar11 == cVar14);
              if (cVar11 == cVar14) {
                uVar4 = 0x18000000;
              }
              else {
                pcVar10 = acStack_140;
                pcVar9 = pcStack_a8;
                do {
                  cVar11 = *pcVar10;
                  cVar14 = *pcVar9;
                  if (cVar11 == '\0') break;
                  pcVar10 = pcVar10 + 1;
                  pcVar9 = pcVar9 + 1;
                } while (cVar11 == cVar14);
                if (cVar11 == cVar14) {
                  uVar4 = 0x20000000;
                }
              }
            }
            bVar2 = false;
            uVar17 = uVar4 | uVar17;
            if (uVar4 != 0) {
              bVar3 = false;
              iStack_120 = 0;
              goto LAB_82900ca0;
            }
          }
          if (iStack_110 != 0) {
            pcVar10 = acStack_140;
            pcVar9 = "pp";
            do {
              cVar11 = *pcVar10;
              cVar14 = *pcVar9;
              if (cVar11 == '\0') break;
              pcVar10 = pcVar10 + 1;
              pcVar9 = pcVar9 + 1;
            } while (cVar11 == cVar14);
            if (cVar11 == cVar14) {
              uVar15 = uVar15 | 0x200000;
              iStack_110 = 0;
              goto LAB_82900ca0;
            }
          }
          if (iStack_120 != 0) {
            pcVar9 = acStack_140;
            cVar11 = acStack_140[0];
            while ((cVar11 != '\0' && (iVar6 = fn_82F66A40(*pcVar9), iVar6 != 0))) {
              pcVar9 = pcVar9 + 1;
              cVar11 = *pcVar9;
            }
            if (*pcVar9 == '\0') {
              uVar4 = 0;
            }
            else {
              uVar4 = fn_82F65B18(pcVar9);
            }
            puVar18 = puStack_124;
            if (uVar4 < 0x10) {
              cVar11 = *pcVar9;
              pcVar10 = pcVar9;
              if (cVar11 != '\0') {
                *pcVar9 = '\0';
                pcVar10 = pcVar9 + 1;
              }
              cVar14 = *pcVar10;
              while ((cVar14 != '\0' && (iVar5 = fn_82F66A80(), iVar5 != 0))) {
                pcVar10 = pcVar10 + 1;
                cVar14 = *pcVar10;
              }
              if (*pcVar10 == '\0') {
                pcVar13 = acStack_140;
                pcVar10 = "position";
                do {
                  cVar14 = *pcVar13;
                  cVar1 = *pcVar10;
                  if (cVar14 == '\0') break;
                  pcVar13 = pcVar13 + 1;
                  pcVar10 = pcVar10 + 1;
                } while (cVar14 == cVar1);
                if (cVar14 == cVar1) {
LAB_829003e8:
                  uVar12 = 0;
                  if (uVar4 == 0) goto LAB_8290072c;
                }
                else {
                  pcVar13 = acStack_140;
                  pcVar10 = "blendweight";
                  do {
                    cVar14 = *pcVar13;
                    cVar1 = *pcVar10;
                    if (cVar14 == '\0') break;
                    pcVar13 = pcVar13 + 1;
                    pcVar10 = pcVar10 + 1;
                  } while (cVar14 == cVar1);
                  if (cVar14 == cVar1) {
                    uVar12 = 1;
                  }
                  else {
                    pcVar13 = acStack_140;
                    pcVar10 = pcStack_cc;
                    do {
                      cVar14 = *pcVar13;
                      cVar1 = *pcVar10;
                      if (cVar14 == '\0') break;
                      pcVar13 = pcVar13 + 1;
                      pcVar10 = pcVar10 + 1;
                    } while (cVar14 == cVar1);
                    if (cVar14 == cVar1) {
                      uVar12 = 2;
                    }
                    else {
                      pcVar13 = acStack_140;
                      pcVar10 = pcStack_e8;
                      do {
                        cVar14 = *pcVar13;
                        cVar1 = *pcVar10;
                        if (cVar14 == '\0') break;
                        pcVar13 = pcVar13 + 1;
                        pcVar10 = pcVar10 + 1;
                      } while (cVar14 == cVar1);
                      if (cVar14 == cVar1) {
                        uVar12 = 3;
                      }
                      else {
                        pcVar13 = acStack_140;
                        pcVar10 = pcStack_e0;
                        do {
                          cVar14 = *pcVar13;
                          cVar1 = *pcVar10;
                          if (cVar14 == '\0') break;
                          pcVar13 = pcVar13 + 1;
                          pcVar10 = pcVar10 + 1;
                        } while (cVar14 == cVar1);
                        if (cVar14 == cVar1) {
                          uVar12 = 4;
                        }
                        else {
                          pcVar13 = acStack_140;
                          pcVar10 = pcStack_f4;
                          do {
                            cVar14 = *pcVar13;
                            cVar1 = *pcVar10;
                            if (cVar14 == '\0') break;
                            pcVar13 = pcVar13 + 1;
                            pcVar10 = pcVar10 + 1;
                          } while (cVar14 == cVar1);
                          if (cVar14 == cVar1) {
                            uVar12 = 5;
                          }
                          else {
                            pcVar13 = acStack_140;
                            pcVar10 = pcStack_f0;
                            do {
                              cVar14 = *pcVar13;
                              cVar1 = *pcVar10;
                              if (cVar14 == '\0') break;
                              pcVar13 = pcVar13 + 1;
                              pcVar10 = pcVar10 + 1;
                            } while (cVar14 == cVar1);
                            if (cVar14 == cVar1) {
                              uVar12 = 6;
                            }
                            else {
                              pcVar13 = acStack_140;
                              pcVar10 = pcStack_e4;
                              do {
                                cVar14 = *pcVar13;
                                cVar1 = *pcVar10;
                                if (cVar14 == '\0') break;
                                pcVar13 = pcVar13 + 1;
                                pcVar10 = pcVar10 + 1;
                              } while (cVar14 == cVar1);
                              if (cVar14 == cVar1) {
                                uVar12 = 7;
                              }
                              else {
                                pcVar13 = acStack_140;
                                pcVar10 = pcStack_d8;
                                do {
                                  cVar14 = *pcVar13;
                                  cVar1 = *pcVar10;
                                  if (cVar14 == '\0') break;
                                  pcVar13 = pcVar13 + 1;
                                  pcVar10 = pcVar10 + 1;
                                } while (cVar14 == cVar1);
                                if (cVar14 == cVar1) {
                                  uVar12 = 8;
                                }
                                else {
                                  pcVar13 = acStack_140;
                                  pcVar10 = pcStack_f8;
                                  do {
                                    cVar14 = *pcVar13;
                                    cVar1 = *pcVar10;
                                    if (cVar14 == '\0') break;
                                    pcVar13 = pcVar13 + 1;
                                    pcVar10 = pcVar10 + 1;
                                  } while (cVar14 == cVar1);
                                  if (cVar14 == cVar1) {
                                    fn_828FFA80(iStack00000014,pcStack_dc);
                                    goto LAB_829003e8;
                                  }
                                  pcVar13 = acStack_140;
                                  pcVar10 = pcStack_d0;
                                  do {
                                    cVar14 = *pcVar13;
                                    cVar1 = *pcVar10;
                                    if (cVar14 == '\0') break;
                                    pcVar13 = pcVar13 + 1;
                                    pcVar10 = pcVar10 + 1;
                                  } while (cVar14 == cVar1);
                                  if (cVar14 == cVar1) {
                                    uVar12 = 10;
                                  }
                                  else {
                                    pcVar13 = acStack_140;
                                    pcVar10 = "fog";
                                    do {
                                      cVar14 = *pcVar13;
                                      cVar1 = *pcVar10;
                                      if (cVar14 == '\0') break;
                                      pcVar13 = pcVar13 + 1;
                                      pcVar10 = pcVar10 + 1;
                                    } while (cVar14 == cVar1);
                                    if (cVar14 == cVar1) {
                                      uVar12 = 0xb;
                                    }
                                    else {
                                      pcVar13 = acStack_140;
                                      pcVar10 = pcStack_c8;
                                      do {
                                        cVar14 = *pcVar13;
                                        cVar1 = *pcVar10;
                                        if (cVar14 == '\0') break;
                                        pcVar13 = pcVar13 + 1;
                                        pcVar10 = pcVar10 + 1;
                                      } while (cVar14 == cVar1);
                                      if (cVar14 == cVar1) {
                                        uVar12 = 0xc;
                                      }
                                      else {
                                        pcVar13 = acStack_140;
                                        pcVar10 = pcStack_d4;
                                        do {
                                          cVar14 = *pcVar13;
                                          cVar1 = *pcVar10;
                                          if (cVar14 == '\0') break;
                                          pcVar13 = pcVar13 + 1;
                                          pcVar10 = pcVar10 + 1;
                                        } while (cVar14 == cVar1);
                                        if (cVar14 != cVar1) goto LAB_8290072c;
                                        uVar12 = 0xd;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                bVar2 = false;
                iStack_120 = 0;
                uVar17 = (uVar4 & 0xf) << 0x10 | uVar12 | uVar17;
                iVar5 = iStack_12c;
                puVar18 = puStack_124;
                goto LAB_82900ca0;
              }
LAB_8290072c:
              *pcVar9 = cVar11;
              iVar5 = iStack_12c;
              puVar18 = puStack_124;
            }
          }
          if (bVar3) {
            pcVar9 = acStack_140;
            cVar11 = acStack_140[0];
            while ((cVar11 != '\0' && (iVar6 = fn_82F66A40(*pcVar9), iVar6 != 0))) {
              pcVar9 = pcVar9 + 1;
              cVar11 = *pcVar9;
            }
            if (*pcVar9 == '\0') {
              uVar4 = 0;
            }
            else {
              uVar4 = fn_82F65B18(pcVar9);
            }
            if (0xf < uVar4) goto LAB_82900d54;
            if (*pcVar9 != '\0') {
              *pcVar9 = '\0';
              pcVar9 = pcVar9 + 1;
            }
            cVar11 = *pcVar9;
            while ((cVar11 != '\0' && (iVar6 = fn_82F66A80(), iVar6 != 0))) {
              pcVar9 = pcVar9 + 1;
              cVar11 = *pcVar9;
            }
            if (*pcVar9 != '\0') goto LAB_82900d54;
            pcVar10 = acStack_140;
            pcVar9 = "position";
            do {
              cVar11 = *pcVar10;
              cVar14 = *pcVar9;
              if (cVar11 == '\0') break;
              pcVar10 = pcVar10 + 1;
              pcVar9 = pcVar9 + 1;
            } while (cVar11 == cVar14);
            if (cVar11 == cVar14) {
              uVar17 = 0;
            }
            else {
              pcVar10 = acStack_140;
              pcVar9 = "blendweight";
              do {
                cVar11 = *pcVar10;
                cVar14 = *pcVar9;
                if (cVar11 == '\0') break;
                pcVar10 = pcVar10 + 1;
                pcVar9 = pcVar9 + 1;
              } while (cVar11 == cVar14);
              if (cVar11 == cVar14) {
                uVar17 = 1;
              }
              else {
                pcVar10 = acStack_140;
                pcVar9 = pcStack_cc;
                do {
                  cVar11 = *pcVar10;
                  cVar14 = *pcVar9;
                  if (cVar11 == '\0') break;
                  pcVar10 = pcVar10 + 1;
                  pcVar9 = pcVar9 + 1;
                } while (cVar11 == cVar14);
                if (cVar11 == cVar14) {
                  uVar17 = 2;
                }
                else {
                  pcVar10 = acStack_140;
                  pcVar9 = pcStack_e8;
                  do {
                    cVar11 = *pcVar10;
                    cVar14 = *pcVar9;
                    if (cVar11 == '\0') break;
                    pcVar10 = pcVar10 + 1;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar11 == cVar14);
                  if (cVar11 == cVar14) {
                    uVar17 = 3;
                  }
                  else {
                    pcVar10 = acStack_140;
                    pcVar9 = pcStack_e0;
                    do {
                      cVar11 = *pcVar10;
                      cVar14 = *pcVar9;
                      if (cVar11 == '\0') break;
                      pcVar10 = pcVar10 + 1;
                      pcVar9 = pcVar9 + 1;
                    } while (cVar11 == cVar14);
                    if (cVar11 == cVar14) {
                      uVar17 = 4;
                    }
                    else {
                      pcVar10 = acStack_140;
                      pcVar9 = pcStack_f4;
                      do {
                        cVar11 = *pcVar10;
                        cVar14 = *pcVar9;
                        if (cVar11 == '\0') break;
                        pcVar10 = pcVar10 + 1;
                        pcVar9 = pcVar9 + 1;
                      } while (cVar11 == cVar14);
                      if (cVar11 == cVar14) {
                        uVar17 = 5;
                      }
                      else {
                        pcVar10 = acStack_140;
                        pcVar9 = pcStack_f0;
                        do {
                          cVar11 = *pcVar10;
                          cVar14 = *pcVar9;
                          if (cVar11 == '\0') break;
                          pcVar10 = pcVar10 + 1;
                          pcVar9 = pcVar9 + 1;
                        } while (cVar11 == cVar14);
                        if (cVar11 == cVar14) {
                          uVar17 = 6;
                        }
                        else {
                          pcVar10 = acStack_140;
                          pcVar9 = pcStack_e4;
                          do {
                            cVar11 = *pcVar10;
                            cVar14 = *pcVar9;
                            if (cVar11 == '\0') break;
                            pcVar10 = pcVar10 + 1;
                            pcVar9 = pcVar9 + 1;
                          } while (cVar11 == cVar14);
                          if (cVar11 == cVar14) {
                            uVar17 = 7;
                          }
                          else {
                            pcVar10 = acStack_140;
                            pcVar9 = pcStack_d8;
                            do {
                              cVar11 = *pcVar10;
                              cVar14 = *pcVar9;
                              if (cVar11 == '\0') break;
                              pcVar10 = pcVar10 + 1;
                              pcVar9 = pcVar9 + 1;
                            } while (cVar11 == cVar14);
                            if (cVar11 == cVar14) {
                              uVar17 = 8;
                            }
                            else {
                              pcVar10 = acStack_140;
                              pcVar9 = pcStack_f8;
                              do {
                                cVar11 = *pcVar10;
                                cVar14 = *pcVar9;
                                if (cVar11 == '\0') break;
                                pcVar10 = pcVar10 + 1;
                                pcVar9 = pcVar9 + 1;
                              } while (cVar11 == cVar14);
                              if (cVar11 == cVar14) {
                                fn_828FFA80(iStack00000014,pcStack_dc);
                                goto LAB_82900d54;
                              }
                              pcVar10 = acStack_140;
                              pcVar9 = pcStack_d0;
                              do {
                                cVar11 = *pcVar10;
                                cVar14 = *pcVar9;
                                if (cVar11 == '\0') break;
                                pcVar10 = pcVar10 + 1;
                                pcVar9 = pcVar9 + 1;
                              } while (cVar11 == cVar14);
                              if (cVar11 == cVar14) {
                                uVar17 = 10;
                              }
                              else {
                                pcVar10 = acStack_140;
                                pcVar9 = "fog";
                                do {
                                  cVar11 = *pcVar10;
                                  cVar14 = *pcVar9;
                                  if (cVar11 == '\0') break;
                                  pcVar10 = pcVar10 + 1;
                                  pcVar9 = pcVar9 + 1;
                                } while (cVar11 == cVar14);
                                if (cVar11 == cVar14) {
                                  uVar17 = 0xb;
                                }
                                else {
                                  pcVar10 = acStack_140;
                                  pcVar9 = pcStack_c8;
                                  do {
                                    cVar11 = *pcVar10;
                                    cVar14 = *pcVar9;
                                    if (cVar11 == '\0') break;
                                    pcVar10 = pcVar10 + 1;
                                    pcVar9 = pcVar9 + 1;
                                  } while (cVar11 == cVar14);
                                  if (cVar11 == cVar14) {
                                    uVar17 = 0xc;
                                  }
                                  else {
                                    pcVar10 = acStack_140;
                                    pcVar9 = pcStack_d4;
                                    do {
                                      cVar11 = *pcVar10;
                                      cVar14 = *pcVar9;
                                      if (cVar11 == '\0') break;
                                      pcVar10 = pcVar10 + 1;
                                      pcVar9 = pcVar9 + 1;
                                    } while (cVar11 == cVar14);
                                    if (cVar11 != cVar14) goto LAB_82900d54;
                                    uVar17 = 0xd;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            bVar3 = false;
            uVar17 = (uVar4 & 0xf) << 0x10 | uVar17;
            bVar2 = false;
          }
          else {
            if (iVar5 == 0) goto LAB_82900d54;
            pcVar10 = acStack_140;
            pcVar9 = pcStack_bc;
            do {
              cVar11 = *pcVar10;
              cVar14 = *pcVar9;
              if (cVar11 == '\0') break;
              pcVar10 = pcVar10 + 1;
              pcVar9 = pcVar9 + 1;
            } while (cVar11 == cVar14);
            if (cVar11 == cVar14) {
              uVar17 = 1;
            }
            else {
              pcVar10 = acStack_140;
              pcVar9 = pcStack_ac;
              do {
                cVar11 = *pcVar10;
                cVar14 = *pcVar9;
                if (cVar11 == '\0') break;
                pcVar10 = pcVar10 + 1;
                pcVar9 = pcVar9 + 1;
              } while (cVar11 == cVar14);
              if (cVar11 == cVar14) {
                uVar17 = 2;
              }
              else {
                pcVar10 = acStack_140;
                pcVar9 = pcStack_b4;
                do {
                  cVar11 = *pcVar10;
                  cVar14 = *pcVar9;
                  if (cVar11 == '\0') break;
                  pcVar10 = pcVar10 + 1;
                  pcVar9 = pcVar9 + 1;
                } while (cVar11 == cVar14);
                if (cVar11 == cVar14) {
                  uVar17 = 3;
                }
                else {
                  pcVar10 = acStack_140;
                  pcVar9 = pcStack_c0;
                  do {
                    cVar11 = *pcVar10;
                    cVar14 = *pcVar9;
                    if (cVar11 == '\0') break;
                    pcVar10 = pcVar10 + 1;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar11 == cVar14);
                  if (cVar11 == cVar14) {
                    uVar17 = 4;
                  }
                  else {
                    pcVar10 = acStack_140;
                    pcVar9 = pcStack_b8;
                    do {
                      cVar11 = *pcVar10;
                      cVar14 = *pcVar9;
                      if (cVar11 == '\0') break;
                      pcVar10 = pcVar10 + 1;
                      pcVar9 = pcVar9 + 1;
                    } while (cVar11 == cVar14);
                    if (cVar11 == cVar14) {
                      uVar17 = 5;
                    }
                    else {
                      pcVar10 = acStack_140;
                      pcVar9 = pcStack_b0;
                      do {
                        cVar11 = *pcVar10;
                        cVar14 = *pcVar9;
                        if (cVar11 == '\0') break;
                        pcVar10 = pcVar10 + 1;
                        pcVar9 = pcVar9 + 1;
                      } while (cVar11 == cVar14);
                      if (cVar11 != cVar14) goto LAB_82900d54;
                      uVar17 = 6;
                    }
                  }
                }
              }
            }
            iVar5 = 0;
            iStack_12c = 0;
          }
        }
        else {
          pcVar10 = acStack_140;
          pcVar9 = pcStack_104;
          do {
            cVar11 = *pcVar10;
            cVar14 = *pcVar9;
            if (cVar11 == '\0') break;
            pcVar10 = pcVar10 + 1;
            pcVar9 = pcVar9 + 1;
          } while (cVar11 == cVar14);
          if (cVar11 == cVar14) {
            uVar15 = 0x3000000;
          }
          else {
            pcVar10 = acStack_140;
            pcVar9 = pcStack_10c;
            do {
              cVar11 = *pcVar10;
              cVar14 = *pcVar9;
              if (cVar11 == '\0') break;
              pcVar10 = pcVar10 + 1;
              pcVar9 = pcVar9 + 1;
            } while (cVar11 == cVar14);
            if (cVar11 == cVar14) {
              uVar15 = 0x2000000;
            }
            else {
              pcVar10 = acStack_140;
              pcVar9 = pcStack_114;
              do {
                cVar11 = *pcVar10;
                cVar14 = *pcVar9;
                if (cVar11 == '\0') break;
                pcVar10 = pcVar10 + 1;
                pcVar9 = pcVar9 + 1;
              } while (cVar11 == cVar14);
              if (cVar11 == cVar14) {
                uVar15 = 0x1000000;
              }
              else {
                pcVar10 = acStack_140;
                pcVar9 = pcStack_118;
                do {
                  cVar11 = *pcVar10;
                  cVar14 = *pcVar9;
                  if (cVar11 == '\0') break;
                  pcVar10 = pcVar10 + 1;
                  pcVar9 = pcVar9 + 1;
                } while (cVar11 == cVar14);
                if (cVar11 == cVar14) {
                  uVar15 = 0xf000000;
                }
                else {
                  pcVar10 = acStack_140;
                  pcVar9 = pcStack_c4;
                  do {
                    cVar11 = *pcVar10;
                    cVar14 = *pcVar9;
                    if (cVar11 == '\0') break;
                    pcVar10 = pcVar10 + 1;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar11 == cVar14);
                  if (cVar11 == cVar14) {
                    uVar15 = 0xe000000;
                  }
                  else {
                    pcVar10 = acStack_140;
                    pcVar9 = "d8";
                    do {
                      cVar11 = *pcVar10;
                      cVar14 = *pcVar9;
                      if (cVar11 == '\0') break;
                      pcVar10 = pcVar10 + 1;
                      pcVar9 = pcVar9 + 1;
                    } while (cVar11 == cVar14);
                    if (cVar11 != cVar14) goto LAB_82900d54;
                    uVar15 = 0xd000000;
                  }
                }
              }
            }
          }
          iStack_128 = 0;
        }
      }
      else {
        puVar8 = (undefined4 *)(puVar18 + -0x17e8);
        iVar16 = 0;
        uVar7 = 0;
        do {
          pcVar9 = (char *)*puVar8;
          pcVar10 = acStack_140;
          do {
            cVar11 = *pcVar10;
            cVar14 = *pcVar9;
            if (cVar11 == '\0') break;
            pcVar10 = pcVar10 + 1;
            pcVar9 = pcVar9 + 1;
          } while (cVar11 == cVar14);
          if (cVar11 == cVar14) break;
          uVar7 = uVar7 + 0x48;
          iVar16 = iVar16 + 1;
          puVar8 = puVar8 + 0x12;
        } while ((uVar7 & 0xffffffff) < 0x17a0);
        if (iVar16 == 0x54) goto LAB_82900d54;
        iVar6 = *(int *)(iStack00000014 + 0x38);
        uVar4 = *(uint *)(puVar18 + (iVar16 * 0x12 + iVar6) * 4 + -0x17e0);
        if (uVar4 < 0xfffffffb) {
          if (uVar4 == 0xfffffffa) {
            uStack_150 = 0x10c;
          }
          else if (uVar4 == 0) {
            uStack_150 = 0x102;
          }
          else if (uVar4 == 1) {
            uStack_150 = 0x103;
          }
          else if (uVar4 < 3) {
            uStack_150 = 0x104;
          }
          else if (uVar4 == 3) {
            uStack_150 = 0x105;
          }
          else if (uVar4 < 5) {
            uStack_150 = 0x106;
          }
          else if (uVar4 == 5) {
            uStack_150 = 0x107;
          }
        }
        else if (uVar4 == 0xfffffffb) {
          uStack_150 = 0x10b;
        }
        else if (uVar4 == 0xfffffffc) {
          uStack_150 = 0x10a;
        }
        else if (uVar4 == 0xfffffffd) {
          uStack_150 = 0x108;
        }
        else if (uVar4 == 0xfffffffe) {
          uStack_150 = 0x109;
        }
        else if (uVar4 == 0xffffffff) {
          *(undefined4 *)(iStack00000014 + 0x58) = 0x7e7;
          return 0x10d;
        }
        iStack_ec = 0;
        iVar16 = *(int *)(puVar18 + iVar16 * 0x48 + -0x17e4);
        if ((((5 < iVar6) && (iVar6 < 10)) && (0x102 < uStack_150)) && (uStack_150 < 0x108)) {
          iStack_128 = 1;
        }
        if (((((3 < iVar6) && (iVar6 < 6)) || ((5 < iVar6 && (iVar6 < 0x10)))) &&
            ((0x102 < uStack_150 && (uStack_150 < 0x108)))) && (iVar16 != 0x1f)) {
          iStack_11c = 1;
        }
        if (9 < iVar6) {
          if ((iVar6 < 0x10) && (iVar16 == 0x1f)) {
            iStack_108 = 1;
          }
          if ((((9 < iVar6) && (iVar6 < 0x10)) && (0x102 < uStack_150)) && (uStack_150 < 0x108)) {
            iStack_110 = 1;
          }
        }
        if ((((3 < iVar6) && (iVar6 < 6)) || ((9 < iVar6 && (iVar6 < 0x10)))) && (iVar16 == 0x1f)) {
          bVar2 = true;
        }
        if (((0xd < iVar6) && (iVar6 < 0x10)) && (iVar16 == 0x1f)) {
          iStack_120 = 1;
        }
        if (((-1 < iVar6) && (iVar6 < 6)) && (iVar16 == 0x1f)) {
          bVar3 = true;
        }
        if (((iVar16 == 0x28) || (iVar16 == 0x2c)) || (iVar16 == 0x5e)) {
          iVar5 = 1;
          iStack_12c = 1;
        }
        *(undefined4 *)(iStack00000014 + 0x58) = 0x7e8;
      }
LAB_82900ca0:;} while (*pcStack_130 != '\0');
    if (iVar16 == 0x28) {
      if (iVar5 != 0) goto LAB_82900d2c;
      if (*(int *)(puVar18 + *(int *)(iStack00000014 + 0x38) * 4 + -0x40) != -1) {
        iVar16 = 0x29;
        uStack_150 = 0x10c;
        goto LAB_82900ce8;
      }
    }
    else {
LAB_82900ce8:
      if (iVar16 == 0x2c) {
        if (iVar5 != 0) goto LAB_82900d2c;
        if (*(int *)(puVar18 + *(int *)(iStack00000014 + 0x38) * 4 + 8) == -1) goto LAB_82900d54;
        iVar16 = 0x2d;
        uStack_150 = 0x10c;
      }
      if ((iVar16 != 0x5e) || (iVar5 == 0)) {
LAB_82900d2c:
        if (!bVar3) goto LAB_82900d34;
      }
    }
LAB_82900d54:
    uStack_150 = 0x10d;
  }
  return uStack_150;
}

