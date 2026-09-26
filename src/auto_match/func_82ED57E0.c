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


void fn_82ED57E0(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  if (((param_2 != 0) && (0 < *(int *)(param_2 + 4))) && (0 < *(int *)(param_2 + 8))) {
    *(int *)(param_1 + 0x4aa8) = param_2;
  }
  if (((param_3 != 0) && (0 < *(int *)(param_3 + 4))) && (0 < *(int *)(param_3 + 8))) {
    puVar3 = (undefined4 *)(param_1 + 0x4aa8);
    puVar4 = (undefined4 *)(param_3 + -4);
    lVar5 = 10;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (((param_4 != 0) && (0 < *(int *)(param_4 + 4))) && (0 < *(int *)(param_4 + 8))) {
    *(int *)(param_1 + 0x4afc) = param_4;
  }
  if ((*(int *)(param_1 + 0x77a0) == 0) && (*(int *)(param_1 + 0x77a4) == 0)) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  if (*(int *)(param_4 + 4) < 1) {
    return;
  }
  if (*(int *)(param_4 + 8) < 1) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (*(int *)(param_3 + 4) < 1) {
    return;
  }
  if (*(int *)(param_3 + 8) < 1) {
    return;
  }
  puVar4 = (undefined4 *)(param_4 + -4);
  puVar3 = (undefined4 *)(param_1 + 0x4ad0);
  lVar5 = 10;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar1 = *(ushort *)(param_1 + 0x4aba);
  *(undefined4 *)(param_1 + 0x4ad4) = *(undefined4 *)(param_1 + 0x4aac);
  *(int *)(param_1 + 0x4ae4) = *(int *)(param_1 + 0x4abc);
  *(ushort *)(param_1 + 0x4ae2) = uVar1;
  if (*(int *)(param_1 + 0x4abc) == 0) {
    *(int *)(param_1 + 0x4ae8) =
         ((int)(*(int *)(param_1 + 0x4ad8) * (uint)uVar1 + 0x1f & 0xffffffe0) >> 3) *
         *(int *)(param_1 + 0x4adc);
    return;
  }
  uVar2 = *(int *)(param_1 + 0x4adc) * *(int *)(param_1 + 0x4ad8) * (uint)uVar1;
  *(uint *)(param_1 + 0x4ae8) = ((int)uVar2 >> 3) + (uint)((int)uVar2 < 0 && (uVar2 & 7) != 0);
  return;
}

