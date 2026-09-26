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
extern U64 storeWordConditionalIndexed();


void fn_8228E658(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar7;
  longlong lVar6;
  char in_RESERVE;
  byte in_cr0;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  if ((ulonglong)uVar1 != 0) {
    lVar5 = (ulonglong)uVar1 + 8;
    do {
      puVar7 = (uint *)lVar5;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((ulonglong)*puVar7 + 1,0,lVar5);
        *puVar7 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  piVar3 = (int *)param_1[1];
  if (ZEXT48(piVar3) != 0) {
    lVar5 = ZEXT48(piVar3) + 8;
    do {
      puVar7 = (uint *)lVar5;
      lVar6 = (ulonglong)*puVar7 - 1;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(lVar6,0,lVar5);
        *puVar7 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar6 == 0) {
      (**(code **)(*piVar3 + 4))();
    }
  }
  param_1[1] = uVar1;
  *param_1 = uVar2;
  return;
}

