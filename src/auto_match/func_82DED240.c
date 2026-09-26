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
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D962A8();
extern int fn_82D9EB80();
extern int fn_82DA1EA8();
extern int fn_82DA1EC8();


int fn_82DED240(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  piVar1 = *(int **)(param_1 + 0xc);
  iVar4 = (**(code **)(*piVar1 + 0x20))(piVar1);
  if (iVar4 < 8) {
    if (iVar4 == 7) {
      iVar4 = fn_82CE5410();
      iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0xc0);
      *(undefined2 *)(iVar4 + 4) = 0xc0;
      iVar4 = fn_82DA1EC8();
      puVar2 = (undefined4 *)((int)piVar1 + in_r0 + 0x20 & 0xfffffff0);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (undefined4 *)(in_r0 + iVar4 + 0x20 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      puVar2 = (undefined4 *)((uint)(piVar1 + 0xc) & 0xfffffff0);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (undefined4 *)(iVar4 + 0x30U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      puVar2 = (undefined4 *)((uint)(piVar1 + 0x10) & 0xfffffff0);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (undefined4 *)(iVar4 + 0x40U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      piVar6 = (int *)(iVar4 + 0x7c);
      puVar2 = (undefined4 *)((int)piVar1 + in_r0 + 0x60 & 0xfffffff0);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      lVar8 = 5;
      puVar3 = (undefined4 *)(in_r0 + iVar4 + 0x50 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      puVar2 = (undefined4 *)((uint)(piVar1 + 0x1c) & 0xfffffff0);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (undefined4 *)(iVar4 + 0x60U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      piVar7 = piVar1 + 0x3e;
      puVar2 = (undefined4 *)((uint)(piVar1 + 0x20) & 0xfffffff0);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (undefined4 *)(iVar4 + 0x70U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      do {
        piVar7 = piVar7 + 1;
        piVar6 = piVar6 + 1;
        *piVar6 = *piVar7;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      piVar7 = piVar1 + 0x48;
      piVar6 = (int *)(iVar4 + 0xa4);
      lVar8 = 5;
      do {
        piVar7 = piVar7 + 1;
        piVar6 = piVar6 + 1;
        *piVar6 = *piVar7;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      piVar7 = piVar1 + 0x43;
      piVar6 = (int *)(iVar4 + 0x90);
      lVar8 = 5;
      do {
        piVar7 = piVar7 + 1;
        piVar6 = piVar6 + 1;
        *piVar6 = *piVar7;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      fn_82DA1EA8(iVar4,*(char *)((int)piVar1 + 0x116) != '\0');
    }
    else {
      if (iVar4 != 2) goto LAB_82ded474;
      iVar4 = fn_82CE5410();
      iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0xa0);
      *(undefined2 *)(iVar4 + 4) = 0xa0;
      iVar4 = fn_82D9EB80();
      puVar2 = (undefined4 *)((int)piVar1 + in_r0 + 0x20 & 0xfffffff0);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (undefined4 *)(in_r0 + iVar4 + 0x20 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      puVar2 = (undefined4 *)((uint)(piVar1 + 0xc) & 0xfffffff0);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (undefined4 *)(iVar4 + 0x30U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      puVar2 = (undefined4 *)((uint)(piVar1 + 0x10) & 0xfffffff0);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (undefined4 *)(iVar4 + 0x40U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      puVar2 = (undefined4 *)((int)piVar1 + in_r0 + 0x60 & 0xfffffff0);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (undefined4 *)(in_r0 + iVar4 + 0x50 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      puVar2 = (undefined4 *)((uint)(piVar1 + 0x1c) & 0xfffffff0);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (undefined4 *)(iVar4 + 0x60U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      puVar2 = (undefined4 *)((uint)(piVar1 + 0x20) & 0xfffffff0);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (undefined4 *)(iVar4 + 0x70U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      *(int *)(iVar4 + 0x80) = piVar1[0x30];
      *(int *)(iVar4 + 0x84) = piVar1[0x31];
      *(int *)(iVar4 + 0x88) = piVar1[0x32];
      *(int *)(iVar4 + 0x8c) = piVar1[0x33];
      *(undefined2 *)(iVar4 + 0x90) = *(undefined2 *)(piVar1 + 0x34);
      *(undefined2 *)(iVar4 + 0x92) = *(undefined2 *)((int)piVar1 + 0xd2);
    }
    iVar5 = fn_82CE5410();
    iVar5 = (**(code **)(**(int **)(iVar5 + 0x10) + 4))(*(int **)(iVar5 + 0x10),0x38);
    *(undefined2 *)(iVar5 + 4) = 0x38;
    iVar5 = fn_82D962A8(iVar5,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                              iVar4,*(undefined1 *)(param_1 + 0x1c));
    fn_82CE4118(iVar4);
  }
  else {
    if ((0x11 < iVar4) && (iVar4 < 0x14)) {
      fn_82CE4040(param_1);
      return param_1;
    }
LAB_82ded474:
    iVar5 = 0;
  }
  return iVar5;
}

