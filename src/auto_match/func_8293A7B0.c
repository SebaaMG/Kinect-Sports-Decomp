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
extern int fn_82936130();
extern int fn_82937A60();
extern unsigned int lbl_82032444;


int fn_8293A7B0(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar14;
  bool bVar15;
  int iVar12;
  int iVar13;
  int iVar16;
  
  iVar16 = param_2;
  if (*(int *)(param_2 + 0x30) != 2) {
    iVar16 = param_3;
    param_3 = param_2;
  }
  if ((*(int *)(iVar16 + 0x30) != 2) || (*(int *)(param_3 + 0x30) != 3)) {
    uVar8 = 0xffffffff820321f8;
    goto LAB_8293ac24;
  }
  uVar1 = *(uint *)(param_3 + 0x38);
  uVar2 = *(uint *)(iVar16 + 0x34);
  if ((uVar1 < 0x1b) || (bVar15 = true, 0x22 < uVar1)) {
    bVar15 = false;
  }
  if ((uVar1 < 0x23) || (bVar5 = true, 0x27 < uVar1)) {
    bVar5 = false;
  }
  if ((uVar2 < 0x14) || (bVar14 = true, 0x17 < uVar2)) {
    bVar14 = false;
  }
  if ((uVar2 < 0x18) || (bVar6 = true, 0x1b < uVar2)) {
    bVar6 = false;
  }
  if ((bVar15) || (bVar15 = false, bVar5)) {
    bVar15 = true;
  }
  if ((bVar14) || (bVar5 = false, bVar6)) {
    bVar5 = true;
  }
  if ((bVar15) && (bVar5)) {
    uVar8 = 0xffffffff820325b0;
    goto LAB_8293ac24;
  }
  if ((uVar1 == 0x17) || (((uVar1 == 0x18 || (uVar1 == 0xfc)) || (bVar15 = false, uVar1 == 0xfd))))
  {
    bVar15 = true;
  }
  if ((uVar2 == 0x1d) || (bVar5 = false, uVar2 == 0xf4)) {
    bVar5 = true;
  }
  if ((bVar15) && (bVar5)) {
    uVar8 = 0xffffffff82032584;
    goto LAB_8293ac24;
  }
  iVar3 = *(int *)(iVar16 + 0x68);
  if ((iVar3 != 0) && (iVar12 = *(int *)(param_3 + 0x60), iVar12 != 0)) {
    uVar11 = 0;
    if (uVar1 == 0xf1) {
LAB_8293a984:
      uVar8 = 0xffffffff820324b0;
    }
    else {
      if ((uVar1 == 0xf3) || ((0xfb < uVar1 && (uVar1 < 0xfe)))) {
        uVar11 = 2;
      }
      else {
        uVar11 = (ulonglong)*(byte *)(uVar1 + 0x8315ac98);
      }
      if (uVar11 != 4) goto LAB_8293a984;
      uVar8 = 0xffffffff82032518;
    }
    if (*(int *)(iVar3 + 0x10) != *(int *)(iVar12 + 0x10)) {
      uVar9 = 0xffffffff82032494;
LAB_8293a9a4:
      fn_82937A60(param_1,uVar9,uVar8);
      return iVar16;
    }
    if (*(int *)(iVar3 + 0x18) != *(int *)(iVar12 + 0x18)) {
      uVar9 = 0xffffffff82032474;
      goto LAB_8293a9a4;
    }
    if (*(int *)(iVar3 + 0x14) != *(int *)(iVar12 + 0x14)) {
      uVar9 = 0xffffffff82032450;
      goto LAB_8293a9a4;
    }
    iVar13 = *(int *)(iVar3 + 0x28);
    if (((*(int *)(iVar12 + 0x28) != 0) != (iVar13 != 0)) ||
       ((iVar13 != 0 && (*(int *)(iVar13 + 0x10) != *(int *)(*(int *)(iVar12 + 0x28) + 0x10))))) {
      uVar9 = 0xffffffff82032344;
      goto LAB_8293a9a4;
    }
    iVar12 = 0;
    if ((10 < uVar2) && (uVar2 < 0xf)) {
      iVar12 = 5;
    }
    uVar10 = (ulonglong)(byte)(&lbl_82032444)[iVar12 + (int)uVar11];
    uVar7 = fn_82936130(param_3,0);
    if ((uVar7 & uVar10 & 0xffffffff) != (*(uint *)(iVar3 + 0x24) & uVar10)) {
      uVar8 = 0xffffffff820323e0;
      goto LAB_8293ac24;
    }
    if ((uVar11 & 0xffffffff) == 4) {
      uVar8 = 0xffffffff82032378;
      goto LAB_8293ac24;
    }
  }
  if (*(int *)(iVar16 + 0x5c) == 0) {
    iVar12 = 0;
  }
  else if (*(int *)(*(int *)(iVar16 + 0x5c) + 0x14) == 0xd000000) {
    iVar12 = -1;
  }
  else {
    iVar12 = 1;
  }
  if (*(int *)(param_3 + 0x5c) == 0) {
    iVar13 = 0;
  }
  else if (*(int *)(*(int *)(param_3 + 0x5c) + 0x14) == 0xd000000) {
    iVar13 = -1;
  }
  else {
    iVar13 = 1;
  }
  if (iVar12 == iVar13) {
    iVar12 = *(int *)(iVar16 + 0x54);
    iVar13 = *(int *)(param_3 + 0x58);
    if ((iVar12 == 0) || (bVar15 = true, *(int *)(iVar12 + 0x10) == 0)) {
      bVar15 = false;
    }
    if ((iVar12 == 0) || (bVar5 = true, *(int *)(iVar12 + 0x10) != 0)) {
      bVar5 = false;
    }
    if ((iVar13 == 0) || (bVar14 = true, *(int *)(iVar13 + 0x10) == 0)) {
      bVar14 = false;
    }
    if ((iVar13 == 0) || (bVar6 = true, *(int *)(iVar13 + 0x10) != 0)) {
      bVar6 = false;
    }
    if (((bVar15) && (bVar14)) && (*(int *)(iVar12 + 0x18) != *(int *)(iVar13 + 0x18))) {
      uVar8 = 0xffffffff820322c0;
    }
    else {
      if (((!bVar15) || (!bVar6)) && ((!bVar14 || (!bVar5)))) {
        *(uint *)(iVar16 + 0x38) = uVar1;
        *(undefined4 *)(iVar16 + 0x48) = *(undefined4 *)(param_3 + 0x48);
        *(undefined4 *)(iVar16 + 0x58) = *(undefined4 *)(param_3 + 0x58);
        if (iVar3 == 0) {
          *(undefined4 *)(iVar16 + 0x68) = *(undefined4 *)(param_3 + 0x60);
        }
        uVar4 = *(undefined4 *)(param_3 + 100);
        *(undefined4 *)(iVar16 + 0x30) = 4;
        *(undefined4 *)(iVar16 + 0x6c) = uVar4;
        return iVar16;
      }
      uVar8 = 0xffffffff82032240;
    }
  }
  else {
    uVar8 = 0xffffffff82032308;
  }
LAB_8293ac24:
  fn_82937A60(param_1,uVar8);
  return iVar16;
}

