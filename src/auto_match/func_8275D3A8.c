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
extern int fn_826E7468();


/* WARNING: Removing unreachable block (ram,0x8275d938) */
/* WARNING: Removing unreachable block (ram,0x8275d8f4) */
/* WARNING: Removing unreachable block (ram,0x8275d9b4) */

void fn_8275D3A8(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar8;
  undefined1 *puVar5;
  byte *pbVar6;
  uint uVar7;
  undefined1 uVar9;
  byte bVar10;
  int iVar11;
  int *piVar12;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar7 = iVar2 + 1;
  bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 4));
  *(uint *)(param_1 + 0x10) = uVar7;
  piVar12 = (int *)(param_1 + 4);
  if (7 < uVar7) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((1 << (7U - iVar2 & 0x3f) & (uint)bVar10) == 0) {
    if (uVar7 < 8) {
      if (uVar7 == 1) {
        bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(undefined4 *)(param_1 + 0x10) = 6;
        bVar10 = bVar10 >> 2 & 0x1f;
      }
      else if (uVar7 == 2) {
        bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(undefined4 *)(param_1 + 0x10) = 7;
        bVar10 = bVar10 >> 1 & 0x1f;
      }
      else if (uVar7 == 3) {
        bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(undefined4 *)(param_1 + 0x10) = 0;
        bVar10 = bVar10 & 0x1f;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      else {
        if (uVar7 == 4) {
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar8 = *pbVar6;
          bVar10 = pbVar6[1] >> 7;
          *(undefined4 *)(param_1 + 0x10) = 1;
          bVar8 = (bVar8 & 0xf) << 1;
        }
        else if (uVar7 == 5) {
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar8 = *pbVar6;
          bVar10 = pbVar6[1] >> 6;
          *(undefined4 *)(param_1 + 0x10) = 2;
          bVar8 = (bVar8 & 7) << 2;
        }
        else if (uVar7 == 6) {
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar8 = *pbVar6;
          bVar10 = pbVar6[1] >> 5;
          *(undefined4 *)(param_1 + 0x10) = 3;
          bVar8 = (bVar8 & 3) << 3;
        }
        else {
          if (uVar7 == 0) {
            bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
            *(undefined4 *)(param_1 + 0x10) = 5;
            bVar10 = bVar10 >> 3;
            goto LAB_8275d560;
          }
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar8 = *pbVar6;
          bVar10 = pbVar6[1] >> 4;
          *(undefined4 *)(param_1 + 0x10) = 4;
          bVar8 = (bVar8 & 1) << 4;
        }
        *(int *)(param_1 + 0xc) = iVar2;
        bVar10 = bVar10 | bVar8;
      }
    }
    else {
      bVar10 = 0;
    }
LAB_8275d560:
    if (bVar10 == 0) {
      *(undefined1 *)(param_1 + 0x20) = 1;
      if (*(int *)(param_1 + 0x4c) == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      return;
    }
    if ((bVar10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x20) = 3;
      if (*(int *)(param_1 + 0x4c) != 0) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      }
      uVar7 = *(uint *)(param_1 + 0x10);
      if (uVar7 < 8) {
        if (uVar7 == 1) {
          bVar8 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
          *(undefined4 *)(param_1 + 0x10) = 6;
          uVar7 = bVar8 >> 2 & 0x1f;
        }
        else if (uVar7 == 2) {
          bVar8 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
          *(undefined4 *)(param_1 + 0x10) = 7;
          uVar7 = bVar8 >> 1 & 0x1f;
        }
        else if (uVar7 == 3) {
          bVar8 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
          *(undefined4 *)(param_1 + 0x10) = 0;
          uVar7 = bVar8 & 0x1f;
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        }
        else {
          if (uVar7 == 4) {
            iVar2 = *(int *)(param_1 + 0xc) + 1;
            pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + *piVar12);
            bVar8 = *pbVar6;
            uVar7 = (uint)(pbVar6[1] >> 7);
            *(undefined4 *)(param_1 + 0x10) = 1;
            uVar3 = (bVar8 & 0xf) << 1;
          }
          else if (uVar7 == 5) {
            iVar2 = *(int *)(param_1 + 0xc) + 1;
            pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + *piVar12);
            bVar8 = *pbVar6;
            uVar7 = (uint)(pbVar6[1] >> 6);
            *(undefined4 *)(param_1 + 0x10) = 2;
            uVar3 = (bVar8 & 7) << 2;
          }
          else if (uVar7 == 6) {
            iVar2 = *(int *)(param_1 + 0xc) + 1;
            pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + *piVar12);
            bVar8 = *pbVar6;
            uVar7 = (uint)(pbVar6[1] >> 5);
            *(undefined4 *)(param_1 + 0x10) = 3;
            uVar3 = (bVar8 & 3) << 3;
          }
          else {
            if (uVar7 == 0) {
              bVar8 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
              *(undefined4 *)(param_1 + 0x10) = 5;
              uVar7 = (uint)(bVar8 >> 3);
              goto LAB_8275d710;
            }
            iVar2 = *(int *)(param_1 + 0xc) + 1;
            pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + *piVar12);
            bVar8 = *pbVar6;
            uVar7 = (uint)(pbVar6[1] >> 4);
            *(undefined4 *)(param_1 + 0x10) = 4;
            uVar3 = (bVar8 & 1) << 4;
          }
          *(int *)(param_1 + 0xc) = iVar2;
          uVar7 = uVar7 | uVar3;
        }
      }
      else {
        uVar7 = 0;
      }
LAB_8275d710:
      uVar1 = fn_826E7468(piVar12,uVar7);
      uVar3 = 1 << (uVar7 - 1 & 0x3f);
      if ((uVar1 & uVar3) != 0) {
        uVar1 = -1 << uVar7 | uVar1;
      }
      *(uint *)(param_1 + 0x2c) = uVar1;
      uVar1 = fn_826E7468(piVar12,uVar7);
      if ((uVar1 & uVar3) != 0) {
        uVar1 = -1 << uVar7 | uVar1;
      }
      *(uint *)(param_1 + 0x30) = uVar1;
    }
    if (((bVar10 & 2) != 0) && (*(int *)(param_1 + 0x44) != 0)) {
      *(undefined1 *)(param_1 + 0x20) = 3;
      if (*(int *)(param_1 + 0x4c) != 0) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      }
      iVar2 = fn_826E7468(piVar12);
      if (iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0x34) + iVar2;
      }
      *(int *)(param_1 + 0x14) = iVar2;
    }
    if (((bVar10 & 4) != 0) && (*(int *)(param_1 + 0x44) != 0)) {
      *(undefined1 *)(param_1 + 0x20) = 3;
      if (*(int *)(param_1 + 0x4c) != 0) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      }
      iVar2 = fn_826E7468(piVar12);
      if (0 < iVar2) {
        iVar2 = *(int *)(param_1 + 0x34) + iVar2;
      }
      *(int *)(param_1 + 0x18) = iVar2;
    }
    if (((bVar10 & 8) != 0) && (*(int *)(param_1 + 0x48) != 0)) {
      *(undefined1 *)(param_1 + 0x20) = 3;
      if (*(int *)(param_1 + 0x4c) != 0) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      }
      iVar2 = fn_826E7468(piVar12);
      if (0 < iVar2) {
        iVar2 = *(int *)(param_1 + 0x38) + iVar2;
      }
      *(int *)(param_1 + 0x1c) = iVar2;
    }
    if ((bVar10 & 0x10) == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x20) = 2;
    if (*(int *)(param_1 + 0x50) != 0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
    uVar7 = (uint)bVar10;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    if ((bVar10 == 0xff) && ((*(byte *)(param_1 + 0x70) & 4) != 0)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      puVar5 = (undefined1 *)(*(int *)(param_1 + 0xc) + *piVar12);
      uVar7 = (uint)CONCAT11(puVar5[1],*puVar5);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
    uVar3 = (uint)bVar10;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    if (bVar10 == 0xff) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      puVar5 = (undefined1 *)(*(int *)(param_1 + 0xc) + *piVar12);
      uVar3 = (uint)CONCAT11(puVar5[1],*puVar5);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
    }
    iVar2 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar2 + uVar3;
    *(int *)(param_1 + 0x38) = iVar2;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + uVar7;
    uVar7 = *(uint *)(param_1 + 0x10);
    if (uVar7 < 8) {
      if (uVar7 == 1) {
        bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(undefined4 *)(param_1 + 0x10) = 5;
        uVar7 = bVar10 >> 3 & 0xf;
      }
      else if (uVar7 == 2) {
        bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(undefined4 *)(param_1 + 0x10) = 6;
        uVar7 = bVar10 >> 2 & 0xf;
      }
      else if (uVar7 == 3) {
        bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(undefined4 *)(param_1 + 0x10) = 7;
        uVar7 = bVar10 >> 1 & 0xf;
      }
      else if (uVar7 == 4) {
        bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(undefined4 *)(param_1 + 0x10) = 0;
        uVar7 = bVar10 & 0xf;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      else {
        if (uVar7 == 5) {
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar10 = pbVar6[1];
          uVar7 = (*pbVar6 & 7) << 1;
          *(undefined4 *)(param_1 + 0x10) = 1;
          uVar3 = (uint)(bVar10 >> 7);
        }
        else if (uVar7 == 6) {
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar10 = pbVar6[1];
          uVar7 = (*pbVar6 & 3) << 2;
          *(undefined4 *)(param_1 + 0x10) = 2;
          uVar3 = (uint)(bVar10 >> 6);
        }
        else {
          if (uVar7 == 0) {
            bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
            *(undefined4 *)(param_1 + 0x10) = 4;
            uVar7 = (uint)(bVar10 >> 4);
            goto LAB_8275db40;
          }
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar10 = pbVar6[1];
          uVar7 = (*pbVar6 & 1) << 3;
          *(undefined4 *)(param_1 + 0x10) = 3;
          uVar3 = (uint)(bVar10 >> 5);
        }
        *(int *)(param_1 + 0xc) = iVar2;
        uVar7 = uVar7 | uVar3;
      }
    }
    else {
      uVar7 = 0;
    }
LAB_8275db40:
    *(uint *)(param_1 + 0x44) = uVar7;
    uVar7 = *(uint *)(param_1 + 0x10);
    if (uVar7 < 8) {
      if (uVar7 == 1) {
        bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(undefined4 *)(param_1 + 0x10) = 5;
        uVar7 = bVar10 >> 3 & 0xf;
      }
      else if (uVar7 == 2) {
        bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(undefined4 *)(param_1 + 0x10) = 6;
        uVar7 = bVar10 >> 2 & 0xf;
      }
      else if (uVar7 == 3) {
        bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(undefined4 *)(param_1 + 0x10) = 7;
        uVar7 = bVar10 >> 1 & 0xf;
      }
      else if (uVar7 == 4) {
        bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(undefined4 *)(param_1 + 0x10) = 0;
        uVar7 = bVar10 & 0xf;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      else {
        if (uVar7 == 5) {
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar10 = pbVar6[1];
          uVar7 = (*pbVar6 & 7) << 1;
          *(undefined4 *)(param_1 + 0x10) = 1;
          uVar3 = (uint)(bVar10 >> 7);
        }
        else if (uVar7 == 6) {
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar10 = pbVar6[1];
          uVar7 = (*pbVar6 & 3) << 2;
          *(undefined4 *)(param_1 + 0x10) = 2;
          uVar3 = (uint)(bVar10 >> 6);
        }
        else {
          if (uVar7 == 0) {
            bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
            *(undefined4 *)(param_1 + 0x10) = 4;
            uVar7 = (uint)(bVar10 >> 4);
            goto LAB_8275dc78;
          }
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar10 = pbVar6[1];
          uVar7 = (*pbVar6 & 1) << 3;
          *(undefined4 *)(param_1 + 0x10) = 3;
          uVar3 = (uint)(bVar10 >> 5);
        }
        *(int *)(param_1 + 0xc) = iVar2;
        uVar7 = uVar7 | uVar3;
      }
    }
    else {
      uVar7 = 0;
    }
LAB_8275dc78:
    *(uint *)(param_1 + 0x48) = uVar7;
    return;
  }
  bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
  *(uint *)(param_1 + 0x10) = uVar7 + 1;
  if (7 < uVar7 + 1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((1 << (7 - uVar7 & 0x3f) & (uint)bVar10) == 0) {
    if (uVar3 < 8) {
      if (uVar3 == 1) {
        bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(undefined4 *)(param_1 + 0x10) = 5;
        uVar7 = bVar10 >> 3 & 0xf;
      }
      else if (uVar3 == 2) {
        bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(undefined4 *)(param_1 + 0x10) = 6;
        uVar7 = bVar10 >> 2 & 0xf;
      }
      else if (uVar3 == 3) {
        bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(undefined4 *)(param_1 + 0x10) = 7;
        uVar7 = bVar10 >> 1 & 0xf;
      }
      else if (uVar3 == 4) {
        bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(undefined4 *)(param_1 + 0x10) = 0;
        uVar7 = bVar10 & 0xf;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      else {
        if (uVar3 == 5) {
          pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar10 = pbVar6[1];
          uVar7 = (*pbVar6 & 7) << 1;
          *(undefined4 *)(param_1 + 0x10) = 1;
          bVar10 = bVar10 >> 7;
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        }
        else {
          if (uVar3 == 6) {
            iVar2 = *(int *)(param_1 + 0xc);
            uVar4 = 2;
            uVar7 = (*(byte *)(iVar2 + *piVar12) & 3) << 2;
            bVar10 = ((byte *)(iVar2 + *piVar12))[1] >> 6;
          }
          else {
            if (uVar3 == 0) {
              bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
              *(undefined4 *)(param_1 + 0x10) = 4;
              uVar7 = (uint)(bVar10 >> 4);
              goto LAB_8275de14;
            }
            iVar2 = *(int *)(param_1 + 0xc);
            uVar4 = 3;
            uVar7 = (*(byte *)(iVar2 + *piVar12) & 1) << 3;
            bVar10 = ((byte *)(iVar2 + *piVar12))[1] >> 5;
          }
          *(undefined4 *)(param_1 + 0x10) = uVar4;
          *(int *)(param_1 + 0xc) = iVar2 + 1;
        }
        uVar7 = uVar7 | bVar10;
      }
    }
    else {
      uVar7 = 0;
    }
LAB_8275de14:
    iVar2 = uVar7 + 2;
    uVar3 = fn_826E7468(piVar12,iVar2);
    uVar7 = 1 << uVar7 + 1;
    if ((uVar3 & uVar7) != 0) {
      uVar3 = -1 << iVar2 | uVar3;
    }
    *(uint *)(param_1 + 0x5c) = uVar3;
    uVar3 = fn_826E7468(piVar12,iVar2);
    if ((uVar3 & uVar7) != 0) {
      uVar3 = -1 << iVar2 | uVar3;
    }
    *(uint *)(param_1 + 0x60) = uVar3;
    uVar3 = fn_826E7468(piVar12,iVar2);
    if ((uVar3 & uVar7) != 0) {
      uVar3 = -1 << iVar2 | uVar3;
    }
    *(uint *)(param_1 + 0x54) = uVar3;
    uVar3 = fn_826E7468(piVar12,iVar2);
    if ((uVar3 & uVar7) != 0) {
      uVar3 = -1 << iVar2 | uVar3;
    }
    uVar9 = 0x85;
    *(uint *)(param_1 + 0x58) = uVar3;
    goto LAB_8275e120;
  }
  if (uVar3 < 8) {
    if (uVar3 == 1) {
      bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
      *(undefined4 *)(param_1 + 0x10) = 5;
      uVar7 = bVar10 >> 3 & 0xf;
    }
    else if (uVar3 == 2) {
      bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
      *(undefined4 *)(param_1 + 0x10) = 6;
      uVar7 = bVar10 >> 2 & 0xf;
    }
    else if (uVar3 == 3) {
      bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
      *(undefined4 *)(param_1 + 0x10) = 7;
      uVar7 = bVar10 >> 1 & 0xf;
    }
    else if (uVar3 == 4) {
      bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
      *(undefined4 *)(param_1 + 0x10) = 0;
      uVar7 = bVar10 & 0xf;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    else {
      if (uVar3 == 5) {
        pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + *piVar12);
        bVar10 = pbVar6[1];
        uVar7 = (*pbVar6 & 7) << 1;
        *(undefined4 *)(param_1 + 0x10) = 1;
        bVar10 = bVar10 >> 7;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      else {
        if (uVar3 == 6) {
          iVar2 = *(int *)(param_1 + 0xc);
          uVar4 = 2;
          uVar7 = (*(byte *)(iVar2 + *piVar12) & 3) << 2;
          bVar10 = ((byte *)(iVar2 + *piVar12))[1] >> 6;
        }
        else {
          if (uVar3 == 0) {
            bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
            *(undefined4 *)(param_1 + 0x10) = 4;
            uVar7 = (uint)(bVar10 >> 4);
            goto LAB_8275dff4;
          }
          iVar2 = *(int *)(param_1 + 0xc);
          uVar4 = 3;
          uVar7 = (*(byte *)(iVar2 + *piVar12) & 1) << 3;
          bVar10 = ((byte *)(iVar2 + *piVar12))[1] >> 5;
        }
        *(undefined4 *)(param_1 + 0x10) = uVar4;
        *(int *)(param_1 + 0xc) = iVar2 + 1;
      }
      uVar7 = uVar7 | bVar10;
    }
  }
  else {
    uVar7 = 0;
  }
LAB_8275dff4:
  iVar2 = *(int *)(param_1 + 0x10);
  iVar11 = uVar7 + 2;
  bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  if (7 < iVar2 + 1U) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((1 << (7U - iVar2 & 0x3f) & (uint)bVar10) == 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    uVar3 = iVar2 + 1;
    bVar10 = *(byte *)(*(int *)(param_1 + 0xc) + *piVar12);
    *(uint *)(param_1 + 0x10) = uVar3;
    if (7 < uVar3) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    if ((1 << (7U - iVar2 & 0x3f) & (uint)bVar10) != 0) {
      uVar3 = fn_826E7468(piVar12,iVar11);
      uVar7 = 1 << uVar7 + 1 & uVar3;
      goto joined_r0x8275e108;
    }
    uVar3 = fn_826E7468(piVar12,iVar11);
    if ((1 << uVar7 + 1 & uVar3) != 0) {
      uVar3 = -1 << iVar11 | uVar3;
    }
    *(uint *)(param_1 + 100) = uVar3;
  }
  else {
    uVar3 = fn_826E7468(piVar12,iVar11);
    uVar7 = 1 << uVar7 + 1;
    if ((uVar7 & uVar3) != 0) {
      uVar3 = -1 << iVar11 | uVar3;
    }
    *(uint *)(param_1 + 100) = uVar3;
    uVar3 = fn_826E7468(piVar12,iVar11);
    uVar7 = uVar7 & uVar3;
joined_r0x8275e108:
    if (uVar7 != 0) {
      uVar3 = -1 << iVar11 | uVar3;
    }
    *(uint *)(param_1 + 0x68) = uVar3;
  }
  uVar9 = 0x84;
LAB_8275e120:
  *(undefined1 *)(param_1 + 0x20) = uVar9;
  return;
}

