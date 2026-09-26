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


void fn_82A2C4A8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  
  do {
    lVar4 = (ulonglong)*(uint *)(param_1 + 0x10) - 1;
    *(int *)(param_1 + 0x10) = (int)lVar4;
    if (lVar4 != 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x48);
      piVar3 = *(int **)(param_1 + 0x4c);
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc) = 0;
    }
    ExFreePool();
    param_1 = iVar1;
  } while (iVar1 != 0);
  return;
}

