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


void fn_82C0BEA8(longlong param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  char in_RESERVE;
  byte in_cr0;
  
  iVar1 = (int)param_1;
  uVar3 = *(int *)(iVar1 + 0x3c) + 1;
  *(uint *)(iVar1 + 0x3c) = uVar3;
  if (*(uint *)(iVar1 + 0x34) <= uVar3) {
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    do {
      puVar2 = (uint *)(param_1 + 0x44);
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,param_1 + 0x44);
        *puVar2 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    return;
  }
  do {
    puVar2 = (uint *)(param_1 + 0x44);
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,param_1 + 0x44);
      *puVar2 = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  return;
}

