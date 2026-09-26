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
extern unsigned int *auStack_4c;
extern int fn_82559EF0();
extern int fn_825A2A88();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_50;


void fn_82573AE0(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uStack_50;
  undefined4 auStack_4c [19];
  
  piVar1 = (int *)param_2;
  iVar4 = 0;
  if (0 < piVar1[9]) {
    lVar5 = param_2 + 0x28;
    do {
      piVar6 = (int *)lVar5;
      puVar2 = (undefined4 *)((int)in_r0 + param_3 & 0xfffffff0);
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar3 = (undefined4 *)((int)in_r0 + param_4 & 0xfffffff0);
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      uVar13 = puVar3[2];
      uVar14 = puVar3[3];
      puVar3 = (undefined4 *)(*piVar6 + 0xa0U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      puVar2 = (undefined4 *)(*piVar6 + 0xb0U & 0xfffffff0);
      *puVar2 = uVar11;
      puVar2[1] = uVar12;
      puVar2[2] = uVar13;
      puVar2[3] = uVar14;
      if (*(int *)(*piVar6 + 0x1b0) != 0) {
        (**(code **)(**(int **)(*piVar6 + 0x1b0) + 8))(*(int **)(*piVar6 + 0x1b0),0x18,0);
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < piVar1[9]);
  }
  if (*piVar1 != 0) {
    fn_82559EF0(&uStack_50,auStack_4c);
    lVar5 = 0;
    if (0 < *piVar1) {
      dVar7 = (double)lbl_821CC160;
      do {
        param_2 = param_2 + 4;
        iVar4 = fn_825A2A88(param_1,*(undefined4 *)param_2);
        if (iVar4 != 0) {
          puVar2 = (undefined4 *)((int)in_r0 + param_3 & 0xfffffff0);
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          puVar3 = (undefined4 *)(iVar4 + 0x30U & 0xfffffff0);
          *puVar3 = *puVar2;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
          *(undefined4 *)(iVar4 + 0x94) = uStack_50;
          *(undefined4 *)(iVar4 + 0x98) = auStack_4c[0];
          *(float *)(iVar4 + 0x9c) = (float)dVar7;
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *piVar1);
    }
  }
  return;
}

