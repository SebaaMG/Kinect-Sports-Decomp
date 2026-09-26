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
#define TBLr 0
extern unsigned int *auStack_20;
extern int fn_82A59B60();
extern U64 storeWordConditionalIndexed();


void fn_82A5A040(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  undefined8 *puVar8;
  char in_RESERVE;
  byte in_cr0;
  longlong lVar9;
  undefined4 auStack_20 [4];
  
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x80) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
  }
  else {
    if (*(int *)(iVar4 + 0x298) == 1) {
      lVar6 = param_1 + 0x290;
      iVar5 = (*(uint *)(iVar4 + 0x294) ^ 1) * 0x28 + iVar4;
      *(undefined8 *)(iVar5 + 0x240) = 0;
      *(undefined8 *)(iVar5 + 0x248) = 0;
      *(undefined8 *)(iVar5 + 0x250) = 0;
      *(undefined8 *)(iVar5 + 600) = 0;
      *(undefined8 *)(iVar5 + 0x260) = 0;
      do {
        uVar2 = *(uint *)(iVar4 + 0x294);
        do {
          puVar7 = (uint *)lVar6;
          uVar1 = *puVar7;
          if (uVar1 != uVar2 * 0x28 + iVar4 + 0x240) {
            if (in_RESERVE != '\0') {
              uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar6);
              *puVar7 = uVar2;
              in_cr0 = 2;
            }
            break;
          }
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed
                              (((ulonglong)uVar2 ^ 1) * 0x28 + param_1 + 0x240,0,lVar6);
            *puVar7 = uVar3;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        sync(1);
      } while (uVar1 == 0);
      *(uint *)(iVar4 + 0x294) = *(uint *)(iVar4 + 0x294) ^ 1;
    }
    puVar8 = param_2 + -1;
    lVar9 = 5;
    lVar6 = ((ulonglong)*(uint *)(iVar4 + 0x294) ^ 1) * 0x28 + param_1 + 0x238;
    do {
      lVar6 = lVar6 + 8;
      puVar8 = puVar8 + 1;
      *puVar8 = *(undefined8 *)lVar6;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    *(undefined4 *)(iVar4 + 0x298) = 0;
  }
  lVar6 = TBLr;
  auStack_20[0] = 0;
  param_2[1] = lVar6 - *(longlong *)(iVar4 + 0x2a0);
  *(longlong *)(iVar4 + 0x2a0) = lVar6;
  fn_82A59B60(0xffffffff83219d50,0xffffffffffffffff,auStack_20,0);
  *(undefined4 *)(param_2 + 3) = auStack_20[0];
  return;
}

