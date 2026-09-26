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
extern unsigned int *auStack_88;
extern unsigned int *auStack_8c;
extern int fn_82C1E828();
extern int fn_82C1E938();
extern int fn_82C1EAB8();
extern int fn_82C1EFD0();
extern int fn_82C23720();
extern int fn_82C237D0();
extern unsigned int uStack_8e;


/* WARNING: Type propagation algorithm not settling */

undefined8 fn_82C25B10(int param_1,ulonglong param_2)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte abStack_90 [2];
  ushort uStack_8e;
  ushort auStack_8c [2];
  uint auStack_88 [34];
  
  piVar3 = *(int **)(param_1 + 0x1c);
  auStack_88[2] = 0;
  auStack_88[1] = 0;
  uVar14 = 0;
  abStack_90[0] = 0;
  uStack_8e = 0xffff;
  auStack_8c[0] = 0;
  auStack_88[3] = 0;
  uVar10 = (**(code **)(*piVar3 + 0xc))();
  if ((int)uVar10 < 0) {
    return uVar10;
  }
  iVar4 = piVar3[0xd];
  iVar5 = piVar3[0xc];
  *(undefined4 *)(iVar4 + 0x10) = 0xffffffff;
  if (*(byte *)(iVar4 + 6) == 1) {
    uVar6 = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(iVar4 + 8) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0;
    *(undefined4 *)(iVar4 + 0x18) = 1;
    auStack_88[0] = 1;
    *(undefined4 *)(iVar4 + 0x10) = uVar6;
    if ((param_2 & 0xffffffff) == 0) {
      return 0xffffffff80500018;
    }
    uVar14 = 1;
    uVar10 = fn_82C1E828(param_1,abStack_90,auStack_88 + 2,auStack_88 + 1,auStack_88);
    if ((int)uVar10 < 0) {
      return uVar10;
    }
    *(uint *)(iVar4 + 0x20) = (uint)abStack_90[0];
  }
  else if (7 < *(byte *)(iVar4 + 6)) {
    uVar14 = 8;
    auStack_88[0] = 8;
    if ((param_2 & 0xffffffff) < 8) {
      return 0xffffffff80500018;
    }
    uVar10 = fn_82C1EAB8(param_1,iVar4 + 0xc,auStack_88 + 2,auStack_88 + 1,auStack_88);
    if ((int)uVar10 < 0) {
      return uVar10;
    }
    uVar10 = fn_82C1EAB8(param_1,(undefined4 *)(iVar4 + 0x10),auStack_88 + 2,auStack_88 + 1,
                           auStack_88);
    if ((int)uVar10 < 0) {
      return uVar10;
    }
    *(undefined4 *)(iVar4 + 0x18) = 0;
  }
  uVar10 = fn_82C23720(param_1,*(undefined1 *)(iVar4 + 4),&uStack_8e,auStack_8c,auStack_88 + 3);
  uVar9 = auStack_8c[0];
  uVar7 = uStack_8e;
  if ((int)uVar10 < 0) {
    return uVar10;
  }
  *(uint *)(iVar4 + 0x4c) = auStack_88[3];
  if (((auStack_88[3] != 0) && (uStack_8e != 0xffff)) &&
     (uVar12 = (ulonglong)auStack_8c[0], uVar12 != 0)) {
    uVar11 = 0;
    if (0 < (short)uStack_8e) {
      do {
        uStack_8e = 0;
        uVar10 = fn_82C237D0(param_1,*(undefined1 *)(iVar4 + 4),uVar11,&uStack_8e);
        if ((int)uVar10 < 0) {
          return uVar10;
        }
        if (uStack_8e == 0xffff) {
          uVar14 = uVar14 + 2;
          auStack_88[0] = 2;
          if ((param_2 & 0xffffffff) < (uVar14 & 0xffffffff)) {
            return 0xffffffff80500018;
          }
          uVar10 = fn_82C1E938(param_1,&uStack_8e,auStack_88 + 2,auStack_88 + 1,auStack_88);
          if ((int)uVar10 < 0) {
            return uVar10;
          }
        }
        uVar8 = uStack_8e;
        uVar13 = (ulonglong)uStack_8e;
        uVar10 = (**(code **)(*piVar3 + 0x14))(*piVar3,uVar13);
        if ((int)uVar10 < 0) {
          return uVar10;
        }
        uVar14 = uVar13 + uVar14;
        uVar11 = uVar11 + 1 & 0xffff;
        *(ulonglong *)(piVar3 + 2) = (ulonglong)uVar8 + *(longlong *)(piVar3 + 2);
      } while ((int)uVar11 < (int)(short)uVar7);
    }
    uVar14 = uVar12 + uVar14;
    if ((param_2 & 0xffffffff) < (uVar14 & 0xffffffff)) {
      return 0xffffffff80500018;
    }
    auStack_88[0] = (uint)uVar9;
    uVar10 = fn_82C1EFD0(param_1,iVar4 + 0x2c,uVar12,auStack_88 + 2,auStack_88 + 1,auStack_88);
    if ((int)uVar10 < 0) {
      return uVar10;
    }
    *(int *)(iVar4 + 0x40) = iVar4 + 0x2c;
    *(uint *)(iVar4 + 0x44) = (uint)uVar9;
    *(undefined4 *)(iVar4 + 0x3c) = 1;
  }
  uVar13 = (ulonglong)*(uint *)(iVar4 + 0x58) + (ulonglong)*(byte *)(iVar4 + 6) + 1;
  uVar12 = uVar13 & 0xffff;
  *(short *)(iVar4 + 2) = (short)uVar13;
  if ((*(uint *)(iVar4 + 0x54) + uVar14 & 0xffffffff) < uVar12) {
    uVar12 = (uVar12 - *(uint *)(iVar4 + 0x54)) - uVar14;
    uVar10 = (**(code **)(*piVar3 + 0x14))(*piVar3,uVar12);
    if ((int)uVar10 < 0) {
      return uVar10;
    }
    uVar14 = uVar12 + uVar14;
    *(ulonglong *)(piVar3 + 2) = (uVar12 & 0xffffffff) + *(longlong *)(piVar3 + 2);
  }
  if (*(int *)(iVar5 + 8) == 0) {
    if (*(int *)(iVar5 + 0x20) == 0) {
      auStack_88[3] =
           ((*(int *)(piVar3[1] + 8) - *(int *)(iVar5 + 0x30)) - *(int *)(iVar5 + 0xc)) -
           (uint)*(ushort *)(iVar4 + 2);
    }
    else {
      auStack_88[3] =
           ((*(int *)(iVar5 + 0x20) - *(int *)(iVar5 + 0x30)) - *(int *)(iVar5 + 0xc)) -
           (uint)*(ushort *)(iVar4 + 2);
    }
  }
  else {
    cVar1 = *(char *)(iVar5 + 0x1a);
    if (cVar1 == '\x01') {
      auStack_88[0] = 1;
      if ((param_2 & 0xffffffff) < (uVar14 + 1 & 0xffffffff)) {
        return 0xffffffff80500018;
      }
      uVar10 = fn_82C1E828(param_1,abStack_90,auStack_88 + 2,auStack_88 + 1,auStack_88);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      auStack_88[3] = (uint)abStack_90[0];
    }
    else if (cVar1 == '\x02') {
      auStack_8c[0] = 0;
      auStack_88[0] = 2;
      if ((param_2 & 0xffffffff) < (uVar14 + 2 & 0xffffffff)) {
        return 0xffffffff80500018;
      }
      uVar10 = fn_82C1E938(param_1,auStack_8c,auStack_88 + 2,auStack_88 + 1,auStack_88);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      auStack_88[3] = (uint)auStack_8c[0];
    }
    else if (cVar1 == '\x03') {
      auStack_88[3] = 0;
      auStack_88[0] = 4;
      if ((param_2 & 0xffffffff) < (uVar14 + 4 & 0xffffffff)) {
        return 0xffffffff80500018;
      }
      uVar10 = fn_82C1EAB8(param_1,auStack_88 + 3,auStack_88 + 2,auStack_88 + 1,auStack_88);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
    }
    else {
      auStack_88[3] = 0;
    }
  }
  *(short *)(iVar4 + 0x1c) = (short)auStack_88[3];
  bVar2 = *(byte *)(iVar5 + 0x1b);
  *(short *)(iVar4 + 0x1e) = (short)auStack_88[3];
  uVar11 = (uint)bVar2 + (auStack_88[3] & 0xffff) + (uint)*(ushort *)(iVar4 + 2);
  *(short *)(iVar4 + 2) = (short)uVar11;
  uVar11 = (uVar11 & 0xffff) + *(int *)(iVar5 + 0xc);
  *(uint *)(iVar5 + 0xc) = uVar11;
  if (uVar11 <= *(uint *)(piVar3[1] + 8)) {
    if (uVar11 != *(uint *)(piVar3[1] + 8)) {
      return uVar10;
    }
    if (*(int *)(iVar5 + 0x3c) - 1U <= (uint)piVar3[0xe]) {
      return uVar10;
    }
  }
  return 0xffffffff80500018;
}

