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
extern unsigned int *auStack_40;
extern int fn_8255DDE0();
extern unsigned int lbl_82005748;
extern unsigned int lbl_82192734;
extern unsigned int lbl_82196750;
extern unsigned int lbl_821CC160;


undefined8 fn_82501AE0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint *puVar4;
  float fVar5;
  int in_r0;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_40 [64];
  
  fVar5 = lbl_821CC160;
  dVar11 = (double)lbl_821CC160;
  puVar8 = (undefined4 *)(param_1 + 0xb90U & 0xfffffff0);
  *puVar8 = in_register_000104d0;
  puVar8[1] = in_register_000104d4;
  puVar8[2] = in_register_000104d8;
  puVar8[3] = in_vr77;
  *(undefined4 *)(param_1 + 0xb60) = 0;
  *(float *)(param_1 + 0xb80) = fVar5;
  *(undefined4 *)(param_1 + 0xb70) = 1;
  *(float *)(param_1 + 0xb7c) = fVar5;
  *(undefined1 *)(param_1 + 0xb74) = 0;
  *(float *)(param_1 + 0xc98) = fVar5;
  *(undefined1 *)(param_1 + 0xb75) = 1;
  *(undefined1 *)(param_1 + 0xb76) = 0;
  *(undefined1 *)(param_1 + 0xb77) = 0;
  *(undefined4 *)(param_1 + 0xd48) = 1;
  *(undefined4 *)(param_1 + 0xc60) = 0;
  *(undefined4 *)(param_1 + 0xc64) = 0;
  *(undefined1 *)(param_1 + 0xba0) = 1;
  *(undefined1 *)(param_1 + 0xba1) = 1;
  *(undefined4 *)(param_1 + 0xba4) = 1;
  uVar3 = lbl_82005748;
  *(undefined4 *)(param_1 + 0xba8) = 0;
  *(undefined4 *)(param_1 + 0xbac) = 0;
  *(undefined4 *)(param_1 + 0xb88) = 0;
  *(undefined4 *)(param_1 + 0xb8c) = 2;
  puVar8 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar12 = puVar8[1];
  uVar13 = puVar8[2];
  uVar14 = puVar8[3];
  puVar9 = (undefined4 *)(param_1 + 0xc00U & 0xfffffff0);
  *puVar9 = *puVar8;
  puVar9[1] = uVar12;
  puVar9[2] = uVar13;
  puVar9[3] = uVar14;
  puVar8 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar12 = *puVar8;
  uVar13 = puVar8[1];
  uVar14 = puVar8[2];
  uVar15 = puVar8[3];
  *(undefined1 *)(param_1 + 0xc20) = 0;
  puVar8 = (undefined4 *)(param_1 + 0xc10U & 0xfffffff0);
  *puVar8 = uVar12;
  puVar8[1] = uVar13;
  puVar8[2] = uVar14;
  puVar8[3] = uVar15;
  *(undefined4 *)(param_1 + 0x2b0) = uVar3;
  iVar1 = *(int *)(param_1 + 0x8c0);
  iVar6 = fn_8255DDE0(param_1,auStack_40,0);
  if (*(int *)(iVar6 + 0x8c0) != 0) {
    piVar2 = *(int **)(*(int *)(iVar6 + 0x8c0) + 0x1b4);
    if (piVar2 != (int *)0x0) {
      iVar6 = (**(code **)(*piVar2 + 0x14))(piVar2,0x15);
      goto LAB_82501bd8;
    }
  }
  iVar6 = -1;
LAB_82501bd8:
  if (iVar6 != -1) {
    (**(code **)(**(int **)(iVar1 + 0x1b4) + 0xc))();
  }
  *(float *)(param_1 + 0xb84) = (float)dVar11;
  puVar7 = (uint *)(param_1 + 0x1dc);
  lVar10 = 2;
  do {
    puVar4 = puVar7 + 1;
    puVar7 = puVar7 + 1;
    *puVar7 = *puVar4 | 8;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  uVar3 = *(undefined4 *)(param_2 + 0x5bc);
  *(undefined1 *)(param_1 + 0xcb4) = 0;
  puVar9 = (undefined4 *)(param_1 + 0xc90);
  puVar8 = (undefined4 *)(param_2 + 0x5c0);
  *(undefined4 *)(param_1 + 0xcb0) = uVar3;
  lVar10 = 2;
  *(undefined4 *)(param_1 + 0xcc0) = *(undefined4 *)(param_2 + 0x5c0);
  do {
    puVar9[0x17] = puVar8[5];
    puVar9[0x18] = puVar8[1];
    puVar9[0x19] = puVar8[2];
    puVar9[0x1a] = puVar8[3];
    puVar9[0x1b] = puVar8[4];
    puVar8 = puVar8 + 6;
    uVar3 = *puVar8;
    puVar9[0xf] = 6;
    puVar9[0x1c] = uVar3;
    puVar9 = puVar9 + 0x10;
    *puVar9 = 0;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  *(float *)(param_1 + 0xc50) = (float)dVar11;
  *(undefined4 *)(param_1 + 0xd4c) = 0;
  *(float *)(param_1 + 0xd54) = (float)dVar11;
  *(undefined4 *)(param_1 + 0xd50) = 0;
  *(float *)(param_1 + 0xd58) = (float)dVar11;
  *(undefined1 *)(param_1 + 0xc30) = 0;
  puVar8 = (undefined4 *)(param_1 + 0xc40U & 0xfffffff0);
  *puVar8 = in_register_000104d0;
  puVar8[1] = in_register_000104d4;
  puVar8[2] = in_register_000104d8;
  puVar8[3] = in_vr77;
  *(undefined4 *)(param_1 + 0xd5c) = lbl_82192734;
  *(undefined4 *)(param_1 + 0xd44) = *(undefined4 *)(param_2 + 0x5f4);
  return 1;
}

