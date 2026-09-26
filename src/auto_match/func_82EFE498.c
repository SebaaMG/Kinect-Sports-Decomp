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
extern unsigned int lbl_82160708;


double fn_82EFE498(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  double dVar9;
  
  dVar5 = lbl_82160708;
  dVar9 = *(double *)(param_1 + 0x1de0);
  uVar1 = *(uint *)(param_1 + 0x1f04);
  uVar7 = *(int *)(param_1 + 0x1df4) + 1;
  uVar6 = *(int *)(param_1 + 0x1df8) + 1;
  iVar2 = *(int *)(param_1 + 0x1df0);
  iVar3 = *(int *)(param_1 + 0x1dfc);
  uVar4 = *(uint *)(*(int *)(param_1 + 0x1df8) * 4 + iVar2);
  iVar8 = uVar7 - (uVar7 / uVar1) * uVar1;
  *(int *)(param_1 + 0x1df4) = iVar8;
  trapWord(6,(ulonglong)uVar1,0);
  trapWord(6,(ulonglong)uVar1,0);
  iVar8 = iVar8 * 4;
  *(uint *)(param_1 + 0x1df8) = uVar6 - (uVar6 / uVar1) * uVar1;
  *(int *)(param_1 + 0x1dfc) = iVar3 - ((int)(uVar4 << 8 | uVar4 >> 0x18) >> 8);
  *(uint *)(iVar8 + iVar2) = *(uint *)(iVar8 + iVar2) & 0xff000000;
  dVar9 = dVar9 * (double)(longlong)(int)uVar1;
  return ((double)(longlong)(*(int *)(param_1 + 0x2a4) * (iVar3 - (int)dVar9)) / dVar9) * dVar5;
}

