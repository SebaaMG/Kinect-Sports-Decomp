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
extern unsigned int *auStack_2a0;
extern unsigned int *auStack_700;
extern unsigned int *auStack_810;
extern int fn_82F111E8();
extern int fn_82F117F0();
extern int fn_82F11878();
extern int fn_82F1A430();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_820DA2C8;


void fn_82F12368(int param_1,int param_2,undefined8 param_3,int param_4,int param_5,int param_6,
                  undefined8 param_7,int *param_8)

{
  byte bVar1;
  undefined4 uVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  byte *pbVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;
  short *psVar18;
  byte *pbVar19;
  int iVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  int *in_stack_00000054;
  short asStack_910 [128];
  undefined1 auStack_810 [272];
  undefined1 auStack_700 [576];
  short asStack_4c0 [264];
  short asStack_2b0 [8];
  undefined1 auStack_2a0 [672];
  
  uVar2 = *(undefined4 *)(param_1 + 0x2030);
  iVar20 = 0;
  iVar17 = *(int *)(param_1 + 0x6d24) + param_5 * 0x34;
  (**(code **)(param_1 + 0x1f88))(param_3,param_4,asStack_4c0,0);
  dVar22 = (double)*(float *)(iVar17 + 0x30);
  dVar23 = dVar22 * (double)(longlong)asStack_4c0[0];
  if (dVar22 * (double)(longlong)asStack_4c0[0] * lbl_820DA2C8 <= lbl_82005710) {
    asStack_910[0] = (short)(int)(dVar23 * lbl_820DA2C8 - lbl_82005730);
  }
  else {
    asStack_910[0] = (short)(int)(dVar23 * lbl_820DA2C8 + lbl_82005730);
  }
  fn_82F1A430(param_1,asStack_910,asStack_4c0,0x40,iVar17,0,0);
  fn_82F117F0(param_1,asStack_910,auStack_700,0x40,param_5);
  iVar17 = fn_82F11878(param_1,auStack_810,asStack_910,uVar2,0x40);
  iVar17 = fn_82F111E8(param_1,auStack_810,iVar17 >> 1,param_6,param_7);
  (**(code **)(param_1 + 0x1f98))(auStack_2a0,auStack_700,8,0xff);
  (**(code **)(param_1 + 0x9d4))(auStack_2a0,auStack_2a0,0x40);
  pbVar19 = (byte *)(param_2 + 6);
  psVar18 = asStack_2b0;
  lVar21 = 8;
  do {
    psVar3 = psVar18 + 0xf;
    psVar4 = psVar18 + 0xe;
    psVar5 = psVar18 + 10;
    psVar6 = psVar18 + 9;
    pbVar7 = pbVar19 + 1;
    bVar1 = *pbVar19;
    psVar8 = psVar18 + 0xd;
    psVar9 = psVar18 + 0xc;
    psVar10 = psVar18 + 0xb;
    psVar18 = psVar18 + 8;
    pbVar11 = pbVar19 + -6;
    pbVar12 = pbVar19 + -5;
    pbVar13 = pbVar19 + -3;
    pbVar14 = pbVar19 + -2;
    pbVar15 = pbVar19 + -1;
    pbVar16 = pbVar19 + -4;
    pbVar19 = pbVar19 + param_4;
    iVar20 = ((int)*psVar3 - (uint)*pbVar7) * ((int)*psVar3 - (uint)*pbVar7) +
             ((int)*psVar4 - (uint)bVar1) * ((int)*psVar4 - (uint)bVar1) +
             ((int)*psVar18 - (uint)*pbVar11) * ((int)*psVar18 - (uint)*pbVar11) +
             ((int)*psVar6 - (uint)*pbVar12) * ((int)*psVar6 - (uint)*pbVar12) +
             ((int)*psVar5 - (uint)*pbVar16) * ((int)*psVar5 - (uint)*pbVar16) +
             ((int)*psVar10 - (uint)*pbVar13) * ((int)*psVar10 - (uint)*pbVar13) +
             ((int)*psVar9 - (uint)*pbVar14) * ((int)*psVar9 - (uint)*pbVar14) +
             ((int)*psVar8 - (uint)*pbVar15) * ((int)*psVar8 - (uint)*pbVar15) + iVar20;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  *param_8 = *(int *)(param_6 + 0x70) * iVar17 + (iVar20 * 200 >> 8);
  *in_stack_00000054 = (int)asStack_910[0];
  return;
}

