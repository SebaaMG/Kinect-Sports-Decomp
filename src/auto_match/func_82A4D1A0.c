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
extern U64 storeWordConditionalIndexed();


void fn_82A4D1A0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char in_RESERVE;
  byte in_cr0;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x44) == 0) {
    do {
      puVar4 = (undefined4 *)(param_1 + 0x40);
      uVar1 = *puVar4;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0xffffffffffffffff,0,param_1 + 0x40);
        *puVar4 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    *(undefined4 *)(iVar3 + 0x44) = uVar1;
  }
  puVar4 = *(undefined4 **)(iVar3 + 0x44);
  *puVar4 = *param_2;
  puVar4[1] = param_2[1];
  puVar4[2] = param_2[2];
  *(undefined4 *)(iVar3 + 0x1c) = *param_2;
  *(undefined4 *)(iVar3 + 0x20) = param_2[1];
  *(undefined4 *)(iVar3 + 0x24) = param_2[2];
  return;
}

