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
extern int fn_8259C7E8();
extern int fn_82A1E810();
extern U64 storeWordConditionalIndexed();


void fn_8259C738(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  longlong lVar6;
  char in_RESERVE;
  byte in_cr0;
  
  do {
    puVar5 = (uint *)(param_1 + 4);
    lVar6 = (ulonglong)*puVar5 - 1;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(lVar6,0,param_1 + 4);
      *puVar5 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (lVar6 == 0) {
    sync(1);
    bVar4 = false;
    do {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0,0,param_1);
        *(undefined4 *)param_1 = uVar2;
        bVar4 = true;
      }
    } while (!bVar4);
    sync(1);
    do {
      puVar5 = (uint *)(param_1 + 0xc);
      uVar1 = *puVar5;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)uVar1,0,param_1 + 0xc);
        *puVar5 = uVar3;
        bVar4 = true;
      }
    } while (!bVar4);
    if (0 < (int)uVar1) {
      fn_8259C7E8();
      fn_82A1E810();
    }
  }
  return;
}

