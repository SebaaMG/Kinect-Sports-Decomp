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
extern int fn_82CE5410();
extern int fn_82CE6460();


void fn_82D7C4B0(uint *param_1,undefined4 *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  iVar8 = *(int *)(param_1[2] * 4 + param_1[1] + -4) + *param_1;
  if (param_2 != (undefined4 *)(iVar8 + -0x80)) {
    *param_2 = *(undefined4 *)(iVar8 + -0x80);
    param_2[1] = *(undefined4 *)(iVar8 + -0x7c);
    param_2[2] = *(undefined4 *)(iVar8 + -0x78);
    param_2[3] = *(undefined4 *)(iVar8 + -0x74);
    param_2[4] = *(undefined4 *)(iVar8 + -0x70);
    param_2[5] = *(undefined4 *)(iVar8 + -0x6c);
    param_2[6] = *(undefined4 *)(iVar8 + -0x68);
    param_2[7] = *(undefined4 *)(iVar8 + -100);
    param_2[8] = *(undefined4 *)(iVar8 + -0x60);
    param_2[9] = *(undefined4 *)(iVar8 + -0x5c);
    param_2[10] = *(undefined4 *)(iVar8 + -0x58);
    param_2[0xb] = *(undefined4 *)(iVar8 + -0x54);
    param_2[0xc] = *(undefined4 *)(iVar8 + -0x50);
    param_2[0xd] = *(undefined4 *)(iVar8 + -0x4c);
    param_2[0xe] = *(undefined4 *)(iVar8 + -0x48);
    param_2[0xf] = *(undefined4 *)(iVar8 + -0x44);
    param_2[0x10] = *(undefined4 *)(iVar8 + -0x40);
    param_2[0x11] = *(undefined4 *)(iVar8 + -0x3c);
    param_2[0x12] = *(undefined4 *)(iVar8 + -0x38);
    param_2[0x13] = *(undefined4 *)(iVar8 + -0x34);
    param_2[0x14] = *(undefined4 *)(iVar8 + -0x30);
    param_2[0x15] = *(undefined4 *)(iVar8 + -0x2c);
    param_2[0x16] = *(undefined4 *)(iVar8 + -0x28);
    param_2[0x17] = *(undefined4 *)(iVar8 + -0x24);
    param_2[0x18] = *(undefined4 *)(iVar8 + -0x20);
    param_2[0x19] = *(undefined4 *)(iVar8 + -0x1c);
    param_2[0x1a] = *(undefined4 *)(iVar8 + -0x18);
    param_2[0x1b] = *(undefined4 *)(iVar8 + -0x14);
    param_2[0x1c] = *(undefined4 *)(iVar8 + -0x10);
    param_2[0x1d] = *(undefined4 *)(iVar8 + -0xc);
    param_2[0x1e] = *(undefined4 *)(iVar8 + -8);
    param_2[0x1f] = *(undefined4 *)(iVar8 + -4);
    uVar1 = *(ushort *)((int)param_2 + 6);
    *(undefined4 **)((uint)*(ushort *)(param_2 + 1) * 8 + *(int *)(param_2[4] + 0x50)) = param_2;
    *(undefined4 **)((uint)uVar1 * 8 + *(int *)(param_2[5] + 0x50)) = param_2;
  }
  uVar2 = *param_1;
  *param_1 = (uint)((ulonglong)uVar2 - 0x80);
  if ((ulonglong)uVar2 - 0x80 == 0) {
    uVar3 = *(undefined4 *)(param_1[2] * 4 + param_1[1] + -4);
    param_1[2] = param_1[2] - 1;
    iVar8 = fn_82CE5410();
    (**(code **)(**(int **)(iVar8 + 0x10) + 8))(*(int **)(iVar8 + 0x10),uVar3,0x200);
    *param_1 = 0x200;
  }
  if ((param_1[3] & 0x80000000) == 0) {
    uVar10 = (ulonglong)param_1[2] + 3;
    uVar4 = (uVar10 & 0xffffffff) >> 0x10;
    uVar5 = (uVar4 | uVar10 & 0xffffffff) >> 8;
    uVar6 = (uVar5 | uVar4 | uVar10 & 0xffffffff) >> 4;
    uVar7 = (uVar6 | uVar5 | uVar4 | uVar10 & 0xffffffff) >> 2;
    lVar11 = ((uVar7 | uVar6 | uVar5 | uVar4 | uVar10 & 0xffffffff) >> 1 |
             uVar7 | uVar6 | uVar5 | uVar4 | uVar10) + 1;
    if ((int)lVar11 < 1) {
      iVar8 = fn_82CE5410();
      lVar11 = 1;
      puVar9 = param_1 + 4;
    }
    else {
      if ((int)(param_1[3] & 0x3fffffff) <= (int)lVar11) {
        return;
      }
      iVar8 = fn_82CE5410();
      puVar9 = (uint *)0x0;
    }
    fn_82CE6460(*(undefined4 *)(iVar8 + 0x10),param_1 + 1,4,puVar9,lVar11);
  }
  return;
}

