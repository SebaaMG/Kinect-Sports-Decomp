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
extern int fn_82454890();
extern int fn_82F622A8();
extern unsigned int lbl_82190000;
extern unsigned int lbl_821B9BC8;


void fn_824544E8(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar10;
  ulonglong uVar9;
  undefined1 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar1 = param_1[1];
  if ((uVar1 <= param_2) || (bVar4 = true, param_2 < *param_1)) {
    bVar4 = false;
  }
  uVar7 = param_1[2];
  if (bVar4) {
    uVar10 = *param_1;
    puVar12 = (undefined4 *)0x30;
    iVar6 = param_2 - uVar10;
    if (uVar1 == uVar7) {
      uVar1 = (int)(uVar1 - uVar10) / 0x30;
      lVar8 = (longlong)(int)uVar1;
      if (0x5555554 < uVar1) {
        puVar12 = &lbl_82190000;
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar9 = lVar8 + 1;
      uVar1 = (int)(uVar7 - uVar10) / (int)puVar12;
      if ((ulonglong)uVar1 < (uVar9 & 0xffffffff)) {
        uVar5 = 0;
        if ((ulonglong)uVar1 <= (0x5555555 - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
          uVar5 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
        }
        if ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff)) {
          uVar5 = uVar9;
        }
        fn_82454890(param_1,uVar5);
      }
    }
    puVar12 = (undefined4 *)param_1[1];
    iVar6 = (iVar6 / 0x30) * 0x30 + *param_1;
    if (puVar12 == (undefined4 *)0x0) goto LAB_824546e8;
    *puVar12 = &lbl_821B9BC8;
    puVar12[1] = *(undefined4 *)(iVar6 + 4);
    *puVar12 = &lbl_821B9BC8;
    puVar12[2] = *(undefined4 *)(iVar6 + 8);
    puVar12[3] = *(undefined4 *)(iVar6 + 0xc);
    puVar2 = (undefined4 *)(iVar6 + 0x10U & 0xfffffff0);
    uVar13 = puVar2[1];
    uVar14 = puVar2[2];
    uVar15 = puVar2[3];
    puVar3 = (undefined4 *)((uint)(puVar12 + 4) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar13;
    puVar3[2] = uVar14;
    puVar3[3] = uVar15;
    puVar12[8] = *(undefined4 *)(iVar6 + 0x20);
    uVar11 = *(undefined1 *)(iVar6 + 0x24);
  }
  else {
    if (uVar1 == uVar7) {
      uVar10 = *param_1;
      puVar12 = (undefined4 *)0x30;
      uVar1 = (int)(uVar1 - uVar10) / 0x30;
      lVar8 = (longlong)(int)uVar1;
      if (0x5555554 < uVar1) {
        puVar12 = &lbl_82190000;
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar9 = lVar8 + 1;
      uVar1 = (int)(uVar7 - uVar10) / (int)puVar12;
      if ((ulonglong)uVar1 < (uVar9 & 0xffffffff)) {
        uVar5 = 0;
        if ((ulonglong)uVar1 <= (0x5555555 - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
          uVar5 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
        }
        if ((uVar5 & 0xffffffff) < (uVar9 & 0xffffffff)) {
          uVar5 = uVar9;
        }
        fn_82454890(param_1,uVar5);
      }
    }
    puVar12 = (undefined4 *)param_1[1];
    if (puVar12 == (undefined4 *)0x0) goto LAB_824546e8;
    *puVar12 = &lbl_821B9BC8;
    uVar13 = *(undefined4 *)(param_2 + 4);
    *puVar12 = &lbl_821B9BC8;
    puVar12[1] = uVar13;
    puVar12[2] = *(undefined4 *)(param_2 + 8);
    puVar12[3] = *(undefined4 *)(param_2 + 0xc);
    puVar2 = (undefined4 *)(param_2 + 0x10 & 0xfffffff0);
    uVar13 = puVar2[1];
    uVar14 = puVar2[2];
    uVar15 = puVar2[3];
    puVar3 = (undefined4 *)((uint)(puVar12 + 4) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar13;
    puVar3[2] = uVar14;
    puVar3[3] = uVar15;
    puVar12[8] = *(undefined4 *)(param_2 + 0x20);
    uVar11 = *(undefined1 *)(param_2 + 0x24);
  }
  *(undefined1 *)(puVar12 + 9) = uVar11;
LAB_824546e8:
  param_1[1] = param_1[1] + 0x30;
  return;
}

