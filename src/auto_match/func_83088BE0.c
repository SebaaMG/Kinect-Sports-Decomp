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
fn_83088BE0(undefined8 param_1,undefined8 param_2,byte *param_3,undefined4 *param_4,
             undefined8 param_5)

{
  byte bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 in_MSR;
  char in_RESERVE;
  byte in_cr0;
  
  bVar1 = *param_3;
  puVar2 = *(uint **)(param_3 + 0x14);
  if (bVar1 < 8) {
    if (bVar1 == 1) {
      uVar8 = *puVar2;
      *puVar2 = (uint)((ulonglong)uVar8 - 1);
      if ((ulonglong)uVar8 - 1 != 0) {
        return 1;
      }
      puVar2 = *(uint **)(param_3 + 0x18);
      if ((ZEXT48(puVar2) != 0) && (param_5 = in_MSR, in_RESERVE != '\0')) {
        uVar8 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,ZEXT48(puVar2));
        *puVar2 = uVar8;
      }
    }
    else if (bVar1 == 2) {
      puVar2 = *(uint **)(param_3 + 0x18);
      if (ZEXT48(puVar2) != 0) {
        do {
          if (in_RESERVE != '\0') {
            uVar8 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,ZEXT48(puVar2));
            *puVar2 = uVar8;
            in_cr0 = 2;
          }
          param_5 = in_MSR;
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
    }
    else if (bVar1 == 3) {
      if (7 < *(int *)(param_3 + 0x38)) {
        return 1;
      }
      puVar2 = *(uint **)(param_3 + 0x18);
      if (ZEXT48(puVar2) != 0) {
        do {
          if (in_RESERVE != '\0') {
            uVar8 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,ZEXT48(puVar2));
            *puVar2 = uVar8;
            in_cr0 = 2;
          }
          param_5 = in_MSR;
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
    }
    else if (bVar1 == 4) {
      uVar8 = *puVar2;
      *puVar2 = (uint)((ulonglong)uVar8 - 1);
      if ((ulonglong)uVar8 - 1 != 0) {
        return 1;
      }
      puVar2 = *(uint **)(param_3 + 0x18);
      if ((ZEXT48(puVar2) != 0) && (param_5 = in_MSR, in_RESERVE != '\0')) {
        uVar8 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,ZEXT48(puVar2));
        *puVar2 = uVar8;
      }
    }
    else if (bVar1 == 5) {
      if (puVar2 != (uint *)0x0) {
        *puVar2 = *puVar2 - 1;
      }
      if (*(int *)(param_3 + 0x60) != 0) {
        if (*puVar2 != 0) {
          return 1;
        }
        if (param_4 + 4 != (undefined4 *)0x0) {
          uVar3 = *(undefined4 *)(param_3 + 0x14);
          *(undefined1 *)(param_4 + 4) = 3;
          *(undefined1 *)((int)param_4 + 0x11) = 3;
          *(undefined1 *)((int)param_4 + 0x12) = 2;
          *(undefined2 *)(param_4 + 5) = 0x50;
          *(undefined2 *)((int)param_4 + 0x16) = 0xffff;
          param_4[8] = 0;
          param_4[10] = 0;
          *(undefined1 *)((int)param_4 + 0x12) = 1;
          param_4[0x10] = 0;
          param_4[9] = uVar3;
        }
        *param_4 = 0;
        param_4[9] = *(undefined4 *)(param_3 + 0x14);
        param_4[0xb] = *(undefined4 *)(param_3 + 0x1c);
        param_4[8] = *(undefined4 *)(param_3 + 0x10);
        param_4[0xc] = *(undefined4 *)(param_3 + 0x20);
        param_4[0xd] = *(undefined4 *)(param_3 + 0x24);
        param_4[0x12] = *(undefined4 *)(param_3 + 0x38);
        param_4[0xe] = *(undefined4 *)(param_3 + 0x28);
        param_4[0xf] = *(undefined4 *)(param_3 + 0x2c);
        param_4[0x10] = *(undefined4 *)(param_3 + 0x30);
        param_4[0x13] = *(undefined4 *)(param_3 + 0x3c);
        param_4[0x11] = *(undefined4 *)(param_3 + 0x34);
        param_4[0x14] = *(undefined4 *)(param_3 + 0x40);
        return 0;
      }
      puVar2 = *(uint **)(param_3 + 0x18);
      if (ZEXT48(puVar2) != 0) {
        do {
          if (in_RESERVE != '\0') {
            uVar8 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,ZEXT48(puVar2));
            *puVar2 = uVar8;
            in_cr0 = 2;
          }
          param_5 = in_MSR;
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
    }
    else if (bVar1 == 6) {
      if (*puVar2 != 0) {
        return 1;
      }
      puVar2 = *(uint **)(param_3 + 0x18);
      if (ZEXT48(puVar2) != 0) {
        do {
          if (in_RESERVE != '\0') {
            uVar8 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,ZEXT48(puVar2));
            *puVar2 = uVar8;
            in_cr0 = 2;
          }
          param_5 = in_MSR;
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
    }
    else {
      if (bVar1 != 0) {
        if (param_4 + 4 != (undefined4 *)0x0) {
          iVar9 = *(int *)(param_3 + 0x48);
          uVar3 = *(undefined4 *)(param_3 + 0x5c);
          uVar4 = *(undefined4 *)(param_3 + 0x60);
          uVar5 = *(undefined4 *)(param_3 + 0x44);
          piVar6 = *(int **)(param_3 + 0x58);
          uVar7 = *(undefined4 *)(param_3 + 0x54);
          *(undefined1 *)(param_4 + 4) = 1;
          *(undefined1 *)((int)param_4 + 0x11) = 3;
          *(undefined1 *)((int)param_4 + 0x12) = 2;
          *(undefined2 *)(param_4 + 5) = 0x50;
          *(undefined2 *)((int)param_4 + 0x16) = 0xffff;
          param_4[10] = 0;
          *(undefined1 *)((int)param_4 + 0x12) = 1;
          param_4[0xb] = uVar7;
          param_4[9] = piVar6;
          param_4[0xc] = 0x40;
          param_4[8] = uVar3;
          param_4[0xd] = uVar5;
          param_4[0xe] = iVar9;
          param_4[0x11] = uVar4;
          if (iVar9 == 0) {
            iVar9 = 1;
          }
          else {
            uVar8 = iVar9 - 1;
            iVar9 = ((int)uVar8 >> 6) + (uint)((int)uVar8 < 0 && (uVar8 & 0x3f) != 0) + 1;
          }
          *piVar6 = iVar9;
          param_4[0x12] = 0;
          param_4[0x13] = 0;
          param_4[0x14] = 0;
          param_4[0xf] = 0;
          param_4[0x10] = 0;
        }
        param_4[0x12] = *(undefined4 *)(param_3 + 100);
        param_4[0x13] = *(undefined4 *)(param_3 + 0x68);
        param_4[0x14] = *(undefined4 *)(param_3 + 0x6c);
        param_4[0xf] = *(undefined4 *)(param_3 + 0x4c);
        param_4[0x10] = *(undefined4 *)(param_3 + 0x50);
        *param_4 = 1;
        *(undefined1 *)((int)param_4 + 0x12) = 1;
        return 0;
      }
      uVar8 = *puVar2;
      *puVar2 = (uint)((ulonglong)uVar8 - 1);
      if ((ulonglong)uVar8 - 1 != 0) {
        return 1;
      }
      puVar2 = *(uint **)(param_3 + 0x18);
      if ((ZEXT48(puVar2) != 0) && (param_5 = in_MSR, in_RESERVE != '\0')) {
        uVar8 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,ZEXT48(puVar2));
        *puVar2 = uVar8;
      }
    }
    if (*(int *)(param_3 + 0x10) != 0) {
      fn_82CFBB08(*(int *)(param_3 + 0x10),1,param_3,param_4,param_5);
    }
  }
  return 1;
}

