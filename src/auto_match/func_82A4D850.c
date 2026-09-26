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
extern int fn_82A64020();
extern int fn_82F68CC0();
extern unsigned int lbl_821AAD20;
extern U64 storeWordConditionalIndexed();


void fn_82A4D850(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  longlong lVar12;
  uint uVar13;
  char in_RESERVE;
  byte in_cr0;
  uint uVar14;
  
  iVar4 = (int)param_1;
  uVar1 = *(uint *)(iVar4 + 0x1c);
  uVar2 = *(uint *)(iVar4 + 0x20);
  pfVar11 = (float *)(param_2 + 3);
  uVar13 = 0;
  if (*(int *)(iVar4 + 0xe0) != 0) {
    uVar13 = 4;
  }
  if (uVar1 == uVar2) {
    uVar13 = uVar13 | 3;
  }
  uVar8 = 0;
  if (uVar2 != 0) {
    iVar9 = 0;
    do {
      uVar10 = 0;
      for (uVar14 = uVar1; uVar14 != 0; uVar14 = uVar14 - 1) {
        if (uVar10 == uVar8) {
          if (pfVar11[iVar9 + uVar10] != *pfVar11) {
            uVar13 = uVar13 & 0xfffffffe;
          }
        }
        else if (pfVar11[iVar9 + uVar10] != lbl_821AAD20) {
          uVar13 = uVar13 & 0xfffffffc;
        }
        uVar10 = uVar10 + 1;
      }
      uVar8 = uVar8 + 1;
      iVar9 = iVar9 + uVar1;
    } while (uVar8 < uVar2);
  }
  if (*(int *)(iVar4 + 0x9c) == 0) {
    do {
      puVar7 = (undefined4 *)(param_1 + 0x98);
      uVar6 = *puVar7;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(0xffffffffffffffff,0,param_1 + 0x98);
        *puVar7 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    *(undefined4 *)(iVar4 + 0x9c) = uVar6;
  }
  lVar12 = ((longlong)(int)uVar2 * (longlong)(int)uVar1 & 0x3fffffffU) << 2;
  fn_82F68CC0(*(undefined4 *)(*(int *)(iVar4 + 0x9c) + 0x10),pfVar11,lVar12);
  **(undefined4 **)(iVar4 + 0x9c) = *param_2;
  *(undefined4 *)(*(int *)(iVar4 + 0x9c) + 4) = param_2[1];
  *(undefined4 *)(*(int *)(iVar4 + 0x9c) + 8) = param_2[2];
  *(uint *)(*(int *)(iVar4 + 0x9c) + 0x14) = uVar13;
  if (*(int *)(iVar4 + 0xd8) == 0) {
    iVar9 = *(int *)(iVar4 + 0xa4);
    if (iVar9 == 4) {
      if (*(int *)(iVar4 + 0xa8) == 0x20) {
        uVar5 = 6;
      }
      else if (*(int *)(iVar4 + 0xa8) == 0x18) {
        uVar5 = 5;
      }
      else {
        uVar5 = 3;
      }
    }
    else if (iVar9 == 3) {
      if (*(int *)(iVar4 + 0xa8) == 0x18) {
        uVar5 = 4;
      }
      else {
        uVar5 = 2;
      }
    }
    else if (iVar9 == 2) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 7;
  }
  uVar6 = fn_82A64020(uVar5,uVar1,uVar2,uVar13);
  *(undefined4 *)(*(int *)(iVar4 + 0x9c) + 0xc) = uVar6;
  fn_82F68CC0(*(undefined4 *)(iVar4 + 0x90),pfVar11,lVar12);
  uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x9c) + 0xc);
  *(uint *)(iVar4 + 0x94) = uVar13;
  *(undefined4 *)(iVar4 + 0x8c) = uVar6;
  *(undefined4 *)(iVar4 + 0x80) = *param_2;
  *(undefined4 *)(iVar4 + 0x84) = param_2[1];
  uVar6 = param_2[2];
  *(undefined4 *)(iVar4 + 0xd4) = 1;
  *(undefined4 *)(iVar4 + 0x88) = uVar6;
  return;
}

