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
extern int fn_82644568();
extern int fn_82646E80();
extern int fn_82646F48();
extern int fn_8314270C();
extern unsigned int iStack_6c;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_70;


void fn_8264DE30(int param_1,int param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 in_r13;
  longlong lVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  uint uStack_70;
  int iStack_6c;
  int aiStack_60 [3];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  *(undefined4 *)(param_2 + 0x68) = 1;
  lVar10 = 0x40000;
  if ((param_3 & 1) == 0) {
    lVar10 = 0x20000;
  }
  uVar6 = (param_3 & 1) << 1 | 1;
  uVar11 = 0x7f100000;
  fn_8314270C(0,0x7f100000,lVar10,uVar6,uVar6);
  do {
    dataCacheBlockClearToZero(uVar11);
    dataCacheBlockClearToZero(uVar11 + 0x80);
    dataCacheBlockClearToZero(uVar11 + 0x100);
    dataCacheBlockClearToZero(uVar11 + 0x180);
    dataCacheBlockClearToZero(uVar11 + 0x200);
    dataCacheBlockClearToZero(uVar11 + 0x280);
    dataCacheBlockClearToZero(uVar11 + 0x300);
    dataCacheBlockClearToZero(uVar11 + 0x380);
    uVar11 = uVar11 + 0x400;
  } while ((uVar11 & 0xffffffff) < lVar10 + 0x7f100000U);
  sync(0);
  uVar6 = 0;
  uVar7 = 0;
  lVar10 = 6;
  do {
    if (((uint)(0x1000000 << (uVar7 & 0x3f)) & param_3) != 0) {
      uVar6 = uVar6 + 1;
    }
    uVar7 = uVar7 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  *(uint *)(param_2 + 0x38) = (uint)param_3 & 0x3f000000;
  uVar11 = 0x40000;
  if ((param_3 & 1) == 0) {
    uVar11 = 0x20000;
  }
  puVar8 = *(undefined4 **)(param_1 + 0x2ec8);
  trapWord(6,uVar6,0);
  uVar7 = 0;
  lVar10 = 0x7f100000;
  lVar13 = 6;
  puVar9 = (undefined4 *)(param_1 + 0x2c50);
  do {
    if (((uint)(0x1000000 << (uVar7 & 0x3f)) & param_3) != 0) {
      uVar4 = (undefined4)lVar10;
      *puVar9 = uVar4;
      puVar9[-1] = 0;
      lVar10 = lVar10 + (uVar11 / (uVar6 & 0xffffffff) & 0xffffff80);
      puVar9[-2] = uVar4;
      puVar9[1] = (int)lVar10;
      *puVar8 = 0xc0025800;
      puVar8[1] = 3;
      puVar8[2] = puVar9[2];
      puVar8[3] = puVar9[-1] & 3 | puVar9[-2] & 0xfffffffc;
      puVar8 = puVar8 + 4;
    }
    uVar7 = uVar7 + 1;
    puVar9 = puVar9 + 0x1b;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  uVar7 = *(uint *)(param_1 + 0x2ec8);
  iStack_6c = ((uVar7 >> 0x14) + 0x200 & 0x1000) + (uVar7 & 0x1fffffff);
  uStack_70 = (int)((int)puVar8 - uVar7) >> 2 & 0xffffffU | 0x81000000;
  fn_82644568(param_1,&uStack_70,1);
  uVar7 = 0;
  puVar12 = (uint *)(param_1 + 0x2c48);
  do {
    if (((uint)(0x1000000 << (uVar7 & 0x3f)) & param_3) != 0) {
      uVar1 = puVar12[1];
      uVar2 = *puVar12;
      uStack_54 = *(undefined4 *)(*(int *)((int)in_r13 + 0x100) + 0x58);
      aiStack_60[2] = **(undefined4 **)(param_1 + 0x2a90);
      aiStack_60[1] = 0;
      uVar3 = TBLr;
      uStack_4c = (undefined4)uVar3;
      aiStack_60[0] = param_1;
      uStack_50 = uStack_54;
      do {
        iVar5 = fn_82646F48(aiStack_60);
        if (iVar5 == 0) break;
      } while (*(uint *)puVar12[5] != (uVar2 & 0xfffffffc | uVar1 & 3));
      fn_82646E80(aiStack_60);
    }
    uVar7 = uVar7 + 1;
    puVar12 = puVar12 + 0x1b;
    if (5 < uVar7) {
      return;
    }
  } while( true );
}

