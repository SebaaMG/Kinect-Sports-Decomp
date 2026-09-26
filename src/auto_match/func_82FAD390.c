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


void fn_82FAD390(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 4);
  iVar1 = -*(int *)(*(int *)(param_1 + 4) + 8);
  if (iVar3 == 0) {
    return;
  }
  do {
    iVar4 = *(int *)(iVar3 + 0xc) + iVar4;
    iVar2 = -(*(int *)(iVar3 + 8) + iVar4);
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    iVar3 = *(int *)(iVar3 + 4);
  } while (iVar3 != 0);
  return;
}

