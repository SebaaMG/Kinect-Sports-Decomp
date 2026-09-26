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
extern int fn_8304D650();


void fn_83047F40(int param_1,int *param_2)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar6;
  int iVar5;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar6 = *(ushort *)(param_2 + 3);
  uVar1 = *(ushort *)(param_1 + 0x3c);
  uVar8 = (uint)uVar6 * (uint)uVar1;
  iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x6c);
  uVar3 = *(uint *)(iVar5 + 0x24);
  if (*(short *)(param_1 + 0x1c) == 1) {
    iVar7 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34);
  }
  else {
    iVar7 = *(int *)(param_1 + 0x30);
  }
  uVar4 = iVar7 - *(int *)(param_1 + 0x28);
  if (uVar4 < uVar8) {
    trapWord(6,(ulonglong)uVar1,0);
    uVar6 = (ushort)(uVar4 / uVar1);
    uVar8 = uVar4;
  }
  *param_2 = *(int *)(param_1 + 0x28);
  *(ushort *)(param_2 + 3) = uVar6;
  *(ushort *)((int)param_2 + 0xe) = uVar6;
  param_2[1] = uVar3 >> 0xe;
  uVar9 = ((ulonglong)*(uint *)(param_1 + 0x28) - (ulonglong)*(uint *)(param_1 + 0x38) & 0xffffffff)
          / (ulonglong)*(ushort *)(param_1 + 0x3c);
  trapWord(6,(ulonglong)*(ushort *)(param_1 + 0x3c),0);
  fn_8304D650(param_1,param_2,uVar9,0);
  if ((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x10000) != 0) {
    iVar5 = *(int *)(iVar5 + 0x20);
    param_2[6] = (int)uVar9;
    param_2[9] = iVar5;
    trapWord(6,(ulonglong)*(ushort *)(param_1 + 0x3c),0);
    param_2[8] = *(uint *)(param_1 + 0x34) / (uint)*(ushort *)(param_1 + 0x3c);
  }
  iVar5 = *(int *)(param_1 + 0x28) + uVar8;
  *(int *)(param_1 + 0x28) = iVar5;
  if (iVar5 == iVar7) {
    sVar2 = *(short *)(param_1 + 0x1c);
    if (sVar2 == 1) {
      param_2[0xd0] = 0x11;
      return;
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
    if (sVar2 != 0) {
      *(short *)(param_1 + 0x1c) = sVar2 + -1;
    }
  }
  param_2[0xd0] = 0x2d;
  return;
}

