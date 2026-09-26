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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern int fn_8275FD10();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005718;


/* WARNING: Removing unreachable block (ram,0x8276073c) */

int * fn_82760648(int *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  
  *param_1 = param_2;
  iVar10 = *(int *)(param_2 + 0x28);
  param_1[1] = iVar10;
  param_1[3] = 0;
  param_1[2] = -1;
  piVar9 = param_1 + 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  if (iVar10 == 0) {
    *(undefined1 *)(param_1 + 0x1c) = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    param_1[0xe] = 0;
    iVar10 = lbl_82002AE0;
    param_1[0xd] = 0;
    param_1[0x1b] = iVar10;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    return param_1;
  }
  if (param_1[4] != 0) {
    param_1[3] = param_1[3] + 1;
  }
  param_1[4] = 0;
  bVar3 = *(byte *)(*piVar9 + param_1[3]);
  param_1[3] = param_1[3] + 1;
  *(byte *)(param_1 + 0x1c) = bVar3;
  iVar10 = lbl_82002AE0;
  if ((*(byte *)(param_2 + 0x24) & 2) != 0) {
    *(byte *)(param_1 + 0x1c) = bVar3 & 0x7f | 0x80;
    iVar10 = lbl_82005718;
  }
  param_1[0x1b] = iVar10;
  if (param_1[4] != 0) {
    param_1[3] = param_1[3] + 1;
  }
  param_1[4] = 0;
  param_1[3] = param_1[3] + (*(byte *)(param_1 + 0x1c) >> 3 & 3) + 1;
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    param_1[0xf] = 0;
  }
  else {
    param_1[4] = 0;
    puVar5 = (undefined1 *)(*piVar9 + param_1[3]);
    uVar1 = puVar5[1];
    uVar2 = *puVar5;
    param_1[3] = param_1[3] + 2;
    param_1[0xf] = (uint)CONCAT11(uVar1,uVar2);
  }
  if ((*(byte *)(param_1 + 0x1c) & 2) == 0) {
    param_1[0x10] = 0;
  }
  else {
    if (param_1[4] != 0) {
      param_1[3] = param_1[3] + 1;
    }
    param_1[4] = 0;
    puVar5 = (undefined1 *)(*piVar9 + param_1[3]);
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    param_1[3] = param_1[3] + 2;
    param_1[0x10] = (uint)CONCAT11(uVar2,uVar1);
  }
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  uVar8 = param_1[4];
  if (uVar8 < 8) {
    if (uVar8 == 1) {
      bVar3 = *(byte *)(param_1[3] + *piVar9);
      param_1[4] = 5;
      uVar8 = bVar3 >> 3 & 0xf;
    }
    else if (uVar8 == 2) {
      bVar3 = *(byte *)(param_1[3] + *piVar9);
      param_1[4] = 6;
      uVar8 = bVar3 >> 2 & 0xf;
    }
    else if (uVar8 == 3) {
      bVar3 = *(byte *)(param_1[3] + *piVar9);
      param_1[4] = 7;
      uVar8 = bVar3 >> 1 & 0xf;
    }
    else if (uVar8 == 4) {
      bVar3 = *(byte *)(*piVar9 + param_1[3]);
      param_1[4] = 0;
      uVar8 = bVar3 & 0xf;
      param_1[3] = param_1[3] + 1;
    }
    else {
      if (uVar8 == 5) {
        iVar10 = param_1[3] + 1;
        pbVar7 = (byte *)(*piVar9 + param_1[3]);
        bVar3 = *pbVar7;
        uVar8 = (uint)(pbVar7[1] >> 7);
        param_1[4] = 1;
        uVar6 = (bVar3 & 7) << 1;
      }
      else if (uVar8 == 6) {
        iVar10 = param_1[3] + 1;
        pbVar7 = (byte *)(*piVar9 + param_1[3]);
        bVar3 = *pbVar7;
        uVar8 = (uint)(pbVar7[1] >> 6);
        param_1[4] = 2;
        uVar6 = (bVar3 & 3) << 2;
      }
      else {
        if (uVar8 == 0) {
          bVar3 = *(byte *)(param_1[3] + *piVar9);
          param_1[4] = 4;
          uVar8 = (uint)(bVar3 >> 4);
          goto LAB_82760930;
        }
        iVar10 = param_1[3] + 1;
        pbVar7 = (byte *)(*piVar9 + param_1[3]);
        bVar3 = *pbVar7;
        uVar8 = (uint)(pbVar7[1] >> 5);
        param_1[4] = 3;
        uVar6 = (bVar3 & 1) << 3;
      }
      param_1[3] = iVar10;
      uVar8 = uVar8 | uVar6;
    }
  }
  else {
    uVar8 = 0;
  }
LAB_82760930:
  param_1[0x11] = uVar8;
  uVar8 = param_1[4];
  if (7 < uVar8) {
    uVar8 = 0;
    goto LAB_82760a6c;
  }
  if (uVar8 == 1) {
    bVar3 = *(byte *)(param_1[3] + *piVar9);
    param_1[4] = 5;
    uVar8 = bVar3 >> 3 & 0xf;
    goto LAB_82760a6c;
  }
  if (uVar8 == 2) {
    bVar3 = *(byte *)(param_1[3] + *piVar9);
    param_1[4] = 6;
    uVar8 = bVar3 >> 2 & 0xf;
    goto LAB_82760a6c;
  }
  if (uVar8 == 3) {
    bVar3 = *(byte *)(param_1[3] + *piVar9);
    param_1[4] = 7;
    uVar8 = bVar3 >> 1 & 0xf;
    goto LAB_82760a6c;
  }
  if (uVar8 == 4) {
    bVar3 = *(byte *)(param_1[3] + *piVar9);
    param_1[4] = 0;
    uVar8 = bVar3 & 0xf;
    param_1[3] = param_1[3] + 1;
    goto LAB_82760a6c;
  }
  if (uVar8 == 5) {
    iVar10 = param_1[3];
    bVar3 = *(byte *)(iVar10 + *piVar9);
    bVar4 = ((byte *)(iVar10 + *piVar9))[1] >> 7;
    param_1[4] = 1;
    uVar8 = (bVar3 & 7) << 1;
LAB_82760a08:
    param_1[3] = iVar10 + 1;
  }
  else {
    if (uVar8 == 6) {
      iVar10 = param_1[3];
      bVar3 = *(byte *)(iVar10 + *piVar9);
      bVar4 = ((byte *)(iVar10 + *piVar9))[1] >> 6;
      param_1[4] = 2;
      uVar8 = (bVar3 & 3) << 2;
      goto LAB_82760a08;
    }
    if (uVar8 == 0) {
      bVar3 = *(byte *)(param_1[3] + *piVar9);
      param_1[4] = 4;
      uVar8 = (uint)(bVar3 >> 4);
      goto LAB_82760a6c;
    }
    pbVar7 = (byte *)(param_1[3] + *piVar9);
    bVar3 = *pbVar7;
    bVar4 = pbVar7[1] >> 5;
    param_1[4] = 3;
    uVar8 = (bVar3 & 1) << 3;
    param_1[3] = param_1[3] + 1;
  }
  uVar8 = bVar4 | uVar8;
LAB_82760a6c:
  param_1[0x12] = uVar8;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  fn_8275FD10(param_1);
  return param_1;
}

