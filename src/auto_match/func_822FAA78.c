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
extern int fn_822ABA88();
extern unsigned int lbl_82192734;
extern float lbl_831CC9B4;


void fn_822FAA78(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r0;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float afStack_30 [6];
  
  piVar3 = *(int **)(((uint)((ulonglong)LZCOUNT(*(undefined4 *)(*(int *)(param_2 + 8) + 0x2c)) >> 3)
                     & 4) + **(int **)(*(int *)(param_2 + 4) + 8));
  uVar6 = (**(code **)(**(int **)(*(int *)(param_2 + 4) + 0x2e0) + 0x1c))();
  iVar7 = fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),uVar6);
  iVar2 = *(int *)(*(int *)(param_2 + 8) + 0x2c);
  puVar4 = (undefined4 *)(iVar7 + 0x80U & 0xfffffff0);
  uVar8 = puVar4[1];
  uVar9 = puVar4[2];
  uVar10 = puVar4[3];
  puVar5 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar8;
  puVar5[2] = uVar9;
  puVar5[3] = uVar10;
  if (iVar2 == 0) {
    afStack_30[0] = afStack_30[0] * lbl_82192734;
  }
  fVar1 = *(float *)(param_2 + 0x1c);
  puVar4 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
  uVar8 = puVar4[1];
  uVar9 = puVar4[2];
  uVar10 = puVar4[3];
  puVar5 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar8;
  puVar5[2] = uVar9;
  puVar5[3] = uVar10;
  *(float *)(param_2 + 0x1c) =
       (float)((double)afStack_30[0] * param_1 + (double)fVar1) * lbl_831CC9B4;
  return;
}

