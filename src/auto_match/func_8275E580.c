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


void fn_8275E580(byte *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = 0;
  iVar4 = (*param_1 >> 5 & 3) + 1;
  iVar3 = 0;
  uVar2 = 0;
  for (lVar5 = ((ulonglong)(*param_1 >> 3) & 3) + 1; lVar5 != 0; lVar5 = lVar5 + -1) {
    iVar7 = iVar3 + 1;
    iVar3 = iVar3 + 1;
    uVar6 = (uint)param_1[iVar7] << (uVar2 & 0x3f) | uVar6;
    uVar2 = uVar2 + 8;
  }
  iVar3 = uVar6 + iVar4 * -2;
  if (param_2 != (uint *)0x0) {
    uVar2 = 0;
    iVar7 = 0;
    uVar6 = 0;
    for (iVar8 = iVar4; iVar8 != 0; iVar8 = iVar8 + -1) {
      iVar1 = iVar7 + iVar3;
      iVar7 = iVar7 + 1;
      uVar2 = (uint)param_1[iVar1] << (uVar6 & 0x3f) | uVar2;
      uVar6 = uVar6 + 8;
    }
    *param_2 = uVar2;
  }
  iVar3 = iVar4 + iVar3;
  if (param_3 == (uint *)0x0) {
    return;
  }
  uVar2 = 0;
  iVar7 = 0;
  uVar6 = 0;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    iVar8 = iVar7 + iVar3;
    iVar7 = iVar7 + 1;
    uVar2 = (uint)param_1[iVar8] << (uVar6 & 0x3f) | uVar2;
    uVar6 = uVar6 + 8;
  }
  *param_3 = uVar2;
  return;
}

