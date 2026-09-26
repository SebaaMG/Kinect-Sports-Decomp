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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82695750();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_826ABDB8();
extern int fn_826B14D8();
extern int fn_826C2D98();
extern int fn_826C3378();
extern int fn_826C3490();
extern int fn_826C3C70();
extern int fn_826C40A8();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_6c;


void fn_826B24E0(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  ushort uVar2;
  ulonglong uVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar4;
  int iVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 auStack_70 [4];
  int iStack_6c;
  int aiStack_68 [2];
  int iStack_60;
  int iStack_5c;
  byte bStack_58;
  undefined1 auStack_50 [80];
  
  uVar3 = fn_8267B890(*(undefined4 *)(*(int *)(*param_1 + 0x78) + 0x288),0x68,0);
  if ((uVar3 & 0xffffffff) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = fn_826C40A8(uVar3,*param_1,param_2,param_1[5],0,param_1[8],1);
  }
  uVar1 = param_1[6];
  iStack_6c = fn_82694700((ulonglong)*(uint *)(*param_1 + 0x78) + 0x254,param_1[2] + uVar1 + 3);
  *(int *)(iStack_6c + 8) = *(int *)(iStack_6c + 8) + 1;
  iVar8 = *(int *)(iStack_6c + 0x10) + uVar1 + 3;
  puVar9 = (undefined1 *)(param_1[2] + iVar8 + 1);
  iVar8 = iVar8 + 3;
  for (uVar3 = (ulonglong)CONCAT11(puVar9[1],*puVar9); uVar3 != 0; uVar3 = uVar3 - 1) {
    iVar6 = fn_82694700((ulonglong)*(uint *)(*param_1 + 0x78) + 0x254,param_1[2] + iVar8);
    *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    aiStack_68[0] = iVar6;
    iVar7 = fn_826ABDB8(iVar5,0,aiStack_68);
    lVar10 = (ulonglong)*(uint *)(iVar6 + 8) - 1;
    iVar7 = *(int *)(*(int *)(iVar7 + 4) + 0x10);
    *(int *)(iVar6 + 8) = (int)lVar10;
    iVar8 = iVar7 + iVar8 + 1;
    if (lVar10 == 0) {
      fn_826944C8(iVar6);
    }
  }
  uVar2 = CONCAT11(((undefined1 *)(param_1[2] + iVar8))[1],*(undefined1 *)(param_1[2] + iVar8));
  *(uint *)(iVar5 + 0x4c) = (uint)uVar2;
  param_1[5] = (uint)uVar2 + param_1[5];
  bStack_58 = 0;
  *(uint *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1U & 0x8fffffff;
  iStack_5c = 0;
  iVar8 = *(int *)(*param_1 + 0xcc);
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(iVar8 * 4 + *(int *)(*param_1 + 200) + -4);
  }
  iStack_60 = iVar5;
  if (iVar8 != 0) {
    fn_826C3378(&iStack_60,iVar8,0);
  }
  fn_82695750(auStack_50,&iStack_60);
  if (*(int *)(iStack_6c + 0x10) != 0) {
    iVar8 = *(int *)(*param_1 + 0x74);
    auStack_70[0] = 0;
    (**(code **)(*(int *)(iVar8 + 0x68) + 0x28))
              (iVar8 + 0x68,*param_1 + 0x78,&iStack_6c,auStack_50,auStack_70);
  }
  lVar10 = fn_8267B890(*(undefined4 *)(*(int *)(*param_1 + 0x78) + 0x288),0x50,0);
  if (lVar10 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = fn_826B14D8(*(undefined4 *)(*param_1 + 0x78),1);
    uVar3 = fn_826C3C70(lVar10,(ulonglong)*param_1 + 0x78,uVar4,&iStack_60,0);
  }
  uVar4 = fn_826B14D8(*(undefined4 *)(*param_1 + 0x78),7);
  fn_826C3490(iStack_60,(ulonglong)*param_1 + 0x78,uVar4);
  fn_826C2D98(iVar5,(ulonglong)*param_1 + 0x78,uVar3);
  if (*(int *)(iStack_6c + 0x10) == 0) {
    uVar1 = *param_1;
    puVar12 = (uint *)(uVar1 + 8);
    uVar11 = *(int *)(uVar1 + 8) + 0x10;
    *puVar12 = uVar11;
    if (*(uint *)(uVar1 + 0x10) <= uVar11) {
      fn_826826A8(puVar12);
    }
    if (*puVar12 != 0) {
      fn_82695DA0(*puVar12,auStack_50);
    }
  }
  if ((uVar3 & 0xffffffff) != 0) {
    fn_826824B0(uVar3);
  }
  fn_82696330(auStack_50);
  if (((bStack_58 & 2) == 0) && (iStack_60 != 0)) {
    fn_826824B0();
  }
  iStack_60 = 0;
  if (((bStack_58 & 1) == 0) && (iStack_5c != 0)) {
    fn_826824B0();
  }
  iStack_5c = 0;
  lVar10 = (ulonglong)*(uint *)(iStack_6c + 8) - 1;
  *(int *)(iStack_6c + 8) = (int)lVar10;
  if (lVar10 == 0) {
    fn_826944C8(iStack_6c);
  }
  fn_826824B0(iVar5);
  return;
}

