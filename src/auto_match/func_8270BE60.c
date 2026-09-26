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
extern unsigned int lbl_8200E1B0;


void fn_8270BE60(uint *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar12;
  ulonglong uVar11;
  
  uVar2 = *param_1;
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffc;
  uVar12 = (*(uint *)(param_2 + 0x18) >> (uVar2 & 0x3f)) - 1;
  uVar2 = uVar12 >> 2 & 0x3ffffffc;
  *(uint *)(uVar2 + param_2 + 0x20) =
       *(uint *)(uVar2 + param_2 + 0x20) & ~(3 << (uVar12 * 2 & 0x1e));
  piVar3 = *(int **)(param_2 + 0x1c);
  uVar2 = *(uint *)(param_2 + 0x18) >> (*param_1 & 0x3f);
  iVar7 = uVar2 << (*param_1 & 0x3f);
  if (uVar2 < 0x21) {
    *(short *)((int)piVar3 + iVar7 + -2) = (short)uVar2;
    *(short *)(piVar3 + 3) = (short)uVar2;
  }
  else {
    *(undefined2 *)((int)piVar3 + iVar7 + -2) = 0x21;
    *(undefined2 *)(piVar3 + 3) = 0x21;
    *(uint *)((int)piVar3 + iVar7 + -8) = uVar2;
    piVar3[4] = uVar2;
  }
  piVar3[2] = param_2;
  puVar10 = param_1 + 2;
  uVar11 = (ulonglong)*(ushort *)(piVar3 + 3);
  if (0x20 < uVar11) {
    uVar11 = (ulonglong)(uint)piVar3[4];
  }
  iVar7 = (int)uVar11;
  param_1[0x65] = iVar7 + param_1[0x65];
  if (uVar11 < 0x21) {
    iVar8 = (int)(uVar11 << 2);
    iVar5 = *(int *)(iVar8 + (int)puVar10);
    if (iVar5 == 0) {
      piVar3[1] = (int)piVar3;
      *piVar3 = (int)piVar3;
    }
    else {
      *piVar3 = iVar5;
      piVar3[1] = *(int *)(iVar5 + 4);
      **(undefined4 **)(iVar5 + 4) = piVar3;
      *(int **)(iVar5 + 4) = piVar3;
    }
    *(int **)(iVar8 + (int)puVar10) = piVar3;
    *puVar10 = 1 << (iVar7 - 1U & 0x3f) | *puVar10;
    return;
  }
  if (uVar11 < 0x41) {
    param_1 = param_1 + 0x23;
    iVar8 = (int)((uVar11 - 0x20 & 0xffffffff) << 2);
    iVar5 = *(int *)(iVar8 + (int)param_1);
    if (iVar5 == 0) {
      piVar3[1] = (int)piVar3;
      *piVar3 = (int)piVar3;
    }
    else {
      *piVar3 = iVar5;
      piVar3[1] = *(int *)(iVar5 + 4);
      **(undefined4 **)(iVar5 + 4) = piVar3;
      *(int **)(iVar5 + 4) = piVar3;
    }
    *(int **)(iVar8 + (int)param_1) = piVar3;
    *param_1 = 1 << (iVar7 - 0x21U & 0x3f) | *param_1;
    return;
  }
  param_1 = param_1 + 0x44;
  uVar2 = piVar3[4];
  uVar12 = uVar2 >> 5;
  if (uVar12 == 0) {
    uVar12 = 0;
  }
  else if (uVar12 < 0x10000) {
    if ((uVar12 & 0x7ff0000) == 0) {
      if ((uVar12 & 0xff00) == 0) {
        uVar12 = (uint)(byte)(&lbl_8200E1B0)[uVar12 & 0xff];
      }
      else {
        uVar12 = (byte)(&lbl_8200E1B0)[uVar2 >> 0xd & 0xff] + 8;
      }
    }
    else if ((uVar12 & 0x7000000) == 0) {
      uVar12 = (byte)(&lbl_8200E1B0)[uVar2 >> 0x15 & 0xff] + 0x10;
    }
    else {
      uVar12 = (byte)(&lbl_8200E1B0)[uVar2 >> 0x1d] + 0x18;
    }
    uVar12 = (uVar2 >> ((uVar12 & 0xff) + 4 & 0x3f) & 1) + (uVar12 & 0xff) * 2;
  }
  else {
    uVar12 = 0x1f;
  }
  piVar3[8] = uVar12;
  piVar3[7] = 0;
  piVar3[6] = 0;
  uVar9 = 1 << (uVar12 & 0x3f);
  puVar10 = param_1 + uVar12 + 1;
  if ((*param_1 & uVar9) == 0) {
    *param_1 = *param_1 | uVar9;
    *puVar10 = (uint)piVar3;
  }
  else {
    uVar9 = ((uint *)*puVar10)[4];
    uVar11 = (ulonglong)(uVar2 << (-(uint)(uVar12 < 0x1f) & 0x1c - (uVar12 >> 1) & 0x3f));
    puVar10 = (uint *)*puVar10;
    while( true ) {
      if (uVar9 == uVar2) {
        puVar1 = (undefined4 *)puVar10[1];
        *puVar1 = piVar3;
        puVar10[1] = (uint)piVar3;
        piVar3[1] = (int)puVar1;
        *piVar3 = (int)puVar10;
        piVar3[5] = 0;
        return;
      }
      uVar6 = uVar11 >> 0x1f;
      uVar11 = (uVar11 & 0x7fffffff) << 1;
      iVar7 = (int)uVar6 + 6;
      puVar4 = (uint *)puVar10[iVar7];
      if (puVar4 == (uint *)0x0) break;
      uVar9 = puVar4[4];
      puVar10 = puVar4;
    }
    puVar10[iVar7] = (uint)piVar3;
  }
  piVar3[5] = (int)puVar10;
  *piVar3 = (int)piVar3;
  piVar3[1] = (int)piVar3;
  return;
}

