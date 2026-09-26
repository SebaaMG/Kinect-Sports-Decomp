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


int fn_82DDDFE0(int param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar5 = param_1 + 0xf70;
  lVar3 = (ulonglong)*(uint *)(param_1 + 0x10) - 2;
  fVar1 = *(float *)(param_1 + 0xfb0);
  if ((int)lVar3 < 0) {
    return iVar5;
  }
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x10) - 1;
  iVar2 = iVar5;
  if (3 < (int)uVar4) {
    uVar6 = (uVar4 & 0xffffffff) >> 2;
    lVar3 = lVar3 - (uVar4 & 0xfffffffc);
    do {
      if (*(float *)(iVar5 + 0x90) < fVar1) {
        iVar2 = iVar5 + 0x50;
        fVar1 = *(float *)(iVar5 + 0x90);
      }
      if (*(float *)(iVar5 + 0xe0) < fVar1) {
        iVar2 = iVar5 + 0xa0;
        fVar1 = *(float *)(iVar5 + 0xe0);
      }
      if (*(float *)(iVar5 + 0x130) < fVar1) {
        iVar2 = iVar5 + 0xf0;
        fVar1 = *(float *)(iVar5 + 0x130);
      }
      if (*(float *)(iVar5 + 0x180) < fVar1) {
        iVar2 = iVar5 + 0x140;
        fVar1 = *(float *)(iVar5 + 0x180);
      }
      iVar5 = iVar5 + 0x140;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if ((int)lVar3 < 0) {
    return iVar2;
  }
  lVar3 = lVar3 + 1;
  do {
    if (*(float *)(iVar5 + 0x90) < fVar1) {
      fVar1 = *(float *)(iVar5 + 0x90);
      iVar2 = iVar5 + 0x50;
    }
    lVar3 = lVar3 + -1;
    iVar5 = iVar5 + 0x50;
  } while (lVar3 != 0);
  return iVar2;
}

