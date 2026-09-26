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
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_825279F8();
extern int fn_8255AA78();
extern int fn_82809D40();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82195628;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82529D38(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r0;
  int iVar6;
  int iVar7;
  float *pfVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  iVar6 = fn_82F6A544();
  iVar7 = fn_825279F8();
  if (iVar7 == 0) {
    puVar4 = (undefined4 *)(iVar6 + 0xc0U & 0xfffffff0);
    uVar19 = puVar4[1];
    uVar20 = puVar4[2];
    uVar21 = puVar4[3];
    puVar5 = (undefined4 *)((int)&fStack_60 + in_r0 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar19;
    puVar5[2] = uVar20;
    puVar5[3] = uVar21;
    dVar15 = (double)fStack_54;
    dVar9 = (double)lbl_821916FC;
    dVar18 = (double)fStack_60;
    dVar17 = (double)fStack_5c;
    dVar12 = (double)(float)((double)fStack_58 * dVar9);
    dVar13 = (double)(float)(dVar17 * dVar9);
    fVar1 = (float)(dVar18 * (double)(float)(dVar18 * dVar9));
    dVar11 = (double)(float)(dVar15 * (double)(float)(dVar18 * dVar9));
    fVar2 = (float)(dVar17 * dVar13);
    dVar10 = dVar15 * dVar12;
    dVar17 = dVar12 * dVar17 - dVar11;
    dVar14 = dVar13 * dVar18;
    dVar16 = (double)fStack_58 * dVar12;
    dVar13 = (double)(float)(dVar15 * dVar13 + (double)(float)(dVar12 * dVar18));
    dVar12 = (double)(lbl_821CA460 - (fVar2 + fVar1));
    dVar9 = dVar12 * dVar12 + (double)(float)(dVar13 * dVar13);
  }
  else {
    if (*(int *)(iVar6 + 0x1b4) == 0) {
      iVar7 = *(int *)(iVar6 + 0x1b8);
      pfVar8 = (float *)fn_8255AA78(&fStack_60,*(undefined8 *)(iVar7 + 0x10),
                                          *(undefined8 *)(iVar7 + 0x18),
                                          *(undefined8 *)(iVar7 + 0x20),
                                          *(undefined8 *)(iVar7 + 0x28),
                                          *(undefined8 *)(iVar7 + 0x30),
                                          *(undefined8 *)(iVar7 + 0x38),
                                          *(undefined8 *)(iVar7 + 0x40));
      fVar3 = pfVar8[1];
      puVar4 = (undefined4 *)(iVar6 + 0xc0U & 0xfffffff0);
      uVar19 = puVar4[1];
      uVar20 = puVar4[2];
      uVar21 = puVar4[3];
      puVar5 = (undefined4 *)((int)&fStack_70 + in_r0 & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar19;
      puVar5[2] = uVar20;
      puVar5[3] = uVar21;
      dVar14 = (double)fStack_68;
      dVar16 = (double)fStack_64;
      dVar9 = (double)lbl_821916FC;
      fStack_68 = pfVar8[2];
      dVar12 = (double)fStack_70;
      dVar11 = (double)fStack_6c;
      dVar17 = (double)(float)(dVar11 * dVar9);
      dVar10 = (double)(float)(dVar14 * dVar9);
      fVar1 = (float)(dVar12 * (double)(float)(dVar12 * dVar9));
      dVar9 = (double)(float)(dVar16 * (double)(float)(dVar12 * dVar9));
      dVar13 = (double)(float)(dVar10 * dVar11 - dVar9);
      fVar2 = (float)(dVar14 * dVar10);
      dVar18 = (double)(float)(dVar16 * dVar17 + (double)(float)(dVar10 * dVar12));
      dVar15 = (double)(lbl_821CA460 - ((float)(dVar11 * dVar17) + fVar1));
      dVar14 = (double)SQRT((float)(dVar15 * dVar15 + (double)(float)(dVar18 * dVar18)));
      fStack_70 = *pfVar8;
      fStack_6c = fVar3;
      if (dVar14 <= (double)lbl_82195628) {
        dVar9 = (double)fn_82809D40(-(double)((float)(dVar17 * dVar12) - (float)(dVar16 * dVar10)),
                                     (double)(lbl_821CA460 - (fVar2 + (float)(dVar11 * dVar17))),
                                     dVar9);
        dVar17 = (double)fn_82809D40(-dVar13,dVar14);
        dVar10 = (double)lbl_821CC160;
      }
      else {
        dVar9 = (double)fn_82809D40((double)((float)(dVar17 * dVar12) + (float)(dVar16 * dVar10)),
                                     (double)(lbl_821CA460 - (fVar2 + fVar1)));
        dVar17 = (double)fn_82809D40(-dVar13,dVar14);
        dVar10 = (double)fn_82809D40(dVar18,dVar15);
      }
      fStack_70 = (float)((double)fStack_70 + dVar17);
      fStack_6c = (float)((double)fStack_6c + dVar10);
      fStack_68 = (float)((double)fStack_68 + dVar9);
      goto LAB_8252a03c;
    }
    puVar4 = (undefined4 *)(iVar6 + 0xc0U & 0xfffffff0);
    uVar19 = puVar4[1];
    uVar20 = puVar4[2];
    uVar21 = puVar4[3];
    puVar5 = (undefined4 *)((int)&fStack_60 + in_r0 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar19;
    puVar5[2] = uVar20;
    puVar5[3] = uVar21;
    dVar17 = (double)fStack_5c;
    dVar15 = (double)fStack_54;
    dVar9 = (double)lbl_821916FC;
    dVar18 = (double)fStack_60;
    dVar12 = (double)(float)(dVar17 * dVar9);
    dVar13 = (double)(float)((double)fStack_58 * dVar9);
    fVar1 = (float)(dVar18 * (double)(float)(dVar18 * dVar9));
    dVar11 = (double)(float)(dVar15 * (double)(float)(dVar18 * dVar9));
    fVar2 = (float)(dVar17 * dVar12);
    dVar10 = dVar15 * dVar13;
    dVar17 = dVar13 * dVar17 - dVar11;
    dVar14 = dVar12 * dVar18;
    dVar16 = (double)fStack_58 * dVar13;
    dVar13 = (double)(float)(dVar15 * dVar12 + (double)(float)(dVar13 * dVar18));
    dVar12 = (double)(lbl_821CA460 - (fVar2 + fVar1));
    dVar9 = dVar12 * dVar12 + (double)(float)(dVar13 * dVar13);
  }
  dVar17 = (double)(float)dVar17;
  dVar9 = (double)SQRT((float)dVar9);
  if (dVar9 <= (double)lbl_82195628) {
    dVar10 = (double)fn_82809D40(-(double)((float)dVar14 - (float)dVar10),
                                  (double)(lbl_821CA460 - ((float)dVar16 + fVar2)),dVar11);
    fStack_68 = (float)dVar10;
    dVar9 = (double)fn_82809D40(-dVar17,dVar9);
    fStack_70 = (float)dVar9;
    fStack_6c = lbl_821CC160;
  }
  else {
    dVar10 = (double)fn_82809D40((double)((float)dVar14 + (float)dVar10),
                                  (double)(lbl_821CA460 - ((float)dVar16 + fVar1)));
    fStack_68 = (float)dVar10;
    dVar9 = (double)fn_82809D40(-dVar17,dVar9);
    fStack_70 = (float)dVar9;
    dVar9 = (double)fn_82809D40(dVar13,dVar12);
    fStack_6c = (float)dVar9;
  }
LAB_8252a03c:
  *param_2 = fStack_70;
  param_2[1] = fStack_6c;
  param_2[2] = fStack_68;
  fn_82F6A590();
  return;
}

