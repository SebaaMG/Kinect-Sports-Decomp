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


longlong fn_82F116E8(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar4;
  
  iVar7 = *(int *)(param_1 + 0x1e5c) + 4;
  iVar8 = iVar7;
  if ((param_4 != 0) && (*(int *)(*(int *)(param_1 + 0x8d8) + param_4 * 4) == 0)) {
    iVar8 = param_2 + *(int *)(param_1 + 0x2d0) * -0x114 + 4;
  }
  iVar6 = iVar7;
  if (param_3 != 0) {
    iVar6 = param_2 + -0x110;
  }
  if (((param_4 != 0) && (*(int *)(*(int *)(param_1 + 0x8d8) + param_4 * 4) == 0)) && (param_3 != 0)
     ) {
    iVar7 = param_2 + *(int *)(param_1 + 0x2d0) * -0x114 + -0x110;
  }
  uVar1 = *(uint *)(iVar8 + 8);
  uVar5 = uVar1;
  if (*(uint *)(iVar7 + 0xc) == uVar1) {
    uVar5 = *(uint *)(iVar6 + 4);
  }
  uVar2 = *(uint *)(iVar8 + 0xc);
  if (uVar1 == uVar2) {
    uVar2 = *(uint *)(param_2 + 4);
  }
  uVar1 = *(uint *)(param_2 + 4);
  uVar4 = uVar1;
  if (*(uint *)(iVar6 + 4) == uVar1) {
    uVar4 = *(uint *)(iVar6 + 0xc);
  }
  uVar3 = *(uint *)(param_2 + 8);
  if (uVar1 == uVar3) {
    uVar3 = *(uint *)(param_2 + 0xc);
  }
  return ((((((((ulonglong)uVar5 & 0x7fffffff) << 1 | (ulonglong)uVar2) & 0x7fffffff) << 1 |
            (ulonglong)uVar4) & 0x7fffffff) << 1 | (ulonglong)uVar3) & 0x3fffffff) << 2;
}

