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
extern unsigned int fStack_5c;
extern int fn_823116D8();
extern int fn_8239AA78();
extern int fn_8239D070();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_60;


void fn_8239AB20(int param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 in_r0;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  int *piVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uStack_60;
  float fStack_5c;
  undefined1 auStack_50 [80];
  
  iVar9 = param_1 + 0x1e8;
  for (puVar10 = *(undefined8 **)(param_1 + 0x1e8); puVar10 != *(undefined8 **)(param_1 + 0x1ec);
      puVar10 = puVar10 + 4) {
    iVar6 = fn_8239D070(param_1,puVar10,*(undefined4 *)(param_1 + 0x174));
    if (iVar6 != 0) {
      puVar1 = *(undefined8 **)(param_1 + 0x1ec);
      puVar8 = puVar10;
      puVar5 = puVar10;
      while (puVar5 = puVar5 + 4, puVar5 != puVar1) {
        *puVar8 = *puVar5;
        puVar8[1] = puVar5[1];
        puVar8[2] = puVar5[2];
        puVar8[3] = puVar5[3];
        puVar8 = puVar8 + 4;
      }
      iVar7 = *(int *)(param_1 + 0x1ec) + -0x20;
      for (iVar6 = iVar7; iVar6 != *(int *)(param_1 + 0x1ec); iVar6 = iVar6 + 0x20) {
      }
      *(int *)(param_1 + 0x1ec) = iVar7;
      puVar10 = puVar10 + -4;
    }
  }
  iVar6 = *(int *)(param_1 + 0x1e4);
  dVar12 = (double)lbl_821CC160;
  if ((iVar6 != 0) && (iVar7 = fn_8239AA78(param_1), iVar7 != 0)) {
    fStack_5c = (float)dVar12;
    uStack_60 = 1;
    puVar3 = (undefined4 *)(iVar6 + 0x30U & 0xfffffff0);
    uVar13 = puVar3[1];
    uVar14 = puVar3[2];
    uVar15 = puVar3[3];
    puVar4 = (undefined4 *)((uint)(auStack_50 + (int)in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar13;
    puVar4[2] = uVar14;
    puVar4[3] = uVar15;
    fn_823116D8(iVar9,&uStack_60);
  }
  piVar2 = *(int **)(param_1 + 0x1b8);
  for (piVar11 = *(int **)(param_1 + 0x1b4); piVar11 != piVar2; piVar11 = piVar11 + 1) {
    iVar6 = *piVar11;
    iVar7 = fn_8239AA78(param_1,iVar6);
    if (iVar7 != 0) {
      puVar3 = (undefined4 *)(iVar6 + 0x30U & 0xfffffff0);
      uVar13 = puVar3[1];
      uVar14 = puVar3[2];
      uVar15 = puVar3[3];
      fStack_5c = (float)dVar12;
      uStack_60 = 1;
      puVar4 = (undefined4 *)((uint)(auStack_50 + (int)in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar13;
      puVar4[2] = uVar14;
      puVar4[3] = uVar15;
      fn_823116D8(iVar9,&uStack_60);
    }
  }
  piVar2 = *(int **)(param_1 + 0x1c8);
  for (piVar11 = *(int **)(param_1 + 0x1c4); piVar11 != piVar2; piVar11 = piVar11 + 1) {
    iVar6 = *piVar11;
    iVar7 = fn_8239AA78(param_1,iVar6);
    if (iVar7 != 0) {
      puVar3 = (undefined4 *)(iVar6 + 0x30U & 0xfffffff0);
      uVar13 = puVar3[1];
      uVar14 = puVar3[2];
      uVar15 = puVar3[3];
      fStack_5c = (float)dVar12;
      uStack_60 = 1;
      puVar4 = (undefined4 *)((uint)(auStack_50 + (int)in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar13;
      puVar4[2] = uVar14;
      puVar4[3] = uVar15;
      fn_823116D8(iVar9,&uStack_60);
    }
  }
  piVar2 = *(int **)(param_1 + 0x1a8);
  for (piVar11 = *(int **)(param_1 + 0x1a4); piVar11 != piVar2; piVar11 = piVar11 + 1) {
    iVar6 = *piVar11;
    iVar7 = fn_8239AA78(param_1,iVar6);
    if (iVar7 != 0) {
      puVar3 = (undefined4 *)(iVar6 + 0x30U & 0xfffffff0);
      uVar13 = puVar3[1];
      uVar14 = puVar3[2];
      uVar15 = puVar3[3];
      fStack_5c = (float)dVar12;
      uStack_60 = 1;
      puVar4 = (undefined4 *)((uint)(auStack_50 + (int)in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar13;
      puVar4[2] = uVar14;
      puVar4[3] = uVar15;
      fn_823116D8(iVar9,&uStack_60);
    }
  }
  return;
}

