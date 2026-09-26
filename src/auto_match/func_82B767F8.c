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
extern int fn_82AB15D0();
extern int fn_82F68CC0();
extern unsigned int iStack_25c;
extern unsigned int lbl_821B597C;
extern unsigned int uStack_230;
extern unsigned int uStack_234;
extern unsigned int uStack_238;
extern unsigned int uStack_23c;
extern unsigned int uStack_240;
extern unsigned int uStack_254;
extern unsigned int uStack_258;


void fn_82B767F8(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined2 *puVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  ushort *puVar20;
  int iVar21;
  ulonglong uVar18;
  undefined4 *puVar22;
  longlong lVar19;
  ushort *puVar25;
  ushort uVar27;
  longlong lVar23;
  undefined4 *puVar26;
  longlong lVar24;
  ulonglong uVar28;
  int *piVar29;
  int *piVar30;
  ulonglong uVar31;
  int *piVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  uint *puVar38;
  ulonglong uVar39;
  undefined4 *puStack00000014;
  int iStack_25c;
  uint uStack_258;
  uint uStack_254;
  uint uStack_240;
  uint uStack_23c;
  uint uStack_238;
  uint uStack_234;
  uint uStack_230;
  int aiStack_220 [32];
  int aiStack_1a0 [32];
  int aiStack_120 [72];
  
  uVar2 = param_1[7];
  uVar35 = (ulonglong)uVar2;
  uVar39 = 0;
  bVar7 = false;
  bVar8 = false;
  iStack_25c = -1;
  puStack00000014 = param_1;
  if (*(int *)(uVar2 + 0x3088) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820daa68,0xffffffff820da3b8,0x2fd7);
  }
  uVar3 = *(uint *)(uVar2 + 0x3088);
  uVar34 = (ulonglong)uVar3;
  uVar14 = ((ulonglong)*(uint *)(uVar2 + 0x2efc) + (ulonglong)*(uint *)(uVar2 + 0x2a44) +
            (ulonglong)*(uint *)(uVar2 + 0x336c) & 0x7fffffff) * 2 +
           ((ulonglong)*(uint *)(uVar2 + 0xc) + 5 & 0xffffffff) / 6;
  uStack_254 = (uint)uVar14;
  if ((uVar14 & 1) != 0) {
    uVar14 = uVar14 + 1;
    uStack_254 = (uint)uVar14;
  }
  uStack_258 = 0;
  uVar14 = (uVar14 + 1 & 0xffffffff) >> 1;
  piVar29 = (int *)(uVar2 + 0x3360);
  *(uint *)(uVar2 + 0x308c) = *(uint *)(uVar2 + 0xc) + *(uint *)(uVar2 + 0x2a44) + (int)uVar14;
  uVar33 = 0;
  iVar17 = *(int *)(uVar2 + 0x3360);
  bVar1 = *(int *)(uVar2 + 0x3368) != 0;
  if (bVar1) {
    fn_82F68CC0(&uStack_240,iVar17,0x18);
    *piVar29 = *(int *)(iVar17 + 0x14);
    (*(code *)param_1[2])(*param_1,iVar17);
  }
  uVar28 = (ulonglong)uStack_234;
  piVar32 = aiStack_1a0;
  uVar31 = (ulonglong)uStack_238;
  *(int *)(uVar2 + 0x3368) = *(int *)(uVar2 + 0x3368) + -1;
  piVar30 = aiStack_120;
  do {
    if (bVar1) {
      uVar36 = (ulonglong)uStack_23c;
      if ((uVar33 & 0xffffffff) == uVar36) {
        iVar17 = (int)uVar39;
        if ((uStack_240 & 1) != 0) {
          puVar25 = (ushort *)(iVar17 * 6 + uVar3);
          *puVar25 = (ushort)(uVar28 << 0xc) | *puVar25 & 0xfff;
          uVar15 = (uint)(uVar31 << 5) & 0x60 | *(uint *)(puVar25 + 1) & 0xffffff90 | 0xc;
          goto LAB_82b76c2c;
        }
        if ((uStack_240 & 0x80000000) == 0) {
          if ((uStack_240 & 0x8000) == 0) {
            if (((uStack_240 & 2) == 0) && ((uStack_240 & 0x10000) == 0)) {
              if ((uStack_240 & 4) == 0) {
                if ((uStack_240 & 8) == 0) {
                  if ((uStack_240 & 0x10) == 0) {
                    if ((uStack_240 & 0x20) == 0) {
                      if ((uStack_240 & 0x80) != 0) {
                        iVar17 = *(int *)((int)aiStack_220 + (int)(uVar28 << 2));
                        goto LAB_82b76b88;
                      }
                      if ((uStack_240 & 0x40) == 0) {
                        if ((uStack_240 & 0x400) != 0) {
                          puVar25 = (ushort *)(iVar17 * 6 + uVar3);
                          uVar15 = *(uint *)(puVar25 + 1) & 0xffff8000 | 0xb;
                          *puVar25 = *puVar25 | 4;
                          iStack_25c = iVar17;
                          goto LAB_82b76bec;
                        }
                        if ((uStack_240 & 0x100) == 0) {
                          if ((uStack_240 & 0x200) != 0) {
                            piVar30 = piVar30 + -1;
                            piVar32 = piVar32 + -1;
                            puVar25 = (ushort *)(iVar17 * 6 + uVar3);
                            iVar21 = *piVar32 * 6;
                            *puVar25 = (short)*piVar30 << 3 | *puVar25 & 7;
                            *(uint *)(puVar25 + 1) =
                                 *(uint *)(puVar25 + 1) & 0x3ffcfc0 | (uint)(uVar31 << 0x1b) | 0x28;
                            uVar27 = (ushort)((uVar39 + 1 & 0xffffffff) << 3) |
                                     *(ushort *)(iVar21 + uVar3) & 7;
                            goto LAB_82b76c8c;
                          }
                          fn_82AB15D0(0,"Assertion failed: %s (%s:%u)",&lbl_821B597C,
                                            "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\translator\\xltconvert.cpp"
                                            ,0x316f);
                          goto LAB_82b76e58;
                        }
                        *piVar32 = iVar17;
                        puVar25 = (ushort *)(iVar17 * 6 + uVar3);
                        *piVar30 = iVar17 + 1;
                        piVar32 = piVar32 + 1;
                        piVar30 = piVar30 + 1;
                        uVar15 = (uint)(uVar31 << 0x1b) | *(uint *)(puVar25 + 1) & 0x7ffffe0 | 7;
                      }
                      else {
                        puVar25 = (ushort *)(iVar17 * 6 + uVar3);
                        uVar15 = *(uint *)(puVar25 + 1) & 0xffffffe0 | 10;
                      }
LAB_82b76c2c:
                      uVar39 = uVar39 + 1;
                      *(uint *)(puVar25 + 1) = uVar15;
                    }
                    else {
                      puVar25 = (ushort *)(iVar17 * 6 + uVar3);
                      uVar15 = *(uint *)(puVar25 + 1);
                      *(uint *)(puVar25 + 1) = uVar15 & 0xffffffc0 | 0x29;
                      if ((int)uVar31 == -1) {
                        uVar15 = uVar15 & 0xffffc000 | 0x29;
                        uVar27 = *puVar25 | 4;
                      }
                      else {
                        uVar27 = *puVar25 & 0xfffb;
                        uVar15 = (uint)((uVar31 - 0x80 & 0xffffffff) << 6) & 0x3fc0 |
                                 uVar15 & 0xffffc000 | 0x29;
                      }
                      *(uint *)(puVar25 + 1) = uVar15;
                      *puVar25 = uVar27;
                      *(int *)((int)aiStack_220 + (int)(uVar28 << 2)) = iVar17;
                      uVar39 = uVar39 + 1;
                    }
                  }
                  else {
                    piVar4 = piVar32 + -1;
                    piVar30 = piVar30 + -1;
                    piVar32 = piVar32 + -1;
                    iVar17 = *piVar4;
LAB_82b76b88:
                    *(ushort *)(iVar17 * 6 + uVar3) =
                         (ushort)((uVar39 & 0xffffffff) << 3) | *(ushort *)(iVar17 * 6 + uVar3) & 7;
                  }
                }
                else {
                  iVar21 = piVar32[-1];
                  piVar32[-1] = iVar17;
                  puVar25 = (ushort *)(iVar17 * 6 + uVar3);
                  iVar21 = iVar21 * 6;
                  *puVar25 = *puVar25 & 0xfffb;
                  *(uint *)(puVar25 + 1) =
                       (uint)((uVar31 - 0x80 & 0xffffffff) << 6) & 0x3fc0 |
                       *(uint *)(puVar25 + 1) & 0xffff8000 | 0x402b;
                  uVar27 = (ushort)((uVar39 & 0xffffffff) << 3) | *(ushort *)(iVar21 + uVar3) & 7;
LAB_82b76c8c:
                  uVar39 = uVar39 + 1;
                  *(ushort *)(iVar21 + uVar3) = uVar27;
                }
              }
              else {
                *piVar32 = iVar17;
                puVar25 = (ushort *)(iVar17 * 6 + uVar3);
                piVar30 = piVar30 + 1;
                piVar32 = piVar32 + 1;
                *puVar25 = *puVar25 & 0xfffb;
                uVar15 = (uint)((uVar31 - 0x80 & 0xffffffff) << 6) & 0x3fc0 |
                         *(uint *)(puVar25 + 1) & 0xffff8000 | 0x400b;
LAB_82b76bec:
                uVar39 = uVar39 + 1;
                *(uint *)(puVar25 + 1) = uVar15;
              }
            }
            else {
              uVar9 = 0;
              bVar7 = true;
              lVar24 = (uStack_230 - uVar36) + uVar28;
              if (lVar24 != 0) {
                uVar37 = (ulonglong)uStack_258;
                lVar12 = uVar33 * 0xc + uVar35 + 0x10;
                lVar13 = uVar14 * 0xc;
                lVar23 = uVar39 * 6 + uVar34 + 2;
                lVar11 = (uVar37 + 0x386) * 0xc + uVar35;
                lVar19 = lVar24;
                do {
                  uVar10 = uVar9 + ((uVar9 & 0xffffffff) / 6) * -6;
                  puVar38 = (uint *)lVar23;
                  if (uVar10 == 0) {
                    uVar27 = (ushort)((uVar14 & 0xfffffff) << 4);
                    *(ushort *)((int)puVar38 + -2) = uVar27 | *(ushort *)((int)puVar38 + -2) & 0xf;
                    *puVar38 = *puVar38 & 0xffff0 | 1;
                    if ((lVar24 - uVar9 & 0xffffffff) < 6) {
                      uVar27 = (ushort)(lVar24 - uVar9) & 0xf | uVar27;
                    }
                    else {
                      uVar27 = uVar27 | 6;
                    }
                    *(ushort *)((int)puVar38 + -2) = uVar27;
                  }
                  uVar18 = uVar9 + uVar36;
                  if (((uVar18 & 0xffffffff) < uVar31) ||
                     ((uVar28 + uVar31 & 0xffffffff) <= (uVar18 & 0xffffffff))) {
                    uVar33 = uVar33 + 1;
                    *puVar38 = *puVar38 & 0xfffff |
                               (2 << ((uint)((uVar10 & 0xffffffff) << 1) & 0x3e)) << 0x14 |
                               *puVar38 & 0xfff00000;
                    puVar26 = (undefined4 *)lVar12;
                    puVar22 = (undefined4 *)((int)lVar13 + *(int *)(uVar2 + 0x3088));
                    *puVar22 = *puVar26;
                    puVar22[1] = puVar26[1];
                    uVar16 = puVar26[2];
                    lVar12 = lVar12 + 0xc;
                  }
                  else {
                    uVar15 = (uint)((uVar10 & 0xffffffff) << 1);
                    if ((uVar18 & 0xffffffff) == uVar31) {
                      iVar17 = 3 << (uVar15 & 0x3e);
                    }
                    else {
                      iVar17 = 1 << (uVar15 & 0x3e);
                    }
                    *puVar38 = *puVar38 & 0xfffff | iVar17 << 0x14 | *puVar38 & 0xfff00000;
                    if ((uStack_240 & 0x10000) != 0) {
                      *puVar38 = (1 << ((uint)uVar10 & 0x3f) & 0x3fU) << 0xe | *puVar38;
                    }
                    uVar37 = uVar37 + 1;
                    puVar26 = (undefined4 *)lVar11;
                    puVar22 = (undefined4 *)((int)lVar13 + *(int *)(uVar2 + 0x3088));
                    *puVar22 = *puVar26;
                    puVar22[1] = puVar26[1];
                    uVar16 = puVar26[2];
                    lVar11 = lVar11 + 0xc;
                  }
                  puVar22[2] = uVar16;
                  lVar13 = lVar13 + 0xc;
                  uVar14 = uVar14 + 1;
                  if (((uVar10 & 0xffffffff) == 5) ||
                     ((uVar9 & 0xffffffff) == (lVar24 - 1U & 0xffffffff))) {
                    uVar39 = uVar39 + 1;
                    lVar23 = lVar23 + 6;
                  }
                  lVar19 = lVar19 + -1;
                  uVar9 = uVar9 + 1;
                } while (lVar19 != 0);
                uStack_258 = (uint)uVar37;
              }
            }
          }
          else {
            puVar25 = (ushort *)(iVar17 * 6 + uVar3);
            *puVar25 = *puVar25 & 0xfff;
            puVar20 = (ushort *)((iVar17 + 1) * 6 + uVar3);
            *(uint *)(puVar25 + 1) = *(uint *)(puVar25 + 1) & 0xfffffffc | 0x6c;
            iVar17 = (int)uVar33 * 0xc + uVar2;
            *puVar20 = (ushort)((uVar14 & 0xffffffff) << 4) | 2;
            iVar6 = (int)uVar14 * 0xc;
            uVar39 = uVar39 + 2;
            uVar33 = uVar33 + 2;
            uVar14 = uVar14 + 2;
            *(uint *)(puVar20 + 1) = *(uint *)(puVar20 + 1) & 0xffff0 | 1;
            iVar21 = *(int *)(uVar2 + 0x3088) + iVar6;
            *(undefined4 *)(*(int *)(uVar2 + 0x3088) + iVar6) = *(undefined4 *)(iVar17 + 0x10);
            *(undefined4 *)(iVar21 + 4) = *(undefined4 *)(iVar17 + 0x14);
            *(undefined4 *)(iVar21 + 8) = *(undefined4 *)(iVar17 + 0x18);
            iVar6 = *(int *)(uVar2 + 0x3088) + iVar6;
            *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar17 + 0x1c);
            *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar17 + 0x20);
            *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(iVar17 + 0x24);
          }
        }
        else {
          iVar17 = iStack_25c;
          if (iStack_25c != -1) goto LAB_82b76b88;
        }
LAB_82b76e58:
        iVar17 = *piVar29;
        bVar1 = *(int *)(uVar2 + 0x3368) != 0;
        if (bVar1) {
          fn_82F68CC0(&uStack_240,iVar17,0x18);
          *piVar29 = *(int *)(iVar17 + 0x14);
          (*(code *)puStack00000014[2])(*puStack00000014,iVar17);
          uVar28 = (ulonglong)uStack_234;
          uVar31 = (ulonglong)uStack_238;
        }
        *(int *)(uVar2 + 0x3368) = *(int *)(uVar2 + 0x3368) + -1;
      }
      else {
        uVar36 = uVar36 - uVar33;
        uVar9 = 0;
        if (uVar36 != 0) {
          lVar24 = uVar14 * 0xc;
          lVar19 = uVar33 * 0xc + uVar35 + 0x10;
          lVar11 = uVar39 * 6 + uVar34 + 2;
          uVar33 = uVar36 + uVar33;
          do {
            uVar37 = uVar9 + ((uVar9 & 0xffffffff) / 6) * -6;
            puVar38 = (uint *)lVar11;
            if (uVar37 == 0) {
              uVar27 = (ushort)((uVar14 & 0xfffffff) << 4);
              *(ushort *)((int)puVar38 + -2) = uVar27 | *(ushort *)((int)puVar38 + -2) & 0xf;
              *puVar38 = *puVar38 & 0xffff0 | 1;
              if ((uVar36 - uVar9 & 0xffffffff) < 6) {
                uVar27 = (ushort)(uVar36 - uVar9) & 0xf | uVar27;
              }
              else {
                uVar27 = uVar27 | 6;
              }
              *(ushort *)((int)puVar38 + -2) = uVar27;
            }
            if (bVar7) {
              if ((uVar9 & 0xffffffff) != 0) {
                fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","i == 0",
                                  "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\translator\\xltconvert.cpp"
                                  ,0x3197);
              }
              iVar17 = 2;
              bVar7 = false;
            }
            else {
              iVar17 = 0;
            }
            uVar14 = uVar14 + 1;
            *puVar38 = *puVar38 & 0xfffff |
                       (iVar17 << ((uint)((uVar37 & 0xffffffff) << 1) & 0x3e)) << 0x14 |
                       *puVar38 & 0xfff00000;
            puVar22 = (undefined4 *)lVar19;
            puVar26 = (undefined4 *)(*(int *)(uVar2 + 0x3088) + (int)lVar24);
            lVar24 = lVar24 + 0xc;
            *puVar26 = *puVar22;
            puVar26[1] = puVar22[1];
            lVar19 = lVar19 + 0xc;
            puVar26[2] = puVar22[2];
            if (((uVar37 & 0xffffffff) == 5) || ((uVar9 & 0xffffffff) == (uVar36 - 1 & 0xffffffff)))
            {
              uVar39 = uVar39 + 1;
              lVar11 = lVar11 + 6;
            }
            uVar9 = uVar9 + 1;
          } while ((uVar9 & 0xffffffff) < (uVar36 & 0xffffffff));
        }
      }
    }
    else {
      uVar36 = 0;
      uVar9 = *(uint *)(uVar2 + 0xc) - uVar33;
      if (uVar9 != 0) {
        lVar24 = uVar14 * 0xc;
        lVar19 = uVar33 * 0xc + uVar35 + 0x10;
        lVar11 = uVar39 * 6 + uVar34 + 2;
        uVar33 = uVar9 + uVar33;
        do {
          uVar37 = uVar36 + ((uVar36 & 0xffffffff) / 6) * -6;
          puVar38 = (uint *)lVar11;
          if (uVar37 == 0) {
            uVar10 = uVar9 - uVar36;
            uVar15 = *puVar38;
            uVar27 = (ushort)((uVar14 & 0xfffffff) << 4);
            *puVar38 = uVar15 & 0xfffff;
            *(ushort *)((int)puVar38 + -2) = uVar27 | *(ushort *)((int)puVar38 + -2) & 0xf;
            if ((uVar10 & 0xffffffff) < 7) {
              uVar15 = uVar15 & 0xffff0 | 2;
              bVar8 = true;
            }
            else {
              uVar15 = uVar15 & 0xffff0 | 1;
            }
            *puVar38 = uVar15;
            if ((uVar10 & 0xffffffff) < 6) {
              *(ushort *)((int)puVar38 + -2) = (ushort)uVar10 & 0xf | uVar27;
            }
            else {
              *(ushort *)((int)puVar38 + -2) = uVar27 | 6;
            }
          }
          if (bVar7) {
            if ((uVar36 & 0xffffffff) != 0) {
              fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","i == 0",
                                "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\translator\\xltconvert.cpp"
                                ,0x31e5);
            }
            iVar17 = 2;
            bVar7 = false;
          }
          else {
            iVar17 = 0;
          }
          uVar14 = uVar14 + 1;
          *puVar38 = *puVar38 & 0xfffff |
                     (iVar17 << ((uint)((uVar37 & 0xffffffff) << 1) & 0x3e)) << 0x14 |
                     *puVar38 & 0xfff00000;
          puVar22 = (undefined4 *)lVar19;
          puVar26 = (undefined4 *)(*(int *)(uVar2 + 0x3088) + (int)lVar24);
          lVar24 = lVar24 + 0xc;
          *puVar26 = *puVar22;
          puVar26[1] = puVar22[1];
          lVar19 = lVar19 + 0xc;
          puVar26[2] = puVar22[2];
          if (((uVar37 & 0xffffffff) == 5) || ((uVar36 & 0xffffffff) == (uVar9 - 1 & 0xffffffff))) {
            uVar39 = uVar39 + 1;
            lVar11 = lVar11 + 6;
          }
          uVar36 = uVar36 + 1;
        } while ((uVar36 & 0xffffffff) < (uVar9 & 0xffffffff));
      }
    }
    if ((ulonglong)*(uint *)(uVar2 + 0xc) <= (uVar33 & 0xffffffff)) {
      if (!bVar8) {
        puVar5 = (undefined2 *)((int)uVar39 * 6 + uVar3);
        uVar39 = uVar39 + 1;
        *puVar5 = (short)((uVar14 & 0xffffffff) << 4);
        *(uint *)(puVar5 + 1) = *(uint *)(puVar5 + 1) & 0xffff0 | 2;
      }
      if ((uVar39 & 0xffffffff) < (ulonglong)uStack_254) {
        lVar19 = uStack_254 - uVar39;
        lVar24 = uVar39 * 6 + uVar34 + -4;
        do {
          iVar17 = (int)lVar24;
          lVar24 = lVar24 + 6;
          *(uint *)lVar24 = *(uint *)(iVar17 + 6) & 0xfffffff0;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      return;
    }
  } while( true );
}

