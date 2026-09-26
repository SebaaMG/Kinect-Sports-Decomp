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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_b0;
extern unsigned int fStack_b4;
extern unsigned int fStack_b8;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern int fn_822C1928();
extern int fn_822C72E0();
extern int fn_82337B90();
extern int fn_82337DE0();
extern int fn_8233E8A0();
extern int fn_823414A0();
extern int fn_82341560();
extern int fn_82341CA0();
extern int fn_82342038();
extern int fn_8234E808();
extern int fn_8242E560();
extern int fn_82435FA8();
extern int fn_8243D2D8();
extern int fn_8244C360();
extern int fn_824CD030();
extern int fn_824E17D8();
extern int fn_82526C70();
extern int fn_8252FFD0();
extern int fn_82539560();
extern int fn_827F57E8();
extern int fn_82809D40();
extern int fn_8288B760();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82192734;
extern unsigned int lbl_82195628;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F844;
extern V16 loadVectorLeftIndexed128();


void fn_823466C8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined8 in_r0;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  longlong lVar9;
  float *pfVar16;
  ulonglong uVar15;
  undefined4 uVar17;
  double dVar18;
  undefined8 extraout_f1;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined1 auStack_b0 [176];
  
  iVar10 = fn_82F6A538();
  iVar12 = **(int **)(iVar10 + 0xc);
  uVar27 = extraout_f1;
  iVar11 = fn_82337B90(iVar12);
  fVar1 = lbl_821CC160;
  if (iVar11 != 0) {
    piVar3 = *(int **)(iVar10 + 0xc);
    iVar11 = piVar3[1];
    dVar28 = (double)**(float **)(iVar12 + 0x1a0);
    if (2 < iVar11) {
      if (iVar11 < 5) {
        fn_82337DE0(iVar12);
      }
      else if (iVar11 == 9) {
        if (((double)*(float *)(*(int *)(iVar10 + 0x10) + 0x14) < dVar28) &&
           (iVar11 = *(int *)(*piVar3 + 0x24), iVar11 != 0)) {
          piVar3[4] = 1;
          iVar13 = fn_824CD030(iVar11);
          if (iVar13 != 0) {
            iVar13 = **(int **)(iVar11 + 0xfc);
            *(undefined4 *)(*(int *)(iVar13 + 0x3c) + 0x78) = 1;
            *(undefined4 *)(*(int *)(iVar13 + 0x3c) + 0x28) = 0;
            *(undefined4 *)(*(int *)(iVar13 + 0x3c) + 0x24) = 1;
          }
          *(undefined4 *)(*(int *)(iVar11 + 0xfc) + 100) = 1;
        }
        piVar3 = *(int **)(iVar12 + 0x168);
        bVar8 = false;
        if ((piVar3 != (int *)0x0) && (cVar14 = fn_8288B760(piVar3), cVar14 == '\0')) {
          if ((piVar3[0x2f] == 0) ||
             (((piVar3[0x31] - piVar3[0x30] & 0xfffffff8U) == 0 ||
              (**(float **)(piVar3[0x2f] + 0x1a0) < *(float *)(piVar3[0x31] + -8))))) {
            bVar8 = false;
          }
          else {
            if (piVar3[0x30] != piVar3[0x31]) {
              piVar3[0x31] = piVar3[0x31] + -8;
            }
            bVar8 = true;
          }
        }
        iVar11 = *(int *)(*(int *)(*(int *)(**(int **)(iVar10 + 0xc) + 0x1a0) + 0xc) + 0x174);
        if (*(int *)(*(int *)(iVar11 + 0x5c) + 0x1d4) == -1) {
          uVar17 = 0;
        }
        else {
          iVar11 = *(int *)(iVar11 + 0x5c);
          uVar17 = *(undefined4 *)(*(int *)(iVar11 + 0x1d4) * 4 + *(int *)(iVar11 + 0x1c4));
        }
        dVar20 = (double)lbl_821CC160;
        dVar32 = (double)lbl_821CA460;
        if (*(int *)(*(int *)(iVar12 + 0x1a0) + 0x18) == 0) {
          iVar11 = fn_824CD030(param_3);
          if (iVar11 == 0) {
            cVar14 = '\0';
          }
          else {
            iVar11 = *(int *)(*(int *)(*(int *)((int)param_3 + 0xfc) + 0xc) + 0x3c);
            if (*(char *)(iVar11 + 0x1d) == '\0') {
              cVar14 = *(char *)(iVar11 + 0x1c);
            }
            else {
              cVar14 = '\x01';
              *(undefined1 *)(iVar11 + 0x1d) = 0;
            }
          }
          if (((cVar14 != '\0') && ((double)*(float *)(*(int *)(iVar10 + 0x10) + 0x14) < dVar28)) ||
             (bVar8)) {
            fn_8244C360(uVar17,iVar12);
            iVar11 = *(int *)(**(int **)(iVar10 + 0xc) + 0x24);
            if (iVar11 != 0) {
              (*(int **)(iVar10 + 0xc))[4] = 1;
              iVar13 = fn_824CD030(iVar11);
              if (iVar13 != 0) {
                iVar13 = **(int **)(iVar11 + 0xfc);
                *(undefined4 *)(*(int *)(iVar13 + 0x3c) + 0x78) = 1;
                *(undefined4 *)(*(int *)(iVar13 + 0x3c) + 0x28) = 0;
                *(undefined4 *)(*(int *)(iVar13 + 0x3c) + 0x24) = 1;
              }
              *(undefined4 *)(*(int *)(iVar11 + 0xfc) + 100) = 1;
            }
            fn_823414A0(iVar10);
            dVar18 = (double)lbl_821916FC;
            dVar23 = (double)lbl_82195628;
            *(undefined4 *)(*(int *)(iVar12 + 0x1a0) + 0x18) = 1;
            *(undefined4 *)(*(int *)(iVar12 + 0x1a0) + 0x1c) = 0;
            piVar4 = *(int **)(iVar10 + 0xc);
            puVar6 = (undefined4 *)(iVar12 + 0x80U & 0xfffffff0);
            uVar34 = puVar6[1];
            uVar35 = puVar6[2];
            uVar36 = puVar6[3];
            puVar7 = (undefined4 *)((uint)(auStack_b0 + (int)in_r0) & 0xfffffff0);
            *puVar7 = *puVar6;
            puVar7[1] = uVar34;
            puVar7[2] = uVar35;
            puVar7[3] = uVar36;
            puVar6 = (undefined4 *)(*piVar4 + 0x90U & 0xfffffff0);
            uVar34 = puVar6[1];
            uVar35 = puVar6[2];
            uVar36 = puVar6[3];
            puVar7 = (undefined4 *)((int)&fStack_c0 + (int)in_r0 & 0xfffffff0);
            *puVar7 = *puVar6;
            puVar7[1] = uVar34;
            puVar7[2] = uVar35;
            puVar7[3] = uVar36;
            dVar25 = (double)fStack_bc;
            dVar24 = (double)fStack_b4;
            dVar26 = (double)fStack_c0;
            dVar21 = (double)(float)(dVar25 * dVar18);
            dVar22 = (double)(float)((double)fStack_b8 * dVar18);
            fVar1 = (float)(dVar26 * (double)(float)(dVar26 * dVar18));
            dVar18 = (double)(float)(dVar24 * (double)(float)(dVar26 * dVar18));
            dVar29 = (double)(float)(dVar22 * dVar25 - dVar18);
            fVar2 = (float)((double)fStack_b8 * dVar22);
            dVar33 = (double)(float)(dVar24 * dVar21 + (double)(float)(dVar22 * dVar26));
            dVar31 = (double)(float)(dVar32 - (double)((float)(dVar25 * dVar21) + fVar1));
            dVar30 = (double)SQRT((float)(dVar31 * dVar31 + (double)(float)(dVar33 * dVar33)));
            if (dVar30 <= dVar23) {
              dVar18 = (double)fn_82809D40(-(double)((float)(dVar21 * dVar26) -
                                                     (float)(dVar24 * dVar22)),
                                            (double)(float)(dVar32 - (double)(fVar2 + (float)(dVar25
                                                                                             * 
                                                  dVar21))),(double)(float)(dVar22 * dVar26),dVar18)
              ;
              fStack_b8 = (float)dVar18;
              dVar18 = (double)fn_82809D40(-dVar29,dVar30);
              fStack_c0 = (float)dVar18;
              dVar18 = dVar20;
            }
            else {
              dVar18 = (double)fn_82809D40((double)((float)(dVar21 * dVar26) +
                                                    (float)(dVar24 * dVar22)),
                                            (double)(float)(dVar32 - (double)(fVar2 + fVar1)));
              fStack_b8 = (float)dVar18;
              dVar18 = (double)fn_82809D40(-dVar29,dVar30);
              fStack_c0 = (float)dVar18;
              dVar18 = (double)fn_82809D40(dVar33,dVar31);
            }
            fStack_bc = (float)dVar18;
            iVar11 = **(int **)(iVar10 + 0xc);
            uVar15 = (ulonglong)*(uint *)(iVar11 + 0x1a0);
            fn_82526C70(uVar15 + 0x80,0x100,0xffffffff821b0c70,0xffffffff821b18e8,
                              uVar15 + 0x60);
            fn_8243D2D8((ulonglong)*(uint *)(*(int *)(*(int *)(iVar12 + 0x1a0) + 0xc) + 0x174)
                              + 8,(ulonglong)*(uint *)(iVar11 + 0x1a0) + 0x80,auStack_b0,&fStack_c0)
            ;
            if ((piVar3 != (int *)0x0) && (cVar14 = fn_8288B760(piVar3), cVar14 != '\0')) {
              lVar9 = (**(code **)(*piVar3 + 0x50))(piVar3);
              fn_8233E8A0(dVar28,lVar9 + 0x30);
            }
            fn_822C72E0(*(undefined4 *)(*(int *)(iVar10 + 8) + 0x20),0xffffffff821b0e34);
          }
        }
        uVar34 = *(undefined4 *)(*(int *)(iVar10 + 0x10) + 0x18);
        uVar19 = fn_824E17D8(param_3);
        fn_82341560(uVar19,uVar27,(double)lbl_82192734,iVar10,param_3,uVar34);
        fn_82435FA8(dVar20,auStack_b0,uVar17);
        uVar5 = *(uint *)(iVar10 + 0x10);
        uVar19 = fn_824E17D8(param_3);
        loadVectorLeftIndexed128(in_r0,(ulonglong)uVar5 + 0x44);
        fn_82342038(uVar19,dVar32,uVar27,iVar10);
      }
      else if (iVar11 == 0xe) {
        iVar11 = *(int *)(iVar10 + 0x10);
        iVar13 = fn_824CD030(param_3);
        dVar20 = (double)lbl_821CC160;
        dVar28 = dVar20;
        if (iVar13 != 0) {
          dVar28 = (double)*(float *)(*(int *)(*(int *)(*(int *)((int)param_3 + 0xfc) + 0x10) + 0x3c
                                              ) + 0x1c);
        }
        dVar32 = (double)lbl_821CA460;
        dVar28 = (double)fn_82539560(dVar28,dVar20,dVar32,dVar32,(double)*(float *)(iVar11 + 4));
        **(float **)(iVar10 + 0x10) = (float)dVar28;
        pfVar16 = *(float **)(iVar10 + 0x10);
        fn_82341560((double)(pfVar16[10] * *pfVar16),uVar27,dVar20,iVar10,param_3,pfVar16[8]);
        if ((*(int *)(*(int *)(iVar10 + 0x10) + 0x2c) == 0) && (dVar32 < dVar28)) {
          iVar11 = fn_82337B90(**(undefined4 **)(iVar10 + 0xc));
          if ((iVar11 != 0) && (lbl_8327F844 != 0)) {
            iVar11 = *(int *)(iVar10 + 0x10);
            fn_8252FFD0((double)*(float *)(iVar11 + 0x30),(double)*(float *)(iVar11 + 0x38),
                         (double)*(float *)(iVar11 + 0x3c));
          }
          *(undefined4 *)(*(int *)(iVar10 + 0x10) + 0x2c) = 1;
          *(undefined4 *)(*(int *)(iVar10 + 0x10) + 0x48) = 1;
        }
        iVar10 = fn_822C1928((ulonglong)*(uint *)(*(int *)(iVar12 + 0x114) + 0x20) + 4,
                                   0xffffffff821b1abc,0,0xd);
        if (iVar10 != -1) {
          *(undefined4 *)(*(int *)(iVar12 + 0x1a0) + 0x18) = 0;
        }
      }
      else if (iVar11 == 0xf) {
        iVar12 = *(int *)(*(int *)(iVar10 + 0x10) + 0x18);
        pfVar16 = (float *)(iVar12 + 0x18);
        if (iVar12 + 0x18 != iVar12 + 0x60) {
          do {
            pfVar16[2] = (pfVar16[1] - *pfVar16) * fVar1 + *pfVar16;
            pfVar16 = pfVar16 + 3;
          } while (pfVar16 != (float *)(iVar12 + 0x60));
        }
        iVar12 = fn_8242E560(*(undefined4 *)(*(int *)(*piVar3 + 0x1a0) + 0xc));
        if (iVar12 == 0) {
          iVar12 = *(int *)(**(int **)(iVar10 + 0xc) + 0x118);
          fn_827F57E8((double)lbl_821CA460,(double)lbl_8218E8FC,*(undefined4 *)(iVar12 + 0x10)
                           );
          iVar12 = *(int *)(iVar12 + 0x10);
          *(undefined4 *)(iVar12 + 0x108) = *(undefined4 *)(iVar12 + 0x10c);
        }
        uVar17 = *(undefined4 *)(*(int *)(iVar10 + 0x10) + 0x18);
        uVar19 = fn_824E17D8(param_3);
        fn_82341CA0(uVar19,uVar27,(double)lbl_82192734,iVar10,param_3,uVar17,0);
        fn_8234E808(*(undefined4 *)(*(int *)(iVar10 + 0x10) + 0x18));
      }
    }
  }
  fn_82F6A584();
  return;
}

