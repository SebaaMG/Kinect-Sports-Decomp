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
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_8253C548();
extern int fn_82604A20();
extern int fn_82809D40();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82195628;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83297910;
extern unsigned int lbl_83297920;


void fn_825ABCB8(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r0;
  int *piVar7;
  undefined8 uVar6;
  float *pfVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 in_register_000104b0;
  undefined4 in_register_000104b4;
  undefined4 in_register_000104b8;
  undefined4 in_vr75;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  piVar7 = (int *)fn_82F6A548();
  iVar3 = piVar7[0x20];
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x38) != 0)) {
    uVar6 = 0;
  }
  else {
    if ((param_3 & 0xffffffff) == 0) {
      pfVar8 = (float *)0x0;
    }
    else {
      puVar4 = (undefined4 *)(in_r0 + (int)param_3 & 0xfffffff0);
      uVar20 = puVar4[1];
      uVar21 = puVar4[2];
      uVar22 = puVar4[3];
      puVar5 = (undefined4 *)((int)&fStack_60 + in_r0 & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar20;
      puVar5[2] = uVar21;
      puVar5[3] = uVar22;
      dVar14 = (double)fStack_5c;
      dVar13 = (double)fStack_54;
      dVar10 = (double)lbl_821916FC;
      dVar15 = (double)fStack_60;
      dVar11 = (double)(float)(dVar14 * dVar10);
      dVar12 = (double)(float)((double)fStack_58 * dVar10);
      fVar1 = (float)(dVar15 * (double)(float)(dVar15 * dVar10));
      dVar10 = (double)(float)(dVar13 * (double)(float)(dVar15 * dVar10));
      dVar16 = (double)(float)(dVar12 * dVar14 - dVar10);
      fVar2 = (float)((double)fStack_58 * dVar12);
      dVar19 = (double)(float)(dVar13 * dVar11 + (double)(float)(dVar12 * dVar15));
      dVar18 = (double)(lbl_821CA460 - ((float)(dVar14 * dVar11) + fVar1));
      dVar17 = (double)SQRT((float)(dVar18 * dVar18 + (double)(float)(dVar19 * dVar19)));
      if (dVar17 <= (double)lbl_82195628) {
        dVar10 = (double)fn_82809D40(-(double)((float)(dVar11 * dVar15) - (float)(dVar13 * dVar12))
                                      ,(double)(lbl_821CA460 - (fVar2 + (float)(dVar14 * dVar11))),
                                      dVar10);
        dVar11 = (double)fn_82809D40(-dVar16,dVar17);
        fStack_6c = lbl_821CC160;
      }
      else {
        dVar10 = (double)fn_82809D40((double)((float)(dVar11 * dVar15) + (float)(dVar13 * dVar12)),
                                      (double)(lbl_821CA460 - (fVar2 + fVar1)));
        dVar11 = (double)fn_82809D40(-dVar16,dVar17);
        dVar12 = (double)fn_82809D40(dVar19,dVar18);
        fStack_6c = (float)dVar12;
      }
      fStack_68 = (float)dVar10;
      fStack_70 = (float)dVar11;
      pfVar8 = &fStack_60;
      fStack_60 = fStack_70;
      fStack_5c = fStack_6c;
      fStack_58 = fStack_68;
    }
    fn_8253C548(iVar3,param_2,pfVar8);
    if (*(char *)(iVar3 + 0x4f0) != '\0') {
      uVar9 = lbl_83297920;
      if ((lbl_83297920 & 1) == 0) {
        uVar9 = lbl_83297920 | 1;
        puVar4 = (undefined4 *)((int)&lbl_83297910 + in_r0 & 0xfffffff0);
        lbl_83297920 = uVar9;
        *puVar4 = in_register_000104d0;
        puVar4[1] = in_register_000104d4;
        puVar4[2] = in_register_000104d8;
        puVar4[3] = in_vr77;
      }
      if ((uVar9 & 1) == 0) {
        lbl_83297920 = uVar9 | 1;
        puVar4 = (undefined4 *)((int)&lbl_83297910 + in_r0 & 0xfffffff0);
        *puVar4 = in_register_000104d0;
        puVar4[1] = in_register_000104d4;
        puVar4[2] = in_register_000104d8;
        puVar4[3] = in_vr77;
      }
      fn_82604A20(iVar3,param_2,param_3,0xffffffff83297910);
      puVar4 = (undefined4 *)(iVar3 + 0x550U & 0xfffffff0);
      *puVar4 = in_register_000104b0;
      puVar4[1] = in_register_000104b4;
      puVar4[2] = in_register_000104b8;
      puVar4[3] = in_vr75;
    }
    (**(code **)(*piVar7 + 0x60))(piVar7);
    uVar6 = 1;
    *(undefined1 *)(piVar7 + 0x49) = 1;
  }
  fn_82F6A594(uVar6);
  return;
}

