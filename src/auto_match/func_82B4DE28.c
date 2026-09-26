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


void fn_82B4DE28(int *param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  if ((((uint *)*param_1)[1] & 1) == 0) {
    iVar3 = (*(uint *)*param_1 & 0xfffffffe) - 4;
  }
  else {
    iVar3 = 0;
  }
  param_1[1] = iVar3;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 8);
  }
  param_1[2] = iVar3;
  if ((param_2 & 0xffffffff) == 0) {
    return;
  }
  do {
    if (param_1[2] == 0) {
      if ((*(uint *)(param_1[1] & 0xfffffffe) & 1) == 0) {
        iVar3 = (*(uint *)(param_1[1] & 0xfffffffe) & 0xfffffffe) - 4;
      }
      else {
        iVar3 = 0;
      }
      param_1[1] = iVar3;
      param_1[2] = *(int *)(iVar3 + 8);
    }
    uVar1 = param_1[2];
    uVar2 = param_2;
    if ((ulonglong)uVar1 <= (param_2 & 0xffffffff)) {
      uVar2 = (ulonglong)uVar1;
    }
    param_2 = param_2 - uVar2;
    param_1[2] = uVar1 - (int)uVar2;
  } while (param_2 != 0);
  return;
}

