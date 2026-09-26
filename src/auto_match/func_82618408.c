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
extern int fn_82591730();


undefined8 fn_82618408(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 in_r0;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  for (iVar1 = *(int *)(param_1 + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    (**(code **)(**(int **)(iVar1 + 4) + 8))(*(int **)(iVar1 + 4),param_2,param_3);
  }
  if ((int)param_2 == 5) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(*(int *)(param_1 + 4) + 400) = 1;
  }
  else {
    if ((int)param_2 != 0x18) {
      uVar7 = fn_82591730(param_1,param_2,param_3);
      return uVar7;
    }
    for (piVar2 = *(int **)(param_1 + 0x18); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      iVar1 = *(int *)(param_1 + 4);
      iVar3 = *piVar2;
      iVar5 = (int)in_r0;
      puVar4 = (undefined4 *)(iVar5 + iVar1 + 0x10 & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (undefined4 *)(iVar5 + iVar3 + 0x10 & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (undefined4 *)(iVar1 + 0x20U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (undefined4 *)(iVar3 + 0x20U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (undefined4 *)(iVar1 + 0x30U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (undefined4 *)(iVar3 + 0x30U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (undefined4 *)(iVar1 + 0x40U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (undefined4 *)(iVar3 + 0x40U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (undefined4 *)(iVar1 + 0x50U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (undefined4 *)(iVar3 + 0x50U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (undefined4 *)(iVar5 + iVar1 + 0x60 & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (undefined4 *)(iVar5 + iVar3 + 0x60 & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (undefined4 *)(iVar1 + 0x70U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (undefined4 *)(iVar3 + 0x70U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (undefined4 *)(iVar1 + 0x80U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (undefined4 *)(iVar3 + 0x80U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (undefined4 *)(iVar1 + 0x90U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (undefined4 *)(iVar3 + 0x90U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (undefined4 *)(iVar1 + 0xa0U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (undefined4 *)(iVar3 + 0xa0U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (undefined4 *)(iVar1 + 0xb0U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (undefined4 *)(iVar3 + 0xb0U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (undefined4 *)(iVar1 + 0xc0U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (undefined4 *)(iVar3 + 0xc0U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (undefined4 *)(iVar1 + 0xd0U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (undefined4 *)(iVar3 + 0xd0U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      *(undefined1 *)(iVar3 + 0xe0) = *(undefined1 *)(iVar1 + 0xe0);
      *(undefined1 *)(iVar3 + 0xe1) = *(undefined1 *)(iVar1 + 0xe1);
      *(undefined1 *)(iVar3 + 0xe2) = *(undefined1 *)(iVar1 + 0xe2);
      *(undefined1 *)(iVar3 + 0xe3) = *(undefined1 *)(iVar1 + 0xe3);
      *(undefined4 *)(iVar3 + 0xe4) = *(undefined4 *)(iVar1 + 0xe4);
      *(undefined4 *)(iVar3 + 0xe8) = *(undefined4 *)(iVar1 + 0xe8);
      *(undefined4 *)(iVar3 + 0xec) = *(undefined4 *)(iVar1 + 0xec);
      *(undefined4 *)(iVar3 + 0xf0) = *(undefined4 *)(iVar1 + 0xf0);
      *(undefined4 *)(iVar3 + 0xf4) = *(undefined4 *)(iVar1 + 0xf4);
      *(undefined4 *)(iVar3 + 0xf8) = *(undefined4 *)(iVar1 + 0xf8);
      *(undefined4 *)(iVar3 + 0xfc) = *(undefined4 *)(iVar1 + 0xfc);
      *(undefined4 *)(iVar3 + 0x100) = *(undefined4 *)(iVar1 + 0x100);
    }
  }
  return 0;
}

