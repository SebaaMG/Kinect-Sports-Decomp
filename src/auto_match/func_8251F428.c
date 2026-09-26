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


void fn_8251F428(undefined8 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  
  piVar1 = *(int **)(param_2 + 4);
  uVar3 = ZEXT48(piVar1);
  if (uVar3 == 0) {
    return;
  }
  do {
    puVar5 = (uint *)(uVar3 + 4);
    lVar4 = (ulonglong)*puVar5 - 1;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(lVar4,0,uVar3 + 4);
      *puVar5 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if ((int)lVar4 == 0) {
    (**(code **)*piVar1)(uVar3);
    do {
      puVar5 = (uint *)(uVar3 + 8);
      lVar4 = (ulonglong)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(lVar4,0,uVar3 + 8);
        *puVar5 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar4 == 0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
  }
  return;
}

