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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_f0;
extern int fn_8267C4C8();
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_82687270();
extern int fn_826944C8();
extern int fn_82695FA0();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_826B32D0();
extern int fn_82745128();
extern unsigned int iStack_c4;
extern unsigned int iStack_c8;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int uStack_88;
extern unsigned int uStack_b8;


void fn_8274D4F8(int param_1,int param_2,int param_3,ulonglong param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_f0 [4];
  int aiStack_ec [3];
  longlong alStack_e0 [2];
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined1 auStack_c0 [8];
  undefined4 uStack_b8;
  undefined1 auStack_b0 [8];
  double dStack_a8;
  undefined1 auStack_a0 [8];
  double dStack_98;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  if (param_3 != 0) {
    fn_8267C4C8(param_3);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_82687270();
  }
  *(int *)(param_1 + 0x30) = param_3;
  if ((param_4 & 0xffffffff) != 0) {
    fn_8267C4C8(param_4);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_82687270();
  }
  *(int *)(param_1 + 0x34) = (int)param_4;
  (**(code **)(**(int **)(param_3 + 0xc) + 0x14))(&iStack_d0);
  puVar5 = auStack_90;
  lVar6 = 4;
  do {
    puVar5 = puVar5 + 0x10;
    *puVar5 = 0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  auStack_c0[0] = 4;
  uStack_b8 = 0;
  fn_82695FA0(auStack_80,auStack_c0);
  fn_82696330(auStack_c0);
  auStack_90[0] = 4;
  uStack_88 = 0;
  fn_82695FA0(auStack_70,auStack_90);
  fn_82696330(auStack_90);
  lVar4 = 3;
  auStack_b0[0] = 3;
  alStack_e0[0] = (longlong)(iStack_c8 - iStack_d0);
  dStack_a8 = (double)alStack_e0[0];
  fn_82695FA0(auStack_60,auStack_b0);
  fn_82696330(auStack_b0);
  auStack_a0[0] = 3;
  alStack_e0[0] = (longlong)(iStack_c4 - iStack_cc);
  dStack_98 = (double)alStack_e0[0];
  fn_82695FA0(auStack_50,auStack_a0);
  fn_82696330(auStack_a0);
  uVar2 = fn_826B32D0(param_2,*(undefined4 *)(*(int *)(param_2 + 0x78) + 0x28c),
                            *(int *)(param_2 + 0x78) + 0x44,0,0xffffffffffffffff);
  fn_82745128(uVar2,param_2 + 0x78,auStack_80);
  auStack_f0[0] = 4;
  fn_82681728(aiStack_ec,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,0xffffffff82013604);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar3 = fn_826961B0(alStack_e0,uVar2);
  (**(code **)(iVar1 + 0x28))(param_1 + 0x10,param_2 + 0x78,aiStack_ec,uVar3,auStack_f0);
  lVar6 = (ulonglong)*(uint *)(aiStack_ec[0] + 8) - 1;
  *(int *)(aiStack_ec[0] + 8) = (int)lVar6;
  if (lVar6 == 0) {
    fn_826944C8(aiStack_ec[0]);
  }
  fn_82696330(alStack_e0);
  if ((uVar2 & 0xffffffff) != 0) {
    fn_826824B0(uVar2);
  }
  puVar5 = auStack_40;
  do {
    puVar5 = puVar5 + -0x10;
    fn_82696330(puVar5);
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  return;
}

