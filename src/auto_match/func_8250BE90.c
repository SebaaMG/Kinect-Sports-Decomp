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


void fn_8250BE90(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  iVar1 = param_2;
  while( true ) {
    iVar2 = (iVar1 + 1) * 2;
    if (param_3 <= iVar2) break;
    iVar3 = (iVar1 + 1) * 0x28 + param_1;
    if (*(float *)(iVar3 + 8) < *(float *)(iVar3 + -0xc)) {
      iVar2 = iVar2 + -1;
    }
    puVar4 = (undefined4 *)(iVar2 * 0x14 + param_1 + -4);
    puVar6 = (undefined4 *)(iVar1 * 0x14 + param_1 + -4);
    lVar7 = 5;
    do {
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar4;
      lVar7 = lVar7 + -1;
      iVar1 = iVar2;
    } while (lVar7 != 0);
  }
  if (iVar2 == param_3) {
    puVar4 = (undefined4 *)(param_3 * 0x14 + param_1 + -0x18);
    puVar6 = (undefined4 *)(iVar1 * 0x14 + param_1 + -4);
    lVar7 = 5;
    do {
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    iVar1 = param_3 + -1;
  }
  while( true ) {
    uVar5 = iVar1 - 1;
    iVar2 = ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0);
    if ((iVar1 <= param_2) ||
       (iVar3 = iVar2 * 0x14 + param_1, *(float *)(param_4 + 8) <= *(float *)(iVar3 + 8))) break;
    puVar4 = (undefined4 *)(iVar3 + -4);
    puVar6 = (undefined4 *)(iVar1 * 0x14 + param_1 + -4);
    lVar7 = 5;
    do {
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar4;
      lVar7 = lVar7 + -1;
      iVar1 = iVar2;
    } while (lVar7 != 0);
  }
  puVar4 = (undefined4 *)(param_4 + -4);
  puVar6 = (undefined4 *)(iVar1 * 0x14 + param_1 + -4);
  lVar7 = 5;
  do {
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
    *puVar6 = *puVar4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

