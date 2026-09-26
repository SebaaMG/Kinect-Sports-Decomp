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


void fn_82B4B1D8(int param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar3;
  ulonglong uVar2;
  
  if ((param_2 & 0xffffffff) == 0) {
    return;
  }
  do {
    if (*(int *)(param_1 + 8) == 0) {
      uVar1 = *(uint *)(*(uint *)(param_1 + 4) & 0xfffffffe);
      if ((uVar1 & 1) == 0) {
        iVar3 = (uVar1 & 0xfffffffe) - 4;
      }
      else {
        iVar3 = 0;
      }
      *(int *)(param_1 + 4) = iVar3;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar3 + 8);
    }
    uVar1 = *(uint *)(param_1 + 8);
    uVar2 = param_2;
    if ((ulonglong)uVar1 <= (param_2 & 0xffffffff)) {
      uVar2 = (ulonglong)uVar1;
    }
    param_2 = param_2 - uVar2;
    *(uint *)(param_1 + 8) = uVar1 - (int)uVar2;
  } while (param_2 != 0);
  return;
}

