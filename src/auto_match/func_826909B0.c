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


void fn_826909B0(uint *param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar11;
  ulonglong uVar10;
  
  uVar10 = (ulonglong)*(ushort *)(param_2 + 3);
  if (0x20 < uVar10) {
    uVar10 = (ulonglong)(uint)param_2[4];
  }
  iVar7 = (int)uVar10;
  param_1[99] = iVar7 + param_1[99];
  if (uVar10 < 0x21) {
    iVar6 = (int)(uVar10 << 2);
    iVar4 = *(int *)(iVar6 + (int)param_1);
    if (iVar4 == 0) {
      param_2[1] = (int)param_2;
      *param_2 = (int)param_2;
    }
    else {
      *param_2 = iVar4;
      param_2[1] = *(int *)(iVar4 + 4);
      **(undefined4 **)(iVar4 + 4) = param_2;
      *(int **)(iVar4 + 4) = param_2;
    }
    *(int **)(iVar6 + (int)param_1) = param_2;
    *param_1 = 1 << (iVar7 - 1U & 0x3f) | *param_1;
    return;
  }
  if (uVar10 < 0x41) {
    param_1 = param_1 + 0x21;
    iVar6 = (int)((uVar10 - 0x20 & 0xffffffff) << 2);
    iVar4 = *(int *)(iVar6 + (int)param_1);
    if (iVar4 == 0) {
      param_2[1] = (int)param_2;
      *param_2 = (int)param_2;
    }
    else {
      *param_2 = iVar4;
      param_2[1] = *(int *)(iVar4 + 4);
      **(undefined4 **)(iVar4 + 4) = param_2;
      *(int **)(iVar4 + 4) = param_2;
    }
    *(int **)(iVar6 + (int)param_1) = param_2;
    *param_1 = 1 << (iVar7 - 0x21U & 0x3f) | *param_1;
    return;
  }
  param_1 = param_1 + 0x42;
  uVar1 = param_2[4];
  uVar11 = uVar1 >> 5;
  if (uVar11 == 0) {
    uVar11 = 0;
  }
  else if (uVar11 < 0x10000) {
    if ((uVar11 & 0x7ff0000) == 0) {
      if ((uVar11 & 0xff00) == 0) {
        uVar11 = (uint)(byte)(&lbl_8200E1B0)[uVar11 & 0xff];
      }
      else {
        uVar11 = (byte)(&lbl_8200E1B0)[uVar1 >> 0xd & 0xff] + 8;
      }
    }
    else if ((uVar11 & 0x7000000) == 0) {
      uVar11 = (byte)(&lbl_8200E1B0)[uVar1 >> 0x15 & 0xff] + 0x10;
    }
    else {
      uVar11 = (byte)(&lbl_8200E1B0)[uVar1 >> 0x1d] + 0x18;
    }
    uVar11 = (uVar1 >> ((uVar11 & 0xff) + 4 & 0x3f) & 1) + (uVar11 & 0xff) * 2;
  }
  else {
    uVar11 = 0x1f;
  }
  param_2[8] = uVar11;
  param_2[7] = 0;
  param_2[6] = 0;
  uVar8 = 1 << (uVar11 & 0x3f);
  puVar9 = param_1 + uVar11 + 1;
  if ((*param_1 & uVar8) == 0) {
    *param_1 = *param_1 | uVar8;
    *puVar9 = (uint)param_2;
  }
  else {
    uVar8 = ((uint *)*puVar9)[4];
    uVar10 = (ulonglong)(uVar1 << (-(uint)(uVar11 < 0x1f) & 0x1c - (uVar11 >> 1) & 0x3f));
    puVar9 = (uint *)*puVar9;
    while( true ) {
      if (uVar8 == uVar1) {
        puVar2 = (undefined4 *)puVar9[1];
        *puVar2 = param_2;
        puVar9[1] = (uint)param_2;
        param_2[1] = (int)puVar2;
        *param_2 = (int)puVar9;
        param_2[5] = 0;
        return;
      }
      uVar5 = uVar10 >> 0x1f;
      uVar10 = (uVar10 & 0x7fffffff) << 1;
      iVar7 = (int)uVar5 + 6;
      puVar3 = (uint *)puVar9[iVar7];
      if (puVar3 == (uint *)0x0) break;
      uVar8 = puVar3[4];
      puVar9 = puVar3;
    }
    puVar9[iVar7] = (uint)param_2;
  }
  param_2[5] = (int)puVar9;
  *param_2 = (int)param_2;
  param_2[1] = (int)param_2;
  return;
}

