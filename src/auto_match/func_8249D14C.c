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


void fn_8249D14C(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r10;
  int iVar3;
  int iVar4;
  int in_r11;
  byte in_cr6;
  longlong lVar5;
  
  while( true ) {
    if ((bool)(in_cr6 >> 1 & 1)) {
      return;
    }
    iVar4 = in_r11 + 0x14;
    if (*(int *)(in_r11 + 0x10) == param_2) break;
    in_cr6 = (iVar4 == in_r10) << 1;
    in_r11 = iVar4;
  }
  iVar3 = *(int *)(param_4 + 4);
  for (; iVar4 != iVar3; iVar4 = iVar4 + 0x14) {
    puVar2 = (undefined4 *)(iVar4 + -4);
    puVar1 = (undefined4 *)(in_r11 + -4);
    lVar5 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar1 = puVar1 + 1;
      *puVar1 = *puVar2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    in_r11 = in_r11 + 0x14;
  }
  iVar3 = *(int *)(param_4 + 4) + -0x14;
  for (iVar4 = iVar3; iVar4 != *(int *)(param_4 + 4); iVar4 = iVar4 + 0x14) {
  }
  *(int *)(param_4 + 4) = iVar3;
  return;
}

