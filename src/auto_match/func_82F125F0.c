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
extern int fn_82F112E0();
extern int fn_82F117F0();
extern int fn_82F11878();
extern int fn_82F1A430();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_820DA2C8;


ulonglong fn_82F125F0(int param_1,int param_2,undefined8 param_3,int param_4,int param_5,
                       int param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  int iVar18;
  short *psVar19;
  byte *pbVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  int *in_stack_00000054;
  int *in_stack_0000005c;
  int *in_stack_00000064;
  longlong lStack_920;
  int aiStack_918 [2];
  short asStack_910 [128];
  undefined1 auStack_810 [272];
  undefined1 auStack_700 [576];
  short asStack_4c0 [264];
  short asStack_2b0 [8];
  undefined1 auStack_2a0 [672];
  
  uVar3 = *(undefined4 *)(param_1 + 0x2030);
  iVar22 = 0;
  iVar18 = *(int *)(param_1 + 0x6d24) + param_5 * 0x34;
  (**(code **)(param_1 + 0x1f88))(param_3,param_4,asStack_4c0,0);
  dVar24 = (double)*(float *)(iVar18 + 0x30);
  dVar25 = dVar24 * (double)(longlong)asStack_4c0[0];
  if (dVar24 * (double)(longlong)asStack_4c0[0] * lbl_820DA2C8 <= lbl_82005710) {
    iVar1 = (int)(dVar25 * lbl_820DA2C8 - lbl_82005730);
    asStack_910[0] = (short)iVar1;
  }
  else {
    iVar1 = (int)(dVar25 * lbl_820DA2C8 + lbl_82005730);
    asStack_910[0] = (short)iVar1;
  }
  lStack_920 = (longlong)iVar1;
  fn_82F1A430(param_1,asStack_910,asStack_4c0,0x40,iVar18,0,0);
  fn_82F117F0(param_1,asStack_910,auStack_700,0x40,param_5);
  iVar18 = fn_82F11878(param_1,auStack_810,asStack_910,uVar3,0x40);
  uVar21 = (ulonglong)(iVar18 >> 1);
  fn_82F112E0(param_1,auStack_810,uVar21,param_6,param_7,param_8,aiStack_918,&lStack_920);
  (**(code **)(param_1 + 0x1f98))(auStack_2a0,auStack_700,8,0xff);
  (**(code **)(param_1 + 0x9d4))(auStack_2a0,auStack_2a0,0x40);
  pbVar20 = (byte *)(param_2 + 6);
  psVar19 = asStack_2b0;
  lVar23 = 8;
  do {
    psVar4 = psVar19 + 0xe;
    psVar5 = psVar19 + 0xf;
    psVar6 = psVar19 + 10;
    psVar7 = psVar19 + 0xd;
    psVar8 = psVar19 + 0xc;
    psVar9 = psVar19 + 0xb;
    psVar10 = psVar19 + 9;
    psVar19 = psVar19 + 8;
    pbVar11 = pbVar20 + -6;
    bVar2 = *pbVar20;
    pbVar12 = pbVar20 + -3;
    pbVar13 = pbVar20 + -5;
    pbVar14 = pbVar20 + -4;
    pbVar15 = pbVar20 + -2;
    pbVar16 = pbVar20 + -1;
    pbVar17 = pbVar20 + 1;
    pbVar20 = pbVar20 + param_4;
    iVar22 = ((int)*psVar4 - (uint)bVar2) * ((int)*psVar4 - (uint)bVar2) +
             ((int)*psVar19 - (uint)*pbVar11) * ((int)*psVar19 - (uint)*pbVar11) +
             ((int)*psVar10 - (uint)*pbVar13) * ((int)*psVar10 - (uint)*pbVar13) +
             ((int)*psVar6 - (uint)*pbVar14) * ((int)*psVar6 - (uint)*pbVar14) +
             ((int)*psVar9 - (uint)*pbVar12) * ((int)*psVar9 - (uint)*pbVar12) +
             ((int)*psVar8 - (uint)*pbVar15) * ((int)*psVar8 - (uint)*pbVar15) +
             ((int)*psVar7 - (uint)*pbVar16) * ((int)*psVar7 - (uint)*pbVar16) +
             ((int)*psVar5 - (uint)*pbVar17) * ((int)*psVar5 - (uint)*pbVar17) + iVar22;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  iVar18 = iVar22 * 200 >> 8;
  *in_stack_00000054 = *(int *)(param_6 + 0x70) * aiStack_918[0] + iVar18;
  *in_stack_0000005c = *(int *)(param_6 + 0x70) * (((U64)(lStack_920) >> 0) & 0xFFFFFFFF) + iVar18;
  *in_stack_00000064 = (int)asStack_910[0];
  return ((~uVar21 & 0xffffffff) >> 0x1f) + (ulonglong)(uVar21 < 2) & 1;
}

