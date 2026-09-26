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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_e0;
extern unsigned int fStack_e4;
extern unsigned int fStack_e8;
extern int fn_82250A18();
extern int fn_82261AD0();
extern int fn_822BD338();
extern int fn_822C72E0();
extern int fn_82337B90();
extern int fn_82337BE0();
extern int fn_8233E8A0();
extern int fn_82340AF0();
extern int fn_82342038();
extern int fn_82344418();
extern int fn_82344550();
extern int fn_82344A08();
extern int fn_8242C348();
extern int fn_824395F8();
extern int fn_8243D2D8();
extern int fn_824486C0();
extern int fn_82448720();
extern int fn_82448860();
extern int fn_82448998();
extern int fn_82448A88();
extern int fn_824CD030();
extern int fn_824E17D8();
extern int fn_824E1A20();
extern int fn_82508078();
extern int fn_82526C70();
extern int fn_8252CAF8();
extern int fn_827F6370();
extern int fn_82809D40();
extern int fn_8288B760();
extern int fn_82F6A530();
extern int fn_82F6A57C();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_82191B24;
extern unsigned int lbl_82191F78;
extern unsigned int lbl_82191FB0;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821927E4;
extern unsigned int lbl_82193CF0;
extern unsigned int lbl_82195628;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_f0;


void fn_82343188(void)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 in_r0;
  int iVar9;
  int iVar10;
  char cVar16;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar18;
  undefined8 uVar17;
  int iVar19;
  float *pfVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  int iVar24;
  double dVar25;
  double dVar26;
  undefined8 extraout_f1;
  double extraout_f1_00;
  undefined8 uVar27;
  double extraout_f1_01;
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
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  int aiStack_100 [4];
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  undefined1 auStack_e0 [224];
  
  iVar9 = fn_82F6A530();
  iVar15 = **(int **)(iVar9 + 0xc);
  iVar14 = *(int *)(iVar15 + 0x24);
  if (((*(int **)(iVar9 + 0xc))[1] != 9) && (*(int *)(*(int *)(iVar9 + 0xc) + 4) != 10))
  goto LAB_82344268;
  pfVar20 = *(float **)(iVar15 + 0x1a0);
  if (*(int *)(*(int *)(*(int *)((int)pfVar20[3] + 0x174) + 0x5c) + 0x1d4) == -1) {
    iVar24 = 0;
  }
  else {
    iVar24 = *(int *)(*(int *)((int)pfVar20[3] + 0x174) + 0x5c);
    iVar24 = *(int *)(*(int *)(iVar24 + 0x1d4) * 4 + *(int *)(iVar24 + 0x1c4));
  }
  uVar17 = extraout_f1;
  iVar10 = fn_824486C0((double)**(float **)(iVar15 + 0x1a0),iVar24);
  iVar13 = (int)in_r0;
  dVar34 = (double)lbl_82192734;
  dVar26 = dVar34;
  if (-1 < iVar10) {
    uStack_f0 = (ulonglong)iVar10;
    dVar25 = (double)(*(float *)(*(int *)(iVar24 + 0x48) + 0x18) * (float)(longlong)uStack_f0 +
                     *(float *)(*(int *)(iVar24 + 0x48) + 0x14));
    if (extraout_f1_00 < dVar25) {
      dVar26 = (double)(float)(dVar25 - extraout_f1_00);
    }
  }
  uVar21 = (ulonglong)*(uint *)(*(int *)(iVar24 + 0x48) + 0x1c);
  lVar22 = uVar21 - 1;
  dVar25 = dVar34;
  if (-1 < lVar22) {
    do {
      uStack_f0 = (ulonglong)(int)lVar22;
      fVar3 = *(float *)(*(int *)(iVar24 + 0x48) + 0x18) * (float)(longlong)uStack_f0 +
              *(float *)(*(int *)(iVar24 + 0x48) + 0x14);
      if (fVar3 < *pfVar20) {
        dVar25 = (double)(*pfVar20 - fVar3);
        break;
      }
      lVar22 = lVar22 + -1;
    } while (-1 < lVar22);
  }
  uVar12 = 0;
  if (uVar21 != 0) {
    do {
      if (-1 < (int)uVar12) {
        fn_8252CAF8(*(undefined4 *)
                           (((uint)*(byte *)(*(int *)(iVar15 + 0x1a0) + 0x44) *
                             (*(int **)(iVar24 + 0x48))[7] + uVar12) * 4 + **(int **)(iVar24 + 0x48)
                           ),0,0);
      }
      iVar13 = (int)in_r0;
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(*(int *)(iVar24 + 0x48) + 0x1c));
  }
  pfVar20 = *(float **)(iVar15 + 0x1a0);
  dVar35 = (double)lbl_821CC160;
  if (pfVar20[6] == 0.0) {
    cVar16 = fn_82448860((double)**(float **)(iVar15 + 0x1a0),iVar24);
    if (cVar16 != '\0') {
      if (iVar14 != 0) {
        iVar10 = *(int *)(**(int **)(iVar9 + 0xc) + 0x24);
        if (iVar10 != 0) {
          (*(int **)(iVar9 + 0xc))[4] = 1;
          iVar11 = fn_824CD030(iVar10);
          if (iVar11 != 0) {
            iVar11 = **(int **)(iVar10 + 0xfc);
            *(undefined4 *)(*(int *)(iVar11 + 0x3c) + 0x78) = 1;
            *(undefined4 *)(*(int *)(iVar11 + 0x3c) + 0x28) = 0;
            *(undefined4 *)(*(int *)(iVar11 + 0x3c) + 0x24) = 1;
          }
          *(undefined4 *)(*(int *)(iVar10 + 0xfc) + 100) = 1;
        }
        iVar10 = *(int *)(*(int *)(*(int *)(iVar15 + 0x1a0) + 0xc) + 0x174);
        uVar12 = *(uint *)(iVar10 + 0x68);
        if (*(int *)(iVar15 + 0x2c) == 0) {
          uVar12 = uVar12 | 0x400;
        }
        else {
          uVar12 = uVar12 | 0x800;
        }
        *(uint *)(iVar10 + 0x68) = uVar12;
      }
      aiStack_100[0] = -1;
      dVar33 = (double)fn_82344418(iVar9,aiStack_100);
      uStack_f0 = CONCAT44((float)dVar33,(((U64)(uStack_f0) >> 32) & 0xFFFFFFFF));
      if (*(int *)(iVar15 + 0x168) == 0) {
        uVar12 = *(uint *)(iVar15 + 0x16c);
      }
      else {
        uVar12 = fn_8288B760();
        uVar12 = uVar12 & 0xff;
      }
      iVar10 = aiStack_100[0];
      if (uVar12 == 0) {
        bVar1 = false;
        if (iVar14 == 0) goto LAB_82343630;
      }
      else {
        if (((iVar14 == 0) || (dVar33 < (double)lbl_821917B0)) || ((double)lbl_82193CF0 <= dVar33))
        {
          if (((*(int *)(iVar15 + 0x24) == 0) || (dVar33 < (double)lbl_82191FB0)) ||
             (iVar11 = 2, (double)lbl_821917B0 <= dVar33)) {
            iVar11 = 0;
          }
        }
        else {
          iVar11 = 1;
        }
        iVar19 = *(int *)(*(int *)(iVar9 + 0x14) + 0x48);
        if (iVar19 <= iVar11) {
          *(int *)(*(int *)(iVar9 + 0x14) + 0x48) = iVar11;
          iVar19 = iVar11;
        }
        fn_82448720(iVar24,aiStack_100[0],*(undefined1 *)(*(int *)(iVar15 + 0x1a0) + 0x44),
                          iVar19);
LAB_82343630:
        bVar1 = true;
      }
      aiStack_100[0] = 7;
      dVar33 = (double)fn_82344550(iVar9,iVar14,&uStack_f0,aiStack_100);
      iVar19 = aiStack_100[0];
      dVar40 = (double)(((U64)(uStack_f0) >> 0) & 0xFFFFFFFF);
      iVar11 = (int)dVar33;
      uVar21 = (ulonglong)iVar11;
      if (dVar35 <= dVar40) {
        uStack_f0 = uVar21;
        if (((dVar40 < (double)lbl_821917C0) && (bVar1)) || (aiStack_100[0] == 4)) {
          *(undefined4 *)(*(int *)(iVar15 + 0x1a0) + 0x18) = 1;
          *(float *)(*(int *)(iVar9 + 0x14) + 0x14) = (float)dVar35;
          fn_822C72E0(*(undefined4 *)(*(int *)(iVar9 + 8) + 0x20),0xffffffff821b0f0c);
          **(int **)(iVar9 + 0x14) = iVar10;
          iVar19 = 4;
          if (iVar14 == 0) {
            fn_82344A08(iVar9);
            uVar21 = uStack_f0;
          }
          else {
            iVar13 = *(int *)(**(int **)(iVar9 + 0xc) + 0x24);
            if (iVar13 != 0) {
              (*(int **)(iVar9 + 0xc))[4] = 1;
              iVar10 = fn_824CD030(iVar13);
              if (iVar10 != 0) {
                iVar10 = **(int **)(iVar13 + 0xfc);
                *(undefined4 *)(*(int *)(iVar10 + 0x3c) + 0x78) = 1;
                *(undefined4 *)(*(int *)(iVar10 + 0x3c) + 0x28) = 0;
                *(undefined4 *)(*(int *)(iVar10 + 0x3c) + 0x24) = 1;
              }
              *(undefined4 *)(*(int *)(iVar13 + 0xfc) + 100) = 1;
            }
            *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0xc) = 1;
            uVar21 = uStack_f0;
          }
        }
        else if (((((iVar14 != 0) || ((double)lbl_821927E4 <= dVar40)) || (!bVar1)) &&
                 (aiStack_100[0] != 5)) || (iVar11 == 0)) {
          if ((((dVar40 < (double)lbl_82191FC8) && (bVar1)) && (iVar14 == 0)) ||
             (aiStack_100[0] == 6)) {
            if (iVar11 == 0) goto LAB_823439fc;
            *(undefined4 *)(*(int *)(iVar15 + 0x1a0) + 0x18) = 1;
            *(float *)(*(int *)(iVar9 + 0x14) + 0x14) = (float)dVar35;
            fn_822C72E0(*(undefined4 *)(*(int *)(iVar9 + 8) + 0x20),0xffffffff821b0d78);
            *(float *)(*(int *)(iVar9 + 0x14) + 8) = (float)dVar40;
            if (iVar14 == 0) {
              fn_82344A08(iVar9);
            }
            else {
              iVar13 = *(int *)(iVar9 + 0x14);
              dVar33 = (double)fn_824E17D8(iVar14);
              *(float *)(iVar13 + 0x10) = (float)dVar33;
              iVar13 = *(int *)(**(int **)(iVar9 + 0xc) + 0x24);
              if (iVar13 != 0) {
                (*(int **)(iVar9 + 0xc))[4] = 1;
                iVar10 = fn_824CD030(iVar13);
                if (iVar10 != 0) {
                  iVar10 = **(int **)(iVar13 + 0xfc);
                  *(undefined4 *)(*(int *)(iVar10 + 0x3c) + 0x78) = 1;
                  *(undefined4 *)(*(int *)(iVar10 + 0x3c) + 0x28) = 0;
                  *(undefined4 *)(*(int *)(iVar10 + 0x3c) + 0x24) = 1;
                }
                *(undefined4 *)(*(int *)(iVar13 + 0xfc) + 100) = 1;
              }
              *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0xc) = 1;
            }
            iVar19 = 6;
            uVar21 = uStack_f0;
          }
          else {
            if ((iVar11 == 0) || ((double)lbl_821917B0 <= dVar40)) {
LAB_823439fc:
              if ((*(char *)(*(int *)(iVar9 + 0x14) + 0x1c) == '\0') ||
                 ((double)lbl_82191B24 <= dVar40)) goto LAB_82343c54;
            }
            *(float *)(*(int *)(iVar9 + 0x14) + 8) = (((U64)(uStack_f0) >> 0) & 0xFFFFFFFF);
            if (iVar14 != 0) {
              iVar11 = *(int *)(iVar9 + 0x14);
              dVar33 = (double)fn_824E17D8(iVar14);
              *(float *)(iVar11 + 0x10) = (float)dVar33;
              fVar8 = lbl_821CA460;
              fVar7 = lbl_821916FC;
              dVar33 = (double)lbl_82195628;
              iVar11 = **(int **)(iVar9 + 0xc);
              puVar4 = (undefined4 *)(iVar11 + 0x90U & 0xfffffff0);
              uVar41 = puVar4[1];
              uVar42 = puVar4[2];
              uVar43 = puVar4[3];
              puVar5 = (undefined4 *)((int)&uStack_f0 + iVar13 & 0xfffffff0);
              *puVar5 = *puVar4;
              puVar5[1] = uVar41;
              puVar5[2] = uVar42;
              puVar5[3] = uVar43;
              puVar4 = (undefined4 *)(iVar11 + 0x80U & 0xfffffff0);
              uVar41 = puVar4[1];
              uVar42 = puVar4[2];
              uVar43 = puVar4[3];
              puVar5 = (undefined4 *)((uint)(auStack_e0 + iVar13) & 0xfffffff0);
              *puVar5 = *puVar4;
              puVar5[1] = uVar41;
              puVar5[2] = uVar42;
              puVar5[3] = uVar43;
              fVar3 = fStack_e8 * fVar7;
              fVar2 = (((U64)(uStack_f0) >> 32) & 0xFFFFFFFF) * fVar7;
              fVar6 = (((U64)(uStack_f0) >> 0) & 0xFFFFFFFF) * (((U64)(uStack_f0) >> 0) & 0xFFFFFFFF) * fVar7;
              dVar31 = (double)(fStack_e4 * fVar2 + fVar3 * (((U64)(uStack_f0) >> 0) & 0xFFFFFFFF));
              dVar28 = (double)(fVar3 * (((U64)(uStack_f0) >> 32) & 0xFFFFFFFF) - fStack_e4 * (((U64)(uStack_f0) >> 0) & 0xFFFFFFFF) * fVar7);
              dVar30 = (double)(fVar8 - ((((U64)(uStack_f0) >> 32) & 0xFFFFFFFF) * fVar2 + fVar6));
              dVar29 = (double)SQRT((float)(dVar30 * dVar30 + (double)(float)(dVar31 * dVar31)));
              if (dVar29 <= dVar33) {
                dVar33 = (double)fn_82809D40(-(double)(fVar2 * (((U64)(uStack_f0) >> 0) & 0xFFFFFFFF) - fStack_e4 * fVar3)
                                              ,(double)(fVar8 - (fStack_e8 * fVar3 +
                                                                (((U64)(uStack_f0) >> 32) & 0xFFFFFFFF) * fVar2)));
                fStack_e8 = (float)dVar33;
                dVar33 = (double)fn_82809D40(-dVar28,dVar29);
                uStack_f0 = ((((U64)(uStack_f0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)dVar33)) & ((U64)0xFFFFFFFF)) << 0));
                dVar33 = dVar35;
              }
              else {
                dVar33 = (double)fn_82809D40((double)(fVar2 * (((U64)(uStack_f0) >> 0) & 0xFFFFFFFF) + fStack_e4 * fVar3),
                                              (double)(fVar8 - (fStack_e8 * fVar3 + fVar6)));
                fStack_e8 = (float)dVar33;
                dVar33 = (double)fn_82809D40(-dVar28,dVar29);
                uStack_f0 = ((((U64)(uStack_f0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)dVar33)) & ((U64)0xFFFFFFFF)) << 0));
                dVar33 = (double)fn_82809D40(dVar31,dVar30);
              }
              uStack_f0 = ((((U64)(uStack_f0)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((float)dVar33)) & ((U64)0xFFFFFFFF)) << 32));
              iVar13 = **(int **)(iVar9 + 0xc);
              uVar21 = (ulonglong)*(uint *)(iVar13 + 0x1a0);
              fn_82526C70(uVar21 + 0x80,0x100,0xffffffff821b0c70,0xffffffff821b18e8,
                                uVar21 + 0x60);
              fn_8243D2D8((ulonglong)
                                *(uint *)(*(int *)(*(int *)(**(int **)(iVar9 + 0xc) + 0x1a0) + 0xc)
                                         + 0x174) + 8,(ulonglong)*(uint *)(iVar13 + 0x1a0) + 0x80,
                                auStack_e0,&uStack_f0);
            }
            *(undefined4 *)(*(int *)(iVar15 + 0x1a0) + 0x18) = 1;
            *(float *)(*(int *)(iVar9 + 0x14) + 0x14) = (float)dVar40;
            iVar13 = *(int *)(iVar9 + 0x14);
            if ((dVar40 <= (double)*(float *)(iVar13 + 0xc)) || (iVar14 == 0)) {
              iVar13 = *(int *)(iVar9 + 0x14);
              uVar27 = 0xffffffff821b0d40;
              fVar3 = *(float *)(iVar13 + 0x40);
            }
            else {
              uVar27 = 0xffffffff821b0d58;
              fVar3 = *(float *)(iVar13 + 0x44);
            }
            iVar11 = *(int *)(iVar9 + 8);
            *(float *)(iVar13 + 0x14) = fVar3 + *(float *)(iVar13 + 0x14);
            fn_822C72E0(*(undefined4 *)(iVar11 + 0x20),uVar27);
            uVar21 = uStack_f0;
            if (((((double)lbl_82191FCC <= dVar40) && (dVar40 < (double)lbl_821917B0)) && (bVar1))
               || (iVar19 == 3)) {
              **(int **)(iVar9 + 0x14) = iVar10;
              iVar19 = 3;
            }
            else {
              iVar19 = 2;
            }
          }
        }
        else {
          *(undefined4 *)(*(int *)(iVar15 + 0x1a0) + 0x18) = 1;
          *(float *)(*(int *)(iVar9 + 0x14) + 0x14) = (float)dVar35;
          fn_822C72E0(*(undefined4 *)(*(int *)(iVar9 + 8) + 0x20),0xffffffff821b0d98);
          **(int **)(iVar9 + 0x14) = iVar10;
          *(float *)(*(int *)(iVar9 + 0x14) + 8) = (float)dVar40;
          iVar19 = 5;
          uVar21 = uStack_f0;
          if (iVar14 == 0) {
            iVar10 = **(int **)(iVar9 + 0xc);
            dVar33 = (double)lbl_821916FC;
            puVar4 = (undefined4 *)(iVar10 + 0x90U & 0xfffffff0);
            uVar41 = puVar4[1];
            uVar42 = puVar4[2];
            uVar43 = puVar4[3];
            puVar5 = (undefined4 *)((int)&uStack_f0 + iVar13 & 0xfffffff0);
            *puVar5 = *puVar4;
            puVar5[1] = uVar41;
            puVar5[2] = uVar42;
            puVar5[3] = uVar43;
            fVar6 = lbl_821CA460;
            dVar30 = (double)fStack_e4;
            dVar31 = (double)(((U64)(uStack_f0) >> 32) & 0xFFFFFFFF);
            dVar40 = (double)(float)(dVar31 * dVar33);
            dVar32 = (double)(((U64)(uStack_f0) >> 0) & 0xFFFFFFFF);
            dVar28 = (double)(float)((double)fStack_e8 * dVar33);
            dVar29 = (double)lbl_82195628;
            puVar4 = (undefined4 *)(iVar10 + 0x80U & 0xfffffff0);
            uVar41 = puVar4[1];
            uVar42 = puVar4[2];
            uVar43 = puVar4[3];
            puVar5 = (undefined4 *)((uint)(auStack_e0 + iVar13) & 0xfffffff0);
            *puVar5 = *puVar4;
            puVar5[1] = uVar41;
            puVar5[2] = uVar42;
            puVar5[3] = uVar43;
            fVar3 = (float)(dVar32 * (double)(float)(dVar32 * dVar33));
            dVar33 = (double)(float)(dVar30 * (double)(float)(dVar32 * dVar33));
            fVar2 = (float)((double)fStack_e8 * dVar28);
            dVar39 = (double)(float)(dVar30 * dVar40 + (double)(float)(dVar28 * dVar32));
            dVar36 = (double)(float)(dVar28 * dVar31 - dVar33);
            dVar38 = (double)(fVar6 - ((float)(dVar31 * dVar40) + fVar3));
            dVar37 = (double)SQRT((float)(dVar38 * dVar38 + (double)(float)(dVar39 * dVar39)));
            if (dVar37 <= dVar29) {
              dVar33 = (double)fn_82809D40(-(double)((float)(dVar40 * dVar32) -
                                                     (float)(dVar30 * dVar28)),
                                            (double)(fVar6 - (fVar2 + (float)(dVar31 * dVar40))),
                                            dVar33);
              fStack_e8 = (float)dVar33;
              dVar33 = (double)fn_82809D40(-dVar36,dVar37);
              uStack_f0 = ((((U64)(uStack_f0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)dVar33)) & ((U64)0xFFFFFFFF)) << 0));
              dVar33 = dVar35;
            }
            else {
              dVar33 = (double)fn_82809D40((double)((float)(dVar40 * dVar32) +
                                                    (float)(dVar30 * dVar28)),
                                            (double)(fVar6 - (fVar2 + fVar3)));
              fStack_e8 = (float)dVar33;
              dVar33 = (double)fn_82809D40(-dVar36,dVar37);
              uStack_f0 = ((((U64)(uStack_f0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)dVar33)) & ((U64)0xFFFFFFFF)) << 0));
              dVar33 = (double)fn_82809D40(dVar39,dVar38);
            }
            uStack_f0 = ((((U64)(uStack_f0)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((float)dVar33)) & ((U64)0xFFFFFFFF)) << 32));
            iVar13 = **(int **)(iVar9 + 0xc);
            uVar21 = (ulonglong)*(uint *)(iVar13 + 0x1a0);
            fn_82526C70(uVar21 + 0x80,0x100,0xffffffff821b0c70,0xffffffff821b18cc,
                              uVar21 + 0x60);
            fn_8243D2D8((ulonglong)
                              *(uint *)(*(int *)(*(int *)(**(int **)(iVar9 + 0xc) + 0x1a0) + 0xc) +
                                       0x174) + 8,(ulonglong)*(uint *)(iVar13 + 0x1a0) + 0x80,
                              auStack_e0,&uStack_f0);
            uVar21 = uStack_f0;
          }
        }
      }
LAB_82343c54:
      uStack_f0 = uVar21;
      if ((((*(float **)(iVar15 + 0x1a0))[6] != 0.0) && (uVar12 != 0)) && (iVar19 != 7)) {
        if (iVar14 == 0) goto LAB_82343ddc;
        if (*(int **)(iVar15 + 0x168) != (int *)0x0) {
          dVar33 = (double)**(float **)(iVar15 + 0x1a0);
          lVar22 = (**(code **)(**(int **)(iVar15 + 0x168) + 0x50))();
          fn_8233E8A0(dVar33,lVar22 + 0x30);
        }
      }
      goto LAB_82343ce8;
    }
    if (iVar14 != 0) {
      if (*pfVar20 <= **(float **)(iVar24 + 0x44)) {
        iVar13 = *(int *)(**(int **)(iVar9 + 0xc) + 0x24);
        if (iVar13 != 0) {
          (*(int **)(iVar9 + 0xc))[4] = 0;
          fn_824E1A20(iVar13,0);
        }
      }
      goto LAB_82343ce8;
    }
  }
  else {
    lVar22 = (ulonglong)*(uint *)(*(int *)(iVar15 + 0x114) + 0x20) + 4;
    if (((*(int *)(*(int *)(iVar9 + 0x14) + 0x28) != 0) ||
        ((double)*(float *)(*(int *)(iVar9 + 0x14) + 0x14) <= dVar35)) ||
       ((cVar16 = fn_822BD338(lVar22,0xffffffff821b13a4), cVar16 == '\0' &&
        (cVar16 = fn_822BD338(lVar22,0xffffffff821b0d34), cVar16 == '\0')))) {
      lVar22 = (ulonglong)*(uint *)(*(int *)(**(int **)(iVar9 + 0xc) + 0x114) + 0x20) + 4;
      cVar16 = fn_822BD338(lVar22,0xffffffff821b0d64);
      if (((((cVar16 == '\0') &&
            (cVar16 = fn_822BD338(lVar22,0xffffffff821b0d34), cVar16 == '\0')) &&
           (cVar16 = fn_822BD338(lVar22,0xffffffff821b0d84), cVar16 == '\0')) &&
          ((cVar16 = fn_822BD338(lVar22,0xffffffff821b0d48), cVar16 == '\0' &&
           (cVar16 = fn_822BD338(lVar22,0xffffffff821b13a4), cVar16 == '\0')))) &&
         ((cVar16 = fn_822BD338(lVar22,0xffffffff821b13d0), cVar16 == '\0' &&
          (cVar16 = fn_822BD338(lVar22,0xffffffff821b0ef8), cVar16 == '\0')))) {
        *(undefined4 *)(*(int *)(iVar15 + 0x1a0) + 0x18) = 0;
        *(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x28) = 0;
        if (iVar14 == 0) goto LAB_82343ddc;
        iVar13 = *(int *)(**(int **)(iVar9 + 0xc) + 0x24);
        if (iVar13 != 0) {
          (*(int **)(iVar9 + 0xc))[4] = 0;
          fn_824E1A20(iVar13,0);
        }
        *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0xc) = 0;
      }
    }
    else if (*(int *)(*(int *)(*(int *)(iVar15 + 0x118) + 0xc) + 0x110) != 0) {
      fn_827F6370((double)(*(float *)(*(int *)(iVar9 + 0x14) + 0x3c) *
                                *(float *)(*(int *)(iVar9 + 0x14) + 0x14)));
      *(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x28) = 1;
    }
LAB_82343ce8:
    if (((iVar14 != 0) && (dVar35 < dVar26)) && (iVar13 = fn_824CD030(iVar14), iVar13 != 0)) {
      uVar27 = fn_824E17D8(iVar14);
      iVar13 = *(int *)(*(int *)(*(int *)(iVar15 + 0x1a0) + 0xc) + 0x174);
      if (*(int *)(*(int *)(iVar13 + 0x5c) + 0x1d4) == -1) {
        piVar18 = (int *)0x0;
      }
      else {
        iVar13 = *(int *)(iVar13 + 0x5c);
        piVar18 = *(int **)(*(int *)(iVar13 + 0x1d4) * 4 + *(int *)(iVar13 + 0x1c4));
      }
      (**(code **)(*piVar18 + 0x1c))
                ((double)(float)((double)**(float **)(iVar15 + 0x1a0) + dVar26),auStack_e0);
      if (((dVar35 < dVar25) && (lbl_82191F78 < (float)(dVar26 / (double)(float)(dVar25 + dVar26))))
         && ((double)*(float *)(*(int *)(iVar9 + 0x14) + 0x34) < dVar26)) {
        *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x28) = 0;
        *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x2c) = 0;
        *(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x48) = 0;
      }
      fn_82342038(uVar27,(double)*(float *)(*(int *)(iVar9 + 0x14) + 0x30),uVar17,iVar9);
    }
  }
LAB_82343ddc:
  dVar40 = (double)lbl_8218E8E8;
  pfVar20 = *(float **)(**(int **)(iVar9 + 0xc) + 0x1a0);
  dVar33 = (double)*pfVar20;
  dVar26 = (double)(float)((double)(float)(dVar33 + dVar26) - dVar40);
  if (((dVar26 < dVar33) && ((double)pfVar20[1] < dVar26)) &&
     ((iVar14 != 0 && (iVar13 = fn_824CD030(iVar14), iVar13 != 0)))) {
    fVar3 = *(float *)(*(int *)(iVar15 + 0x1a0) + 4);
    lVar22 = (ulonglong)*(uint *)(*(int *)(iVar24 + 0x48) + 0x1c) - 1;
    dVar26 = dVar34;
    if (-1 < lVar22) {
      do {
        uStack_f0 = (ulonglong)(int)lVar22;
        fVar2 = *(float *)(*(int *)(iVar24 + 0x48) + 0x18) * (float)(longlong)uStack_f0 +
                *(float *)(*(int *)(iVar24 + 0x48) + 0x14);
        if (fVar2 < fVar3) {
          dVar26 = (double)(fVar3 - fVar2);
          break;
        }
        lVar22 = lVar22 + -1;
      } while (-1 < lVar22);
    }
    if (dVar35 <= dVar26) {
      iVar13 = fn_824486C0((double)**(float **)(iVar15 + 0x1a0),iVar24);
      dVar26 = dVar34;
      if (-1 < iVar13) {
        uStack_f0 = (ulonglong)iVar13;
        dVar33 = (double)(*(float *)(*(int *)(iVar24 + 0x48) + 0x18) * (float)(longlong)uStack_f0 +
                         *(float *)(*(int *)(iVar24 + 0x48) + 0x14));
        if (extraout_f1_01 < dVar33) {
          dVar26 = (double)(float)(dVar33 - extraout_f1_01);
        }
      }
      uVar17 = 9;
      if (dVar35 <= dVar26) {
        uVar17 = 10;
      }
    }
    else {
      uVar17 = 8;
    }
    fn_824395F8(dVar35,(ulonglong)
                             *(uint *)(*(int *)(*(int *)(**(int **)(iVar9 + 0xc) + 0x1a0) + 0xc) +
                                      0x174) + 0x1c,uVar17,0);
  }
  if (dVar35 <= dVar25) {
    pfVar20 = *(float **)(**(int **)(iVar9 + 0xc) + 0x1a0);
    dVar33 = (double)*pfVar20;
    dVar26 = (double)(float)((double)(float)(dVar33 - dVar25) + dVar40);
    if ((dVar26 < dVar33) && ((double)pfVar20[1] < dVar26)) {
      if (iVar14 != 0) {
        iVar13 = *(int *)(*(int *)(*(int *)(iVar15 + 0x1a0) + 0xc) + 0x174);
        uVar12 = *(uint *)(iVar13 + 0x68);
        if (*(int *)(iVar15 + 0x2c) == 0) {
          uVar12 = uVar12 | 0x8000;
        }
        else {
          uVar12 = uVar12 | 0x20000;
        }
        *(uint *)(iVar13 + 0x68) = uVar12;
        iVar13 = *(int *)(iVar9 + 0x14);
        iVar10 = *(int *)(*(int *)(*(int *)(iVar15 + 0x1a0) + 0xc) + 0x174);
        fn_82261AD0((double)*(float *)(iVar13 + 8),(double)*(float *)(iVar13 + 0x10),
                          *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x1ec),
                          *(int *)(iVar10 + 0xc4) != 0,*(undefined4 *)(iVar15 + 0x2c),
                          *(undefined4 *)(iVar13 + 4),*(int *)(iVar13 + 0x18) != 0);
      }
      *(float *)(*(int *)(iVar9 + 0x14) + 8) = (float)dVar35;
      *(float *)(*(int *)(iVar9 + 0x14) + 0x10) = (float)dVar35;
      *(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x18) = 0;
      *(int *)(*(int *)(iVar9 + 0x14) + 4) = *(int *)(*(int *)(iVar9 + 0x14) + 4) + 1;
    }
  }
  iVar13 = **(int **)(iVar9 + 0x14);
  if (-1 < iVar13) {
    uStack_f0 = (ulonglong)iVar13;
    fVar3 = *(float *)(*(int *)(iVar24 + 0x48) + 0x18) * (float)(longlong)uStack_f0 +
            *(float *)(*(int *)(iVar24 + 0x48) + 0x14);
    if (**(float **)(iVar15 + 0x1a0) < fVar3) {
      dVar34 = (double)(fVar3 - **(float **)(iVar15 + 0x1a0));
    }
    if (dVar34 < (double)(float)(*(int **)(iVar9 + 0x14))[0xe]) {
      iVar13 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar13 = fn_82250A18();
      }
      bVar1 = *(int *)(iVar15 + 0x24) != 0;
      if (*(char *)(iVar13 + 4) == '\0') {
        if (bVar1) {
          fn_824E17D8();
        }
        uVar23 = 0;
        uVar12 = *(uint *)(*(int *)(iVar24 + 0x48) + 0x1c);
        if (uVar12 != 0) {
          do {
            uStack_f0 = (ulonglong)uVar23;
            if (*(float *)(*(int *)(iVar15 + 0x1a0) + 4) <
                *(float *)(*(int *)(iVar24 + 0x48) + 0x18) * (float)uStack_f0 +
                *(float *)(*(int *)(iVar24 + 0x48) + 0x14)) break;
            uVar23 = uVar23 + 1;
          } while (uVar23 < uVar12);
        }
        if (uVar23 < uVar12) {
          fn_82448A88(iVar24,*(undefined1 *)(*(int *)(iVar15 + 0x1a0) + 0x44),uVar23 & 0xff,
                            *(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x20));
        }
      }
      else {
        if (bVar1) {
          fn_824E17D8();
        }
        fn_82448998((double)**(float **)(iVar15 + 0x1a0),iVar24);
      }
      *(int *)(*(int *)(iVar15 + 0x1a0) + 0x40) = *(int *)(*(int *)(iVar15 + 0x1a0) + 0x40) + 1;
      fn_82340AF0((ulonglong)*(uint *)(iVar15 + 0x1a0) + 0x194,0xe,1);
      if (-1 < **(int **)(iVar9 + 0x14)) {
        fn_8252CAF8(*(undefined4 *)
                           (((uint)*(byte *)(*(int *)(iVar15 + 0x1a0) + 0x44) *
                             (*(int **)(iVar24 + 0x48))[7] + **(int **)(iVar9 + 0x14)) * 4 +
                           **(int **)(iVar24 + 0x48)),0,0);
      }
      *(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x18) = 1;
      **(undefined4 **)(iVar9 + 0x14) = 0xffffffff;
      *(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x20) = 0;
      if (iVar14 != 0) {
        iVar14 = *(int *)(*(int *)(*(int *)(iVar15 + 0x1a0) + 0xc) + 0x174);
        uVar12 = *(uint *)(iVar14 + 0x68);
        if (*(int *)(iVar15 + 0x2c) == 0) {
          uVar12 = uVar12 | 0x10000;
        }
        else {
          uVar12 = uVar12 | 0x40000;
        }
        *(uint *)(iVar14 + 0x68) = uVar12;
        iVar14 = fn_82337B90(iVar15);
        if ((iVar14 != 0) ||
           ((iVar14 = fn_8242C348(*(undefined4 *)(*(int *)(iVar15 + 0x1a0) + 0xc)),
            iVar14 != 0 && (iVar14 = fn_82337BE0(iVar15), iVar14 != 0)))) {
          pfVar20 = *(float **)(iVar15 + 0x1a0);
          iVar15 = fn_824486C0((double)*pfVar20,iVar24);
          if (iVar15 + 1 == *(int *)(*(int *)(iVar24 + 0x48) + 0x1c)) {
            uVar17 = 0xffffffff821b1900;
          }
          else if (*(int *)(*(int *)(iVar9 + 0x14) + 0x24) == 0) {
            uVar17 = 0xffffffff821b1928;
          }
          else {
            uVar17 = 0xffffffff821b1914;
          }
          fn_82508078(*(undefined4 *)((int)pfVar20[3] + 0xa4),uVar17,0);
          *(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x24) = 1;
        }
      }
    }
  }
LAB_82344268:
  fn_82F6A57C();
  return;
}

