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
extern int fn_82A1BB18();
extern U64 storeWordConditionalIndexed();


undefined8 fn_82F62180(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  char in_RESERVE;
  byte in_cr0;
  
  if (param_2 == 0) {
    uVar5 = 0xffffffff82240403;
  }
  else {
    uVar5 = 0;
    uVar6 = fn_82A1BB18();
    lVar7 = param_1 + 4;
    do {
      puVar8 = (uint *)lVar7;
      uVar1 = *puVar8;
      if (uVar1 != 0) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar7);
          *puVar8 = uVar2;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0,0,lVar7);
        *puVar8 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar1 == uVar6) {
      iVar4 = (int)param_1;
      if (param_2 == *(int *)(iVar4 + 0x4c)) {
        sync(1);
        uVar1 = *(uint *)(iVar4 + 0x10);
        uVar9 = (ulonglong)*(uint *)(iVar4 + 0x14);
        if ((ulonglong)*(uint *)(iVar4 + 0x20) < (ulonglong)*(uint *)(iVar4 + 0x14)) {
          uVar9 = (ulonglong)*(uint *)(iVar4 + 0x20);
        }
        do {
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed((ulonglong)uVar1,0,param_1 + 8);
            *(undefined4 *)(param_1 + 8) = uVar3;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        do {
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed(uVar9,0,param_1 + 0xc);
            *(undefined4 *)(param_1 + 0xc) = uVar3;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        *(undefined4 *)(iVar4 + 0x4c) = 0;
      }
      else {
        uVar5 = 0xffffffff82240403;
      }
      sync(1);
      do {
        if (*puVar8 != uVar6) {
          if (in_RESERVE == '\0') {
            return uVar5;
          }
          uVar6 = storeWordConditionalIndexed((ulonglong)*puVar8,0,lVar7);
          *puVar8 = uVar6;
          return uVar5;
        }
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(0,0,lVar7);
          *puVar8 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    else {
      uVar5 = 0xffffffff82240401;
    }
  }
  return uVar5;
}

