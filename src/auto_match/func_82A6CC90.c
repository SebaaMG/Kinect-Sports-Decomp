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


ulonglong fn_82A6CC90(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x30) + (ulonglong)*(uint *)(param_1 + 0x28);
  iVar1 = **(int **)(param_1 + 8);
  if (*(int *)(iVar1 + 0x3c) < 3) {
    if (*(int *)(iVar1 + 0xd4) == 0) {
      uVar4 = 0;
      goto code_r0x82a6ccf4;
    }
    uVar4 = (ulonglong)*(uint *)(iVar1 + 8) + 0xb;
  }
  else if (*(int *)(iVar1 + 0x25c) == 0) {
    uVar4 = (ulonglong)*(uint *)(iVar1 + 8) + 6;
  }
  else {
    uVar4 = (ulonglong)*(uint *)(iVar1 + 8) + 0x11;
  }
  uVar4 = uVar4 & 0xff;
code_r0x82a6ccf4:
  lVar3 = uVar4 + (ulonglong)(uint)((int)uVar4 >> 3) * -8;
  if (lVar3 == 0) {
    return uVar2;
  }
  if ((ulonglong)*(uint *)(param_1 + 0x1c) <=
      (((ulonglong)*(uint *)(param_1 + 0x14) - (ulonglong)*(uint *)(param_1 + 0x50)) +
       (ulonglong)*(uint *)(param_1 + 0x18) & 0xffffffff)) {
    return uVar2;
  }
  uVar4 = lVar3 + uVar2;
  if ((uVar4 & 0xffffffff) <
      ((((ulonglong)*(uint *)(param_1 + 0x1c) - (ulonglong)*(uint *)(param_1 + 0x14)) -
       (ulonglong)*(uint *)(param_1 + 0x18)) + (ulonglong)*(uint *)(param_1 + 0x50) & 0x1fffffff) <<
      3) {
    return uVar2;
  }
  return uVar4;
}

