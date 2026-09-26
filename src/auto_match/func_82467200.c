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
extern int fn_8265C9E0();
extern unsigned int lbl_821CC160;


undefined4 * fn_82467200(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  
  piVar8 = (int *)(param_1 + 0x200);
  puVar11 = (undefined4 *)0x0;
  uVar9 = 0;
  do {
    if (*piVar8 == *(int *)(param_1 + 0x8c)) {
      puVar11 = (undefined4 *)((uVar9 + 0xd) * 0x28 + param_1);
      break;
    }
    uVar9 = uVar9 + 1;
    piVar8 = piVar8 + 10;
  } while (uVar9 < 0xc);
  iVar10 = *(int *)(param_1 + 4);
  if (10 < iVar10) {
    iVar10 = 0xb;
  }
  iVar10 = (iVar10 + 0x41) * 0x10;
  iVar7 = iVar10 + param_1;
  uVar5 = *(undefined4 *)(iVar10 + param_1);
  uVar1 = *(undefined4 *)(iVar7 + 4);
  uVar2 = *(undefined4 *)(iVar7 + 8);
  uVar3 = *(undefined4 *)(iVar7 + 0xc);
  puVar6 = (undefined4 *)fn_8265C9E0(0x4c);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar9 = *(uint *)(param_1 + 500);
    puVar6[1] = *(undefined4 *)(param_1 + 0x84);
    uVar4 = *(undefined4 *)(param_1 + 0x88);
    puVar6[6] = lbl_821CC160;
    puVar6[2] = uVar4;
    puVar6[3] = uVar9;
    puVar6[7] = *(undefined4 *)(param_1 + 0x8c);
    puVar6[8] = *(undefined4 *)(param_1 + 0x90);
    puVar6[0xd] = *(undefined4 *)(param_1 + 0x9c);
    uVar4 = *(undefined4 *)(param_1 + 0xa0);
    puVar6[0xf] = uVar5;
    puVar6[0x10] = uVar1;
    puVar6[0xe] = uVar4;
    puVar6[0x11] = uVar2;
    puVar6[0x12] = uVar3;
    *puVar6 = *(undefined4 *)(param_1 + 0x80);
    puVar6[10] = *(undefined4 *)(param_1 + 0x94);
    puVar6[0xb] = *(undefined4 *)(param_1 + 0x98);
    puVar6[0xc] = *(undefined4 *)(param_1 + 0xa8);
    puVar6[9] = *puVar11;
    if (*(int *)(param_1 + 0x84) == 0) {
      *(undefined4 *)((int)(((ulonglong)uVar9 + 4 & 0xffffffff) << 2) + (int)puVar6) = 0;
      *(undefined4 *)((int)((5 - (ulonglong)uVar9 & 0xffffffff) << 2) + (int)puVar6) = 1;
    }
    else {
      puVar6[4] = 0;
      puVar6[5] = 1;
    }
  }
  return puVar6;
}

