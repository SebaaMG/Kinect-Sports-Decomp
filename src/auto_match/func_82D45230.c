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


longlong fn_82D45230(int param_1)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar6;
  longlong lVar8;
  int iVar9;
  ushort *puVar10;
  ulonglong uVar11;
  int iVar5;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  lVar6 = 0;
  iVar7 = 0;
  lVar4 = 0;
  iVar5 = 0;
  lVar8 = 0;
  uVar11 = 0;
  iVar3 = 0;
  if (1 < iVar1) {
    puVar10 = (ushort *)(*(int *)(param_1 + 0x28) + -2);
    iVar9 = (iVar1 - 2U >> 1) + 1;
    iVar3 = iVar9 * 2;
    do {
      puVar2 = puVar10 + 1;
      puVar10 = puVar10 + 2;
      lVar6 = (ulonglong)*puVar2 + lVar6;
      iVar7 = (int)lVar6;
      lVar4 = (ulonglong)*puVar10 + lVar4;
      iVar5 = (int)lVar4;
      lVar8 = (ulonglong)*puVar10 + (ulonglong)*puVar2 + lVar8 + -4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (iVar3 < iVar1) {
    uVar11 = (ulonglong)*(ushort *)(iVar3 * 2 + *(int *)(param_1 + 0x28));
    lVar8 = uVar11 + lVar8 + -2;
  }
  return (((*(int *)(param_1 + 0x20) - iVar5) - iVar7) - (int)uVar11) / 3 + lVar8;
}

