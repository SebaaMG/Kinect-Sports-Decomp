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


void fn_82BB1D38(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x820) = 0xffffffff;
  uVar3 = *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + 0x550) + 4);
  uVar2 = (ulonglong)uVar3;
  if ((int)uVar3 < 1) {
    return;
  }
  do {
    if ((*(uint *)(((uVar1 >> 5) + 2) * 4 + *(int *)(param_1 + 0x858)) >> (uVar1 & 0x1f) & 1) == 0)
    {
      uVar3 = *(uint *)(param_1 + 0x820);
      if ((int)*(uint *)(param_1 + 0x820) < (int)uVar1) {
        uVar3 = uVar1;
      }
      *(uint *)(param_1 + 0x820) = uVar3;
    }
    uVar1 = uVar1 + 1;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}

