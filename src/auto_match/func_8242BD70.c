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


void fn_8242BD70(int param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x174);
  if (*(int *)(*(int *)(iVar1 + 0x5c) + 0x1d4) == -1) {
    return;
  }
  piVar2 = *(int **)(*(int *)(*(int *)(iVar1 + 0x5c) + 0x1d4) * 4 +
                    *(int *)(*(int *)(iVar1 + 0x5c) + 0x1c4));
  if (piVar2 == (int *)0x0) {
    return;
  }
  if ((*(int *)(iVar1 + 0x34) == *(int *)(iVar1 + 0x30)) ||
     (bVar3 = true, *(int *)(iVar1 + 0x34) == 0)) {
    bVar3 = false;
  }
  if (bVar3) {
    return;
  }
  if (*(int *)(iVar1 + 0x30) != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8242bde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x30))();
  return;
}

