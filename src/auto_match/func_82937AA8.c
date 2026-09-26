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
extern int fn_82937A60();
extern int fn_82F65B18();
extern int fn_82F66A40();
extern int fn_82F66A80();
extern int fn_82F68CC0();
extern unsigned int iStack00000014;
extern unsigned int lbl_82030B78;
extern unsigned int lbl_82030B7C;
extern unsigned int lbl_82030B80;
extern unsigned int lbl_82030B82;
extern unsigned int uStack_10c;
extern unsigned int uStack_118;
extern unsigned int uStack_120;


uint fn_82937AA8(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  char cVar16;
  char *pcVar15;
  char cVar17;
  longlong lVar18;
  char *pcVar19;
  uint uVar20;
  uint uVar21;
  int iStack00000014;
  uint uStack_120;
  char *pcStack_11c;
  uint uStack_118;
  uint uStack_10c;
  char *pcStack_104;
  char *pcStack_fc;
  char *pcStack_f8;
  char *pcStack_f4;
  char *pcStack_f0;
  char *pcStack_ec;
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
  char acStack_b0 [176];
  
  pcStack_11c = *(char **)(param_2 + 8);
  puVar10 = (undefined4 *)&lbl_82030B78;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uStack_118 = 0;
  uStack_10c = 0;
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  uVar20 = 0;
  bVar7 = false;
  uStack_120 = 0x115;
  do {
    pcVar13 = (char *)*puVar10;
    cVar17 = *pcVar13;
    pcVar11 = pcStack_11c;
    pcVar19 = pcVar13;
    cVar16 = *pcStack_11c;
    while (cVar16 != '\0') {
      if ((cVar16 == '_') && (cVar17 == '\0')) {
        bVar2 = true;
        goto LAB_82937b78;
      }
      if (cVar16 != cVar17) {
        bVar2 = false;
        goto LAB_82937b78;
      }
      pcVar11 = pcVar11 + 1;
      pcVar19 = pcVar19 + 1;
      cVar17 = *pcVar19;
      cVar16 = *pcVar11;
    }
    bVar2 = cVar17 == '\0';
LAB_82937b78:
    pcVar11 = pcVar13;
    if (bVar2) goto LAB_82937b98;
    uVar20 = uVar20 + 1;
    puVar10 = puVar10 + 4;
  } while (uVar20 < 0x80);
LAB_82937bd4:
  if (uVar20 == 0x80) {
    return 0x115;
  }
  iVar9 = *(int *)(param_1 + 0x40);
  uVar14 = (uint)*(ushort *)(&lbl_82030B80 + (uVar20 * 8 + iVar9) * 2);
  if (uVar14 == 0xffff) {
    if (*(int *)(param_1 + 0x48) != 0) {
      uVar14 = (uint)*(ushort *)(&lbl_82030B82 + uVar20 * 0x10);
      goto LAB_82937c1c;
    }
LAB_82937f24:
    if (uVar14 - 0xfff7 < 9) {
      if (uVar14 == 0xfff7) {
        uStack_120 = 0x10f;
      }
      else if (uVar14 == 0xfff8) {
        uStack_120 = 0x10e;
      }
      else if (uVar14 == 0xfff9) {
        uStack_120 = 0x10d;
      }
      else if (uVar14 == 0xfffa) {
        uStack_120 = 0x10c;
      }
      else if (uVar14 == 0xfffb) {
        uStack_120 = 0x10b;
      }
      else if (uVar14 == 0xfffc) {
        uStack_120 = 0x10a;
      }
      else if (uVar14 == 0xfffd) {
        uStack_120 = 0x108;
      }
      else {
        if (uVar14 != 0xfffe) {
          *(undefined4 *)(param_1 + 0x3c) = 0x7e7;
          return 0x115;
        }
        uStack_120 = 0x109;
      }
    }
  }
  else {
LAB_82937c1c:
    if (0xfff6 < uVar14) goto LAB_82937f24;
    if (uVar14 == 0xfff6) {
      uStack_120 = 0x110;
    }
    else if (uVar14 < 6) {
      if (uVar14 == 5) {
        uStack_120 = 0x107;
      }
      else if (uVar14 == 0) {
        uStack_120 = 0x102;
      }
      else if (uVar14 == 1) {
        uStack_120 = 0x103;
      }
      else if (uVar14 < 3) {
        uStack_120 = 0x104;
      }
      else if (uVar14 == 3) {
        uStack_120 = 0x105;
      }
      else if (uVar14 < 5) {
        uStack_120 = 0x106;
      }
    }
    else if (uVar14 == 0xffe8) {
      uStack_120 = 0x114;
    }
    else if (uVar14 == 0xffe9) {
      uStack_120 = 0x113;
    }
    else if (uVar14 == 0xffea) {
      uStack_120 = 0x112;
    }
    else if (uVar14 == 0xffeb) {
      uStack_120 = 0x111;
    }
  }
  uVar20 = *(uint *)(&lbl_82030B7C + uVar20 * 0x10);
  uVar14 = uVar20 >> 0x13 & 0x1ff;
  if (((0x102 < uStack_120) && (uStack_120 < 0x108)) && (uVar14 != 0xf8)) {
    bVar4 = true;
  }
  if (iVar9 == 1) {
    if (uVar14 != 0xf8) goto LAB_82937cdc;
    bVar5 = true;
  }
  if (uVar14 == 0xf8) {
    bVar3 = true;
  }
LAB_82937cdc:
  if ((iVar9 == 1) && (uVar14 == 0xf8)) {
    bVar6 = true;
  }
  if ((iVar9 == 0) && (uVar14 == 0xf8)) {
    bVar7 = true;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0x7e8;
  lVar18 = (longlong)*pcStack_11c;
  if (lVar18 != 0) {
    pcStack_c4 = "quadid";
    pcStack_c8 = "barycentric";
    pcStack_cc = "index";
    pcStack_d0 = "Pixel shaders can\'t declare position0 as an input interpolator.";
    pcStack_dc = "sample";
    pcStack_e0 = "depth";
    pcStack_d4 = "cube";
    pcStack_f4 = "binormal";
    pcStack_fc = "psize";
    uVar8 = 0;
    pcStack_e4 = "fog";
    pcStack_e8 = "color";
    pcStack_d8 = "positiont is not a valid semantic for Final GPU microcode.";
    pcStack_ec = "positiont";
    pcStack_f0 = "tessfactor";
    pcStack_f8 = "tangent";
    pcVar11 = pcStack_11c;
    iStack00000014 = param_1;
    pcStack_104 = pcStack_11c;
    do {
      pcVar19 = pcVar11;
      if ((int)lVar18 != 0) {
        do {
          if ((int)lVar18 == 0x5f) break;
          pcVar19 = pcVar19 + 1;
          lVar18 = (longlong)*pcVar19;
          pcStack_11c = pcVar19;
        } while (lVar18 != 0);
      }
      uVar21 = (int)pcVar19 - (int)pcStack_104;
      if (0xf < uVar21) {
        return 0x115;
      }
      fn_82F68CC0(acStack_b0,pcStack_104,uVar21);
      acStack_b0[uVar21] = '\0';
      if ((int)lVar18 != 0) {
        pcVar19 = pcVar19 + 1;
        pcStack_11c = pcVar19;
      }
      pcVar11 = pcVar19;
      if (bVar4) {
        pcVar12 = acStack_b0;
        pcVar13 = "sat";
        do {
          cVar17 = *pcVar12;
          cVar16 = *pcVar13;
          if (cVar17 == '\0') break;
          pcVar12 = pcVar12 + 1;
          pcVar13 = pcVar13 + 1;
        } while (cVar17 == cVar16);
        if (cVar17 != cVar16) goto LAB_82937fac;
        bVar4 = false;
        uStack_118 = uStack_118 | 0x100000;
      }
      else {
LAB_82937fac:
        if (bVar5) {
          pcVar12 = acStack_b0;
          pcVar13 = "centroid";
          do {
            cVar17 = *pcVar12;
            cVar16 = *pcVar13;
            if (cVar17 == '\0') break;
            pcVar12 = pcVar12 + 1;
            pcVar13 = pcVar13 + 1;
          } while (cVar17 == cVar16);
          if (cVar17 == cVar16) {
            bVar5 = false;
            uStack_118 = uStack_118 | 0x400000;
          }
          else {
            pcVar12 = acStack_b0;
            pcVar13 = "nointerpolation";
            do {
              cVar17 = *pcVar12;
              cVar16 = *pcVar13;
              if (cVar17 == '\0') break;
              pcVar12 = pcVar12 + 1;
              pcVar13 = pcVar13 + 1;
            } while (cVar17 == cVar16);
            if (cVar17 != cVar16) goto LAB_82938040;
            bVar5 = false;
            uStack_118 = uStack_118 | 0x800000;
          }
        }
        else {
LAB_82938040:
          uStack_10c = uVar8;
          if (bVar3) {
            uVar21 = 0;
            pcVar12 = acStack_b0;
            pcVar13 = "2d";
            do {
              cVar17 = *pcVar12;
              cVar16 = *pcVar13;
              if (cVar17 == '\0') break;
              pcVar12 = pcVar12 + 1;
              pcVar13 = pcVar13 + 1;
            } while (cVar17 == cVar16);
            if (cVar17 == cVar16) {
              uVar21 = 0x10000000;
            }
            else {
              pcVar12 = acStack_b0;
              pcVar13 = pcStack_d4;
              do {
                cVar17 = *pcVar12;
                cVar16 = *pcVar13;
                if (cVar17 == '\0') break;
                pcVar12 = pcVar12 + 1;
                pcVar13 = pcVar13 + 1;
              } while (cVar17 == cVar16);
              if (cVar17 == cVar16) {
                uVar21 = 0x18000000;
              }
              else {
                pcVar12 = acStack_b0;
                pcVar13 = "volume";
                do {
                  cVar17 = *pcVar12;
                  cVar16 = *pcVar13;
                  if (cVar17 == '\0') break;
                  pcVar12 = pcVar12 + 1;
                  pcVar13 = pcVar13 + 1;
                } while (cVar17 == cVar16);
                if (cVar17 == cVar16) {
                  uVar21 = 0x20000000;
                }
              }
            }
            uStack_10c = uVar21 | uVar8;
            bVar3 = false;
            if (uVar21 != 0) {
              bVar6 = false;
              bVar7 = false;
              uVar8 = uStack_10c;
              goto LAB_829389e0;
            }
          }
          if (bVar6) {
            pcVar13 = acStack_b0;
            cVar17 = acStack_b0[0];
            while ((cVar17 != '\0' && (iVar9 = fn_82F66A40(*pcVar13), iVar9 != 0))) {
              pcVar13 = pcVar13 + 1;
              cVar17 = *pcVar13;
            }
            if (*pcVar13 == '\0') {
              uVar8 = 0;
            }
            else {
              uVar8 = fn_82F65B18(pcVar13);
            }
            if (0xf < uVar8) goto LAB_82938214;
            cVar17 = *pcVar13;
            pcVar12 = pcVar13;
            if (cVar17 != '\0') {
              *pcVar13 = '\0';
              pcVar12 = pcVar13 + 1;
            }
            cVar16 = *pcVar12;
            while ((cVar16 != '\0' && (iVar9 = fn_82F66A80(), iVar9 != 0))) {
              pcVar12 = pcVar12 + 1;
              cVar16 = *pcVar12;
            }
            pcVar11 = pcStack_11c;
            if (*pcVar12 != '\0') {
LAB_8293820c:
              *pcVar13 = cVar17;
              goto LAB_82938214;
            }
            pcVar15 = acStack_b0;
            pcVar12 = "position";
            do {
              cVar16 = *pcVar15;
              cVar1 = *pcVar12;
              if (cVar16 == '\0') break;
              pcVar15 = pcVar15 + 1;
              pcVar12 = pcVar12 + 1;
            } while (cVar16 == cVar1);
            if (cVar16 == cVar1) {
              uVar21 = 0;
              pcVar12 = pcStack_d0;
              if (uVar8 == 0) {
LAB_82938204:
                fn_82937A60(iStack00000014,pcVar12);
                goto LAB_8293820c;
              }
            }
            else {
              pcVar15 = acStack_b0;
              pcVar12 = "blendweight";
              do {
                cVar16 = *pcVar15;
                cVar1 = *pcVar12;
                if (cVar16 == '\0') break;
                pcVar15 = pcVar15 + 1;
                pcVar12 = pcVar12 + 1;
              } while (cVar16 == cVar1);
              if (cVar16 == cVar1) {
                uVar21 = 1;
              }
              else {
                pcVar15 = acStack_b0;
                pcVar12 = "blendindices";
                do {
                  cVar16 = *pcVar15;
                  cVar1 = *pcVar12;
                  if (cVar16 == '\0') break;
                  pcVar15 = pcVar15 + 1;
                  pcVar12 = pcVar12 + 1;
                } while (cVar16 == cVar1);
                if (cVar16 == cVar1) {
                  uVar21 = 2;
                }
                else {
                  pcVar15 = acStack_b0;
                  pcVar12 = "normal";
                  do {
                    cVar16 = *pcVar15;
                    cVar1 = *pcVar12;
                    if (cVar16 == '\0') break;
                    pcVar15 = pcVar15 + 1;
                    pcVar12 = pcVar12 + 1;
                  } while (cVar16 == cVar1);
                  if (cVar16 == cVar1) {
                    uVar21 = 3;
                  }
                  else {
                    pcVar15 = acStack_b0;
                    pcVar12 = pcStack_fc;
                    do {
                      cVar16 = *pcVar15;
                      cVar1 = *pcVar12;
                      if (cVar16 == '\0') break;
                      pcVar15 = pcVar15 + 1;
                      pcVar12 = pcVar12 + 1;
                    } while (cVar16 == cVar1);
                    if (cVar16 == cVar1) {
                      uVar21 = 4;
                    }
                    else {
                      pcVar15 = acStack_b0;
                      pcVar12 = "texcoord";
                      do {
                        cVar16 = *pcVar15;
                        cVar1 = *pcVar12;
                        if (cVar16 == '\0') break;
                        pcVar15 = pcVar15 + 1;
                        pcVar12 = pcVar12 + 1;
                      } while (cVar16 == cVar1);
                      if (cVar16 == cVar1) {
                        uVar21 = 5;
                      }
                      else {
                        pcVar15 = acStack_b0;
                        pcVar12 = pcStack_f8;
                        do {
                          cVar16 = *pcVar15;
                          cVar1 = *pcVar12;
                          if (cVar16 == '\0') break;
                          pcVar15 = pcVar15 + 1;
                          pcVar12 = pcVar12 + 1;
                        } while (cVar16 == cVar1);
                        if (cVar16 == cVar1) {
                          uVar21 = 6;
                        }
                        else {
                          pcVar15 = acStack_b0;
                          pcVar12 = pcStack_f4;
                          do {
                            cVar16 = *pcVar15;
                            cVar1 = *pcVar12;
                            if (cVar16 == '\0') break;
                            pcVar15 = pcVar15 + 1;
                            pcVar12 = pcVar12 + 1;
                          } while (cVar16 == cVar1);
                          if (cVar16 == cVar1) {
                            uVar21 = 7;
                          }
                          else {
                            pcVar15 = acStack_b0;
                            pcVar12 = pcStack_f0;
                            do {
                              cVar16 = *pcVar15;
                              cVar1 = *pcVar12;
                              if (cVar16 == '\0') break;
                              pcVar15 = pcVar15 + 1;
                              pcVar12 = pcVar12 + 1;
                            } while (cVar16 == cVar1);
                            if (cVar16 == cVar1) {
                              uVar21 = 8;
                            }
                            else {
                              pcVar15 = acStack_b0;
                              pcVar12 = pcStack_ec;
                              do {
                                cVar16 = *pcVar15;
                                cVar1 = *pcVar12;
                                if (cVar16 == '\0') break;
                                pcVar15 = pcVar15 + 1;
                                pcVar12 = pcVar12 + 1;
                              } while (cVar16 == cVar1);
                              pcVar12 = pcStack_d8;
                              if (cVar16 == cVar1) goto LAB_82938204;
                              pcVar15 = acStack_b0;
                              pcVar12 = pcStack_e8;
                              do {
                                cVar16 = *pcVar15;
                                cVar1 = *pcVar12;
                                if (cVar16 == '\0') break;
                                pcVar15 = pcVar15 + 1;
                                pcVar12 = pcVar12 + 1;
                              } while (cVar16 == cVar1);
                              if (cVar16 == cVar1) {
                                uVar21 = 10;
                              }
                              else {
                                pcVar15 = acStack_b0;
                                pcVar12 = pcStack_e4;
                                do {
                                  cVar16 = *pcVar15;
                                  cVar1 = *pcVar12;
                                  if (cVar16 == '\0') break;
                                  pcVar15 = pcVar15 + 1;
                                  pcVar12 = pcVar12 + 1;
                                } while (cVar16 == cVar1);
                                if (cVar16 == cVar1) {
                                  uVar21 = 0xb;
                                }
                                else {
                                  pcVar15 = acStack_b0;
                                  pcVar12 = pcStack_e0;
                                  do {
                                    cVar16 = *pcVar15;
                                    cVar1 = *pcVar12;
                                    if (cVar16 == '\0') break;
                                    pcVar15 = pcVar15 + 1;
                                    pcVar12 = pcVar12 + 1;
                                  } while (cVar16 == cVar1);
                                  if (cVar16 == cVar1) {
                                    uVar21 = 0xc;
                                  }
                                  else {
                                    pcVar15 = acStack_b0;
                                    pcVar12 = pcStack_dc;
                                    do {
                                      cVar16 = *pcVar15;
                                      cVar1 = *pcVar12;
                                      if (cVar16 == '\0') break;
                                      pcVar15 = pcVar15 + 1;
                                      pcVar12 = pcVar12 + 1;
                                    } while (cVar16 == cVar1);
                                    if (cVar16 != cVar1) goto LAB_8293820c;
                                    uVar21 = 0xd;
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
            bVar6 = false;
            uStack_10c = (uVar8 & 0xf) << 0x10 | uVar21 | uStack_10c;
          }
          else {
LAB_82938214:
            if (!bVar7) {
              return 0x115;
            }
            pcVar13 = acStack_b0;
            cVar17 = acStack_b0[0];
            while ((cVar17 != '\0' && (iVar9 = fn_82F66A40(*pcVar13), iVar9 != 0))) {
              pcVar13 = pcVar13 + 1;
              cVar17 = *pcVar13;
            }
            if (*pcVar13 == '\0') {
              uVar8 = 0;
            }
            else {
              uVar8 = fn_82F65B18(pcVar13);
            }
            if (0xf < uVar8) {
              return 0x115;
            }
            if (*pcVar13 != '\0') {
              *pcVar13 = '\0';
              pcVar13 = pcVar13 + 1;
            }
            cVar17 = *pcVar13;
            while ((cVar17 != '\0' && (iVar9 = fn_82F66A80(), iVar9 != 0))) {
              pcVar13 = pcVar13 + 1;
              cVar17 = *pcVar13;
            }
            if (*pcVar13 != '\0') {
              return 0x115;
            }
            pcVar12 = acStack_b0;
            pcVar13 = "position";
            do {
              cVar17 = *pcVar12;
              cVar16 = *pcVar13;
              if (cVar17 == '\0') break;
              pcVar12 = pcVar12 + 1;
              pcVar13 = pcVar13 + 1;
            } while (cVar17 == cVar16);
            if (cVar17 == cVar16) {
              uStack_10c = 0;
            }
            else {
              pcVar12 = acStack_b0;
              pcVar13 = "blendweight";
              do {
                cVar17 = *pcVar12;
                cVar16 = *pcVar13;
                if (cVar17 == '\0') break;
                pcVar12 = pcVar12 + 1;
                pcVar13 = pcVar13 + 1;
              } while (cVar17 == cVar16);
              if (cVar17 == cVar16) {
                uStack_10c = 1;
              }
              else {
                pcVar12 = acStack_b0;
                pcVar13 = "blendindices";
                do {
                  cVar17 = *pcVar12;
                  cVar16 = *pcVar13;
                  if (cVar17 == '\0') break;
                  pcVar12 = pcVar12 + 1;
                  pcVar13 = pcVar13 + 1;
                } while (cVar17 == cVar16);
                if (cVar17 == cVar16) {
                  uStack_10c = 2;
                }
                else {
                  pcVar12 = acStack_b0;
                  pcVar13 = "normal";
                  do {
                    cVar17 = *pcVar12;
                    cVar16 = *pcVar13;
                    if (cVar17 == '\0') break;
                    pcVar12 = pcVar12 + 1;
                    pcVar13 = pcVar13 + 1;
                  } while (cVar17 == cVar16);
                  if (cVar17 == cVar16) {
                    uStack_10c = 3;
                  }
                  else {
                    pcVar12 = acStack_b0;
                    pcVar13 = pcStack_fc;
                    do {
                      cVar17 = *pcVar12;
                      cVar16 = *pcVar13;
                      if (cVar17 == '\0') break;
                      pcVar12 = pcVar12 + 1;
                      pcVar13 = pcVar13 + 1;
                    } while (cVar17 == cVar16);
                    if (cVar17 == cVar16) {
                      uStack_10c = 4;
                    }
                    else {
                      pcVar12 = acStack_b0;
                      pcVar13 = "texcoord";
                      do {
                        cVar17 = *pcVar12;
                        cVar16 = *pcVar13;
                        if (cVar17 == '\0') break;
                        pcVar12 = pcVar12 + 1;
                        pcVar13 = pcVar13 + 1;
                      } while (cVar17 == cVar16);
                      if (cVar17 == cVar16) {
                        uStack_10c = 5;
                      }
                      else {
                        pcVar12 = acStack_b0;
                        pcVar13 = pcStack_f8;
                        do {
                          cVar17 = *pcVar12;
                          cVar16 = *pcVar13;
                          if (cVar17 == '\0') break;
                          pcVar12 = pcVar12 + 1;
                          pcVar13 = pcVar13 + 1;
                        } while (cVar17 == cVar16);
                        if (cVar17 == cVar16) {
                          uStack_10c = 6;
                        }
                        else {
                          pcVar12 = acStack_b0;
                          pcVar13 = pcStack_f4;
                          do {
                            cVar17 = *pcVar12;
                            cVar16 = *pcVar13;
                            if (cVar17 == '\0') break;
                            pcVar12 = pcVar12 + 1;
                            pcVar13 = pcVar13 + 1;
                          } while (cVar17 == cVar16);
                          if (cVar17 == cVar16) {
                            uStack_10c = 7;
                          }
                          else {
                            pcVar12 = acStack_b0;
                            pcVar13 = pcStack_f0;
                            do {
                              cVar17 = *pcVar12;
                              cVar16 = *pcVar13;
                              if (cVar17 == '\0') break;
                              pcVar12 = pcVar12 + 1;
                              pcVar13 = pcVar13 + 1;
                            } while (cVar17 == cVar16);
                            if (cVar17 == cVar16) {
                              uStack_10c = 8;
                            }
                            else {
                              pcVar12 = acStack_b0;
                              pcVar13 = pcStack_ec;
                              do {
                                cVar17 = *pcVar12;
                                cVar16 = *pcVar13;
                                if (cVar17 == '\0') break;
                                pcVar12 = pcVar12 + 1;
                                pcVar13 = pcVar13 + 1;
                              } while (cVar17 == cVar16);
                              if (cVar17 == cVar16) {
                                fn_82937A60(iStack00000014,
                                              "positiont is not a valid semantic for Final GPU microcode."
                                             );
                                return 0x115;
                              }
                              pcVar12 = acStack_b0;
                              pcVar13 = pcStack_e8;
                              do {
                                cVar17 = *pcVar12;
                                cVar16 = *pcVar13;
                                if (cVar17 == '\0') break;
                                pcVar12 = pcVar12 + 1;
                                pcVar13 = pcVar13 + 1;
                              } while (cVar17 == cVar16);
                              if (cVar17 == cVar16) {
                                uStack_10c = 10;
                              }
                              else {
                                pcVar12 = acStack_b0;
                                pcVar13 = pcStack_e4;
                                do {
                                  cVar17 = *pcVar12;
                                  cVar16 = *pcVar13;
                                  if (cVar17 == '\0') break;
                                  pcVar12 = pcVar12 + 1;
                                  pcVar13 = pcVar13 + 1;
                                } while (cVar17 == cVar16);
                                if (cVar17 == cVar16) {
                                  uStack_10c = 0xb;
                                }
                                else {
                                  pcVar12 = acStack_b0;
                                  pcVar13 = pcStack_e0;
                                  do {
                                    cVar17 = *pcVar12;
                                    cVar16 = *pcVar13;
                                    if (cVar17 == '\0') break;
                                    pcVar12 = pcVar12 + 1;
                                    pcVar13 = pcVar13 + 1;
                                  } while (cVar17 == cVar16);
                                  if (cVar17 == cVar16) {
                                    uStack_10c = 0xc;
                                  }
                                  else {
                                    pcVar12 = acStack_b0;
                                    pcVar13 = pcStack_dc;
                                    do {
                                      cVar17 = *pcVar12;
                                      cVar16 = *pcVar13;
                                      if (cVar17 == '\0') break;
                                      pcVar12 = pcVar12 + 1;
                                      pcVar13 = pcVar13 + 1;
                                    } while (cVar17 == cVar16);
                                    if (cVar17 == cVar16) {
                                      uStack_10c = 0xd;
                                    }
                                    else {
                                      pcVar12 = acStack_b0;
                                      pcVar13 = pcStack_cc;
                                      do {
                                        cVar17 = *pcVar12;
                                        cVar16 = *pcVar13;
                                        if (cVar17 == '\0') break;
                                        pcVar12 = pcVar12 + 1;
                                        pcVar13 = pcVar13 + 1;
                                      } while (cVar17 == cVar16);
                                      if (cVar17 == cVar16) {
                                        uStack_10c = 9;
                                      }
                                      else {
                                        pcVar12 = acStack_b0;
                                        pcVar13 = pcStack_c8;
                                        do {
                                          cVar17 = *pcVar12;
                                          cVar16 = *pcVar13;
                                          if (cVar17 == '\0') break;
                                          pcVar12 = pcVar12 + 1;
                                          pcVar13 = pcVar13 + 1;
                                        } while (cVar17 == cVar16);
                                        if (cVar17 == cVar16) {
                                          uStack_10c = 0xe;
                                        }
                                        else {
                                          pcVar12 = acStack_b0;
                                          pcVar13 = pcStack_c4;
                                          do {
                                            cVar17 = *pcVar12;
                                            cVar16 = *pcVar13;
                                            if (cVar17 == '\0') break;
                                            pcVar12 = pcVar12 + 1;
                                            pcVar13 = pcVar13 + 1;
                                          } while (cVar17 == cVar16);
                                          if (cVar17 != cVar16) {
                                            return 0x115;
                                          }
                                          uStack_10c = 0xf;
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
                }
              }
            }
            bVar7 = false;
            uStack_10c = (uVar8 & 0xf) << 0x10 | uStack_10c;
          }
          bVar3 = false;
          uVar8 = uStack_10c;
        }
      }
LAB_829389e0:
      lVar18 = (longlong)*pcVar11;
      param_1 = iStack00000014;
      pcStack_104 = pcVar19;
    } while (lVar18 != 0);
  }
  if ((!bVar7) && (!bVar6)) {
    *(uint *)(param_1 + 0x6c) = uVar14;
    *(uint *)(param_1 + 0x68) = uVar20 >> 0x1c;
    *(uint *)(param_1 + 0x70) = uVar20 >> 0x11 & 3;
    *(uint *)(param_1 + 0x74) = uStack_118;
    *(uint *)(param_1 + 0x78) = uStack_10c;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return uStack_120;
  }
  return 0x115;
LAB_82937b98:
  do {
    cVar17 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar17 != '\0');
  pcStack_11c = pcStack_11c + (int)(pcVar11 + (-1 - (int)pcVar13));
  if (*pcStack_11c == '_') {
    pcStack_11c = pcStack_11c + 1;
  }
  goto LAB_82937bd4;
}

