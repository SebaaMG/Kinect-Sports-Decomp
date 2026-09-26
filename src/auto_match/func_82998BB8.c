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
extern unsigned int *auStack_120;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_82953940();
extern int fn_82964868();
extern int fn_82997D98();
extern int fn_82997E38();
extern unsigned int iStack_c4;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_82998BB8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar11;
  int iVar12;
  undefined8 uVar10;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  uint *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint *puVar25;
  ulonglong uVar26;
  uint auStack_120 [12];
  int aiStack_f0 [5];
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [4];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int aiStack_b0 [44];
  
  puVar22 = *(uint **)(param_1 + 0x104);
  uVar1 = *puVar22;
  uVar4 = (ulonglong)uVar1 & 0xfffff;
  if ((puVar22 == (uint *)0x0) || (uVar1 == 0)) {
    return 0;
  }
  uVar18 = puVar22[1] / uVar4;
  trapWord(6,uVar4,0);
  bVar5 = false;
  if (((uVar1 & 0xfff00000) == 0x50000000) || (uVar20 = puVar22[3], uVar20 != uVar4)) {
    uVar10 = fn_82964868(param_1,puVar22);
    if (-1 < (int)uVar10) {
      **(undefined4 **)(param_1 + 0x104) = 0;
      return 0;
    }
    return uVar10;
  }
  bVar7 = false;
  if (((*(short *)(param_1 + 0xca) != 0x104) &&
      (iVar11 = fn_82997E38(param_1,puVar22), iVar11 != 0)) && (uVar16 = 0, uVar20 != 0)) {
    iVar11 = 0;
    bVar7 = false;
    do {
      if (*(int *)(*(int *)(*(int *)(puVar22[4] + iVar11) * 4 + *(int *)(param_1 + 0x14)) + 0x10) ==
          3) {
        bVar5 = true;
        bVar7 = true;
      }
      uVar16 = uVar16 + 1;
      iVar11 = iVar11 + 4;
    } while (uVar16 < uVar20);
  }
  uVar24 = 0;
  if (uVar18 != 0) {
    lVar23 = 0;
    puVar25 = auStack_120;
    do {
      *puVar25 = 0xffffffff;
      puVar25[1] = 0xffffffff;
      lVar15 = 0;
      puVar25[2] = 0xffffffff;
      puVar25[3] = 0xffffffff;
      aiStack_f0[2] = -1;
      aiStack_f0[3] = -1;
      if ((uVar1 & 0xfffff) != 0) {
        iVar11 = *(int *)(param_1 + 0x104);
        lVar13 = (uVar24 & 0x3fffffff) * 4;
        iVar12 = *(int *)(param_1 + 0x14);
        iVar17 = 0;
        iVar2 = *(int *)(param_1 + 0x10);
        uVar26 = uVar4;
        do {
          iVar3 = *(int *)(*(int *)((int)((lVar23 + lVar15 & 0xffffffffU) << 2) +
                                   *(int *)(iVar11 + 8)) * 4 + iVar12);
          uVar20 = *(uint *)(*(int *)(*(int *)(*(int *)(iVar11 + 0x10) + iVar17) * 4 + iVar12) +
                            0x10);
          if ((*(uint *)(*(int *)(*(int *)(iVar3 + 4) * 4 + iVar2) + 4) & 0x100) == 0) {
            *(undefined4 *)
             ((int)auStack_120 + (int)((lVar13 + (ulonglong)uVar20 & 0xffffffff) << 2)) =
                 *(undefined4 *)(iVar3 + 0x10);
          }
          else {
            *(uint *)((int)auStack_120 + (int)((lVar13 + (ulonglong)uVar20 & 0xffffffff) << 2)) =
                 uVar20;
          }
          lVar15 = lVar15 + 1;
          iVar17 = iVar17 + 4;
          aiStack_f0[uVar20] = 0;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
      iVar11 = fn_82997D98(puVar25,aiStack_f0,5);
      if (iVar11 == 0) {
        bVar5 = true;
      }
      uVar24 = uVar24 + 1;
      lVar23 = lVar23 + uVar4;
      puVar25 = puVar25 + 4;
    } while ((uVar24 & 0xffffffff) < uVar18);
  }
  if (!bVar5) {
    uVar10 = fn_82964868(param_1,puVar22);
LAB_8299928c:
    if ((int)uVar10 < 0) {
      return uVar10;
    }
    goto LAB_82999294;
  }
  bVar5 = false;
  bVar9 = false;
  if (uVar4 == 4) {
    bVar6 = true;
    uVar20 = 0;
    piVar14 = aiStack_f0 + 4;
    do {
      if (!bVar6) break;
      bVar6 = false;
      aiStack_f0[2] = 0;
      aiStack_f0[3] = 0;
      uStack_dc = 0xffffffff;
      uStack_d8 = 0xffffffff;
      uStack_d4 = 0xffffffff;
      piVar14[-4] = -1;
      *piVar14 = 0;
      if (uVar18 != 0) {
        puVar22 = auStack_120;
        uVar24 = uVar18;
        do {
          iVar11 = fn_82997D98(puVar22,aiStack_f0,5);
          if (iVar11 == 0) {
            bVar6 = true;
          }
          uVar24 = uVar24 - 1;
          puVar22 = puVar22 + 4;
        } while (uVar24 != 0);
      }
      if ((bVar7) && (uVar20 != 3)) {
        bVar6 = true;
      }
      if (!bVar6) {
        uVar10 = fn_82953940(param_1,aiStack_f0,uVar18,4);
        if ((int)uVar10 < 0) {
          return uVar10;
        }
        uVar10 = fn_82953940(param_1,aiStack_f0 + 4,uVar18,4);
        goto LAB_8299928c;
      }
      uVar20 = uVar20 + 1;
      piVar14 = piVar14 + 1;
    } while (uVar20 < 4);
    bVar6 = true;
    uVar20 = 0;
    piVar14 = aiStack_f0 + 4;
    do {
      if (!bVar6) break;
      uVar16 = 0;
      piVar21 = aiStack_f0 + 4;
      do {
        if (uVar16 != uVar20) {
          bVar6 = false;
          bVar8 = false;
          aiStack_f0[2] = 0;
          aiStack_f0[3] = 0;
          uStack_dc = 0xffffffff;
          uStack_d8 = 0xffffffff;
          uStack_d4 = 0xffffffff;
          piVar14[-4] = -1;
          piVar21[-4] = -1;
          *piVar14 = 0;
          *piVar21 = 0;
          if (uVar18 != 0) {
            puVar22 = auStack_120;
            uVar24 = uVar18;
            bVar8 = false;
            do {
              iVar11 = fn_82997D98(puVar22,aiStack_f0,5);
              iVar12 = fn_82997D98(puVar22,aiStack_f0 + 4,5);
              if (iVar11 == 0) {
                bVar8 = true;
LAB_82998f24:
                bVar6 = true;
              }
              else if (iVar12 == 0) goto LAB_82998f24;
              uVar24 = uVar24 - 1;
              puVar22 = puVar22 + 4;
            } while (uVar24 != 0);
          }
          if (bVar7) {
            bVar6 = true;
          }
          if (!bVar6) {
            bVar5 = true;
            break;
          }
          if ((!bVar8) && ((!bVar7 || (aiStack_f0[3] != 0)))) {
            bVar9 = true;
            uStack_cc = 0;
            uStack_c8 = aiStack_f0[2];
            iStack_c4 = aiStack_f0[3];
            uStack_bc = 0xffffffff;
            uStack_b8 = 0xffffffff;
            uStack_b4 = 0xffffffff;
            aiStack_b0[1] = 0xffffffff;
            aiStack_b0[2] = 0xffffffff;
            aiStack_b0[3] = 0xffffffff;
            piVar14[8] = 0;
            piVar21[0xc] = 0;
          }
        }
        uVar16 = uVar16 + 1;
        piVar21 = piVar21 + 1;
      } while (uVar16 < 4);
      uVar20 = uVar20 + 1;
      piVar14 = piVar14 + 1;
    } while (uVar20 < 4);
    if (bVar5) {
      uVar10 = fn_82953940(param_1,aiStack_f0,uVar18,4);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      uVar10 = 4;
LAB_829991ec:
      piVar14 = aiStack_f0 + 4;
    }
    else {
      if (!bVar9) goto LAB_8299920c;
      bVar5 = true;
      uVar10 = fn_82953940(param_1,auStack_d0,uVar18,4);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      uVar10 = fn_82953940(param_1,auStack_c0,uVar18,4);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      uVar10 = 4;
      piVar14 = aiStack_b0;
    }
    uVar10 = fn_82953940(param_1,piVar14,uVar18,uVar10);
    if ((int)uVar10 < 0) {
      return uVar10;
    }
    if (bVar5) goto LAB_82999294;
  }
  else if (uVar4 == 3) {
    uVar16 = 0;
    uVar20 = 0xffffffff;
    puVar22 = auStack_120;
    lVar23 = 4;
    do {
      if (*puVar22 == 0xffffffff) {
        uVar20 = uVar16;
      }
      uVar16 = uVar16 + 1;
      puVar22 = puVar22 + 1;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    uVar16 = 0;
    piVar14 = aiStack_f0 + 4;
    do {
      if (bVar5) goto LAB_829991cc;
      uVar19 = 0;
      piVar21 = aiStack_f0 + 4;
      do {
        if (bVar5) break;
        if (((uVar19 != uVar16) && (uVar19 != uVar20)) && (uVar16 != uVar20)) {
          bVar9 = false;
          uVar24 = 0;
          aiStack_f0[2] = -1;
          aiStack_f0[3] = -1;
          uStack_dc = 0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          piVar14[-4] = 0;
          piVar21[-4] = 0;
          *piVar14 = -1;
          *piVar21 = -1;
          aiStack_f0[uVar20 + 4] = -1;
          if (uVar18 != 0) {
            puVar22 = auStack_120;
            do {
              if (bVar9) break;
              iVar11 = fn_82997D98(puVar22,aiStack_f0,5);
              if (iVar11 == 0) {
                bVar9 = true;
              }
              uVar24 = uVar24 + 1;
              puVar22 = puVar22 + 4;
            } while ((uVar24 & 0xffffffff) < uVar18);
          }
          if (((aiStack_f0[3] == 0) && (aiStack_f0[2] == 0)) && (bVar7)) {
            bVar9 = true;
          }
          if (!bVar9) {
            bVar5 = true;
          }
        }
        uVar19 = uVar19 + 1;
        piVar21 = piVar21 + 1;
      } while (uVar19 < 4);
      uVar16 = uVar16 + 1;
      piVar14 = piVar14 + 1;
    } while (uVar16 < 4);
    if (bVar5) {
LAB_829991cc:
      uVar10 = fn_82953940(param_1,aiStack_f0,uVar18,3);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      uVar10 = 3;
      goto LAB_829991ec;
    }
  }
LAB_8299920c:
  uVar24 = 0;
  if ((uVar1 & 0xfffff) != 0) {
    iVar11 = 0;
    do {
      aiStack_f0[2] = -1;
      aiStack_f0[3] = -1;
      aiStack_f0
      [*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + iVar11) * 4 +
                        *(int *)(param_1 + 0x14)) + 0x10)] = 0;
      uVar10 = fn_82953940(param_1,aiStack_f0,uVar18,uVar4);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      uVar24 = uVar24 + 1;
      iVar11 = iVar11 + 4;
    } while ((uVar24 & 0xffffffff) < uVar4);
  }
LAB_82999294:
  **(undefined4 **)(param_1 + 0x104) = 0;
  return 0;
}

