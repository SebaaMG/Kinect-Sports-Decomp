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
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8252A940(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  uint *puVar6;
  undefined8 *puVar7;
  double dVar8;
  
  puVar6 = (uint *)(param_1 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
  uVar2 = lbl_821CA460;
  pfVar5 = (float *)(param_1 + 0x210);
  puVar7 = (undefined8 *)(param_1 + 0x1f0);
  dVar8 = (double)lbl_821CC160;
  lVar4 = 2;
  do {
    *puVar7 = CONCAT44(uVar2,uVar2);
    puVar7[1] = CONCAT44(uVar2,uVar2);
    *pfVar5 = (float)dVar8;
    if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x8c0) + 0x1c))();
    }
    if (iVar3 != 0) {
      if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x8c0) + 0x1c))();
      }
      if ((*(uint *)(iVar3 + 8) & 2) != 0) {
        *puVar6 = *puVar6 | 0x80;
      }
    }
    if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x8c0) + 0x1c))();
    }
    if (iVar3 != 0) {
      if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x8c0) + 0x1c))();
      }
      if ((*(uint *)(iVar3 + 8) & 4) != 0) {
        *puVar6 = *puVar6 | 0x400000;
      }
    }
    if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x8c0) + 0x1c))();
    }
    if (iVar3 == 0) {
LAB_8252aae8:
      *puVar6 = *puVar6 | 0x80000;
    }
    else {
      if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x8c0) + 0x1c))();
      }
      piVar1 = *(int **)(*(int *)(iVar3 + 0x10) + 0x34);
      if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) goto LAB_8252aae8;
    }
    if ((*(int *)(param_1 + 0x8c0) != 0) && (0 < *(int *)(*(int *)(param_1 + 0x8c0) + 0x9c))) {
      *puVar6 = *puVar6 | 0x20000;
    }
    lVar4 = lVar4 + -1;
    puVar7 = puVar7 + 2;
    pfVar5 = pfVar5 + 1;
    puVar6 = puVar6 + 1;
    if (lVar4 == 0) {
      return;
    }
  } while( true );
}

