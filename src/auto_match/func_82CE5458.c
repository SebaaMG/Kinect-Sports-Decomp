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
#define ZEXT48(x) ((U64)((U32)(x)))


void fn_82CE5458(undefined1 *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piVar5;
  
  iVar1 = *param_2;
  uVar2 = 0xffffffff82131f88;
  if (0x3c23d709 < iVar1) {
    uVar4 = 0xffffffff82132388;
    if (iVar1 < 0x4358ccce) {
      uVar4 = 0xffffffff82132188;
    }
    else {
      uVar2 = 0xffffffff82132188;
    }
    uVar3 = ((uVar4 & 0xffffffff) >> 1) + ((uVar2 & 0xffffffff) >> 1);
    if (*(int *)uVar3 < iVar1) {
      uVar2 = uVar3;
      uVar3 = uVar4;
    }
    uVar4 = ((uVar3 & 0xffffffff) >> 1) + ((uVar2 & 0xffffffff) >> 1);
    if (*(int *)uVar4 < iVar1) {
      uVar2 = uVar4;
      uVar4 = uVar3;
    }
    uVar3 = ((uVar4 & 0xffffffff) >> 1) + ((uVar2 & 0xffffffff) >> 1);
    if (*(int *)uVar3 < iVar1) {
      uVar2 = uVar3;
      uVar3 = uVar4;
    }
    uVar4 = ((uVar3 & 0xffffffff) >> 1) + ((uVar2 & 0xffffffff) >> 1);
    if (*(int *)uVar4 < iVar1) {
      uVar2 = uVar4;
      uVar4 = uVar3;
    }
    uVar3 = ((uVar4 & 0xffffffff) >> 1) + ((uVar2 & 0xffffffff) >> 1);
    if (*(int *)uVar3 < iVar1) {
      uVar2 = uVar3;
      uVar3 = uVar4;
    }
    uVar4 = ((uVar3 & 0xffffffff) >> 1) + ((uVar2 & 0xffffffff) >> 1);
    if (*(int *)uVar4 < iVar1) {
      uVar2 = uVar4;
      uVar4 = uVar3;
    }
    uVar2 = ((uVar4 & 0xffffffff) >> 1) + ((uVar2 & 0xffffffff) >> 1);
    piVar5 = (int *)uVar2;
    if ((*piVar5 < iVar1) && (uVar2 < ZEXT48("It$ "))) {
      piVar5 = piVar5 + 1;
    }
    *param_1 = (char)((int)(piVar5 + 0x1f7b381e) >> 2);
    return;
  }
  *param_1 = 0;
  return;
}

