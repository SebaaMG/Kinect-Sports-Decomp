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
extern int fn_82CFBB08();
extern U64 storeWordConditionalIndexed();


undefined8
fn_83089070(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4,
             undefined8 param_5)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 in_MSR;
  char in_RESERVE;
  
  bVar1 = *param_3;
  puVar2 = *(uint **)(param_3 + 0x14);
  if (bVar1 < 6) {
    if (bVar1 == 0) {
      uVar3 = *puVar2;
      *puVar2 = (uint)((ulonglong)uVar3 - 1);
      if ((ulonglong)uVar3 - 1 != 0) {
        return 1;
      }
      puVar2 = *(uint **)(param_3 + 0x1c);
      if ((ZEXT48(puVar2) != 0) && (param_5 = in_MSR, in_RESERVE != '\0')) {
        uVar3 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,ZEXT48(puVar2));
        *puVar2 = uVar3;
      }
    }
    else if (bVar1 == 1) {
      uVar3 = *puVar2;
      *puVar2 = (uint)((ulonglong)uVar3 - 1);
      if ((ulonglong)uVar3 - 1 != 0) {
        return 1;
      }
      puVar2 = *(uint **)(param_3 + 0x1c);
      if ((ZEXT48(puVar2) != 0) && (param_5 = in_MSR, in_RESERVE != '\0')) {
        uVar3 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,ZEXT48(puVar2));
        *puVar2 = uVar3;
      }
    }
    else if (bVar1 == 2) {
      lVar4 = (ulonglong)*(uint *)(param_3 + 0x38) + (ulonglong)*puVar2 + -1000000;
      *puVar2 = (uint)lVar4;
      if (lVar4 != 0) {
        return 1;
      }
      puVar2 = *(uint **)(param_3 + 0x1c);
      if ((ZEXT48(puVar2) != 0) && (param_5 = in_MSR, in_RESERVE != '\0')) {
        uVar3 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,ZEXT48(puVar2));
        *puVar2 = uVar3;
      }
    }
    else if (bVar1 == 3) {
      uVar3 = *puVar2;
      *puVar2 = (uint)((ulonglong)uVar3 - 1);
      if ((ulonglong)uVar3 - 1 != 0) {
        return 1;
      }
      puVar2 = *(uint **)(param_3 + 0x1c);
      if ((ZEXT48(puVar2) != 0) && (param_5 = in_MSR, in_RESERVE != '\0')) {
        uVar3 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,ZEXT48(puVar2));
        *puVar2 = uVar3;
      }
    }
    else if (bVar1 == 4) {
      uVar3 = *puVar2;
      *puVar2 = (uint)((ulonglong)uVar3 - 1);
      if ((ulonglong)uVar3 - 1 != 0) {
        return 1;
      }
      puVar2 = *(uint **)(param_3 + 0x1c);
      if ((ZEXT48(puVar2) != 0) && (param_5 = in_MSR, in_RESERVE != '\0')) {
        uVar3 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,ZEXT48(puVar2));
        *puVar2 = uVar3;
      }
    }
    else {
      uVar3 = *puVar2;
      *puVar2 = (uint)((ulonglong)uVar3 - 1);
      if ((ulonglong)uVar3 - 1 != 0) {
        return 1;
      }
      puVar2 = *(uint **)(param_3 + 0x1c);
      if ((ZEXT48(puVar2) != 0) && (param_5 = in_MSR, in_RESERVE != '\0')) {
        uVar3 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,ZEXT48(puVar2));
        *puVar2 = uVar3;
      }
    }
    if (*(int *)(param_3 + 0x10) != 0) {
      fn_82CFBB08(*(int *)(param_3 + 0x10),1,param_3,param_4,param_5);
    }
  }
  return 1;
}

