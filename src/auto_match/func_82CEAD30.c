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


ulonglong fn_82CEAD30(int param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x14);
  for (iVar2 = *(int *)(param_1 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    uVar1 = *(uint *)(iVar2 + 0x14) + uVar1;
  }
  uVar1 = param_2 - uVar1;
  iVar2 = param_1;
  do {
    uVar1 = *(uint *)(iVar2 + 0x14) + uVar1;
    if (-1 < (longlong)uVar1) {
      return (uVar1 + (uVar1 & 0x3fffffff) * 4 & 0x3fffffff) * 4 +
             (ulonglong)*(uint *)(iVar2 + 0x10);
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while (iVar2 != 0);
  return (ulonglong)*(uint *)(param_1 + 0x10);
}

