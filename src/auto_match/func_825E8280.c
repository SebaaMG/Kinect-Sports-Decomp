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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_8259C7E8();
extern int fn_82A1E810();
extern U64 storeWordConditionalIndexed();


void fn_825E8280(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  char in_RESERVE;
  byte in_cr0;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  uVar6 = ZEXT48(puVar1);
  do {
    puVar7 = (uint *)(uVar6 + 4);
    lVar8 = (ulonglong)*puVar7 - 1;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(lVar8,0,uVar6 + 4);
      *puVar7 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (lVar8 == 0) {
    sync(1);
    bVar5 = false;
    do {
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(0,0,uVar6);
        *puVar1 = uVar3;
        bVar5 = true;
      }
    } while (!bVar5);
    sync(1);
    do {
      puVar7 = (uint *)(uVar6 + 0xc);
      uVar2 = *puVar7;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((ulonglong)uVar2,0,uVar6 + 0xc);
        *puVar7 = uVar4;
        bVar5 = true;
      }
    } while (!bVar5);
    if (0 < (int)uVar2) {
      fn_8259C7E8();
      fn_82A1E810();
    }
  }
  return;
}

