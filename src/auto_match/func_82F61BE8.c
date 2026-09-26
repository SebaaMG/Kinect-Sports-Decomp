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
extern int fn_8265C940();
extern int fn_82A1BB18();
extern U64 storeWordConditionalIndexed();


undefined8 fn_82F61BE8(longlong param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint *puVar7;
  char in_RESERVE;
  byte in_cr0;
  
  if (((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) {
    uVar5 = 0xffffffff82240403;
  }
  else {
    uVar5 = 0;
    uVar2 = fn_82A1BB18();
    do {
      puVar3 = (uint *)param_1;
      uVar4 = *puVar3;
      if (uVar4 != 0) {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)uVar4,0,param_1);
          *puVar3 = uVar1;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar2,0,param_1);
        *puVar3 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    sync(1);
    if (uVar4 == 0) {
      lVar6 = param_1 + 4;
      do {
        puVar7 = (uint *)lVar6;
        uVar4 = *puVar7;
        if (uVar4 != 0) {
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed((ulonglong)uVar4,0,lVar6);
            *puVar7 = uVar1;
            in_cr0 = 2;
          }
          break;
        }
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar2,0,lVar6);
          *puVar7 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      sync(1);
      if (uVar4 == 0) {
        if (puVar3[0x14] == 0) {
          puVar3[0xb] = 0x64004000;
          uVar4 = fn_8265C940((longlong)(int)(param_3 + param_4) * (longlong)(int)param_2);
          puVar3[0x14] = uVar4;
          in_cr0 = (uVar4 == 0) << 1;
          if (uVar4 == 0) {
            puVar3[8] = 0;
            puVar3[9] = 0;
            uVar5 = 0xffffffff82240402;
            puVar3[10] = 0;
          }
          else {
            puVar3[8] = param_3;
            puVar3[9] = param_3 + param_4;
            puVar3[10] = param_2;
            RtlInitializeCriticalSectionAndSpinCount(param_1 + 0x30,0x1000);
          }
          puVar3[2] = 0;
          puVar3[6] = 0;
          puVar3[7] = 0;
          puVar3[4] = 0;
          puVar3[5] = 0;
          puVar3[3] = 0;
        }
        else {
          uVar5 = 0xffffffff82240404;
        }
        sync(1);
        do {
          if (*puVar7 != (uint)uVar2) {
            if (in_RESERVE != '\0') {
              uVar4 = storeWordConditionalIndexed((ulonglong)*puVar7,0,lVar6);
              *puVar7 = uVar4;
              in_cr0 = 2;
            }
            break;
          }
          if (in_RESERVE != '\0') {
            uVar4 = storeWordConditionalIndexed(0,0,lVar6);
            *puVar7 = uVar4;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
      else {
        uVar5 = 0xffffffff82240401;
      }
      sync(1);
      do {
        if (*puVar3 != (uint)uVar2) {
          if (in_RESERVE == '\0') {
            return uVar5;
          }
          uVar4 = storeWordConditionalIndexed((ulonglong)*puVar3,0,param_1);
          *puVar3 = uVar4;
          return uVar5;
        }
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(0,0,param_1);
          *puVar3 = uVar4;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    else {
      uVar5 = 0xffffffff82240400;
    }
  }
  return uVar5;
}

