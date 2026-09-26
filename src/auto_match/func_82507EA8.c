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
extern int fn_82508160();
extern unsigned int lbl_821CC160;


void fn_82507EA8(double param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  double dVar9;
  
  fVar1 = (float)((double)*(float *)(param_2 + 0x10) - param_1);
  *(float *)(param_2 + 0x10) = fVar1;
  dVar9 = (double)lbl_821CC160;
  if ((double)fVar1 < dVar9) {
    *(float *)(param_2 + 0x10) = lbl_821CC160;
  }
  if ((*(int *)(param_2 + 0x18) != 0) &&
     ((fVar1 = (float)((double)*(float *)(param_2 + 0x20) - param_1),
      *(float *)(param_2 + 0x20) = fVar1, (double)fVar1 <= dVar9 ||
      (iVar3 = fn_82508160(param_2,*(int *)(param_2 + 0x18),1,0), iVar3 != 0)))) {
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(float *)(param_2 + 0x20) = (float)dVar9;
  }
  iVar3 = *(int *)(param_2 + 0x3c);
  while (iVar3 != *(int *)(param_2 + 0x40)) {
    fVar1 = (float)((double)*(float *)(iVar3 + 4) - param_1);
    *(float *)(iVar3 + 4) = fVar1;
    if (dVar9 < (double)fVar1) {
      iVar3 = iVar3 + 8;
    }
    else {
      puVar8 = *(undefined4 **)(param_2 + 0x40);
      puVar7 = (undefined4 *)(iVar3 + 8);
      if (puVar7 != puVar8) {
        puVar5 = (undefined4 *)(iVar3 + -8);
        do {
          puVar5[2] = *puVar7;
          puVar2 = puVar7 + 1;
          puVar7 = puVar7 + 2;
          puVar5[3] = *puVar2;
          puVar5 = puVar5 + 2;
        } while (puVar7 != puVar8);
      }
      iVar6 = *(int *)(param_2 + 0x40) + -8;
      for (iVar4 = iVar6; iVar4 != *(int *)(param_2 + 0x40); iVar4 = iVar4 + 8) {
      }
      *(int *)(param_2 + 0x40) = iVar6;
    }
  }
  puVar8 = *(undefined4 **)(param_2 + 0x2c);
  while (puVar8 != *(undefined4 **)(param_2 + 0x30)) {
    fVar1 = (float)puVar8[1];
    puVar8[1] = (float)((double)fVar1 - param_1);
    if (dVar9 < (double)(float)((double)fVar1 - param_1)) {
      puVar8 = puVar8 + 3;
    }
    else {
      fn_82508160(param_2,*puVar8,puVar8[2],1);
      puVar7 = *(undefined4 **)(param_2 + 0x30);
      puVar5 = puVar8;
      puVar2 = puVar8;
      while (puVar2 = puVar2 + 3, puVar2 != puVar7) {
        *puVar5 = *puVar2;
        puVar5[1] = puVar2[1];
        puVar5[2] = puVar2[2];
        puVar5 = puVar5 + 3;
      }
      iVar4 = *(int *)(param_2 + 0x30) + -0xc;
      for (iVar3 = iVar4; iVar3 != *(int *)(param_2 + 0x30); iVar3 = iVar3 + 0xc) {
      }
      *(int *)(param_2 + 0x30) = iVar4;
    }
  }
  return;
}

