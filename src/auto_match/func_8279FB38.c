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
extern unsigned int *auStack_a00;
extern unsigned int fStack_a14;
extern unsigned int fStack_a24;
extern unsigned int fStack_a28;
extern int fn_8278FDC8();
extern int fn_8279A940();
extern int fn_8279A9F8();
extern int fn_8279AA48();
extern int fn_8279ADE8();
extern int fn_8279AE60();
extern int fn_8279B2C8();
extern int fn_8279E700();
extern int fn_8279E7B0();
extern int fn_8279E858();
extern int fn_827A2BA0();
extern int fn_827A84D0();
extern int fn_827A8998();
extern int fn_827AB770();
extern int fn_827ABAF0();
extern int fn_827AEB38();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int iStack_bc;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005C88;
extern unsigned int lbl_82015BD8;
extern unsigned int lbl_82015BDC;
extern unsigned int lbl_820885C8;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_a18;
extern unsigned int uStack_a1c;
extern unsigned int uStack_a30;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;


void fn_8279FB38(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  byte bVar12;
  byte bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  int iVar25;
  longlong lVar24;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar30;
  uint uVar31;
  int iVar32;
  ulonglong uVar29;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  byte bVar38;
  int *piVar39;
  byte bVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  undefined8 uStack_a30;
  float fStack_a28;
  float fStack_a24;
  int *piStack_a20;
  undefined4 uStack_a1c;
  uint uStack_a18;
  float fStack_a14;
  byte bStack_a10;
  undefined1 auStack_a00 [1324];
  int **ppiStack_4d4;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c0;
  int iStack_bc;
  char cStack_b4;
  char cStack_b3;
  
  iVar16 = fn_82F6A544();
  uVar27 = (ulonglong)*(uint *)(iVar16 + 8);
  uVar17 = fn_8279A940();
  uVar33 = *(uint *)(iVar16 + 0x10c);
  if ((*(byte *)(iVar16 + 0x13c) & 0x30) != 0) {
    *(byte *)(iVar16 + 0x13f) = *(byte *)(iVar16 + 0x13f) | 2;
  }
  bStack_a10 = *(byte *)(iVar16 + 0x98) >> 2 & 1;
  piVar21 = (int *)(iVar16 + 0x24);
  uStack_a1c = 0;
  uStack_a18 = 0;
  dVar49 = (double)lbl_821AAD20;
  fStack_a14 = lbl_821AAD20;
  iVar20 = 0;
  piStack_a20 = piVar21;
  fn_8279E700(auStack_a00,iVar16,*(undefined4 *)(iVar16 + 0x134));
  uVar37 = 0;
  uVar35 = 0;
  dVar51 = (double)lbl_82002C5C;
  dVar50 = lbl_82005730;
  do {
    uVar22 = (ulonglong)uStack_a18;
    piVar39 = piStack_a20;
LAB_8279fbe0:
    iVar25 = (int)uVar27;
    if ((((uVar27 + 0xc & 0xffffffff) == 0) || (iVar20 < 0)) ||
       (bVar14 = false, *(int *)(iVar25 + 0x10) <= iVar20)) {
      bVar14 = true;
    }
    iVar19 = (int)uVar22;
    if (bVar14) {
      if (((piVar39 == (int *)0x0) || ((ulonglong)(uint)piVar39[1] <= (uVar22 & 0xffffffff))) ||
         (bVar14 = false, iVar19 < 0)) {
        bVar14 = true;
      }
      if (!bVar14) {
        uVar27 = uVar22;
        if (iVar19 < 0) {
          uVar27 = 0xffffffffffffffff;
        }
        if (((piVar39 == (int *)0x0) || ((ulonglong)(uint)piVar39[1] <= (uVar22 & 0xffffffff))) ||
           (bVar14 = false, iVar19 < 0)) {
          bVar14 = true;
        }
        if (!bVar14) {
          fn_827ABAF0(piVar39,uVar22,*(uint *)(iVar16 + 0x28) - uVar27);
        }
        *(byte *)(iVar16 + 0x98) = *(byte *)(iVar16 + 0x98) | 1;
      }
      bVar14 = false;
      bVar38 = *(byte *)(iVar16 + 0x13d);
      *(uint *)(iVar16 + 0x100) = uVar37;
      bVar13 = *(byte *)(iVar16 + 0x13c) >> 2;
      bVar40 = bVar13 & 3;
      *(uint *)(iVar16 + 0x104) = uVar35;
      *(byte *)(iVar16 + 0x13f) = *(byte *)(iVar16 + 0x13f) & 0xfc;
      *(short *)(iVar16 + 0x138) = *(short *)(iVar16 + 0x138) + 1;
      if ((((bVar38 & 1) != 0) || ((bVar38 & 2) != 0)) || (cStack_b3 != '\0')) {
        dVar45 = (double)*(float *)(iVar16 + 0xf0);
        uStack_a30 = *(ulonglong *)(iVar16 + 0xf0);
        dVar43 = (double)*(float *)(iVar16 + 0xf4);
        fStack_a28 = *(float *)(iVar16 + 0xf8);
        dVar44 = (double)fStack_a28;
        fStack_a24 = *(float *)(iVar16 + 0xfc);
        dVar42 = (double)fStack_a24;
        dVar41 = dVar45;
        dVar47 = dVar44;
        if ((bVar38 & 1) != 0) {
          bVar12 = *(byte *)(iVar16 + 0x13c) & 3;
          dVar47 = (double)((float)uVar37 + lbl_82015BDC);
          if (bVar12 == 1) {
            dVar46 = dVar44 - dVar47;
LAB_827a033c:
            dVar41 = (double)(float)dVar46;
            uStack_a30 = CONCAT44((float)dVar46,*(float *)(iVar16 + 0xf4));
          }
          else if (bVar12 == 2) {
            dVar46 = (double)(float)((double)(float)(dVar44 - dVar45) * dVar51 -
                                    (double)(float)(dVar47 * dVar51)) + dVar45;
            goto LAB_827a033c;
          }
          fStack_a28 = (float)(dVar41 + dVar47);
          dVar47 = (double)fStack_a28;
        }
        dVar46 = dVar43;
        if (((bVar38 & 2) != 0) || (dVar48 = dVar42, cStack_b3 != '\0')) {
          dVar48 = (double)((float)uVar35 + lbl_82015BDC);
          if ((((bVar13 & 3) == 0) && (cStack_b3 != '\0')) || (bVar40 == 3)) {
            dVar46 = (double)(float)((double)(float)(dVar42 - dVar43) * dVar51 -
                                    (double)(float)(dVar48 * dVar51)) + dVar43;
LAB_827a03a8:
            uStack_a30 = CONCAT44((((U64)(uStack_a30) >> 0) & 0xFFFFFFFF),(float)dVar46);
            dVar46 = (double)(float)dVar46;
          }
          else if (bVar40 == 2) {
            dVar46 = dVar42 - dVar48;
            goto LAB_827a03a8;
          }
          fStack_a24 = (float)(dVar46 + dVar48);
          dVar48 = (double)fStack_a24;
          bVar14 = true;
        }
        if (((dVar41 != dVar45) || (dVar47 != dVar44)) ||
           ((dVar46 != dVar43 || (bVar15 = false, dVar48 != dVar42)))) {
          bVar15 = true;
        }
        if (bVar15) {
          fn_8279B2C8(iVar16,&uStack_a30,0);
        }
      }
      bVar38 = *(byte *)(iVar16 + 0x13c) >> 4 & 3;
      dVar41 = (double)lbl_820885C8;
      if (bVar38 != 0) {
        fVar1 = (float)((double)*(float *)(iVar16 + 0xf0) + dVar41);
        fVar2 = (float)((double)*(float *)(iVar16 + 0xf4) + dVar41);
        fVar3 = (float)((double)*(float *)(iVar16 + 0xf8) - dVar41);
        fVar4 = (float)((double)*(float *)(iVar16 + 0xfc) - dVar41);
        if (((*(byte *)(iVar16 + 0x13d) & 4) == 0) && ((bVar13 & 3) == 0)) {
          bVar40 = 3;
        }
        dVar47 = (double)lbl_82002AE0;
        if (bVar38 == 1) {
          fVar3 = fVar3 - fVar1;
          dVar42 = dVar47;
          if (fVar3 < (float)(longlong)(int)uVar37) {
            dVar42 = (double)(fVar3 / (float)(longlong)(int)uVar37);
          }
          fVar4 = fVar4 - fVar2;
          dVar43 = dVar47;
          if (fVar4 < (float)(longlong)(int)uVar35) {
            dVar43 = (double)(fVar4 / (float)(longlong)(int)uVar35);
          }
          if (dVar43 < dVar42) {
            dVar42 = dVar43;
          }
        }
        else {
          if (bVar38 != 2) goto LAB_827a05c4;
          dVar43 = (double)lbl_82005C88;
          dVar42 = dVar43;
          if (0x13 < (int)uVar37) {
            dVar42 = (double)((fVar3 - fVar1) / (float)(longlong)(int)uVar37);
          }
          dVar44 = dVar43;
          if (0x13 < (int)uVar35) {
            dVar44 = (double)((fVar4 - fVar2) / (float)(longlong)(int)uVar35);
          }
          if (dVar44 < dVar42) {
            dVar42 = dVar44;
          }
          if (dVar42 == dVar43) {
            dVar42 = dVar47;
          }
        }
        if (dVar42 != dVar47) {
          iVar20 = fn_827A8998(piVar21);
          if (0 < iVar20) {
            if ((double)(float)((double)(longlong)iVar20 * dVar42) < (double)lbl_82015BD8) {
              dVar42 = (double)(float)((double)lbl_82015BD8 / (double)(longlong)iVar20);
            }
          }
          uStack_a30 = (ulonglong)(int)uVar35;
          *(int *)(iVar16 + 0x100) = (int)(longlong)((double)(longlong)(int)uVar37 * dVar42);
          *(int *)(iVar16 + 0x104) = (int)(longlong)((double)(longlong)uStack_a30 * dVar42);
          fn_827AB770(dVar42,piVar21);
        }
      }
LAB_827a05c4:
      if (((!bVar14) && (bVar40 != 0)) && ((*(byte *)(iVar16 + 0x13d) & 2) == 0)) {
        uStack_a30 = (ulonglong)*(uint *)(iVar16 + 0x104);
        fVar3 = (float)((double)*(float *)(iVar16 + 0xf8) - dVar41);
        fVar1 = (float)((double)*(float *)(iVar16 + 0xf4) + dVar41);
        dVar43 = (double)fVar1;
        fVar4 = (float)((double)*(float *)(iVar16 + 0xfc) - dVar41);
        dVar42 = (double)fVar4;
        fVar2 = (float)((double)*(float *)(iVar16 + 0xf0) + dVar41);
        fVar5 = *(float *)(iVar16 + 0x3c);
        dVar41 = dVar42 - dVar43;
        fVar6 = *(float *)(iVar16 + 0x44);
        dVar47 = (double)uStack_a30;
        dVar44 = (double)*(float *)(iVar16 + 0x48);
        if ((double)(float)dVar41 <= dVar47) {
          *(float *)(iVar16 + 0x3c) = fVar2;
          *(float *)(iVar16 + 0x40) = fVar1;
          *(float *)(iVar16 + 0x44) = fVar3;
          *(float *)(iVar16 + 0x48) = fVar4;
        }
        else {
          dVar45 = dVar43;
          if (bVar40 != 1) {
            fVar3 = fVar6;
            fVar2 = fVar5;
            if (bVar40 == 2) {
              dVar47 = dVar42 - dVar47;
              dVar42 = dVar44;
              dVar45 = (double)(float)dVar47;
            }
            else {
              dVar42 = dVar44;
              dVar45 = (double)*(float *)(iVar16 + 0x40);
              if (bVar40 == 3) {
                dVar45 = (double)(float)((double)(float)((double)(float)dVar41 * dVar51 -
                                                        (double)(float)(dVar47 * dVar51)) + dVar43);
              }
            }
          }
          *(float *)(iVar16 + 0x3c) = fVar2;
          *(float *)(iVar16 + 0x40) = (float)dVar45;
          *(float *)(iVar16 + 0x44) = fVar3;
          *(float *)(iVar16 + 0x48) = (float)dVar42;
        }
      }
      if (cStack_b4 == '\0') goto LAB_827a07e4;
      uVar35 = 0;
      iVar20 = 0;
      break;
    }
    iVar9 = *(int *)(iVar20 * 4 + *(int *)(uVar27 + 0xc));
    if (((piVar39 == (int *)0x0) || ((ulonglong)(uint)piVar39[1] <= (uVar22 & 0xffffffff))) ||
       (bVar14 = false, iVar19 < 0)) {
      bVar14 = true;
    }
    if (bVar14) goto LAB_827a0164;
    lVar26 = (uVar22 & 0x3fffffff) << 2;
    piVar10 = *(int **)(*piVar39 + (int)lVar26);
    if ((*(byte *)(iVar16 + 0x13f) & 2) == 0) {
      if (*piVar10 < 0) {
        iVar30 = piVar10[1];
      }
      else {
        iVar30 = piVar10[7];
      }
      if (*(int *)(iVar9 + 0x20) != iVar30) goto LAB_8279ff78;
      if (*piVar10 < 0) {
        sVar7 = *(short *)(piVar10 + 6);
      }
      else {
        sVar7 = *(short *)(piVar10 + 9);
      }
      if (*(short *)(iVar9 + 0x24) != sVar7) goto LAB_8279ff78;
      uVar18 = *(uint *)(iVar9 + 0x1c);
      if (*(int *)(iVar16 + 0x114) != 0) {
        uVar18 = fn_827A2BA0(*(int *)(iVar16 + 0x114),uVar18);
        uVar22 = (ulonglong)uStack_a18;
        piVar39 = piStack_a20;
      }
      while( true ) {
        if (((piVar39 == (int *)0x0) || ((ulonglong)(uint)piVar39[1] <= (uVar22 & 0xffffffff))) ||
           (bVar14 = false, (int)uVar22 < 0)) {
          bVar14 = true;
        }
        if (bVar14) break;
        puVar11 = *(uint **)((int)((uVar22 & 0xffffffff) << 2) + *piVar39);
        if ((int)*puVar11 < 0) {
          uVar31 = puVar11[1];
        }
        else {
          uVar31 = puVar11[7];
        }
        if (*(uint *)(iVar9 + 0x20) != uVar31) break;
        if ((int)*puVar11 < 0) {
          puVar11[2] = puVar11[2] & 0xff000000 | uVar18 & 0xffffff;
        }
        else {
          puVar11[2] = uVar18;
        }
        uVar31 = puVar11[3];
        uVar8 = puVar11[4];
        if ((int)*puVar11 < 0) {
          uVar34 = (uint)*(byte *)(puVar11 + 2);
        }
        else {
          uVar34 = puVar11[8];
        }
        uVar18 = uVar18 + uVar34;
        puVar11[4] = uStack_cc;
        if ((int)*puVar11 < 0) {
          uVar34 = (uint)*(ushort *)(puVar11 + 5);
        }
        else {
          uVar34 = puVar11[5];
        }
        if ((int)uVar37 <= (int)uVar34) {
          uVar37 = uVar34;
        }
        iVar19 = fn_8278FDC8(iVar9);
        if ((iVar19 != 0) ||
           ((*(int *)(iVar16 + 0x114) != 0 &&
            ((*(ushort *)(*(int *)(iVar16 + 0x114) + 0x68) & 1) == 0)))) {
          if ((int)*puVar11 < 0) {
            uVar35 = (uint)*(ushort *)((int)puVar11 + 0x16);
          }
          else {
            uVar35 = puVar11[6];
          }
          uVar35 = uVar35 + uStack_cc;
        }
        if ((int)*puVar11 < 0) {
          uVar34 = (uint)*(ushort *)((int)puVar11 + 0x16);
          iVar19 = (int)*(char *)((int)puVar11 + 0x1d);
        }
        else {
          uVar34 = puVar11[6];
          iVar19 = (int)*(short *)(puVar11 + 10);
        }
        uStack_cc = iVar19 + uVar34 + uStack_cc;
        if ((*(byte *)(iVar16 + 0x13d) & 1) != 0) {
          uVar34 = *puVar11;
          uVar36 = uVar34 >> 0x1c & 3;
          if (uVar36 == 1) {
            dVar41 = (double)(*(float *)(iVar16 + 0x44) - *(float *)(iVar16 + 0x3c));
            if (dVar41 <= dVar49) {
              dVar41 = dVar41 - dVar50;
            }
            else {
              dVar41 = dVar41 + dVar50;
            }
            iVar19 = (int)dVar41;
            if ((int)uVar34 < 0) {
              uVar34 = (uint)*(ushort *)(puVar11 + 5);
            }
            else {
              uVar34 = puVar11[5];
            }
          }
          else {
            if (uVar36 != 2) goto LAB_8279ff10;
            dVar41 = (double)(float)((double)(*(float *)(iVar16 + 0x44) - *(float *)(iVar16 + 0x3c))
                                    * dVar51);
            if (dVar41 <= dVar49) {
              dVar41 = dVar41 - dVar50;
            }
            else {
              dVar41 = dVar41 + dVar50;
            }
            iVar19 = (int)dVar41;
            if ((int)uVar34 < 0) {
              uVar34 = (uint)*(ushort *)(puVar11 + 5);
            }
            else {
              uVar34 = puVar11[5];
            }
            uVar34 = ((int)uVar34 >> 1) + (uint)((int)uVar34 < 0 && (uVar34 & 1) != 0);
          }
          puVar11[3] = -((int)(iVar19 - uVar34) >> 0x1f) - 1U & iVar19 - uVar34;
          cStack_b4 = '\x01';
        }
LAB_8279ff10:
        if ((uVar31 != puVar11[3]) || (uVar8 != puVar11[4])) {
          *(byte *)(iVar16 + 0x98) = *(byte *)(iVar16 + 0x98) | 1;
        }
        uVar22 = (ulonglong)uStack_a18;
        piVar39 = piStack_a20;
        if (uVar22 < (uint)piStack_a20[1]) {
          uVar22 = uVar22 + 1;
          uStack_a18 = (uint)uVar22;
        }
      }
      if (iVar20 < *(int *)(iVar25 + 0x10)) {
        iVar20 = iVar20 + 1;
      }
      goto LAB_8279fbe0;
    }
LAB_8279ff78:
    iVar30 = *piVar10;
    uVar18 = piVar10[2];
    if (((iVar30 < 0) && (uVar18 = uVar18 & 0xffffff, uVar18 == 0xffffff)) || (uVar18 == 0xffffffff)
       ) {
      iVar25 = 0;
      uVar29 = uVar22;
      if (iVar30 < 0) {
        iVar9 = piVar10[1];
      }
      else {
        iVar9 = piVar10[7];
      }
      while( true ) {
        uVar28 = (ulonglong)(uint)piVar39[1];
        if ((uVar28 <= (uVar29 & 0xffffffff)) || (bVar14 = false, (int)uVar29 < 0)) {
          bVar14 = true;
        }
        if (bVar14) break;
        piVar10 = *(int **)(*piVar39 + (int)lVar26);
        if (*piVar10 < 0) {
          iVar30 = piVar10[1];
        }
        else {
          iVar30 = piVar10[7];
        }
        if (iVar30 != iVar9) break;
        iVar25 = iVar25 + 1;
        if ((uVar29 & 0xffffffff) < uVar28) {
          lVar26 = lVar26 + 4;
          uVar29 = uVar29 + 1;
        }
      }
      if (iVar25 != 0) {
        if ((uVar28 <= (uVar22 & 0xffffffff)) || (bVar14 = false, iVar19 < 0)) {
          bVar14 = true;
        }
        if (!bVar14) {
          fn_827ABAF0(piVar39);
          uVar22 = (ulonglong)uStack_a18;
          piVar39 = piStack_a20;
        }
        *(byte *)(iVar16 + 0x98) = *(byte *)(iVar16 + 0x98) | 1;
      }
      goto LAB_8279fbe0;
    }
    if (iVar30 < 0) {
      iVar32 = piVar10[1];
    }
    else {
      iVar32 = piVar10[7];
    }
    if (*(int *)(iVar9 + 0x20) == iVar32) {
      if (iVar30 < 0) {
        sVar7 = *(short *)(piVar10 + 6);
      }
      else {
        sVar7 = *(short *)(piVar10 + 9);
      }
      if (*(short *)(iVar9 + 0x24) != sVar7) {
        lVar24 = 0;
        uVar29 = uVar22;
        while( true ) {
          uVar28 = (ulonglong)(uint)piVar39[1];
          if ((uVar28 <= (uVar29 & 0xffffffff)) || (bVar14 = false, (int)uVar29 < 0)) {
            bVar14 = true;
          }
          if (bVar14) break;
          piVar10 = *(int **)(*piVar39 + (int)lVar26);
          if (*piVar10 < 0) {
            iVar30 = piVar10[1];
          }
          else {
            iVar30 = piVar10[7];
          }
          if (iVar30 != *(int *)(iVar9 + 0x20)) break;
          lVar24 = lVar24 + 1;
          if ((uVar29 & 0xffffffff) < uVar28) {
            uVar29 = uVar29 + 1;
            lVar26 = lVar26 + 4;
          }
        }
        if ((uVar28 <= (uVar22 & 0xffffffff)) || (bVar14 = false, iVar19 < 0)) {
          bVar14 = true;
        }
        if (!bVar14) {
          fn_827ABAF0(piVar39,uVar22,lVar24);
        }
        *(byte *)(iVar16 + 0x98) = *(byte *)(iVar16 + 0x98) | 1;
      }
    }
LAB_827a0164:
    ppiStack_4d4 = &piStack_a20;
    uStack_c8 = uStack_cc;
    fn_8279E858(auStack_a00,iVar9);
    *(byte *)(iVar16 + 0x98) = *(byte *)(iVar16 + 0x98) | 1;
    if ((int)uVar37 <= (int)uStack_c0) {
      uVar37 = uStack_c0;
    }
    iVar19 = fn_8278FDC8(iVar9);
    if ((iVar19 != 0) ||
       ((*(int *)(iVar16 + 0x114) != 0 && ((*(ushort *)(*(int *)(iVar16 + 0x114) + 0x68) & 1) == 0))
       )) {
      uVar35 = iStack_bc + uStack_c8;
    }
    if (iVar20 < *(int *)(iVar25 + 0x10)) {
      iVar20 = iVar20 + 1;
    }
  } while( true );
LAB_827a06ac:
  if (((piVar21 == (int *)0x0) || (*(uint *)(iVar16 + 0x28) <= uVar35)) ||
     (bVar14 = false, (int)uVar35 < 0)) {
    bVar14 = true;
  }
  if (bVar14) {
LAB_827a07e4:
    uVar35 = fn_8279A9F8(iVar16);
    bVar14 = false;
    if (uVar35 < *(uint *)(iVar16 + 0x4c)) {
      fn_8279ADE8(iVar16);
    }
    else if (uVar35 != uVar17) {
      bVar14 = true;
    }
    uVar17 = fn_8279AA48(iVar16);
    if (uVar17 < *(uint *)(iVar16 + 0x38)) {
      fn_8279AE60(iVar16);
    }
    else if (uVar17 != uVar33) {
      bVar14 = true;
    }
    piVar39 = *(int **)(iVar16 + 0x10);
    if (piVar39 != (int *)0x0) {
      if ((bVar14) && ((*(byte *)(piVar39 + 2) & 4) != 0)) {
        (**(code **)(*piVar39 + 0x10))(piVar39,iVar16);
      }
      piVar39 = *(int **)(iVar16 + 0x10);
      if ((*(byte *)(piVar39 + 2) & 8) != 0) {
        (**(code **)(*piVar39 + 0x14))(piVar39,iVar16);
      }
    }
    if ((*(int *)(iVar16 + 0x114) == 0) ||
       (bVar14 = false, (*(ushort *)(*(int *)(iVar16 + 0x114) + 0x68) & 1) != 0)) {
      bVar14 = true;
    }
    if ((((!bVar14) ||
         (uStack_a30 = (ulonglong)*(uint *)(iVar16 + 0x100),
         *(float *)(iVar16 + 0xf8) - *(float *)(iVar16 + 0xf0) < (float)uStack_a30)) ||
        (uStack_a30 = (ulonglong)*(uint *)(iVar16 + 0x104),
        *(float *)(iVar16 + 0xfc) - *(float *)(iVar16 + 0xf4) < (float)uStack_a30)) ||
       (*(int *)(iVar16 + 0x4c) != 0)) {
      bVar38 = *(byte *)(iVar16 + 0x98) & 0xdf;
    }
    else {
      bVar38 = *(byte *)(iVar16 + 0x98) | 0x20;
    }
    *(byte *)(iVar16 + 0x98) = bVar38;
    if (*(int *)(iVar16 + 0x14) != 0) {
      if (*(int *)(iVar16 + 0x114) == 0) {
        uVar23 = 0;
      }
      else {
        uVar23 = *(undefined4 *)(*(int *)(iVar16 + 0x114) + 0x14);
      }
      fn_827AEB38(*(int *)(iVar16 + 0x14),uVar23);
    }
    *(byte *)(iVar16 + 0x13f) = *(byte *)(iVar16 + 0x13f) & 0xdf;
    if (*(int *)(iVar16 + 0x28) != 0) {
      piVar39 = *(int **)*piVar21;
      if (*piVar39 < 0) {
        uVar33 = (uint)*(byte *)(piVar39 + 7);
      }
      else {
        uVar33 = piVar39[1];
      }
      if (uVar33 != 0) {
        if (*piVar39 < 0) {
          iVar20 = (int)piVar39 + 0x1e;
        }
        else {
          iVar20 = (int)piVar39 + 0x2a;
        }
        if (((*(ushort *)(iVar20 + 6) >> 0xd & 1) != 0) &&
           (piVar21 = (int *)fn_827A84D0(*(int *)*piVar21),
           (*(uint *)(*(int *)(*(int *)(*piVar21 + 0x14) + 0xc) + 0x14) >> 0xf & 1) != 0)) {
          *(byte *)(iVar16 + 0x13f) = *(byte *)(iVar16 + 0x13f) | 0x20;
        }
      }
    }
    fn_8279E7B0(auStack_a00);
    fn_82F6A590();
    return;
  }
  puVar11 = *(uint **)(iVar20 + *piVar21);
  uVar37 = *puVar11;
  uVar18 = uVar37 >> 0x1c & 3;
  if (uVar18 == 1) {
    dVar41 = (double)(*(float *)(iVar16 + 0x44) - *(float *)(iVar16 + 0x3c));
    if (dVar41 <= dVar49) {
      dVar41 = dVar41 - dVar50;
    }
    else {
      dVar41 = dVar41 + dVar50;
    }
    iVar25 = (int)dVar41;
    if ((int)uVar37 < 0) {
      uVar37 = (uint)*(ushort *)(puVar11 + 5);
    }
    else {
      uVar37 = puVar11[5];
    }
    uVar37 = -((int)(iVar25 - uVar37) >> 0x1f) - 1U & iVar25 - uVar37;
LAB_827a07c8:
    uStack_a30 = (ulonglong)iVar25;
    puVar11[3] = uVar37;
  }
  else if (uVar18 == 2) {
    dVar41 = (double)(float)((double)(*(float *)(iVar16 + 0x44) - *(float *)(iVar16 + 0x3c)) *
                            dVar51);
    if (dVar41 <= dVar49) {
      dVar41 = dVar41 - dVar50;
    }
    else {
      dVar41 = dVar41 + dVar50;
    }
    iVar25 = (int)dVar41;
    if ((int)uVar37 < 0) {
      uVar37 = (uint)*(ushort *)(puVar11 + 5);
    }
    else {
      uVar37 = puVar11[5];
    }
    uVar37 = iVar25 - (((int)uVar37 >> 1) + (uint)((int)uVar37 < 0 && (uVar37 & 1) != 0));
    uVar37 = -((int)uVar37 >> 0x1f) - 1U & uVar37;
    goto LAB_827a07c8;
  }
  if (uVar35 < *(uint *)(iVar16 + 0x28)) {
    uVar35 = uVar35 + 1;
    iVar20 = iVar20 + 4;
  }
  goto LAB_827a06ac;
}

