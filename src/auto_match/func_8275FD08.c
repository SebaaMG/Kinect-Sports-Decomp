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


void fn_8275FD08(int param_1,uint *param_2,uint *param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  pbVar1 = *(byte **)(param_1 + 0x28);
  uVar7 = 0;
  iVar5 = (*pbVar1 >> 5 & 3) + 1;
  iVar4 = 0;
  uVar3 = 0;
  for (lVar6 = ((ulonglong)(*pbVar1 >> 3) & 3) + 1; lVar6 != 0; lVar6 = lVar6 + -1) {
    iVar8 = iVar4 + 1;
    iVar4 = iVar4 + 1;
    uVar7 = (uint)pbVar1[iVar8] << (uVar3 & 0x3f) | uVar7;
    uVar3 = uVar3 + 8;
  }
  iVar4 = uVar7 + iVar5 * -2;
  if (param_2 != (uint *)0x0) {
    uVar3 = 0;
    iVar8 = 0;
    uVar7 = 0;
    for (iVar9 = iVar5; iVar9 != 0; iVar9 = iVar9 + -1) {
      iVar2 = iVar8 + iVar4;
      iVar8 = iVar8 + 1;
      uVar3 = (uint)pbVar1[iVar2] << (uVar7 & 0x3f) | uVar3;
      uVar7 = uVar7 + 8;
    }
    *param_2 = uVar3;
  }
  iVar4 = iVar5 + iVar4;
  if (param_3 == (uint *)0x0) {
    return;
  }
  uVar3 = 0;
  iVar8 = 0;
  uVar7 = 0;
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    iVar9 = iVar8 + iVar4;
    iVar8 = iVar8 + 1;
    uVar3 = (uint)pbVar1[iVar9] << (uVar7 & 0x3f) | uVar3;
    uVar7 = uVar7 + 8;
  }
  *param_3 = uVar3;
  return;
}

