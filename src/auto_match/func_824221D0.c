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
extern unsigned int *auStack_50;
extern unsigned int fStack_4c;
extern int fn_82536590();
extern int fn_82539560();
extern int fn_82574340();
extern int fn_827F6318();
extern unsigned int lbl_82195B3C;
extern unsigned int lbl_821962C0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


undefined8 fn_824221D0(double param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int in_r0;
  int iVar8;
  undefined8 uVar7;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_50 [4];
  float fStack_4c;
  
  if (param_2[5] == 0) goto LAB_82422500;
  piVar10 = (int *)*param_2;
  if (*(int *)(*piVar10 + 0xc24) == 0) {
    fVar1 = (float)param_2[7];
    param_2[7] = (int)(float)((double)fVar1 + param_1);
    if (((float)((double)fVar1 + param_1) <= *(float *)(*piVar10 + 0x9bc)) || (piVar10[0x9e] != 0))
    goto LAB_82422500;
    if (param_2[3] == 1) {
      param_2[4] = 1;
      param_2[3] = 4;
      param_2[6] = (int)lbl_821CC160;
      goto LAB_82422500;
    }
    if (param_2[4] != 2) goto LAB_82422500;
    fn_82536590(*piVar10 + 0x1490,0);
  }
  else {
    if (*(int *)(param_2[1] + 400) == 0) {
      dVar15 = (double)lbl_821CC160;
      dVar13 = dVar15;
    }
    else if (*(int *)(**(int **)(*(int *)(param_2[1] + 400) + 400) + 0x114) == 0) {
      dVar15 = (double)lbl_821CC160;
      dVar13 = dVar15;
    }
    else {
      dVar13 = (double)fn_827F6318();
      dVar15 = (double)lbl_821CC160;
    }
    piVar10 = (int *)*param_2;
    iVar4 = *piVar10;
    if ((double)*(float *)(iVar4 + 0x998) <= dVar13) {
      if ((double)*(float *)(iVar4 + 0x99c) <= dVar13) {
        if (dVar13 < (double)*(float *)(iVar4 + 0x9a0)) {
          param_2[3] = 2;
          param_2[6] = *(int *)(*piVar10 + 0x9a8);
          goto LAB_8242230c;
        }
        if ((double)*(float *)(iVar4 + 0x9a4) <= dVar13) {
          param_2[3] = 4;
          goto LAB_82422308;
        }
        param_2[3] = 3;
        iVar4 = *piVar10;
        dVar14 = (double)*(float *)(iVar4 + 0x9a8);
        fVar1 = *(float *)(iVar4 + 0x9a4);
        fVar2 = *(float *)(iVar4 + 0x9a0);
      }
      else {
        param_2[3] = 1;
        iVar4 = *piVar10;
        fVar1 = *(float *)(iVar4 + 0x99c);
        fVar2 = *(float *)(iVar4 + 0x998);
        dVar14 = dVar15;
        dVar15 = (double)*(float *)(iVar4 + 0x9a8);
      }
      dVar15 = (double)fn_82539560(dVar13,(double)fVar2,(double)fVar1,dVar14,dVar15);
      param_2[6] = (int)(float)dVar15;
    }
    else {
      param_2[3] = 0;
LAB_82422308:
      param_2[6] = (int)(float)dVar15;
    }
LAB_8242230c:
    iVar4 = *piVar10;
    if ((*(int *)(iVar4 + 0x9ac) != 0) &&
       (piVar12 = *(int **)(param_2[1] + 0x8c0), piVar12 != (int *)0x0)) {
      uVar11 = *(int *)(*(int *)(iVar4 + 0x2cdc) + 0x44) + *(int *)(iVar4 + 0x9b4);
      iVar4 = piVar12[uVar11 + (((int)uVar11 >> 2) + (uint)((int)uVar11 < 0 && (uVar11 & 3) != 0) &
                               0x3fffffff) * -4 + 0x20];
      iVar8 = (**(code **)(*piVar12 + 0x1c))();
      piVar10 = *(int **)(*(int *)(iVar8 + 0x10) + 0x10);
      piVar12 = piVar10 + 1;
      piVar9 = piVar12 + *piVar10 * 0x11;
      for (; piVar12 < piVar9; piVar12 = piVar12 + 0x11) {
        if (*(short *)piVar12 == 0) goto LAB_824223a0;
      }
      piVar12 = (int *)0x0;
LAB_824223a0:
      if (0x7fff < (ushort)*piVar12) {
        do {
          sVar3 = *(short *)piVar12;
          do {
            piVar12 = piVar12 + 0x11;
            if (piVar10 + *piVar10 * 0x11 + 1 <= piVar12) {
              piVar12 = (int *)0x0;
              break;
            }
          } while (*(short *)piVar12 != sVar3);
        } while (0x7fff < (ushort)*piVar12);
      }
      uVar11 = param_2[1];
      puVar5 = (undefined4 *)((uint)(&lbl_821962C0 + in_r0) & 0xfffffff0);
      uVar16 = puVar5[1];
      uVar17 = puVar5[2];
      uVar18 = puVar5[3];
      puVar6 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar16;
      puVar6[2] = uVar17;
      puVar6[3] = uVar18;
      fn_82574340(piVar12,(ulonglong)uVar11 + 0xf0,iVar4,auStack_50);
      piVar10 = (int *)*param_2;
      param_2[6] = (int)((fStack_4c - lbl_82195B3C) - *(float *)(*piVar10 + 0x96c));
    }
    if ((double)*(float *)(*piVar10 + 0x990) <= dVar13) {
      if ((double)*(float *)(*piVar10 + 0x994) <= dVar13) {
        param_2[2] = 2;
      }
      else {
        param_2[2] = 1;
      }
    }
    else {
      param_2[2] = 0;
    }
    if (dVar13 < (double)lbl_821CA460) goto LAB_82422500;
  }
  param_2[5] = 0;
LAB_82422500:
  if ((param_2[5] == 0) || (uVar7 = 1, param_2[2] < 2)) {
    uVar7 = 0;
  }
  return uVar7;
}

