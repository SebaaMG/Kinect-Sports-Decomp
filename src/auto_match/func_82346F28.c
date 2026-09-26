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
extern unsigned int *auStack_80;
extern unsigned int *auStack_8c;
extern unsigned int *auStack_90;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern int fn_822B17A8();
extern int fn_822C72E0();
extern int fn_822C8C08();
extern int fn_82337B90();
extern int fn_82338F48();
extern int fn_823414A0();
extern int fn_82341BF0();
extern int fn_8234B0C8();
extern int fn_8234E808();
extern int fn_8242E560();
extern int fn_82436130();
extern int fn_8243D2D8();
extern int fn_8244C088();
extern int fn_824CD030();
extern int fn_824E17D8();
extern int fn_824E1A20();
extern int fn_825300A8();
extern int fn_827F5708();
extern int fn_827F57E8();
extern int fn_82809D40();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82192F70;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_82195628;
extern unsigned int lbl_8219598C;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F844;
extern unsigned int lbl_8328D41C;
extern unsigned int uStack_a0;


void fn_82346F28(undefined8 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  float *pfVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
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
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  int aiStack_b0 [4];
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [128];
  
  iVar5 = fn_82F6A53C();
  if ((*(undefined4 **)(iVar5 + 0xc))[1] == 3) {
    fn_82338F48(**(undefined4 **)(iVar5 + 0xc),1);
  }
  iVar6 = fn_82337B90(**(undefined4 **)(iVar5 + 0xc));
  if (iVar6 == 0) goto LAB_823477d8;
  iVar6 = *(int *)(**(int **)(iVar5 + 0xc) + 0x24);
  *(undefined4 *)(*(int *)(**(int **)(iVar5 + 0xc) + 0x1a0) + 0x1c) = 0;
  iVar7 = *(int *)(*(int *)(iVar5 + 0xc) + 4);
  if (10 < iVar7) {
    if (iVar7 < 0xc) goto LAB_823477d8;
    if (0xd < iVar7) {
      if (iVar7 == 0xe) {
        if (*(int *)(**(int **)(iVar5 + 0xc) + 0x24) != 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          dVar20 = (double)fn_824E17D8();
          *(float *)(iVar5 + 0x28) = (float)dVar20;
        }
        goto LAB_823477d8;
      }
      if (iVar7 != 0xf) goto LAB_823477d8;
    }
    iVar7 = *(int *)(**(int **)(iVar5 + 0xc) + 0x24);
    if (iVar7 != 0) {
      (*(int **)(iVar5 + 0xc))[4] = 2;
      iVar9 = fn_824CD030(iVar7);
      if (iVar9 != 0) {
        (**(code **)(*(int *)**(undefined4 **)(iVar7 + 0xfc) + 0x24))();
        *(undefined4 *)(*(int *)(**(int **)(iVar7 + 0xfc) + 0x3c) + 0x78) = 0;
      }
      *(undefined4 *)(*(int *)(iVar7 + 0xfc) + 100) = 2;
    }
    piVar8 = (int *)fn_82338F48(**(undefined4 **)(iVar5 + 0xc),1);
    dVar20 = (double)lbl_8218E8FC;
    dVar23 = (double)lbl_821CA460;
    dVar21 = (double)lbl_821CC160;
    iVar7 = (*(int **)(iVar5 + 0xc))[1];
    if (iVar7 == 0xf) {
      if (*(int *)(*(int *)(iVar5 + 0x10) + 0x48) != 0) {
        iVar7 = *(int *)(*(int *)(*(int *)(**(int **)(iVar5 + 0xc) + 0x1a0) + 0xc) + 0x174);
        if (*(int *)(*(int *)(iVar7 + 0x5c) + 0x1d4) == -1) {
          uVar27 = 0;
        }
        else {
          iVar7 = *(int *)(iVar7 + 0x5c);
          uVar27 = *(undefined4 *)(*(int *)(iVar7 + 0x1d4) * 4 + *(int *)(iVar7 + 0x1c4));
        }
        piVar8 = (int *)fn_8244C088(auStack_8c,uVar27);
        if (lbl_8328D41C < *piVar8) {
          iVar7 = *(int *)(*(int *)(**(int **)(iVar5 + 0xc) + 0x24) + 0x34);
          piVar8 = (int *)0x0;
          if (iVar7 != 0) {
            piVar8 = (int *)fn_822B17A8(iVar7,0x2c,0);
          }
        }
      }
    }
    else if (iVar7 == 0xc) {
      fn_822C72E0(*(undefined4 *)(*(int *)(iVar5 + 8) + 0x20),0xffffffff821b0e80);
      if (*(int *)(*(int *)(**(int **)(iVar5 + 0xc) + 0x118) + 0x2e4) != 0) {
        fn_827F5708(dVar23);
      }
      fn_8234B0C8(dVar21,(ulonglong)*(uint *)(**(int **)(iVar5 + 0xc) + 0x118) + 0x2c0,
                        0xffffffff821b1ad8);
      iVar7 = fn_8242E560(*(undefined4 *)(*(int *)(**(int **)(iVar5 + 0xc) + 0x1a0) + 0xc));
      if (iVar7 == 0) {
        iVar7 = *(int *)(**(int **)(iVar5 + 0xc) + 0x118);
        fn_827F57E8(dVar23,dVar20,*(undefined4 *)(iVar7 + 0x10));
        iVar7 = *(int *)(iVar7 + 0x10);
        *(undefined4 *)(iVar7 + 0x108) = *(undefined4 *)(iVar7 + 0x10c);
      }
      iVar7 = *(int *)(*(int *)(iVar5 + 0x10) + 0x20);
      for (pfVar12 = (float *)(iVar7 + 0x18); pfVar12 != (float *)(iVar7 + 0x60);
          pfVar12 = pfVar12 + 3) {
        pfVar12[2] = (pfVar12[1] - *pfVar12) + *pfVar12;
      }
      fn_8234E808();
      piVar8 = (int *)fn_8234E808(*(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x20));
    }
    if ((iVar6 != 0) && ((uint)LZCOUNT(param_2 + -0xe) >> 5 != 0)) {
      iVar7 = fn_824CD030(iVar6);
      if (iVar7 == 0) {
        uVar11 = 1;
      }
      else {
        uVar11 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(iVar6 + 0xfc) + 0x14) + 0x3c) + 0x1c);
      }
      *(uint *)(*(int *)(iVar5 + 0x10) + 8) = uVar11;
      dVar16 = (double)lbl_82195628;
      dVar13 = (double)lbl_821916FC;
      iVar6 = **(int **)(iVar5 + 0xc);
      puVar3 = (undefined4 *)(iVar6 + 0x90U & 0xfffffff0);
      uVar27 = puVar3[1];
      uVar28 = puVar3[2];
      uVar29 = puVar3[3];
      puVar4 = (undefined4 *)((int)&uStack_a0 + in_r0 & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar27;
      puVar4[2] = uVar28;
      puVar4[3] = uVar29;
      dVar18 = (double)(((U64)(uStack_a0) >> 32) & 0xFFFFFFFF);
      dVar19 = (double)(((U64)(uStack_a0) >> 0) & 0xFFFFFFFF);
      dVar17 = (double)fStack_94;
      dVar15 = (double)(float)((double)fStack_98 * dVar13);
      dVar14 = (double)(float)(dVar18 * dVar13);
      puVar3 = (undefined4 *)(iVar6 + 0x80U & 0xfffffff0);
      uVar27 = puVar3[1];
      uVar28 = puVar3[2];
      uVar29 = puVar3[3];
      puVar4 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar27;
      puVar4[2] = uVar28;
      puVar4[3] = uVar29;
      fVar1 = (float)(dVar19 * (double)(float)(dVar19 * dVar13));
      dVar13 = (double)(float)(dVar17 * (double)(float)(dVar19 * dVar13));
      fVar2 = (float)((double)fStack_98 * dVar15);
      dVar26 = (double)(float)(dVar17 * dVar14 + (double)(float)(dVar15 * dVar19));
      dVar22 = (double)(float)(dVar15 * dVar18 - dVar13);
      dVar25 = (double)(float)(dVar23 - (double)((float)(dVar18 * dVar14) + fVar1));
      dVar24 = (double)SQRT((float)(dVar25 * dVar25 + (double)(float)(dVar26 * dVar26)));
      if (dVar24 <= dVar16) {
        dVar23 = (double)fn_82809D40(-(double)((float)(dVar14 * dVar19) - (float)(dVar17 * dVar15))
                                      ,(double)(float)(dVar23 - (double)(fVar2 + (float)(dVar18 * 
                                                  dVar14))),dVar13);
        fStack_98 = (float)dVar23;
        dVar23 = (double)fn_82809D40(-dVar22,dVar24);
        uStack_a0 = (ulonglong)(uint)(float)dVar23 << 0x20;
        dVar23 = dVar21;
      }
      else {
        dVar23 = (double)fn_82809D40((double)((float)(dVar14 * dVar19) + (float)(dVar17 * dVar15)),
                                      (double)(float)(dVar23 - (double)(fVar2 + fVar1)));
        fStack_98 = (float)dVar23;
        dVar23 = (double)fn_82809D40(-dVar22,dVar24);
        uStack_a0 = CONCAT44((float)dVar23,(((U64)(uStack_a0) >> 32) & 0xFFFFFFFF));
        dVar23 = (double)fn_82809D40(dVar26,dVar25);
      }
      uStack_a0 = CONCAT44((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF),(float)dVar23);
      iVar6 = *(int *)(**(int **)(iVar5 + 0xc) + 0x118);
      fn_827F57E8(dVar21,dVar20,*(undefined4 *)(iVar6 + 0x10));
      iVar6 = *(int *)(iVar6 + 0x10);
      iVar7 = *(int *)(*(int *)(iVar5 + 0x10) + 0x20);
      *(undefined4 *)(iVar6 + 0x108) = *(undefined4 *)(iVar6 + 0x10c);
      for (pfVar12 = (float *)(iVar7 + 0x18); pfVar12 != (float *)(iVar7 + 0x60);
          pfVar12 = pfVar12 + 3) {
        pfVar12[2] = (float)((double)(float)((double)pfVar12[1] - (double)*pfVar12) * dVar21 +
                            (double)*pfVar12);
      }
      fn_8234E808();
      uStack_a0 = CONCAT44(lbl_8219598C,(float)(dVar23 + (double)lbl_82193E50));
      fn_823414A0(iVar5);
      pfVar12 = *(float **)(**(int **)(iVar5 + 0xc) + 0x1a0);
      iVar6 = *(int *)((int)pfVar12[3] + 0x174);
      if (*(int *)(*(int *)(iVar6 + 0x5c) + 0x1d4) == -1) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(*(int *)(iVar6 + 0x5c) + 0x1d4) * 4 +
                        *(int *)(*(int *)(iVar6 + 0x5c) + 0x1c4));
      }
      if (*pfVar12 <= *(float *)(*(int *)(iVar7 + 0x44) + 4)) {
        uVar10 = 0xffffffff821b1b00;
      }
      else {
        uVar10 = 0xffffffff821b1ae4;
      }
      piVar8 = (int *)fn_8243D2D8(iVar6 + 8,uVar10,auStack_80,&uStack_a0);
    }
    if (*(int *)(*(int *)(iVar5 + 0x10) + 0x2c) != 0) {
      if (lbl_8327F844 != 0) {
        uVar11 = *(uint *)(**(int **)(iVar5 + 0xc) + 0x2c);
        fn_825300A8((double)*(float *)(*(int *)(iVar5 + 0x10) + 0x34),piVar8,
                     (ulonglong)uVar11 +
                     ((longlong)((int)uVar11 >> 1) +
                      (ulonglong)((int)uVar11 < 0 && (uVar11 & 1) != 0) & 0x7fffffff) * -2);
      }
      *(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x2c) = 0;
    }
    goto LAB_823477d8;
  }
  if (iVar7 != 10) {
    if (iVar7 == 3) {
      iVar6 = *(int *)(**(int **)(iVar5 + 0xc) + 0x24);
      if (iVar6 != 0) {
        (*(int **)(iVar5 + 0xc))[4] = 2;
        iVar7 = fn_824CD030(iVar6);
        if (iVar7 != 0) {
          (**(code **)(*(int *)**(undefined4 **)(iVar6 + 0xfc) + 0x24))();
          *(undefined4 *)(*(int *)(**(int **)(iVar6 + 0xfc) + 0x3c) + 0x78) = 0;
        }
        *(undefined4 *)(*(int *)(iVar6 + 0xfc) + 100) = 2;
      }
      iVar6 = *(int *)(*(int *)(*(int *)(**(int **)(iVar5 + 0xc) + 0x1a0) + 0xc) + 0x174);
      if (*(int *)(*(int *)(iVar6 + 0x5c) + 0x1d4) == -1) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar6 + 0x5c);
        iVar6 = *(int *)(*(int *)(iVar6 + 0x1d4) * 4 + *(int *)(iVar6 + 0x1c4));
      }
      fVar1 = lbl_821CC160;
      if ((*(int *)(*(int *)(iVar6 + 0x40) + 0xf0) == 0) &&
         (iVar6 = fn_8242E560(), fVar1 = lbl_821CC160, iVar6 == 0)) {
        fn_822C8C08(*(undefined4 *)(iVar5 + 8),0xffffffff821aca8c);
        fn_82341BF0(iVar5);
        goto LAB_823477d8;
      }
    }
    else {
      if (iVar7 != 4) {
        if (iVar7 != 9) goto LAB_823477d8;
        fn_82338F48(**(undefined4 **)(iVar5 + 0xc),0);
        iVar6 = *(int *)(**(int **)(iVar5 + 0xc) + 0x24);
        if (iVar6 != 0) {
          (*(int **)(iVar5 + 0xc))[4] = 0;
          fn_824E1A20(iVar6,0);
        }
        if (*(int *)(*(int *)(**(int **)(iVar5 + 0xc) + 0x118) + 0x2e4) != 0) {
          fn_827F5708((double)lbl_821CA460);
        }
        uVar10 = 0xffffffff821b1acc;
        goto LAB_82347018;
      }
      iVar6 = fn_8242E560(*(undefined4 *)(*(int *)(**(int **)(iVar5 + 0xc) + 0x1a0) + 0xc));
      fVar1 = lbl_821CA460;
      if (iVar6 != 0) goto LAB_823477d8;
    }
    iVar5 = *(int *)(**(int **)(iVar5 + 0xc) + 0x118);
    fn_827F57E8((double)fVar1,(double)lbl_8218E8FC,*(undefined4 *)(iVar5 + 0x10));
    iVar5 = *(int *)(iVar5 + 0x10);
    *(undefined4 *)(iVar5 + 0x108) = *(undefined4 *)(iVar5 + 0x10c);
    goto LAB_823477d8;
  }
  iVar6 = *(int *)(*(int *)(*(int *)(**(int **)(iVar5 + 0xc) + 0x1a0) + 0xc) + 0x174);
  if (*(int *)(*(int *)(iVar6 + 0x5c) + 0x1d4) == -1) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(iVar6 + 0x5c);
    iVar6 = *(int *)(*(int *)(iVar6 + 0x1d4) * 4 + *(int *)(iVar6 + 0x1c4));
  }
  if (*(int *)(*(int *)(**(int **)(iVar5 + 0xc) + 0x118) + 0x2e4) != 0) {
    fn_827F5708((double)lbl_821CA460);
  }
  if ((param_2 != 0xf) || (iVar7 = fn_82337B90(**(undefined4 **)(iVar5 + 0xc)), iVar7 == 0))
  goto LAB_823477d8;
  fn_8244C088(&uStack_a0,iVar6);
  fn_82436130(aiStack_b0,iVar6,**(undefined4 **)(iVar5 + 0xc));
  if (((lbl_8328D41C < aiStack_b0[0]) && (aiStack_b0[0] <= (int)(((U64)(uStack_a0) >> 0) & 0xFFFFFFFF))) ||
     (*(int *)(*(int *)(iVar6 + 0x40) + 0x118) <= (int)(((U64)(uStack_a0) >> 0) & 0xFFFFFFFF))) {
LAB_823472cc:
    uVar10 = 0xffffffff821b1700;
  }
  else {
    piVar8 = (int *)fn_8244C088(auStack_90,iVar6);
    if (lbl_8218E8FC <= (float)(longlong)*piVar8 * lbl_82193AF0) {
      uStack_a0 = (longlong)(int)(((U64)(uStack_a0) >> 0) & 0xFFFFFFFF);
      if (((float)uStack_a0 * lbl_82193AF0 < lbl_8218E8FC) ||
         (lbl_82192F70 <= (float)uStack_a0 * lbl_82193AF0)) goto LAB_823472cc;
      uVar10 = 0xffffffff821b0c44;
    }
    else {
      uVar10 = 0xffffffff821b1ad4;
      uStack_a0 = (longlong)*piVar8;
    }
  }
LAB_82347018:
  fn_8234B0C8((double)lbl_821CC160,
                    (ulonglong)*(uint *)(**(int **)(iVar5 + 0xc) + 0x118) + 0x2c0,uVar10);
LAB_823477d8:
  fn_82F6A588();
  return;
}

