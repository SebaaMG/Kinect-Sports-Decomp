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
extern int fn_82694610();
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


void fn_826B2840(int *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  ushort uVar4;
  ulonglong uVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar6;
  char *pcVar10;
  undefined1 *puVar11;
  char *pcVar13;
  longlong lVar12;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined1 auStack_70 [4];
  int iStack_6c;
  int aiStack_68 [2];
  int iStack_60;
  int iStack_5c;
  byte bStack_58;
  undefined1 auStack_50 [80];
  
  uVar5 = fn_8267B890(*(undefined4 *)(*(int *)(*param_1 + 0x78) + 0x288),0x68,0);
  if ((uVar5 & 0xffffffff) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = fn_826C40A8(uVar5,*param_1,param_2,param_1[5],0,param_1[8],2);
  }
  iVar15 = param_1[6];
  iStack_6c = fn_82694700((ulonglong)*(uint *)(*param_1 + 0x78) + 0x254,param_1[2] + iVar15 + 3);
  *(int *)(iStack_6c + 8) = *(int *)(iStack_6c + 8) + 1;
  iVar9 = *(int *)(iStack_6c + 0x10) + iVar15 + 3;
  puVar11 = (undefined1 *)(param_1[2] + iVar9 + 1);
  uVar1 = puVar11[1];
  uVar2 = *puVar11;
  *(undefined1 *)(iVar7 + 0x67) = *(undefined1 *)(param_1[2] + iVar9 + 3);
  iVar15 = iVar9 + 6;
  puVar11 = (undefined1 *)(param_1[2] + iVar9 + 4);
  *(ushort *)(iVar7 + 100) = CONCAT11(puVar11[1],*puVar11);
  for (uVar5 = (ulonglong)CONCAT11(uVar1,uVar2); uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar1 = *(undefined1 *)(param_1[2] + iVar15);
    pcVar10 = (char *)(param_1[2] + iVar15 + 1);
    pcVar13 = pcVar10;
    do {
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    iVar8 = fn_82694610((ulonglong)*(uint *)(*param_1 + 0x78) + 0x254,pcVar10,
                              pcVar13 + (-1 - (int)pcVar10));
    *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    aiStack_68[0] = iVar8;
    iVar9 = fn_826ABDB8(iVar7,uVar1,aiStack_68);
    lVar12 = (ulonglong)*(uint *)(iVar8 + 8) - 1;
    iVar9 = *(int *)(*(int *)(iVar9 + 4) + 0x10);
    *(int *)(iVar8 + 8) = (int)lVar12;
    iVar15 = iVar9 + iVar15 + 1 + 1;
    if (lVar12 == 0) {
      fn_826944C8(iVar8);
    }
  }
  uVar4 = CONCAT11(((undefined1 *)(param_1[2] + iVar15))[1],*(undefined1 *)(param_1[2] + iVar15));
  *(uint *)(iVar7 + 0x4c) = (uint)uVar4;
  param_1[5] = (uint)uVar4 + param_1[5];
  bStack_58 = 0;
  *(uint *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1U & 0x8fffffff;
  iStack_5c = 0;
  iVar15 = *(int *)(*param_1 + 0xcc);
  if (iVar15 == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(iVar15 * 4 + *(int *)(*param_1 + 200) + -4);
  }
  iStack_60 = iVar7;
  if (iVar15 != 0) {
    fn_826C3378(&iStack_60,iVar15,0);
  }
  fn_82695750(auStack_50,&iStack_60);
  if (*(int *)(iStack_6c + 0x10) != 0) {
    iVar15 = *(int *)(*param_1 + 0x74);
    auStack_70[0] = 0;
    (**(code **)(*(int *)(iVar15 + 0x68) + 0x28))
              (iVar15 + 0x68,*param_1 + 0x78,&iStack_6c,auStack_50,auStack_70);
  }
  iVar15 = *param_1 + 0x78;
  lVar12 = fn_8267B890(*(undefined4 *)(*(int *)(*param_1 + 0x78) + 0x288),0x50,0);
  if (lVar12 == 0) {
    uVar5 = 0;
  }
  else {
    uVar6 = fn_826B14D8(*(undefined4 *)(*param_1 + 0x78),1);
    uVar5 = fn_826C3C70(lVar12,iVar15,uVar6,&iStack_60,0);
  }
  uVar6 = fn_826B14D8(*(undefined4 *)(*param_1 + 0x78),7);
  fn_826C3490(iStack_60,iVar15,uVar6);
  fn_826C2D98(iVar7,iVar15,uVar5);
  if (*(int *)(iStack_6c + 0x10) == 0) {
    iVar15 = *param_1;
    puVar16 = (uint *)(iVar15 + 8);
    uVar14 = *(int *)(iVar15 + 8) + 0x10;
    *puVar16 = uVar14;
    if (*(uint *)(iVar15 + 0x10) <= uVar14) {
      fn_826826A8(puVar16);
    }
    if (*puVar16 != 0) {
      fn_82695DA0(*puVar16,auStack_50);
    }
  }
  if ((uVar5 & 0xffffffff) != 0) {
    fn_826824B0(uVar5);
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
  lVar12 = (ulonglong)*(uint *)(iStack_6c + 8) - 1;
  *(int *)(iStack_6c + 8) = (int)lVar12;
  if (lVar12 == 0) {
    fn_826944C8(iStack_6c);
  }
  fn_826824B0(iVar7);
  return;
}

