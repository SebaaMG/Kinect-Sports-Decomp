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


void fn_8250BFAC(int param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_r11;
  byte in_xer_ca;
  byte in_cr6;
  longlong lVar6;
  
  while ((iVar1 = param_8 + (uint)in_xer_ca, (bool)(in_cr6 >> 3 & 1) &&
         (iVar2 = iVar1 * 0x14 + param_1, *(float *)(iVar2 + 8) < *(float *)(param_4 + 8)))) {
    puVar3 = (undefined4 *)(iVar2 + -4);
    puVar5 = (undefined4 *)(in_r11 * 0x14 + param_1 + -4);
    lVar6 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
      *puVar5 = *puVar3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uVar4 = iVar1 - 1;
    in_cr6 = (param_5 < iVar1) << 3;
    in_xer_ca = (int)uVar4 < 0 && (uVar4 & 1) != 0;
    param_8 = (int)uVar4 >> 1;
    in_r11 = iVar1;
  }
  puVar3 = (undefined4 *)(param_4 + -4);
  puVar5 = (undefined4 *)(in_r11 * 0x14 + param_1 + -4);
  lVar6 = 5;
  do {
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar3;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

