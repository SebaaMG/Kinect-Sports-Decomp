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
extern int fn_82AEA6F8();


void fn_82AEBAF8(int *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar13 = *(uint *)(param_2 + 0x14);
  if ((uVar13 >> 0x1a & 1) != 0) {
    return;
  }
  uVar1 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
  *(uint *)(param_2 + 0x14) = uVar13 | 0x4000000;
  if ((uVar1 == 0) || (bVar11 = true, 0x66 < uVar1)) {
    bVar11 = false;
  }
  if (!bVar11) goto LAB_82aebed8;
  uVar13 = uVar13 >> 0xd & 0x1fff;
  if ((uVar1 == 0) || (bVar11 = true, 0x1f < uVar1)) {
    bVar11 = false;
  }
  if (bVar11) {
    if ((uVar1 == 0) || ((0xb < uVar1 && ((uVar1 < 0x19 || (0x1c < uVar1)))))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    bVar6 = true;
    if (!bVar5) goto LAB_82aebbac;
  }
  else {
LAB_82aebbac:
    bVar6 = false;
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar8 = 0;
  if (bVar6) {
    if ((*(uint *)(param_2 + 8) >> 0x19 & 1) == 0) {
      uVar8 = fn_82AEA6F8(param_2);
    }
    else {
      uVar8 = 0xffffffff;
    }
  }
  uVar14 = 0;
  for (puVar2 = *(uint **)(param_2 + 4); puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[2]) {
    uVar9 = puVar2[4];
    if ((((uVar9 != 0) && ((*puVar2 & 0xe000000) != 0)) &&
        (*(int *)(uVar9 + 0x1c) == *(int *)(param_2 + 0x1c))) &&
       (((*(byte *)(uVar9 + 0x10) & 1) != 0 &&
        (uVar9 = *(uint *)(uVar9 + 0x14) & 0x1fff, uVar14 < uVar9)))) {
      uVar14 = uVar9;
    }
  }
  uVar9 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
  if ((uVar9 < 0x5b) || (bVar5 = true, 0x5e < uVar9)) {
    bVar5 = false;
  }
  if ((bVar5) || (bVar5 = false, uVar9 == 0x7b)) {
    bVar5 = true;
  }
  if (bVar5) {
LAB_82aebcb0:
    bVar7 = true;
  }
  else {
    if ((uVar9 < 0x60) || (bVar5 = true, 0x66 < uVar9)) {
      bVar5 = false;
    }
    bVar7 = false;
    if (bVar5) goto LAB_82aebcb0;
  }
  for (iVar3 = *param_1; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20)) {
    uVar9 = *(uint *)(iVar3 + 8);
    uVar10 = uVar9 >> 7 & 0x7f;
    if ((uVar10 == 0) || (bVar5 = true, 0x66 < uVar10)) {
      bVar5 = false;
    }
    if (bVar5) {
      if (bVar7) {
        if ((uVar10 < 0x5b) || (bVar5 = true, 0x5e < uVar10)) {
          bVar5 = false;
        }
        if ((bVar5) || (bVar5 = false, uVar10 == 0x7b)) {
          bVar5 = true;
        }
        if (!bVar5) {
          if ((uVar10 < 0x60) || (bVar5 = true, 0x66 < uVar10)) {
            bVar5 = false;
          }
          if (!bVar5) goto LAB_82aebec8;
        }
      }
      uVar12 = *(uint *)(iVar3 + 0x14) >> 0xd & 0x1fff;
      if (uVar12 < uVar13) break;
      if (uVar12 <= uVar13) {
        if (bVar11) {
          if ((uVar10 == 0) || (bVar5 = true, 0x1f < uVar10)) {
            bVar5 = false;
          }
          if (bVar5) {
            if ((uVar10 == 0) || ((0xb < uVar10 && ((uVar10 < 0x19 || (0x1c < uVar10)))))) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              if (!bVar6) break;
              if ((uVar9 >> 0x19 & 1) == 0) {
                uVar9 = fn_82AEA6F8(iVar3);
              }
              else {
                uVar9 = 0xffffffff;
              }
              if (uVar9 < uVar8) break;
              if (uVar8 < uVar9) goto LAB_82aebec8;
            }
          }
          uVar9 = *(uint *)(iVar3 + 8);
          uVar10 = uVar9 >> 7 & 0x7f;
          if ((uVar10 < 0x20) || (bVar5 = true, 0x52 < uVar10)) {
            bVar5 = false;
          }
          if (bVar5) break;
        }
        if ((int)((uVar1 >> 0x15 & 7) - 1) < (int)((*(uint *)(iVar3 + 0x10) >> 0x15 & 7) - 1))
        break;
        uVar12 = 0;
        for (puVar2 = *(uint **)(iVar3 + 4); puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[2]) {
          uVar4 = puVar2[4];
          if ((((uVar4 != 0) && ((*puVar2 & 0xe000000) != 0)) &&
              (*(int *)(uVar4 + 0x1c) == *(int *)(iVar3 + 0x1c))) &&
             (((*(byte *)(uVar4 + 0x10) & 1) != 0 &&
              (uVar4 = *(uint *)(uVar4 + 0x14) & 0x1fff, uVar12 < uVar4)))) {
            uVar12 = uVar4;
          }
        }
        if ((uVar12 < uVar14) ||
           ((((*(uint *)(param_2 + 8) & 0x3f80) == 0x3000 &&
             ((*(uint *)(param_2 + 8) & 0x380000) != 0)) &&
            ((uVar10 == 0x60 &&
             (((uVar9 & 0x380000) != 0 &&
              (*(uint *)(*(int *)(param_2 + 0x2c) + 0xc) < *(uint *)(*(int *)(iVar3 + 0x2c) + 0xc)))
             )))))) break;
      }
    }
LAB_82aebec8:
    param_1 = (int *)(iVar3 + 0x20);
  }
LAB_82aebed8:
  *(int *)(param_2 + 0x20) = *param_1;
  *param_1 = param_2;
  return;
}

