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
extern int fn_82270B70();


void fn_82270110(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = fn_82270B70();
  piVar1 = *(int **)(iVar3 + 0x5c);
  for (iVar3 = *piVar1; iVar3 != piVar1[1]; iVar3 = iVar3 + 0x30) {
    iVar2 = *(int *)(iVar3 + 0x24);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x54c) == 0)) && (*(int *)(iVar2 + 0x548) == 0)) {
      *(undefined4 *)(iVar2 + 0x10c) = param_1;
    }
  }
  return;
}

