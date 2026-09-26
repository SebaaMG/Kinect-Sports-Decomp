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
extern int fn_82F02778();
extern int fn_82F11418();


void fn_82E85088(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar6;
  ulonglong uVar5;
  int iVar7;
  int iVar8;
  
  *(int *)(param_1 + 0x548) = *(int *)(param_1 + 0x278) - *(int *)(param_1 + 0x270);
  *(int *)(param_1 + 0x554) = *(int *)(param_1 + 0x288) - *(int *)(param_1 + 0x280);
  uVar1 = *(uint *)(param_1 + 0x548);
  iVar2 = *(int *)(param_1 + 0x554);
  iVar7 = *(int *)(param_1 + 0x27c) - *(int *)(param_1 + 0x274);
  *(int *)(param_1 + 0x550) = iVar7;
  iVar4 = *(int *)(param_1 + 0x28c) - *(int *)(param_1 + 0x284);
  *(int *)(param_1 + 0x55c) = iVar4;
  *(uint *)(param_1 + 0x330) = uVar1;
  *(int *)(param_1 + 0x334) = iVar2;
  *(int *)(param_1 + 0x338) = iVar7;
  *(int *)(param_1 + 0x33c) = iVar4;
  if (*(int *)(param_1 + 0xa0c) != 0) {
    iVar3 = *(int *)(param_1 + 0x31c) + 1 >> 1;
    iVar8 = *(int *)(param_1 + 800) + 1 >> 1;
    *(int *)(param_1 + 0x334) = iVar3;
    *(int *)(param_1 + 0x33c) = iVar8;
    *(int *)(param_1 + 0x330) = iVar3 << 1;
    *(int *)(param_1 + 0x338) = iVar8 << 1;
  }
  *(uint *)(param_1 + 0x560) = iVar7 * uVar1;
  *(int *)(param_1 + 0x54c) = *(int *)(param_1 + 0x330) + 0x20;
  *(int *)(param_1 + 0x558) = *(int *)(param_1 + 0x334) + 0x10;
  if ((uVar1 != *(uint *)(param_1 + 0x31c)) || (uVar6 = 1, iVar7 != *(int *)(param_1 + 800))) {
    uVar6 = 0;
  }
  *(undefined4 *)(param_1 + 0x340) = uVar6;
  uVar5 = (ulonglong)uVar1 + 0x40;
  iVar8 = iVar2 + 0x20;
  iVar3 = (int)uVar1 >> 4;
  *(int *)(param_1 + 0x564) = (int)uVar5;
  *(int *)(param_1 + 0x568) = iVar8;
  *(int *)(param_1 + 0x2d0) = iVar3;
  *(int *)(param_1 + 0x2d4) = iVar7 >> 4;
  *(int *)(param_1 + 0x2d8) = (iVar7 >> 4) * iVar3;
  *(int *)(param_1 + 0x2dc) = iVar3 + -1;
  *(int *)(param_1 + 0x56c) = iVar7 + 0x40;
  *(int *)(param_1 + 0x570) = iVar4 + 0x20;
  *(int *)(param_1 + 0x580) = iVar8 * 8;
  *(int *)(param_1 + 0x57c) = (int)((uVar5 & 0xffffffff) << 4);
  *(int *)(param_1 + 0x578) = (iVar2 + 0x21) * 0x10;
  *(int *)(param_1 + 0x584) = iVar8 * 0x10;
  *(int *)(param_1 + 0x574) = (int)(((ulonglong)uVar1 + 0x41 & 0xffffffff) << 5);
  fn_82F02778(param_1,0);
  if (*(int *)(param_1 + 4) == 8) {
    fn_82F11418(param_1);
  }
  return;
}

