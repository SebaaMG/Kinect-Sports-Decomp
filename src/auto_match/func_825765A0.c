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
extern int fn_82575DF0();
extern int fn_82577330();
extern int fn_82590DB8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_825765A0(double param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  fVar3 = lbl_821CC160;
  dVar11 = (double)lbl_821CC160;
  dVar12 = dVar11;
  if ((double)*(float *)(param_2 + 0x2c) != dVar11) {
    dVar12 = (double)(float)(param_1 - (double)*(float *)(param_2 + 0x2c));
  }
  *(float *)(param_2 + 0x2c) = (float)param_1;
  fVar2 = lbl_821CA460;
  fVar1 = lbl_8218E8E8;
  if (*(char *)(param_2 + 0x30) != '\0') {
    dVar10 = (double)*(float *)(param_2 + 0x44);
    iVar4 = *(int *)(param_3 + 0x1a8);
    if (dVar10 <= dVar12) {
      fVar2 = (float)((double)*(float *)(param_2 + 0x54) * dVar10 +
                     (double)*(float *)(param_2 + 0x50));
      *(float *)(param_2 + 0x34) =
           (float)((double)*(float *)(param_2 + 0x3c) * dVar10 + (double)*(float *)(param_2 + 0x34))
      ;
      *(float *)(param_2 + 0x38) =
           (float)((double)*(float *)(param_2 + 0x40) * dVar10 + (double)*(float *)(param_2 + 0x38))
      ;
      *(float *)(param_2 + 0x50) = fVar2;
      if (fVar1 <= fVar2) {
        *(float *)(param_2 + 0x50) = lbl_821CA460;
      }
      else {
        *(float *)(param_2 + 0x50) = fVar3;
      }
      *(float *)(param_2 + 0x44) = fVar3;
      *(undefined1 *)(param_2 + 0x30) = 0;
    }
    else {
      fVar1 = (float)((double)*(float *)(param_2 + 0x54) * dVar12 +
                     (double)*(float *)(param_2 + 0x50));
      *(float *)(param_2 + 0x50) = fVar1;
      *(float *)(param_2 + 0x34) =
           (float)((double)*(float *)(param_2 + 0x3c) * dVar12 + (double)*(float *)(param_2 + 0x34))
      ;
      *(float *)(param_2 + 0x38) =
           (float)((double)*(float *)(param_2 + 0x40) * dVar12 + (double)*(float *)(param_2 + 0x38))
      ;
      if (fVar2 < fVar1) {
        *(float *)(param_2 + 0x50) = fVar2;
      }
      if ((double)*(float *)(param_2 + 0x50) < dVar11) {
        *(float *)(param_2 + 0x50) = fVar3;
      }
      *(float *)(param_2 + 0x44) = (float)(dVar10 - dVar12);
    }
    *(undefined4 *)(iVar4 + 0x1e8) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(iVar4 + 0x1f0) = *(undefined4 *)(param_2 + 0x38);
  }
  for (piVar7 = *(int **)(param_2 + 0xc); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
    piVar5 = (int *)*piVar7;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(param_1,piVar5,param_3);
    }
  }
  piVar7 = *(int **)(param_2 + 0x90);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(param_1,piVar7,param_3);
  }
  piVar7 = *(int **)(param_2 + 0xa4);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(param_1,piVar7,param_3);
  }
  dVar12 = (double)lbl_82192734;
  uVar8 = 0;
  do {
    piVar7 = (int *)0x0;
    if (uVar8 == 0) {
      piVar7 = (int *)(param_2 + 0x60);
    }
    else if (uVar8 == 1) {
      piVar7 = (int *)(param_2 + 0x70);
    }
    else if (uVar8 < 3) {
      piVar7 = (int *)(param_2 + 0x68);
    }
    else if (uVar8 == 3) {
      piVar7 = (int *)(param_2 + 0x78);
    }
    iVar4 = *piVar7;
LAB_82576830:
    iVar9 = iVar4;
    if (iVar9 != 0) {
      dataCacheBlockTouch((ulonglong)*(uint *)(iVar9 + 0x1d0));
      *(undefined1 *)(iVar9 + 0xe2) = 0;
      if (((*(int *)(iVar9 + 400) != 0) && (dVar11 < (double)*(float *)(iVar9 + 0x194))) &&
         (*(char *)(iVar9 + 0xe0) == '\0')) {
        fn_82590DB8((ulonglong)*(uint *)(iVar9 + 0x1d0),param_3,0);
      }
      if (((double)*(float *)(iVar9 + 0x1d4) != dVar12) &&
         (fVar3 = (float)((double)*(float *)(iVar9 + 0x1d4) -
                         (double)(float)(param_1 - (double)*(float *)(iVar9 + 0x1d8))),
         *(float *)(iVar9 + 0x1d4) = fVar3, (double)fVar3 <= dVar11)) break;
      goto LAB_82576828;
    }
    uVar8 = uVar8 + 1;
    if (3 < uVar8) {
      piVar7 = *(int **)(param_2 + 0x80);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))(param_1,piVar7,param_3);
      }
      piVar7 = *(int **)(param_2 + 0x84);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))(param_1,piVar7,param_3);
      }
      piVar7 = *(int **)(param_2 + 0x88);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))(param_1,piVar7,param_3);
      }
      piVar7 = *(int **)(param_2 + 0x8c);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))(param_1,piVar7,param_3);
      }
      piVar7 = *(int **)(param_2 + 0x94);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))(param_1,piVar7,param_3);
      }
      piVar7 = *(int **)(param_2 + 0x98);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))(param_1,piVar7,param_3);
      }
      piVar7 = *(int **)(param_2 + 0x9c);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))(param_1,piVar7,param_3);
      }
      piVar7 = *(int **)(param_2 + 0xa0);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))(param_1,piVar7,param_3);
      }
      piVar7 = *(int **)(param_2 + 0xa8);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))(param_1,piVar7,param_3);
      }
      for (piVar7 = *(int **)(param_2 + 0x14); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
        piVar5 = (int *)*piVar7;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))(param_1,piVar5,param_3);
        }
      }
      for (piVar7 = *(int **)(param_2 + 0x18); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
        piVar5 = (int *)*piVar7;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))(param_1,piVar5,param_3);
        }
      }
      for (piVar7 = *(int **)(param_2 + 0x1c); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
        piVar5 = (int *)*piVar7;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))(param_1,piVar5,param_3);
        }
      }
      for (piVar7 = *(int **)(param_2 + 0x20); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
        piVar5 = (int *)*piVar7;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))(param_1,piVar5,param_3);
        }
      }
      for (piVar7 = *(int **)(param_2 + 0x24); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
        piVar5 = (int *)*piVar7;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))(param_1,piVar5,param_3);
        }
      }
      if (lbl_821922D0 < (float)(param_1 - (double)*(float *)(param_2 + 0xb0))) {
        fn_82577330(param_1,param_2);
      }
      return;
    }
  } while( true );
  iVar4 = *(int *)(iVar9 + 0x1e4);
  cVar6 = fn_82575DF0(param_2,iVar9);
  if (cVar6 == '\0') {
LAB_82576828:
    *(float *)(iVar9 + 0x1d8) = (float)param_1;
    iVar4 = *(int *)(iVar9 + 0x1e4);
  }
  goto LAB_82576830;
}

