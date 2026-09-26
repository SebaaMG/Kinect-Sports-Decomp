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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82633B28();
extern int fn_82633E88();
extern int fn_82F63CA0();


void fn_82632738(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar7;
  uint *puVar6;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar12;
  undefined8 uVar11;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  uint *puVar17;
  int *piVar18;
  uint *puVar19;
  uint *puVar20;
  longlong lVar21;
  uint *puVar22;
  bool bVar23;
  bool bVar24;
  undefined1 auStack_90 [16];
  uint auStack_80 [32];
  
  param_1[0x15] = 1;
  if ((*(uint *)(*param_1 + 0x4db4) >> 2 & 1) == 0) {
    piVar16 = param_1 + 0x4c;
    iVar10 = param_1[0x4d];
    puVar12 = (uint *)param_1[0x4c];
    for (puVar6 = puVar12; puVar6 < puVar12 + iVar10; puVar6 = puVar6 + 1) {
      uVar15 = *puVar6;
      uVar1 = (uint)*(byte *)((int)param_1 + (uVar15 >> 8 & 0xf) + 0x140) & uVar15 >> 0xc & 0xf;
      if (uVar1 != (uVar15 >> 0xc & 0xf)) {
        if (uVar1 == 0) {
          puVar12 = (uint *)*piVar16;
          if ((puVar12 <= puVar6) && (puVar6 < puVar12 + param_1[0x4d])) {
            fn_82F63CA0(puVar6,puVar6 + 1,
                         ((int)puVar12 + (param_1[0x4d] * 4 - (int)puVar6) + -4 >> 2) << 2);
            param_1[0x4d] = param_1[0x4d] + -1;
          }
          puVar6 = puVar6 + -1;
        }
        else {
          *puVar6 = uVar1 << 0xc | uVar15 & 0xffff0fff;
        }
      }
      iVar10 = param_1[0x4d];
      puVar12 = (uint *)*piVar16;
    }
    piVar18 = param_1 + 0x49;
    puVar12 = (uint *)param_1[0x49];
    bVar5 = false;
    puVar6 = puVar12 + param_1[0x4a];
    if (puVar12 < puVar6) {
      puVar9 = (uint *)0x0;
      puVar19 = (uint *)0x0;
      puVar8 = (uint *)0x0;
      do {
        puVar22 = puVar12;
        puVar12 = (uint *)param_1[0x1b];
        uVar15 = *puVar22 & 0xfff;
        iVar10 = param_1[0x18];
        puVar6 = puVar12 + param_1[0x1c] * 2;
        puVar17 = (uint *)(uVar15 * 0xc + iVar10);
        for (puVar20 = puVar12; puVar20 < puVar6; puVar20 = puVar20 + 2) {
          if (((1 << (puVar20[1] >> 0xc & 0xf) & 0x607eU) != 0) && ((puVar20[1] & 0x800) == 0)) {
            uVar1 = *puVar20 & 0xfff;
            if ((uVar1 <= uVar15) && (uVar15 < (*puVar20 >> 0xc & 7) + uVar1)) goto LAB_826328d4;
          }
        }
        puVar20 = (uint *)0x0;
LAB_826328d4:
        bVar4 = false;
        if (puVar8 != (uint *)0x0) {
          if (((uVar15 != (puVar22[-1] & 0xfff) + 1) || ((*puVar9 & 0x400000) != 0)) ||
             (bVar4 = true, (*puVar22 & 0x400000) != 0)) {
            bVar4 = false;
          }
          if (bVar4) {
            uVar1 = *puVar8;
            uVar2 = *puVar17;
            if (((((uVar2 ^ uVar1) & 0x7e0) != 0) || (((uVar2 ^ uVar1) & 0x800) != 0)) ||
               (bVar4 = true, ((uVar2 ^ uVar1) & 0xc0000000) != 0)) goto LAB_82632948;
          }
          else {
LAB_82632948:
            bVar4 = false;
          }
          if ((!bVar4) ||
             (bVar4 = true,
             (2 << ((uVar15 - (*puVar20 & 0xfff)) * 2 & 0x3e) & *puVar20 >> 0x10 & 0xfff) != 0)) {
            bVar4 = false;
          }
          if ((((int)puVar8[1] < 0) || ((puVar17[1] & 0x80000000) != 0)) &&
             ((!bVar4 ||
              (((-1 < (int)puVar8[1] || ((puVar17[1] & 0x80000000) == 0)) ||
               (bVar4 = true, ((puVar17[2] ^ puVar8[2]) & 0x80000000) != 0)))))) {
            bVar4 = false;
          }
          if ((bVar4) && (puVar19 != puVar20)) {
            if ((puVar19 + 2 == puVar20) &&
               (((puVar20[1] & 0xf000) != 0x1000 || ((*puVar20 & 0x8000) == 0)))) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            uVar15 = puVar19[1];
            uVar1 = puVar20[1];
            uVar2 = 1 << (uVar15 >> 0xc & 0xf);
            uVar3 = 1 << (uVar1 >> 0xc & 0xf);
            bVar23 = (uVar2 & 0x6018) == 0;
            bVar24 = (uVar3 & 0x6018) == 0;
            if (((!bVar23) || (!bVar24)) &&
               ((!bVar4 ||
                ((((bVar23 || (bVar24)) || (((uVar15 ^ uVar1) & 0x400) != 0)) ||
                 (bVar4 = true, ((uVar15 ^ uVar1) & 0x3fc) != 0)))))) {
              bVar4 = false;
            }
            bVar23 = (uVar2 & 0x60) != 0;
            bVar24 = (uVar3 & 0x60) != 0;
            if ((bVar23) || (bVar24)) {
              if (((bVar4) && ((bVar23 && (bVar24)))) && (((uVar15 ^ uVar1) & 0x400) == 0)) {
                cVar7 = fn_82633E88(puVar19,iVar10);
                bVar4 = true;
                if (cVar7 != '\0') goto LAB_82632b14;
              }
              bVar4 = false;
            }
LAB_82632b14:
            if (bVar4) {
              iVar13 = (int)puVar20 - (int)puVar12;
              while ((puVar12 < puVar6 && (bVar4))) {
                if ((1 << (puVar12[1] >> 0xc & 0xf) & 0xb80U) != 0) {
                  bVar4 = (longlong)(iVar13 >> 3) != ((ulonglong)*puVar12 & 0x1fff);
                }
                puVar12 = puVar12 + 2;
              }
            }
          }
        }
        if (bVar5) {
          if (!bVar4) {
            iVar13 = 2;
            iVar14 = (puVar22[-1] & 0xfff) * 0xc;
            uVar15 = *(uint *)(iVar14 + iVar10);
            if (((uVar15 >> 7 ^ uVar15) & 0x7e0) == 0) {
              uVar1 = *(uint *)(iVar14 + iVar10 + 4);
              auStack_80[0] = uVar1 & 7;
              auStack_80[1] = uVar1 >> 3 & 7;
              auStack_80[2] = uVar1 >> 6 & 7;
              auStack_80[3] = uVar1 >> 9 & 7;
              if (*(int *)((int)auStack_80 + (uVar15 >> 0x1c & 0xc)) != 7) {
                iVar13 = 3;
              }
            }
            uVar15 = iVar13 << 0x14 | puVar22[-1] & 0xffcfffff;
            bVar5 = false;
            goto LAB_82632c10;
          }
        }
        else if ((puVar19 != (uint *)0x0) && (bVar4)) {
          bVar5 = true;
          uVar15 = puVar22[-1] & 0xffcfffff | 0x100000;
LAB_82632c10:
          puVar22[-1] = uVar15;
        }
        puVar6 = (uint *)(param_1[0x4a] * 4 + *piVar18);
        puVar12 = puVar22 + 1;
        puVar9 = puVar22;
        puVar19 = puVar20;
        puVar8 = puVar17;
      } while (puVar22 + 1 < puVar6);
    }
    if (bVar5) {
      iVar10 = 2;
      puVar12 = (uint *)((puVar6[-1] & 0xfff) * 0xc + param_1[0x18]);
      uVar15 = *puVar12;
      if (((uVar15 >> 7 ^ uVar15) & 0x7e0) == 0) {
        uVar1 = puVar12[1];
        auStack_80[0] = uVar1 & 7;
        auStack_80[1] = uVar1 >> 3 & 7;
        auStack_80[2] = uVar1 >> 6 & 7;
        auStack_80[3] = uVar1 >> 9 & 7;
        if (*(int *)((int)auStack_80 + (uVar15 >> 0x1c & 0xc)) != 7) {
          iVar10 = 3;
        }
      }
      puVar6[-1] = iVar10 << 0x14 | puVar6[-1] & 0xffcfffff;
    }
    if (*(int *)(*param_1 + 0x4db8) != 0) {
      for (puVar12 = (uint *)*piVar16; puVar12 < (uint *)(param_1[0x4d] * 4 + *piVar16);
          puVar12 = puVar12 + 1) {
        uVar15 = *puVar12;
        (**(code **)(**(int **)(*param_1 + 0x4db8) + 0x18))
                  (*(int **)(*param_1 + 0x4db8),uVar15 >> 8 & 0xf,uVar15 & 0xff,uVar15 >> 0xc & 0xf)
        ;
      }
      for (puVar12 = (uint *)*piVar18; puVar12 < (uint *)(param_1[0x4a] * 4 + *piVar18);
          puVar12 = puVar12 + 1) {
        lVar21 = (longlong)((param_1[0x41] - param_1[0x40]) / 0xc);
        puVar6 = (uint *)fn_82633B28(param_1,((ulonglong)*puVar12 & 0xfff) + lVar21,auStack_90);
        uVar15 = puVar6[1];
        uVar1 = *puVar12;
        uVar2 = uVar1 >> 0x14 & 3;
        if ((uVar2 == 2) || (uVar11 = 0, uVar2 == 3)) {
          uVar11 = 1;
        }
        (**(code **)(**(int **)(*param_1 + 0x4db8) + 0x14))
                  (*(int **)(*param_1 + 0x4db8),((ulonglong)uVar1 & 0xfff) + lVar21,
                   *puVar6 >> 0xc & 0x3f,
                   (uVar15 & 0xe00) + (uVar15 & 0x1c0) + (uVar15 & 0x38) + (uVar15 & 7),
                   (uVar1 >> 8 & 0xf0) + (uVar1 >> 0x10 & 0xf),uVar11);
      }
    }
  }
  return;
}

