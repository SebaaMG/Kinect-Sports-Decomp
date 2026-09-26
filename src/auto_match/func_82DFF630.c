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


longlong fn_82DFF630(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar3 = 0;
    do {
      lVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + iVar3) + 0x3c) + 0x30))();
      iVar4 = iVar4 + 1;
      lVar2 = lVar1 + lVar2;
      iVar3 = iVar3 + 4;
    } while (iVar4 < *(int *)(param_1 + 0xc));
  }
  return lVar2;
}

