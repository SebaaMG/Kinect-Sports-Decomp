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
extern int fn_8265C990();
extern int fn_82A1BB18();
extern U64 storeWordConditionalIndexed();


undefined8 fn_82F61DC0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint *puVar7;
  char in_RESERVE;
  byte in_cr0;
  
  uVar5 = 0;
  uVar3 = fn_82A1BB18();
  do {
    puVar4 = (uint *)param_1;
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,param_1);
        *puVar4 = uVar2;
        in_cr0 = 2;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar3,0,param_1);
      *puVar4 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  sync(1);
  if (uVar1 == 0) {
    lVar6 = param_1 + 4;
    do {
      puVar7 = (uint *)lVar6;
      uVar1 = *puVar7;
      if (uVar1 != 0) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar6);
          *puVar7 = uVar2;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar3,0,lVar6);
        *puVar7 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    sync(1);
    if (uVar1 == 0) {
      if (puVar4[0x14] != 0) {
        fn_8265C990(puVar4[0x14],puVar4[0xb]);
        puVar4[0x14] = 0;
      }
      puVar4[2] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[3] = 0;
      sync(1);
      do {
        if (*puVar7 != (uint)uVar3) {
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed((ulonglong)*puVar7,0,lVar6);
            *puVar7 = uVar1;
            in_cr0 = 2;
          }
          break;
        }
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(0,0,lVar6);
          *puVar7 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    else {
      uVar5 = 0xffffffff82240401;
    }
    sync(1);
    do {
      if (*puVar4 != (uint)uVar3) {
        if (in_RESERVE == '\0') {
          return uVar5;
        }
        uVar1 = storeWordConditionalIndexed((ulonglong)*puVar4,0,param_1);
        *puVar4 = uVar1;
        return uVar5;
      }
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(0,0,param_1);
        *puVar4 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  else {
    uVar5 = 0xffffffff82240400;
  }
  return uVar5;
}

