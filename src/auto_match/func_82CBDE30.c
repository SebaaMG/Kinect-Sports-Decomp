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


void fn_82CBDE30(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = *(int *)(param_1 + 0x114) + 0xe;
  iVar7 = iVar5;
  if ((param_4 != 0) && (*(int *)(*(int *)(param_1 + 0x55d0) + param_4 * 4) == 0)) {
    iVar7 = param_2 + (*(int *)(param_1 + 0x88) * 3 & 0x1fffffffU) * -8 + 0xe;
  }
  iVar8 = iVar5;
  if (param_3 != 0) {
    iVar8 = param_2 + -10;
  }
  if (((param_4 != 0) && (*(int *)(*(int *)(param_1 + 0x55d0) + param_4 * 4) == 0)) &&
     (param_3 != 0)) {
    iVar5 = param_2 + (*(int *)(param_1 + 0x88) * 3 & 0x1fffffffU) * -8 + -10;
  }
  uVar1 = *(uint *)(param_2 + 0xe);
  uVar6 = (ulonglong)*(byte *)(iVar7 + 2);
  uVar2 = uVar6;
  if (*(byte *)(iVar5 + 3) == uVar6) {
    uVar2 = (ulonglong)*(byte *)(iVar8 + 1);
  }
  uVar2 = uVar1 >> 0x18 ^ uVar2;
  uVar3 = uVar2;
  if (uVar6 != *(byte *)(iVar7 + 3)) {
    uVar3 = (ulonglong)*(byte *)(iVar7 + 3);
  }
  uVar3 = (ulonglong)(uVar1 >> 0x10) & 0xff ^ uVar3;
  uVar6 = uVar2;
  if (*(byte *)(iVar8 + 1) == uVar2) {
    uVar6 = (ulonglong)*(byte *)(iVar8 + 3);
  }
  uVar6 = (ulonglong)(uVar1 >> 8) & 0xff ^ uVar6;
  uVar4 = (uint)uVar6;
  if (uVar2 != uVar3) {
    uVar4 = (uint)uVar3;
  }
  *(uint *)(param_2 + 0xe) = (uint)(((uVar2 << 8 | uVar3) << 8 | uVar6) << 8) | uVar4 ^ uVar1 & 0xff
  ;
  return;
}

