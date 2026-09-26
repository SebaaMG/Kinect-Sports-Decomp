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


longlong fn_82A3CF30(int param_1,uint param_2,int param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  lVar1 = 0;
  if (param_4 <= param_2) {
    return lVar1;
  }
  iVar2 = param_4 - param_2;
  param_3 = param_3 << 2;
  do {
    if ((1 << (param_2 & 7) & (uint)*(byte *)((param_2 >> 3) + *(int *)(param_1 + 0x2c))) == 0) {
      lVar1 = lVar1 + 1;
      iVar4 = (*(byte *)(*(int *)(param_1 + 0x28) + param_2) + 0x1474) * 2;
      *(short *)(iVar4 + param_1) = *(short *)(iVar4 + param_1) + 1;
    }
    else {
      uVar3 = *(uint *)(*(int *)(param_1 + 0x24) + param_3);
      if (*(byte *)(*(int *)(param_1 + 0x28) + param_2) < 7) {
        if (uVar3 < 0x400) {
          uVar3 = (uint)*(byte *)(uVar3 + param_1 + 0x454);
        }
        else if (uVar3 < 0x80000) {
          uVar3 = *(byte *)((uVar3 >> 9) + param_1 + 0x454) + 0x12;
        }
        else {
          uVar3 = (uVar3 >> 0x11 & 0xff) + 0x22;
        }
        iVar4 = (uint)*(byte *)(*(int *)(param_1 + 0x28) + param_2) + uVar3 * 8 + 0x1574;
      }
      else {
        if (uVar3 < 0x400) {
          uVar3 = (uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x24) + param_3) + param_1 + 0x454);
        }
        else if (uVar3 < 0x80000) {
          uVar3 = *(byte *)((uVar3 >> 9) + param_1 + 0x454) + 0x12;
        }
        else {
          uVar3 = (uVar3 >> 0x11 & 0xff) + 0x22;
        }
        iVar4 = uVar3 * 0x10 + param_1;
        *(short *)(iVar4 + 0x2af6) = *(short *)(iVar4 + 0x2af6) + 1;
        iVar4 = *(byte *)(*(int *)(param_1 + 0x28) + param_2) + 0x1e00;
      }
      param_3 = param_3 + 4;
      *(short *)(iVar4 * 2 + param_1) = *(short *)(iVar4 * 2 + param_1) + 1;
      lVar1 = (ulonglong)*(byte *)(*(int *)(param_1 + 0x28) + param_2) + lVar1 + 2;
    }
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return lVar1;
}

