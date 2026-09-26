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
extern int fn_82A1E658();
extern int fn_82A1E810();
extern U64 storeWordConditionalIndexed();


void fn_8281F2F0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char in_RESERVE;
  byte in_cr0;
  
  uVar2 = *(uint *)((int)param_1 + 8);
  uVar6 = (ulonglong)uVar2;
  lVar4 = param_1 + 8;
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      puVar5 = (uint *)lVar4;
      uVar1 = *puVar5;
      if (uVar1 != uVar2) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar4);
          *puVar5 = uVar2;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(0,0,lVar4);
        *puVar5 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    uVar7 = -(ulonglong)(uVar6 == uVar1) & uVar6;
  }
  sync(1);
  param_1 = param_1 + 4;
  do {
    puVar5 = (uint *)param_1;
    uVar2 = *puVar5;
    if (uVar2 != 0) {
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((ulonglong)uVar2,0,param_1);
        *puVar5 = uVar1;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(1,0,param_1);
      *puVar5 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar2 == 0) {
    if (uVar7 == 0) {
      return;
    }
    fn_82A1E810(uVar7);
  }
  if (uVar7 != 0) {
    fn_82A1E658(uVar7);
  }
  return;
}

