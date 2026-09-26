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
extern int fn_8267B890();
extern int fn_82681838();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696BC8();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_82739680();
extern int fn_827397D8();
extern int fn_8273B8D0();
extern int fn_8273B930();
extern int fn_82A2A7D0();
extern int fn_82F6CB50();
extern unsigned int iStack_68;
extern unsigned int iStack_bc;
extern unsigned int lbl_82011DEC;
extern unsigned int uStack_118;


void fn_8273C190(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar5;
  int iVar6;
  undefined8 uVar4;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  int aiStack_128 [2];
  longlong lStack_120;
  ushort uStack_118;
  int aiStack_110 [21];
  int iStack_bc;
  int iStack_68;
  
  if ((*(int **)(param_1 + 8) == (int *)0x0) ||
     (iVar5 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar5 != 0x23)) {
    uVar10 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                               0x60,0);
    if ((uVar10 & 0xffffffff) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = fn_8273B8D0(uVar10,*(undefined4 *)(param_1 + 0x18));
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar5 = 0;
    }
    if (iVar5 != 0) {
      *(uint *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1U & 0x8fffffff;
    }
  }
  fn_82F6CB50(&lStack_120);
  iVar6 = fn_82A2A7D0(aiStack_110);
  if ((iVar6 == 1) || (iStack_bc = iStack_68, iVar6 == 2)) {
    aiStack_110[0] = iStack_bc + aiStack_110[0];
  }
  *(int *)(iVar5 + 0x5c) = aiStack_110[0] * -60000;
  fn_8273B930(iVar5,lStack_120 * 1000 + (ulonglong)uStack_118);
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    dVar14 = (double)fn_826972E0(uVar4,uVar2);
    lVar13 = (longlong)dVar14;
  }
  else {
    if (*(int *)(param_1 + 0x1c) < 2) goto LAB_8273c4fc;
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    dVar14 = (double)fn_826972E0(uVar4,uVar2);
    uVar7 = (uint)dVar14;
    uVar10 = (ulonglong)uVar7;
    if (((int)uVar7 < 100) && (-1 < (int)uVar7)) {
      uVar10 = uVar10 + 0x76c;
    }
    iVar3 = (int)uVar10;
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar7 = iVar3 - 0x7b1;
    iVar6 = (iVar3 + -0x76d) / 100;
    iVar9 = ((int)uVar7 >> 2) + (uint)((int)uVar7 < 0 && (uVar7 & 3) != 0);
    iVar1 = (iVar3 + -0x641) / 400;
    iVar12 = ((iVar3 + -0x7b2) * 0x16d - iVar6) + iVar9 + iVar1;
    iVar11 = 0;
    uVar4 = fn_826957D0(param_1,1);
    dVar14 = (double)fn_826972E0(uVar4,uVar2);
    uVar8 = (ulonglong)(uint)(int)dVar14;
    if ((int)dVar14 != 0) {
      uVar10 = fn_82739680(uVar10);
      iVar12 = *(int *)(&lbl_82011DEC + (int)(((uVar10 & 0xff) * 0xc + uVar8 & 0xffffffff) << 2)) +
               iVar12;
    }
    if (2 < *(int *)(param_1 + 0x1c)) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,2);
      dVar14 = (double)fn_826972E0(uVar4,uVar2);
      iVar12 = (int)dVar14 + iVar12 + -1;
    }
    if (3 < *(int *)(param_1 + 0x1c)) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,3);
      dVar14 = (double)fn_826972E0(uVar4,uVar2);
      iVar11 = (int)dVar14 * 3600000;
    }
    if (4 < *(int *)(param_1 + 0x1c)) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,4);
      dVar14 = (double)fn_826972E0(uVar4,uVar2);
      iVar11 = (int)dVar14 * 60000 + iVar11;
    }
    if (5 < *(int *)(param_1 + 0x1c)) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,5);
      dVar14 = (double)fn_826972E0(uVar4,uVar2);
      iVar11 = (int)dVar14 * 1000 + iVar11;
    }
    if (6 < *(int *)(param_1 + 0x1c)) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,6);
      dVar14 = (double)fn_826972E0(uVar4,uVar2);
      iVar11 = (int)dVar14 + iVar11;
    }
    *(int *)(iVar5 + 0x54) = iVar3;
    *(int *)(iVar5 + 0x50) = iVar11;
    *(int *)(iVar5 + 0x58) = (((iVar6 + (iVar3 + -0x7b2) * -0x16d) - iVar9) - iVar1) + iVar12;
    *(longlong *)(iVar5 + 0x48) = (longlong)iVar12 * 86400000 + (longlong)iVar11;
    fn_827397D8(iVar5);
    lVar13 = *(longlong *)(iVar5 + 0x30);
  }
  fn_8273B930(iVar5,lVar13);
LAB_8273c4fc:
  fn_82696BC8(*(undefined4 *)(param_1 + 4),iVar5);
  fn_82696D38(aiStack_128,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x18),
                    0xffffffffffffffff,0);
  fn_82681838(*(undefined4 *)(param_1 + 4),aiStack_128);
  lVar13 = (ulonglong)*(uint *)(aiStack_128[0] + 8) - 1;
  *(int *)(aiStack_128[0] + 8) = (int)lVar13;
  if (lVar13 == 0) {
    fn_826944C8(aiStack_128[0]);
  }
  fn_826824B0(iVar5);
  return;
}

