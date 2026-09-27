typedef unsigned char undefined1, byte, undefined, bool;
#define true 1
#define false 0
typedef unsigned short undefined2, ushort, word;
typedef unsigned int undefined4, uint, dword, ulong;
typedef unsigned __int64 undefined8, ulonglong, qword;
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


ulonglong fn_825B61D0(int param_1,short param_2)

{
  int iVar1;
  ulonglong uVar2;

  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 8);
  if ((iVar1 == 0) || (uVar2 = (ulonglong)*(byte *)(param_2 + iVar1), uVar2 == 0xff)) {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}
