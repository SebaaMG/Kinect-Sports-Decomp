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
extern int fn_82F68CC0();


void fn_82C74C30(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0xe0);
  lVar6 = (ulonglong)*(uint *)(param_1 + 0xec0) + (ulonglong)*(uint *)(param_1 + 0xdc);
  lVar7 = (ulonglong)*(uint *)(param_1 + 0xef8) + (ulonglong)*(uint *)(param_1 + 0xdc);
  uVar1 = *(uint *)(param_1 + 0xefc);
  lVar10 = *(uint *)(param_1 + 0xec4) + uVar3;
  uVar2 = *(uint *)(param_1 + 0xf00);
  lVar8 = *(uint *)(param_1 + 0xec8) + uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0xeb0) + 0x268) =
       *(undefined4 *)(*(int *)(param_1 + 0xea0) + 0x268);
  lVar11 = uVar1 + uVar3;
  lVar9 = uVar2 + uVar3;
  if ((*(int *)(param_1 + 0x3e5c) == 0) || (*(int *)(param_1 + 0x4fc0) != 0)) {
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 200)) {
      do {
        fn_82F68CC0(lVar11,lVar10,*(undefined4 *)(param_1 + 0xd0));
        uVar1 = *(uint *)(param_1 + 0xd0);
        lVar11 = (ulonglong)uVar1 + lVar11;
        lVar10 = (ulonglong)uVar1 + lVar10;
        fn_82F68CC0(lVar9,lVar8,uVar1);
        lVar9 = (ulonglong)*(uint *)(param_1 + 0xd0) + lVar9;
        lVar8 = (ulonglong)*(uint *)(param_1 + 0xd0) + lVar8;
        fn_82F68CC0(lVar7,lVar6,*(undefined4 *)(param_1 + 0xcc));
        uVar1 = *(uint *)(param_1 + 0xcc);
        lVar7 = (ulonglong)uVar1 + lVar7;
        lVar6 = (ulonglong)uVar1 + lVar6;
        fn_82F68CC0(lVar7,lVar6,uVar1);
        iVar5 = iVar5 + 1;
        lVar7 = (ulonglong)*(uint *)(param_1 + 0xcc) + lVar7;
        lVar6 = (ulonglong)*(uint *)(param_1 + 0xcc) + lVar6;
      } while (iVar5 < *(int *)(param_1 + 200));
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0xeb0);
    iVar4 = *(int *)(iVar5 + 0x250) * 0x44 + iVar5;
    *(int *)(iVar5 + 0x250) = *(int *)(iVar5 + 0x250) + 1;
    *(undefined4 *)(iVar4 + 0x30) = 2;
    *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(param_1 + 0xea0);
    *(undefined4 *)(iVar4 + 0x3c) = *(undefined4 *)(param_1 + 0xcc);
    *(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(param_1 + 0xd0);
    *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(param_1 + 0x8c);
    *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(param_1 + 0xdc);
    *(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(param_1 + 0xe0);
  }
  return;
}

