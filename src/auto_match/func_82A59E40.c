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
extern unsigned int *auStack_80;
extern unsigned int fStack_74;
extern int fn_82A2ABE0();
extern int fn_82A59B60();
extern int fn_82A766A0();
extern int __u64tod();
extern float lbl_82005748;
extern unsigned int uRam8315f6d8;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern U64 storeWordConditionalIndexed();


void fn_82A59E40(longlong param_1,uint param_2,ulonglong param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  char in_RESERVE;
  byte in_cr0;
  longlong lVar10;
  double dVar11;
  double dVar12;
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [4];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  do {
    piVar9 = (int *)(param_1 + 0x290);
    plVar1 = (longlong *)*piVar9;
    if (in_RESERVE != '\0') {
      iVar2 = storeWordConditionalIndexed(0,0,param_1 + 0x290);
      *piVar9 = iVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  *plVar1 = (ulonglong)param_2 + *plVar1;
  if ((*(uint *)(plVar1 + 2) == 0) || (param_2 < *(uint *)(plVar1 + 2))) {
    *(uint *)(plVar1 + 2) = param_2;
  }
  if ((*(uint *)((int)plVar1 + 0x14) == 0) || (*(uint *)((int)plVar1 + 0x14) < param_2)) {
    *(uint *)((int)plVar1 + 0x14) = param_2;
  }
  iVar4 = (int)param_1;
  uVar6 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x78) + 0x84) + 4))();
  *(undefined4 *)((int)plVar1 + 0x1c) = uVar6;
  iVar2 = *(int *)(iVar4 + 0x78);
  if (*(int *)(iVar2 + 0x94) != 0) {
    uStack_90 = (ulonglong)param_2;
    dVar12 = (double)__u64tod(uRam8315f6d8);
    uVar7 = (ulonglong)*(uint *)(iVar4 + 0x68);
    dVar11 = (double)(longlong)uStack_90;
    uStack_90 = uVar7;
    if ((double)*(uint *)(iVar4 + 100) / (double)uVar7 < dVar11 / dVar12) {
      fn_82A766A0(iVar2);
    }
  }
  lVar10 = 6;
  *(undefined4 *)(plVar1 + 4) = *(undefined4 *)(*(int *)(iVar4 + 0x78) + 0x98);
  puVar5 = &uStack_88;
  do {
    puVar8 = puVar5;
    puVar5 = puVar8 + 1;
    *puVar5 = 0;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  *(undefined4 *)(puVar8 + 2) = 0;
  uVar3 = TBLr;
  uStack_78 = (undefined4)uVar3;
  uStack_7c = (undefined4)((ulonglong)uVar3 >> 0x20);
  dVar11 = (double)__u64tod((param_3 & 0xffffffff) - *(longlong *)(iVar4 + 0x2a8));
  *(ulonglong *)(iVar4 + 0x2a8) = param_3 & 0xffffffff;
  uStack_90 = (ulonglong)param_2;
  fStack_74 = ((float)param_2 / (float)dVar11) * lbl_82005748;
  fn_82A59B60(0xffffffff83219d50,0xffffffffffffffff,&uStack_90,0);
  uStack_70 = (((U64)(uStack_90) >> 0) & 0xFFFFFFFF);
  if (*(int *)(*(int *)(iVar4 + 0x78) + 0x98) != *(int *)(iVar4 + 0x29c)) {
    uStack_6c = 1;
    *(undefined4 *)(iVar4 + 0x29c) = *(undefined4 *)(*(int *)(iVar4 + 0x78) + 0x98);
  }
  (**(code **)(**(int **)(iVar4 + 0x6c) + 0xc))(*(int **)(iVar4 + 0x6c),auStack_80);
  fn_82A2ABE0(0x58417532,auStack_80,0x34);
  sync(1);
  *piVar9 = (int)plVar1;
  *(undefined4 *)(iVar4 + 0x298) = 1;
  return;
}

