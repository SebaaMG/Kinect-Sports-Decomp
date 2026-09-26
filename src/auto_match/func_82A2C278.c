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
extern int fn_82A2C1E8();
extern int fn_82F68CC0();


int fn_82A2C278(int param_1,int *param_2,ulonglong param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  
  iVar8 = fn_82A2C1E8(param_3);
  if (iVar8 != 0) {
    bVar1 = *(byte *)(param_4 + 0x28);
    uVar5 = *(uint *)(param_4 + 0x40);
    *(byte *)(iVar8 + 0x34) = bVar1 & 0x3f;
    *(short *)(iVar8 + 0x36) = (short)(uVar5 >> 6);
    fn_82F68CC0(iVar8 + 0x50,param_4);
    if ((bVar1 & 0x80) != 0) {
      *(byte *)(iVar8 + 0x35) = *(byte *)(iVar8 + 0x35) | 2;
    }
    bVar2 = *(byte *)(param_4 + 0x2b);
    bVar3 = *(byte *)(param_4 + 0x2a);
    bVar4 = *(byte *)(param_4 + 0x29);
    iVar10 = ((uint)*(byte *)(param_4 + 0x2e) * 0x100 + (uint)*(byte *)(param_4 + 0x2d)) * 0x100 +
             (uint)*(byte *)(param_4 + 0x2c);
    uVar6 = *(undefined4 *)(param_4 + 0x38);
    uVar7 = *(undefined4 *)(param_4 + 0x3c);
    iVar9 = ((uint)*(byte *)(param_4 + 0x31) * 0x100 + (uint)*(byte *)(param_4 + 0x30)) * 0x100 +
            (uint)*(byte *)(param_4 + 0x2f);
    *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(param_4 + 0x34);
    *(int *)(iVar8 + 0x20) = iVar9;
    *(int *)(iVar8 + 0x14) = iVar10 * 0x1000;
    *(uint *)(iVar8 + 0x1c) = (((uint)bVar2 * 0x100 + (uint)bVar3) * 0x100 + (uint)bVar4) * 0x1000;
    *(undefined4 *)(iVar8 + 0x40) = uVar6;
    *(undefined4 *)(iVar8 + 0x44) = uVar7;
    if (((bVar1 & 0x40) == 0) || (iVar10 == 0)) {
      iVar10 = -1;
      *(undefined4 *)(iVar8 + 0x28) = 0xffffffff;
    }
    else {
      *(int *)(iVar8 + 0x2c) = iVar10 * 0x1000;
      *(int *)(iVar8 + 0x30) = iVar9;
      iVar10 = iVar9 + iVar10 + -1;
      *(undefined4 *)(iVar8 + 0x28) = 0;
    }
    *(int *)(iVar8 + 0x24) = iVar10;
    *(int **)(iVar8 + 8) = param_2;
    param_2[4] = param_2[4] + 1;
    if (((param_3 & 0xffffffff) != 0) ||
       (piVar11 = (int *)(param_1 + 0x78), (*(byte *)((int)param_2 + 0x35) & 4) == 0)) {
      piVar11 = param_2;
    }
    iVar10 = *piVar11;
    *(int **)(iVar8 + 0x4c) = piVar11;
    *(int *)(iVar8 + 0x48) = iVar10;
    *(int *)(iVar10 + 4) = iVar8 + 0x48;
    *piVar11 = iVar8 + 0x48;
  }
  return iVar8;
}

