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
extern unsigned int *auStack_5c;
extern int fn_82C1D9D8();
extern int fn_82C1E828();
extern int fn_82C1E938();
extern int fn_82C1EAB8();


/* WARNING: Type propagation algorithm not settling */

undefined8 fn_82C22E40(int param_1,ulonglong param_2)

{
  char cVar1;
  int *piVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte abStack_60 [4];
  uint auStack_5c [23];
  
  piVar2 = *(int **)(param_1 + 0x1c);
  auStack_5c[3] = 0;
  auStack_5c[2] = 0;
  abStack_60[0] = 0;
  auStack_5c[0] = 0;
  if (*(ulonglong *)(piVar2 + 2) <
      (ulonglong)*(uint *)(piVar2[0xc] + 0xc) + *(ulonglong *)(piVar2 + 8)) {
    uVar10 = ((*(ulonglong *)(piVar2 + 8) & 0xffffffff) - (*(ulonglong *)(piVar2 + 2) & 0xffffffff))
             + (ulonglong)*(uint *)(piVar2[0xc] + 0xc);
    uVar6 = (**(code **)(*piVar2 + 0x14))(*piVar2,uVar10);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    *(ulonglong *)(piVar2 + 2) = (uVar10 & 0xffffffff) + *(longlong *)(piVar2 + 2);
  }
  uVar6 = (**(code **)(*piVar2 + 0xc))(*piVar2,param_2);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  puVar3 = (undefined2 *)piVar2[0xd];
  lVar9 = 2;
  iVar4 = piVar2[0xc];
  auStack_5c[1] = 2;
  *(undefined4 *)(puVar3 + 0x28) = 0;
  *(undefined4 *)(puVar3 + 0x2a) = 0;
  *(undefined4 *)(puVar3 + 0x2c) = 0;
  *(undefined4 *)(puVar3 + 0x1e) = 0;
  *(undefined4 *)(puVar3 + 0x20) = 0;
  *(undefined4 *)(puVar3 + 0x22) = 0;
  *(undefined4 *)(puVar3 + 0x24) = 0;
  if ((param_2 & 0xffffffff) < 2) {
    return 0xffffffff80500018;
  }
  uVar6 = fn_82C1E828(param_1,abStack_60,auStack_5c + 3,auStack_5c + 2,auStack_5c + 1);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  uVar5 = *(undefined4 *)(iVar4 + 0xc);
  *(uint *)(puVar3 + 10) = (uint)(abStack_60[0] >> 7);
  *puVar3 = (short)uVar5;
  *(byte *)(puVar3 + 2) = abStack_60[0] & 0x7f;
  uVar6 = fn_82C1E828(param_1,abStack_60,auStack_5c + 3,auStack_5c + 2,auStack_5c + 1);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  *(byte *)((int)puVar3 + 5) = abStack_60[0];
  uVar6 = fn_82C1D9D8(*(undefined4 *)(piVar2[1] + 0x80),*(undefined1 *)(puVar3 + 2),auStack_5c);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  cVar1 = *(char *)(iVar4 + 0x19);
  if (cVar1 == '\x01') {
    auStack_5c[1] = 1;
    if ((param_2 & 0xffffffff) < 3) {
      return 0xffffffff80500018;
    }
    lVar9 = 3;
    uVar6 = fn_82C1E828(param_1,abStack_60,auStack_5c + 3,auStack_5c + 2,auStack_5c + 1);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    uVar7 = (uint)abStack_60[0];
LAB_82c23080:
    *(uint *)(puVar3 + 4) = uVar7;
  }
  else {
    if (cVar1 == '\x02') {
      auStack_5c[0] = auStack_5c[0] & 0xffff;
      auStack_5c[1] = 2;
      if ((param_2 & 0xffffffff) < 4) {
        return 0xffffffff80500018;
      }
      lVar9 = 4;
      uVar6 = fn_82C1E938(param_1,auStack_5c,auStack_5c + 3,auStack_5c + 2,auStack_5c + 1);
      if ((int)uVar6 < 0) {
        return uVar6;
      }
      uVar7 = auStack_5c[0] >> 0x10;
      goto LAB_82c23080;
    }
    if (cVar1 == '\x03') {
      auStack_5c[0] = 0;
      auStack_5c[1] = 4;
      if ((param_2 & 0xffffffff) < 6) {
        return 0xffffffff80500018;
      }
      lVar9 = 6;
      uVar6 = fn_82C1EAB8(param_1,auStack_5c,auStack_5c + 3,auStack_5c + 2,auStack_5c + 1);
      if ((int)uVar6 < 0) {
        return uVar6;
      }
      *(uint *)(puVar3 + 4) = auStack_5c[0];
    }
  }
  cVar1 = *(char *)(iVar4 + 0x1a);
  if (cVar1 == '\x01') {
    iVar8 = *(int *)(puVar3 + 0x28) + 1;
  }
  else if (cVar1 == '\x02') {
    iVar8 = *(int *)(puVar3 + 0x28) + 2;
  }
  else {
    if (cVar1 != '\x03') goto LAB_82c230c4;
    iVar8 = *(int *)(puVar3 + 0x28) + 4;
  }
  *(int *)(puVar3 + 0x28) = iVar8;
LAB_82c230c4:
  auStack_5c[1] = 1;
  *(uint *)(puVar3 + 0x2c) = *(byte *)(iVar4 + 0x18) + 2;
  if ((param_2 & 0xffffffff) < lVar9 + 1U) {
    return 0xffffffff80500018;
  }
  uVar6 = fn_82C1E828(param_1,abStack_60,auStack_5c + 3,auStack_5c + 2,auStack_5c + 1);
  if (-1 < (int)uVar6) {
    *(int *)(puVar3 + 0x2a) = (int)(lVar9 + 1U);
    *(byte *)(puVar3 + 3) = abStack_60[0];
    *(uint *)(puVar3 + 0x28) = (uint)abStack_60[0] + *(int *)(puVar3 + 0x28);
    return uVar6;
  }
  return uVar6;
}

