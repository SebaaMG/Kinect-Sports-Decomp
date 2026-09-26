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
extern unsigned int *auStack_60;
extern int fn_82536690();
extern int fn_825E7E30();
extern U64 storeWordConditionalIndexed();


void fn_8258A8E8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  char in_RESERVE;
  byte bVar11;
  undefined4 auStack_60 [24];
  
  bVar3 = true;
  puVar9 = (undefined4 *)(param_1 + 0xbb94);
  lVar4 = 2;
  do {
    if (puVar9[-0x39] != 0) {
      auStack_60[0] = *puVar9;
      piVar10 = (int *)(param_1 + 0xbab8);
      fn_82536690((ulonglong)*(uint *)(*(int *)(*(int *)(param_1 + 0xbab8) + 8) + -4) + 0x10,
                        auStack_60);
      fn_825E7E30(*(undefined4 *)(param_1 + 0xbab8));
      auStack_60[0] = puVar9[-0x36];
      fn_82536690((ulonglong)*(uint *)(*(int *)(*(int *)(param_1 + 0xbab8) + 8) + -4) + 0x10,
                        auStack_60);
      fn_825E7E30(*(undefined4 *)(param_1 + 0xbab8));
      auStack_60[0] = puVar9[-2];
      fn_82536690((ulonglong)*(uint *)(*(int *)(*(int *)(param_1 + 0xbab8) + 8) + -4) + 0x10,
                        auStack_60);
      iVar6 = (-0x8cdb - param_1) + (int)puVar9;
      lVar5 = 3;
      do {
        iVar8 = 0;
        do {
          auStack_60[0] = *(undefined4 *)((iVar6 + iVar8) * 4 + param_1);
          fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
          iVar8 = iVar8 + 1;
        } while (iVar8 < 4);
        lVar5 = lVar5 + -1;
        iVar6 = iVar6 + 8;
      } while (lVar5 != 0);
      puVar7 = puVar9 + -0x36;
      lVar5 = 2;
      do {
        puVar7 = puVar7 + 2;
        auStack_60[0] = *puVar7;
        fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      if ((*(uint *)(param_1 + 0x14) & 0x80000000) != 0) {
        auStack_60[0] = puVar9[-0x30];
        fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
      }
      if (bVar3) {
        auStack_60[0] = *(undefined4 *)(param_1 + 0xbb64);
        fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
        if ((*(uint *)(param_1 + 0x14) & 0x2000000) != 0) {
          auStack_60[0] = *(undefined4 *)(param_1 + 48000);
          fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
          auStack_60[0] = *(undefined4 *)(param_1 + 0xbb84);
          fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
        }
        if ((*(uint *)(param_1 + 0x14) & 0x1000000) != 0) {
          auStack_60[0] = *(undefined4 *)(param_1 + 0xbb88);
          fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
        }
        bVar3 = false;
      }
      if ((*(uint *)(param_1 + 0x14) & 0x8000000) != 0) {
        auStack_60[0] = puVar9[-0xb];
        fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
        auStack_60[0] = puVar9[-9];
        fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
      }
      if ((*(uint *)(param_1 + 0x14) & 0x4000000) != 0) {
        auStack_60[0] = puVar9[-7];
        fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
      }
      auStack_60[0] = puVar9[-0x2e];
      fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
      auStack_60[0] = puVar9[-0x14];
      fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
      auStack_60[0] = puVar9[-0x10];
      fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
      auStack_60[0] = puVar9[-0x12];
      fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
      auStack_60[0] = puVar9[-0xe];
      fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
      auStack_60[0] = puVar9[2];
      fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
      auStack_60[0] = puVar9[4];
      fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
      auStack_60[0] = puVar9[6];
      fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
      auStack_60[0] = puVar9[8];
      fn_82536690((ulonglong)*(uint *)(*(int *)(*piVar10 + 8) + -4) + 0x10,auStack_60);
    }
    lVar4 = lVar4 + -1;
    bVar11 = (lVar4 == 0) << 1;
    puVar9 = puVar9 + 1;
  } while (lVar4 != 0);
  uVar1 = *(uint *)(param_1 + 0xbab8);
  fn_825E7E30((ulonglong)uVar1);
  sync(0);
  lVar4 = (ulonglong)uVar1 + 0x14;
  do {
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(1,0,lVar4);
      *(undefined4 *)lVar4 = uVar2;
      bVar11 = 2;
    }
  } while (!(bool)(bVar11 >> 1 & 1));
  return;
}

