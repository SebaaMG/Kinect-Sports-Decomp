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
extern int fn_82CA0CC8();
extern int fn_82CA0E40();
extern int fn_82CA8198();
extern int fn_82F691F0();


void fn_82C52ED0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar9;
  int iVar10;
  longlong lVar8;
  int iVar11;
  
  iVar11 = *(int *)(param_1 + 0xb4);
  iVar4 = *(int *)(param_1 + 0xc0);
  iVar1 = *(int *)(param_1 + 0xbc);
  iVar5 = *(int *)(param_1 + 0x3cb0);
  *(int *)(param_1 + 0xa4) = iVar11;
  *(undefined4 *)(param_1 + 0x4fb0) = 0x20;
  *(undefined4 *)(param_1 + 0x4fb4) = 0x10;
  *(int *)(param_1 + 0xa8) = iVar4;
  *(int *)(param_1 + 0xac) = iVar1;
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 200);
  if ((((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) || (iVar5 == 3)) {
    uVar2 = *(uint *)(param_1 + 0x9c);
    uVar3 = *(uint *)(param_1 + 0xa0);
    uVar9 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
    *(uint *)(param_1 + 0xa4) = uVar2;
    *(uint *)(param_1 + 0xa8) = uVar9;
    *(uint *)(param_1 + 0xac) = uVar3;
    *(uint *)(param_1 + 0xb0) = ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0);
    if ((uVar2 & 3) != 0) {
      *(code **)(param_1 + 0x3e30) = fn_82CA0CC8;
    }
    if ((uVar9 & 3) != 0) {
      *(code **)(param_1 + 0x3e2c) = fn_82CA0E40;
    }
  }
  if (*(int *)(param_1 + 0x5118) != 0) {
    iVar5 = *(int *)(param_1 + 0x9c) + 1 >> 1;
    iVar7 = *(int *)(param_1 + 0xa0) + 1 >> 1;
    *(int *)(param_1 + 0xa8) = iVar5;
    *(int *)(param_1 + 0xb0) = iVar7;
    *(int *)(param_1 + 0xa4) = iVar5 << 1;
    *(int *)(param_1 + 0xac) = iVar7 << 1;
  }
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xa4) + 0x20;
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xa8) + 0x10;
  if ((iVar11 != *(int *)(param_1 + 0x9c)) || (uVar6 = 1, iVar1 != *(int *)(param_1 + 0xa0))) {
    uVar6 = 0;
  }
  iVar10 = iVar11 + 0x40;
  *(undefined4 *)(param_1 + 0x98) = uVar6;
  iVar5 = iVar11 >> 4;
  uVar2 = iVar1 >> 4;
  *(int *)(param_1 + 0xcc) = iVar10;
  iVar7 = iVar4 + 0x20;
  *(int *)(param_1 + 0x88) = iVar5;
  *(uint *)(param_1 + 0x8c) = uVar2;
  *(int *)(param_1 + 0xd0) = iVar7;
  *(uint *)(param_1 + 0x90) = uVar2 * iVar5;
  *(int *)(param_1 + 0x94) = iVar5 + -1;
  iVar5 = *(int *)(param_1 + 200) + 0x20;
  iVar11 = (iVar11 + 0x41) * 0x20;
  *(int *)(param_1 + 0xd8) = iVar5;
  *(int *)(param_1 + 0xe0) = (iVar4 + 0x21) * 0x10;
  *(int *)(param_1 + 0xdc) = iVar11;
  *(int *)(param_1 + 0xd4) = iVar1 + 0x40;
  iVar4 = iVar11 + *(int *)(param_1 + 0xecc);
  if (*(int *)(param_1 + 0xecc) == 0) {
    iVar4 = 0;
  }
  *(int *)(param_1 + 0xee4) = iVar4;
  iVar11 = iVar11 + *(int *)(param_1 + 0xee8);
  if (*(int *)(param_1 + 0xee8) == 0) {
    iVar11 = 0;
  }
  *(int *)(param_1 + 0xef4) = iVar11;
  *(int *)(param_1 + 0xe4) = iVar10 * 0x10;
  *(int *)(param_1 + 0xe8) = iVar7 * 8;
  if (((*(int *)(param_1 + 0x5580) != 1) || (*(int *)(param_1 + 0x39f4) < 1)) ||
     (*(longlong *)(param_1 + 0xe30) < 2)) {
    *(int *)(param_1 + 0x60) = iVar10;
    *(int *)(param_1 + 0x6c) = iVar7;
    *(int *)(param_1 + 0x68) = iVar1 + 0x40;
    *(int *)(param_1 + 0x74) = iVar5;
    *(int *)(param_1 + 100) = iVar10 * 0x10;
    *(int *)(param_1 + 0x70) = iVar7 * 8;
  }
  if (*(int *)(param_1 + 0xd40) == 4) {
    if (uVar2 < 4) {
      *(uint *)(param_1 + 0xd40) = 2 - (uint)(uVar2 < 2);
    }
  }
  else if ((*(int *)(param_1 + 0xd40) == 2) && (uVar2 == 1)) {
    *(undefined4 *)(param_1 + 0xd40) = 1;
  }
  *(undefined4 *)(param_1 + 0x8dc) = 3;
  *(undefined4 *)(param_1 + 0x8e0) = 10;
  *(undefined4 *)(param_1 + 0x8e4) = 0x40;
  *(undefined4 *)(param_1 + 0x8e8) = 0;
  fn_82CA8198(param_1);
  uVar2 = *(uint *)(param_1 + 0x55dc);
  lVar8 = (longlong)(*(int *)(param_1 + 0xbc) >> 4) + 1;
  iVar11 = (int)lVar8;
  *(int *)(param_1 + 0x55dc) = iVar11;
  if ((int)uVar2 < iVar11) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0((ulonglong)*(uint *)(param_1 + 0x55b8) + ((ulonglong)uVar2 & 0x3fffffff) * 4,0,
                 (lVar8 - (ulonglong)uVar2 & 0x3fffffff) << 2);
  }
  return;
}

