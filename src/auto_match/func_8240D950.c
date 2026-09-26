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
extern unsigned int *auStack_30;
extern int fn_822BE6D0();
extern U64 storeWordConditionalIndexed();


void fn_8240D950(int param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  uint *puVar8;
  longlong lVar7;
  char in_RESERVE;
  byte in_cr0;
  undefined1 auStack_30 [4];
  int *piStack_2c;
  
  *(int *)(param_1 + 8) = (int)param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  puVar5 = (undefined4 *)fn_822BE6D0(auStack_30,param_3);
  uVar1 = puVar5[1];
  uVar2 = *puVar5;
  if ((ulonglong)uVar1 != 0) {
    lVar6 = (ulonglong)uVar1 + 8;
    do {
      puVar8 = (uint *)lVar6;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((ulonglong)*puVar8 + 1,0,lVar6);
        *puVar8 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (ZEXT48(piVar3) != 0) {
    lVar6 = ZEXT48(piVar3) + 8;
    do {
      puVar8 = (uint *)lVar6;
      lVar7 = (ulonglong)*puVar8 - 1;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(lVar7,0,lVar6);
        *puVar8 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(code **)(*piVar3 + 4))();
    }
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  if (ZEXT48(piStack_2c) != 0) {
    lVar6 = ZEXT48(piStack_2c) + 8;
    do {
      puVar8 = (uint *)lVar6;
      lVar7 = (ulonglong)*puVar8 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar7,0,lVar6);
        *puVar8 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(code **)(*piStack_2c + 4))();
    }
  }
  return;
}

