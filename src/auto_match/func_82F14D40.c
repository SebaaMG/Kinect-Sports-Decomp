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


void fn_82F14D40(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0xc) < 1) {
    return;
  }
  piVar3 = (int *)(param_1 + 0x28);
  do {
    iVar1 = *piVar3;
    if ((*(int *)(iVar1 + 0x34) != 0) || (*(int *)(*(int *)(iVar1 + 0x48) + 8) != 0)) {
      *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x28);
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < *(int *)(param_1 + 0xc));
  return;
}

