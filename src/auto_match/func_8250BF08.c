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


void fn_8250BF08(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int in_r11;
  byte in_cr6;
  longlong lVar6;
  
  while ((bool)(in_cr6 >> 3 & 1)) {
    iVar1 = in_r11 * 0x14 + param_1;
    iVar5 = in_r11;
    if (*(float *)(iVar1 + 8) < *(float *)(iVar1 + -0xc)) {
      iVar5 = in_r11 + -1;
    }
    puVar3 = (undefined4 *)(iVar5 * 0x14 + param_1 + -4);
    puVar2 = (undefined4 *)(param_2 * 0x14 + param_1 + -4);
    lVar6 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    in_r11 = (iVar5 + 1) * 2;
    param_2 = iVar5;
    in_cr6 = (in_r11 < param_3) << 3 | (in_r11 == param_3) << 1;
  }
  if ((bool)(in_cr6 >> 1 & 1)) {
    puVar3 = (undefined4 *)(param_3 * 0x14 + param_1 + -0x18);
    puVar2 = (undefined4 *)(param_2 * 0x14 + param_1 + -4);
    lVar6 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    param_2 = param_3 + -1;
  }
  while( true ) {
    uVar4 = param_2 - 1;
    iVar1 = ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0);
    if ((param_2 <= param_5) ||
       (iVar5 = iVar1 * 0x14 + param_1, *(float *)(param_4 + 8) <= *(float *)(iVar5 + 8))) break;
    puVar3 = (undefined4 *)(iVar5 + -4);
    puVar2 = (undefined4 *)(param_2 * 0x14 + param_1 + -4);
    lVar6 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar6 = lVar6 + -1;
      param_2 = iVar1;
    } while (lVar6 != 0);
  }
  puVar3 = (undefined4 *)(param_4 + -4);
  puVar2 = (undefined4 *)(param_2 * 0x14 + param_1 + -4);
  lVar6 = 5;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

