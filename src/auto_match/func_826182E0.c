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


void fn_826182E0(double param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  int in_r0;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar1 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 0x14) != *(int *)(iVar1 + 400)) {
    for (piVar2 = *(int **)(param_2 + 0x18); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      *(undefined4 *)(*piVar2 + 400) = *(undefined4 *)(*(int *)(param_2 + 4) + 400);
    }
    iVar1 = *(int *)(param_2 + 4);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(iVar1 + 400);
  }
  if (((*(char *)(iVar1 + 0xe2) != '\0') || (*(char *)(iVar1 + 0xe0) != '\0')) &&
     (*(int *)(iVar1 + 400) != 0)) {
    bVar6 = true;
    for (piVar2 = *(int **)(param_2 + 0x18); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      iVar1 = *piVar2;
      if (*(char *)(iVar1 + 0x1a6) == '\0') {
        bVar6 = (bool)(*(int *)(iVar1 + 400) == 0 & bVar6);
      }
      *(undefined4 *)(iVar1 + 0xfc) = *(undefined4 *)(*(int *)(param_2 + 4) + 0xfc);
      *(undefined4 *)(*piVar2 + 0xe4) = *(undefined4 *)(*(int *)(param_2 + 4) + 0xe4);
      iVar1 = *piVar2;
      iVar3 = *(int *)(param_2 + 4);
      puVar4 = (undefined4 *)(in_r0 + iVar3 + 0x60 & 0xfffffff0);
      uVar7 = puVar4[1];
      uVar8 = puVar4[2];
      uVar9 = puVar4[3];
      puVar5 = (undefined4 *)(in_r0 + iVar1 + 0x60 & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar7;
      puVar5[2] = uVar8;
      puVar5[3] = uVar9;
      puVar4 = (undefined4 *)(iVar3 + 0x70U & 0xfffffff0);
      uVar7 = puVar4[1];
      uVar8 = puVar4[2];
      uVar9 = puVar4[3];
      puVar5 = (undefined4 *)(iVar1 + 0x70U & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar7;
      puVar5[2] = uVar8;
      puVar5[3] = uVar9;
      puVar4 = (undefined4 *)(iVar3 + 0x80U & 0xfffffff0);
      uVar7 = puVar4[1];
      uVar8 = puVar4[2];
      uVar9 = puVar4[3];
      puVar5 = (undefined4 *)(iVar1 + 0x80U & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar7;
      puVar5[2] = uVar8;
      puVar5[3] = uVar9;
      puVar4 = (undefined4 *)(iVar3 + 0x90U & 0xfffffff0);
      uVar7 = puVar4[1];
      uVar8 = puVar4[2];
      uVar9 = puVar4[3];
      puVar5 = (undefined4 *)(iVar1 + 0x90U & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar7;
      puVar5[2] = uVar8;
      puVar5[3] = uVar9;
      *(undefined1 *)(*piVar2 + 0xe3) = *(undefined1 *)(*(int *)(param_2 + 4) + 0xe3);
    }
    if (bVar6) {
      *(undefined1 *)(*(int *)(param_2 + 4) + 0x1a6) = 1;
    }
  }
  *(float *)(param_2 + 0x10) = (float)param_1;
  return;
}

