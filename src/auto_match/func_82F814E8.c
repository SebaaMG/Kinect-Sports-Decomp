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
extern int fn_82F6F960();


undefined8 fn_82F814E8(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  iVar5 = fn_82F6F960();
  if (iVar5 == 0) {
    return 0;
  }
  piVar1 = *(int **)(iVar5 + 0x5c);
  piVar8 = piVar1;
  do {
    if (*piVar8 == param_1) break;
    piVar8 = piVar8 + 3;
  } while (piVar8 < piVar1 + 0x24);
  if ((piVar1 + 0x24 <= piVar8) || (*piVar8 != param_1)) {
    piVar8 = (int *)0x0;
  }
  if (piVar8 == (int *)0x0) {
    return 0;
  }
  pcVar2 = (code *)piVar8[2];
  if (pcVar2 == (code *)0x0) {
    return 0;
  }
  if (pcVar2 == (code *)0x5) {
    piVar8[2] = 0;
    return 1;
  }
  if (pcVar2 == (code *)0x1) {
    return 0xffffffffffffffff;
  }
  uVar3 = *(undefined4 *)(iVar5 + 0x60);
  *(undefined4 *)(iVar5 + 0x60) = param_2;
  if (piVar8[1] != 8) {
    piVar8[2] = 0;
    (*pcVar2)();
    goto LAB_82f816bc;
  }
  iVar7 = 0x24;
  lVar10 = 9;
  do {
    iVar6 = iVar7 + *(int *)(iVar5 + 0x5c);
    iVar7 = iVar7 + 0xc;
    *(undefined4 *)(iVar6 + 8) = 0;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar7 = *piVar8;
  uVar4 = *(undefined4 *)(iVar5 + 100);
  if (iVar7 == -0x3fffff72) {
    uVar9 = 0x83;
LAB_82f81694:
    *(undefined4 *)(iVar5 + 100) = uVar9;
  }
  else {
    if (iVar7 == -0x3fffff70) {
      uVar9 = 0x81;
      goto LAB_82f81694;
    }
    if (iVar7 == -0x3fffff6f) {
      uVar9 = 0x84;
      goto LAB_82f81694;
    }
    if (iVar7 == -0x3fffff6d) {
      uVar9 = 0x85;
      goto LAB_82f81694;
    }
    if (iVar7 == -0x3fffff73) {
      uVar9 = 0x82;
      goto LAB_82f81694;
    }
    if (iVar7 == -0x3fffff71) {
      uVar9 = 0x86;
      goto LAB_82f81694;
    }
    if (iVar7 == -0x3fffff6e) {
      uVar9 = 0x8a;
      goto LAB_82f81694;
    }
    if (iVar7 == -0x3ffffd4b) {
      uVar9 = 0x8d;
      goto LAB_82f81694;
    }
    if (iVar7 == -0x3ffffd4c) {
      uVar9 = 0x8e;
      goto LAB_82f81694;
    }
  }
  (*pcVar2)(8,*(undefined4 *)(iVar5 + 100));
  *(undefined4 *)(iVar5 + 100) = uVar4;
LAB_82f816bc:
  *(undefined4 *)(iVar5 + 0x60) = uVar3;
  return 0xffffffffffffffff;
}

