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
extern int fn_82A29A38();


void fn_82AB0AC8(uint param_1,int *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  
  iVar2 = *(int *)(param_3 + 0x10);
  if (0xffff01ff < param_1) {
    fn_82A29A38();
  }
  puVar3 = (uint *)*param_2;
  if ((*(int *)(iVar2 + 0x1b0) != 0) && ((*puVar3 & 0x40000000) != 0)) {
    if (0x1b < *(uint *)(iVar2 + 0x1a8)) {
      fn_82A29A38();
    }
    *(undefined4 *)((*(int *)(iVar2 + 0x1a8) + 0x19) * 8 + iVar2) = *(undefined4 *)(iVar2 + 0x1b0);
    *(uint **)(*(int *)(iVar2 + 0x1a8) * 8 + iVar2 + 0xcc) = puVar3;
    *(int *)(iVar2 + 0x1a8) = *(int *)(iVar2 + 0x1a8) + 1;
  }
  *(uint **)(iVar2 + 0x1b0) = puVar3;
  sVar1 = (short)*puVar3;
  puVar12 = puVar3 + 1;
  uVar11 = *puVar12;
  if ((uVar11 & 0x80000000) == 0) goto LAB_82ab0d98;
  puVar12 = puVar3 + 2;
  uVar13 = ((ulonglong)(uVar11 >> 0x14) & 0x700 | (ulonglong)uVar11 & 0x1800) >> 8;
  uVar4 = uVar11 & 0x7ff;
  bVar8 = false;
  bVar5 = false;
  bVar7 = false;
  bVar6 = false;
  if (param_1 < 0xffff0104) {
    bVar9 = false;
    switch(sVar1) {
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x48:
    case 0x4a:
    case 0x4c:
    case 0x4d:
    case 0x53:
      bVar8 = true;
    case 0x54:
    case 0x55:
    case 0x56:
      bVar9 = true;
    case 0x40:
    case 0x41:
    case 0x47:
    case 0x49:
      bVar7 = bVar9;
      bVar5 = bVar8;
      bVar6 = true;
      break;
    case 0x45:
    case 0x46:
    case 0x52:
      bVar8 = true;
LAB_82ab0bf0:
      bVar5 = bVar8;
      bVar7 = true;
      break;
    default:
      if (uVar13 == 3) goto LAB_82ab0bf0;
    }
    if (7 < uVar4) {
      fn_82A29A38();
    }
    if (uVar13 == 3) {
      if (bVar5) {
        *(uint *)(param_3 + 0xc) = 1 << (uVar11 & 0x3f) | *(uint *)(param_3 + 0xc);
        if (0x1f < uVar4) {
          fn_82A29A38();
        }
        uVar10 = uVar4 + 1;
        if (uVar4 + 1 < *(uint *)(param_3 + 8)) {
          uVar10 = *(uint *)(param_3 + 8);
        }
        *(uint *)(param_3 + 8) = uVar10;
      }
      if (bVar6) {
        *(uint *)(iVar2 + 0xc4) = 1 << (uVar11 & 0x3f) | *(uint *)(iVar2 + 0xc4);
        uVar11 = uVar4 + 1;
        if (uVar4 + 1 < *(uint *)(param_3 + 4)) {
          uVar11 = *(uint *)(param_3 + 4);
        }
        *(uint *)(param_3 + 4) = uVar11;
      }
      if (bVar7) {
        *(uint *)((uVar4 + 0x29) * 4 + iVar2) = uVar4 + 6;
      }
    }
  }
  else {
    if (param_1 != 0xffff0104) {
      fn_82A29A38();
    }
    if (sVar1 == 0x41) {
      if (uVar13 == 3) {
        uVar11 = uVar4 + 1;
        if (uVar4 + 1 < *(uint *)(param_3 + 4)) {
          uVar11 = *(uint *)(param_3 + 4);
        }
        *(uint *)(param_3 + 4) = uVar11;
      }
    }
    else if (sVar1 == 0x42) {
      *(uint *)(param_3 + 0xc) = 1 << (uVar11 & 0x3f) | *(uint *)(param_3 + 0xc);
      if (0x1f < uVar4) {
        fn_82A29A38();
      }
      uVar11 = uVar4 + 1;
      if (uVar4 + 1 < *(uint *)(param_3 + 8)) {
        uVar11 = *(uint *)(param_3 + 8);
      }
      *(uint *)(param_3 + 8) = uVar11;
    }
  }
  uVar11 = *puVar12;
  while ((uVar11 & 0x80000000) != 0) {
    uVar4 = uVar11 & 0x7ff;
    uVar13 = ((ulonglong)(uVar11 >> 0x14) & 0x700 | (ulonglong)uVar11 & 0x1800) >> 8;
    if (uVar13 == 3) {
      if (*(int *)((uVar4 + 0x29) * 4 + iVar2) == 0) {
        if (7 < uVar4) {
          fn_82A29A38();
        }
        uVar10 = uVar4 + 1;
        if (uVar4 + 1 < *(uint *)(param_3 + 4)) {
          uVar10 = *(uint *)(param_3 + 4);
        }
        *(uint *)(param_3 + 4) = uVar10;
        *(uint *)(iVar2 + 0xc4) = 1 << (uVar11 & 0x3f) | *(uint *)(iVar2 + 0xc4);
      }
    }
    else if (uVar13 == 1) {
      if (0xf < uVar4) {
        fn_82A29A38();
      }
      *(undefined4 *)((uVar4 + 4) * 8 + iVar2) = 1;
    }
    puVar12 = puVar12 + 1;
    uVar11 = *puVar12;
  }
LAB_82ab0d98:
  *param_2 = (int)puVar12;
  return;
}

