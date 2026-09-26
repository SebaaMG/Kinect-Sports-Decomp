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


void fn_82CD4788(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x38e0) = 1;
  *(undefined4 *)(param_1 + 0x38dc) = 0;
  *(undefined4 *)(param_1 + 0x38d8) = 1;
  if (4 < *(uint *)(param_1 + 0x38e0)) {
    *(undefined4 *)(param_1 + 0x38e0) = 4;
  }
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x38e0);
  uVar1 = *(uint *)(param_1 + 0x3894);
  trapWord(6,uVar2,0);
  uVar3 = (uint)(uVar1 / uVar2) & 0xfffffffe;
  *(uint *)(param_1 + 0x54) = uVar3;
  if ((uVar1 / uVar2 & 2) != 0) {
    *(uint *)(param_1 + 0x54) = uVar3 - 2;
  }
  if (uVar2 == 1) {
    *(uint *)(param_1 + 0x54) = uVar1;
  }
  uVar3 = uVar1;
  if (uVar2 != 2) {
    uVar3 = *(int *)(param_1 + 0x54) << 1;
  }
  *(uint *)(param_1 + 0x58) = uVar3;
  if (uVar2 == 4) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x54) * 3;
    return;
  }
  *(uint *)(param_1 + 0x5c) = uVar1;
  return;
}

