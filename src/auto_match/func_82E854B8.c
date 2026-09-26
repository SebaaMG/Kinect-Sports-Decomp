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


void fn_82E854B8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  
  if (param_2 == 0) {
    uVar4 = *(uint *)(param_1 + 0x550);
    uVar3 = *(uint *)(param_1 + 0x55c);
    *(int *)(param_1 + 0x564) = *(int *)(param_1 + 0x564) >> 1;
    *(int *)(param_1 + 0x568) = *(int *)(param_1 + 0x568) >> 1;
  }
  else {
    uVar4 = *(int *)(param_1 + 0x550) >> 1;
    *(int *)(param_1 + 0x564) = *(int *)(param_1 + 0x564) << 1;
    uVar3 = *(int *)(param_1 + 0x55c) >> 1;
    *(int *)(param_1 + 0x568) = *(int *)(param_1 + 0x568) << 1;
  }
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x658);
  uVar8 = uVar4 / uVar5;
  uVar6 = uVar3 / uVar5;
  trapWord(6,uVar5,0);
  iVar9 = (int)uVar8;
  *(int *)(param_1 + 0xbd4) = iVar9;
  trapWord(6,uVar5,0);
  iVar7 = (int)uVar6;
  *(int *)(param_1 + 0xbdc) = iVar7;
  if (uVar5 < 2) {
    return;
  }
  uVar1 = (undefined4)(uVar8 << 1);
  *(int *)(param_1 + 0xf98) = iVar9;
  uVar2 = (undefined4)(uVar6 << 1);
  *(int *)(param_1 + 4000) = iVar7;
  *(undefined4 *)(param_1 + 0xf9c) = uVar1;
  *(undefined4 *)(param_1 + 0xfa4) = uVar2;
  if (uVar5 != 4) {
    return;
  }
  *(undefined4 *)(param_1 + 0x1360) = uVar1;
  *(undefined4 *)(param_1 + 0x1368) = uVar2;
  iVar9 = iVar9 + (int)(uVar8 << 1);
  *(uint *)(param_1 + 0x172c) = uVar4;
  iVar7 = iVar7 + (int)(uVar6 << 1);
  *(uint *)(param_1 + 0x1734) = uVar3;
  *(int *)(param_1 + 0x1364) = iVar9;
  *(int *)(param_1 + 0x136c) = iVar7;
  *(int *)(param_1 + 0x1728) = iVar9;
  *(int *)(param_1 + 0x1730) = iVar7;
  return;
}

