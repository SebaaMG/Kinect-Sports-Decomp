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
extern unsigned int *auStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern unsigned int fStack_74;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern int fn_8243D2D8();
extern int fn_82520780();
extern int fn_825279F8();
extern int fn_825327A8();
extern int fn_82532810();
extern int fn_825328D0();
extern int fn_8255AA78();
extern int fn_82809D40();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82195628;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82448A88(undefined8 param_1,uint param_2,ulonglong param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int in_r0;
  int iVar7;
  int iVar8;
  float *pfVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [96];
  
  iVar7 = fn_82F6A544();
  iVar4 = *(int *)((int)(((longlong)(*(int **)(iVar7 + 0x48))[7] * (longlong)(int)(param_2 & 0xff) +
                          (param_3 & 0xff) & 0xffffffff) << 2) + **(int **)(iVar7 + 0x48));
  if (param_4 == 0) {
    iVar8 = fn_82520780((double)lbl_8218E8E8,0xffffffff83265a28);
    if (iVar8 == 0) {
      uVar10 = 0xffffffff821b9cc0;
    }
    else {
      uVar10 = 0xffffffff821b9cb0;
    }
    uVar10 = fn_825328D0(iVar4,uVar10);
    fn_82532810(iVar4,uVar10);
  }
  else {
    fn_825327A8(iVar4,0xffffffff821b9ca8);
  }
  if (*(int *)(iVar4 + 400) != 0) {
    *(undefined4 *)(**(int **)(*(int *)(iVar4 + 400) + 400) + 0x118) = 0;
  }
  puVar5 = (undefined4 *)(iVar4 + 0x50U & 0xfffffff0);
  uVar21 = puVar5[1];
  uVar22 = puVar5[2];
  uVar23 = puVar5[3];
  puVar6 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar6 = *puVar5;
  puVar6[1] = uVar21;
  puVar6[2] = uVar22;
  puVar6[3] = uVar23;
  iVar8 = fn_825279F8(iVar4);
  if (iVar8 == 0) {
    puVar5 = (undefined4 *)(iVar4 + 0xc0U & 0xfffffff0);
    uVar21 = puVar5[1];
    uVar22 = puVar5[2];
    uVar23 = puVar5[3];
    puVar6 = (undefined4 *)((int)&fStack_70 + in_r0 & 0xfffffff0);
    *puVar6 = *puVar5;
    puVar6[1] = uVar21;
    puVar6[2] = uVar22;
    puVar6[3] = uVar23;
    dVar17 = (double)fStack_64;
    dVar11 = (double)lbl_821916FC;
    dVar20 = (double)fStack_70;
    dVar19 = (double)fStack_6c;
    dVar14 = (double)(float)((double)fStack_68 * dVar11);
    dVar15 = (double)(float)(dVar19 * dVar11);
    fVar1 = (float)(dVar20 * (double)(float)(dVar20 * dVar11));
    dVar13 = (double)(float)(dVar17 * (double)(float)(dVar20 * dVar11));
    fVar2 = (float)(dVar19 * dVar15);
    dVar12 = dVar17 * dVar14;
    dVar19 = dVar14 * dVar19 - dVar13;
    dVar16 = dVar15 * dVar20;
    dVar18 = (double)fStack_68 * dVar14;
    dVar15 = (double)(float)(dVar17 * dVar15 + (double)(float)(dVar14 * dVar20));
    dVar14 = (double)(lbl_821CA460 - (fVar2 + fVar1));
    dVar11 = dVar14 * dVar14 + (double)(float)(dVar15 * dVar15);
  }
  else {
    if (*(int *)(iVar4 + 0x1b4) == 0) {
      iVar8 = *(int *)(iVar4 + 0x1b8);
      pfVar9 = (float *)fn_8255AA78(&fStack_70,*(undefined8 *)(iVar8 + 0x10),
                                          *(undefined8 *)(iVar8 + 0x18),
                                          *(undefined8 *)(iVar8 + 0x20),
                                          *(undefined8 *)(iVar8 + 0x28),
                                          *(undefined8 *)(iVar8 + 0x30),
                                          *(undefined8 *)(iVar8 + 0x38),
                                          *(undefined8 *)(iVar8 + 0x40));
      fVar3 = pfVar9[1];
      puVar5 = (undefined4 *)(iVar4 + 0xc0U & 0xfffffff0);
      uVar21 = puVar5[1];
      uVar22 = puVar5[2];
      uVar23 = puVar5[3];
      puVar6 = (undefined4 *)((int)&fStack_80 + in_r0 & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar21;
      puVar6[2] = uVar22;
      puVar6[3] = uVar23;
      dVar16 = (double)fStack_78;
      dVar18 = (double)fStack_74;
      dVar11 = (double)lbl_821916FC;
      fStack_78 = pfVar9[2];
      dVar14 = (double)fStack_80;
      dVar13 = (double)fStack_7c;
      dVar19 = (double)(float)(dVar13 * dVar11);
      dVar12 = (double)(float)(dVar16 * dVar11);
      fVar1 = (float)(dVar14 * (double)(float)(dVar14 * dVar11));
      dVar11 = (double)(float)(dVar18 * (double)(float)(dVar14 * dVar11));
      dVar15 = (double)(float)(dVar12 * dVar13 - dVar11);
      fVar2 = (float)(dVar16 * dVar12);
      dVar20 = (double)(float)(dVar18 * dVar19 + (double)(float)(dVar12 * dVar14));
      dVar17 = (double)(lbl_821CA460 - ((float)(dVar13 * dVar19) + fVar1));
      dVar16 = (double)SQRT((float)(dVar17 * dVar17 + (double)(float)(dVar20 * dVar20)));
      fStack_80 = *pfVar9;
      fStack_7c = fVar3;
      if (dVar16 <= (double)lbl_82195628) {
        dVar11 = (double)fn_82809D40(-(double)((float)(dVar19 * dVar14) - (float)(dVar18 * dVar12))
                                      ,(double)(lbl_821CA460 - (fVar2 + (float)(dVar13 * dVar19))),
                                      dVar11);
        dVar19 = (double)fn_82809D40(-dVar15,dVar16);
        dVar12 = (double)lbl_821CC160;
      }
      else {
        dVar11 = (double)fn_82809D40((double)((float)(dVar19 * dVar14) + (float)(dVar18 * dVar12)),
                                      (double)(lbl_821CA460 - (fVar2 + fVar1)));
        dVar19 = (double)fn_82809D40(-dVar15,dVar16);
        dVar12 = (double)fn_82809D40(dVar20,dVar17);
      }
      fStack_80 = (float)((double)fStack_80 + dVar19);
      fStack_7c = (float)((double)fStack_7c + dVar12);
      fStack_78 = (float)((double)fStack_78 + dVar11);
      goto LAB_82448e3c;
    }
    puVar5 = (undefined4 *)(iVar4 + 0xc0U & 0xfffffff0);
    uVar21 = puVar5[1];
    uVar22 = puVar5[2];
    uVar23 = puVar5[3];
    puVar6 = (undefined4 *)((int)&fStack_70 + in_r0 & 0xfffffff0);
    *puVar6 = *puVar5;
    puVar6[1] = uVar21;
    puVar6[2] = uVar22;
    puVar6[3] = uVar23;
    dVar19 = (double)fStack_6c;
    dVar17 = (double)fStack_64;
    dVar11 = (double)lbl_821916FC;
    dVar20 = (double)fStack_70;
    dVar14 = (double)(float)(dVar19 * dVar11);
    dVar15 = (double)(float)((double)fStack_68 * dVar11);
    fVar1 = (float)(dVar20 * (double)(float)(dVar20 * dVar11));
    dVar13 = (double)(float)(dVar17 * (double)(float)(dVar20 * dVar11));
    fVar2 = (float)(dVar19 * dVar14);
    dVar12 = dVar17 * dVar15;
    dVar19 = dVar15 * dVar19 - dVar13;
    dVar16 = dVar14 * dVar20;
    dVar18 = (double)fStack_68 * dVar15;
    dVar15 = (double)(float)(dVar17 * dVar14 + (double)(float)(dVar15 * dVar20));
    dVar14 = (double)(lbl_821CA460 - (fVar2 + fVar1));
    dVar11 = dVar14 * dVar14 + (double)(float)(dVar15 * dVar15);
  }
  dVar19 = (double)(float)dVar19;
  dVar11 = (double)SQRT((float)dVar11);
  if (dVar11 <= (double)lbl_82195628) {
    dVar12 = (double)fn_82809D40(-(double)((float)dVar16 - (float)dVar12),
                                  (double)(lbl_821CA460 - ((float)dVar18 + fVar2)),dVar13);
    fStack_78 = (float)dVar12;
    dVar11 = (double)fn_82809D40(-dVar19,dVar11);
    fStack_80 = (float)dVar11;
    fStack_7c = lbl_821CC160;
  }
  else {
    dVar12 = (double)fn_82809D40((double)((float)dVar16 + (float)dVar12),
                                  (double)(lbl_821CA460 - ((float)dVar18 + fVar1)));
    fStack_78 = (float)dVar12;
    dVar11 = (double)fn_82809D40(-dVar19,dVar11);
    fStack_80 = (float)dVar11;
    dVar11 = (double)fn_82809D40(dVar15,dVar14);
    fStack_7c = (float)dVar11;
  }
LAB_82448e3c:
  fn_8243D2D8((ulonglong)*(uint *)(**(int **)(iVar7 + 0x40) + 0x174) + 8,0xffffffff821b9cd0,
                auStack_60,&fStack_80);
  fn_82F6A590();
  return;
}

