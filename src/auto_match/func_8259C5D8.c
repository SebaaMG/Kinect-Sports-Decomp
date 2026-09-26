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
extern int fn_82A1E300();
extern int fn_82A1E650();
extern U64 storeWordConditionalIndexed();


void fn_8259C5D8(longlong param_1,int param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar5;
  undefined8 uVar4;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  char in_RESERVE;
  byte in_cr0;
  
  param_2 = param_2 + 1;
  bVar3 = false;
  while (puVar5 = (uint *)param_1, param_2 == 0) {
LAB_8259c6a0:
    in_cr0 = !bVar3 << 1;
    if (!bVar3) {
      lVar8 = param_1 + 0xc;
      do {
        puVar6 = (uint *)lVar8;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)*puVar6 + 1,0,lVar8);
          *puVar6 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1));
      sync(1);
      do {
        uVar1 = *puVar5;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,param_1);
          *puVar5 = uVar2;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1));
      if ((ulonglong)uVar1 != 0) {
        uVar4 = fn_8259C7E8(param_1);
        fn_82A1E650(uVar4,0xffffffffffffffff);
      }
      do {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)*puVar6 - 1,0,lVar8);
          *puVar6 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      param_2 = 1;
    }
    if (bVar3) {
      sync(1);
      return;
    }
  }
  do {
    param_2 = param_2 + -1;
    do {
      uVar7 = (ulonglong)*puVar5;
      if (*puVar5 != 0) {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar7,0,param_1);
          *puVar5 = uVar1;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(param_3,0,param_1);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar7 == 0) {
      bVar3 = true;
      do {
        puVar6 = (uint *)(param_1 + 4);
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)*puVar6 + 1,0,param_1 + 4);
          *puVar6 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      goto LAB_8259c6a0;
    }
    if (uVar7 == (param_3 & 0xffffffff)) {
      do {
        puVar6 = (uint *)(param_1 + 4);
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)*puVar6 + 1,0,param_1 + 4);
          *puVar6 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      bVar3 = true;
      goto LAB_8259c6a0;
    }
    if (param_2 == 0) goto LAB_8259c6a0;
    fn_82A1E300();
  } while( true );
}

