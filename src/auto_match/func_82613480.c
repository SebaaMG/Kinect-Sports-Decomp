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
extern unsigned int fStack_104;
extern unsigned int fStack_118;
extern unsigned int fStack_11c;
extern unsigned int fStack_124;
extern unsigned int fStack_138;
extern unsigned int fStack_13c;
extern unsigned int fStack_144;
extern unsigned int fStack_158;
extern unsigned int fStack_15c;
extern unsigned int fStack_164;
extern unsigned int fStack_17c;
extern unsigned int fStack_180;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a4;
extern unsigned int fStack_b8;
extern unsigned int fStack_bc;
extern unsigned int fStack_c4;
extern unsigned int fStack_d8;
extern unsigned int fStack_dc;
extern unsigned int fStack_e4;
extern unsigned int fStack_f8;
extern unsigned int fStack_fc;
extern int fn_82522D98();
extern int fn_828F10B0();
extern int fn_82A1DBD8();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821954E8;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_168;
extern unsigned int uStack_16c;
extern unsigned int uStack_170;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


void fn_82613480(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,undefined8 param_7,undefined4 *param_8,undefined4 *param_9)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  int in_r0;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  double extraout_f1;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 in_stack_0000005c;
  float fStack_180;
  float fStack_17c;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  float fStack_164;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  float fStack_144;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  float fStack_124;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  float fStack_104;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  float fStack_9c;
  float fStack_98;
  
  piVar4 = (int *)fn_82F6A538();
  dVar10 = extraout_f1;
  iVar5 = fn_82522D98(0x40);
  *(float *)(iVar5 + 0x10) = (float)param_5;
  *(float *)(iVar5 + 0x14) = (float)param_6;
  *(float *)(iVar5 + 0x18) = (float)param_4;
  iVar2 = *piVar4;
  dVar11 = (double)lbl_821916FC;
  dVar12 = (double)lbl_821954E8;
  if ((*(int *)(iVar2 + 4) != 1) ||
     ((double)*(float *)(*(int *)(iVar2 + 0xc) * 0x70 + *(int *)(iVar2 + 0x8c) + 0x18) <= param_5))
  {
    fStack_f8 = (float)(param_5 + param_6);
    if (*(float *)(iVar2 + 0x14) < fStack_f8) {
      *(float *)(iVar2 + 0x14) = fStack_f8;
    }
    uStack_110 = *param_8;
    uVar3 = (ulonglong)*(uint *)(iVar2 + 0xc) & 0x3fffffff;
    lVar8 = uVar3 * 4;
    uStack_10c = param_8[1];
    uStack_108 = param_8[2];
    lVar9 = uVar3 * 0x70;
    fStack_104 = (float)param_4;
    fStack_fc = (float)param_5;
    fn_82A1DBD8(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_110,0x1c);
    fn_82A1DBD8(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x1c,&uStack_110,0x1c);
    fn_82A1DBD8((lVar8 + 2) * 0x1c + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_110,0x1c);
    fn_82A1DBD8((lVar8 + 3) * 0x1c + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_110,0x1c);
    fStack_180 = (float)dVar12;
    fStack_17c = (float)dVar11;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x10,&fStack_180,2);
    fStack_180 = (float)dVar11;
    fStack_17c = (float)dVar11;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x2c,&fStack_180,2);
    fStack_180 = (float)dVar11;
    fStack_17c = (float)dVar12;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x48,&fStack_180,2);
    fStack_180 = (float)dVar12;
    fStack_17c = (float)dVar12;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 100,&fStack_180,2);
    uVar13 = param_8[1];
    uVar14 = param_8[2];
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0xc) = *param_8;
    puVar6 = (undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90));
    *puVar6 = puVar6[3];
    uVar15 = *param_9;
    uVar16 = param_9[1];
    uVar1 = param_9[2];
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x10) = uVar13;
    iVar7 = *(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90);
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar7 + 0x10);
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x14) = uVar14;
    iVar7 = *(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90);
    *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar7 + 0x14);
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x24) = uVar15;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x28) = uVar16;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x2c) = uVar1;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x30) = (float)dVar10;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x34) = (float)param_2;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x38) = (float)param_3;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x40) = (float)param_4;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x48) = (float)param_5;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x4c) =
         in_stack_0000005c;
    *(undefined1 *)(*(int *)(iVar2 + 0x94) + *(int *)(iVar2 + 0xc)) = 1;
    iVar7 = *(int *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar7 + 1;
    if (iVar7 + 1 == *(int *)(iVar2 + 8)) {
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
  }
  else {
    iVar7 = -1;
  }
  *(int *)(iVar5 + 0x1c) = iVar7;
  iVar2 = *piVar4;
  if ((*(int *)(iVar2 + 4) != 1) ||
     ((double)*(float *)(*(int *)(iVar2 + 0xc) * 0x70 + *(int *)(iVar2 + 0x8c) + 0x18) <= param_5))
  {
    fStack_b8 = (float)(param_5 + param_6);
    if (*(float *)(iVar2 + 0x14) < fStack_b8) {
      *(float *)(iVar2 + 0x14) = fStack_b8;
    }
    uStack_c8 = param_8[2];
    fStack_c4 = (float)param_4;
    uVar3 = (ulonglong)*(uint *)(iVar2 + 0xc) & 0x3fffffff;
    lVar8 = uVar3 * 4;
    uStack_d0 = *param_8;
    lVar9 = uVar3 * 0x70;
    uStack_cc = param_8[1];
    fStack_bc = (float)param_5;
    fn_82A1DBD8(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_d0,0x1c);
    fn_82A1DBD8(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x1c,&uStack_d0,0x1c);
    fn_82A1DBD8((lVar8 + 2) * 0x1c + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_d0,0x1c);
    fn_82A1DBD8((lVar8 + 3) * 0x1c + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_d0,0x1c);
    fStack_180 = (float)dVar12;
    fStack_17c = (float)dVar11;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x10,&fStack_180,2);
    fStack_180 = (float)dVar11;
    fStack_17c = (float)dVar11;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x2c,&fStack_180,2);
    fStack_180 = (float)dVar11;
    fStack_17c = (float)dVar12;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x48,&fStack_180,2);
    fStack_180 = (float)dVar12;
    fStack_17c = (float)dVar12;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 100,&fStack_180,2);
    uVar13 = param_8[1];
    uVar14 = param_8[2];
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0xc) = *param_8;
    puVar6 = (undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90));
    *puVar6 = puVar6[3];
    uVar15 = *param_9;
    uVar16 = param_9[1];
    uVar1 = param_9[2];
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x10) = uVar13;
    iVar7 = *(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90);
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar7 + 0x10);
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x14) = uVar14;
    iVar7 = *(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90);
    *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar7 + 0x14);
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x24) = uVar15;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x28) = uVar16;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x2c) = uVar1;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x30) = (float)dVar10;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x34) = (float)param_2;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x38) = (float)param_3;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x40) = (float)param_4;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x48) = (float)param_5;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x4c) = 0;
    *(undefined1 *)(*(int *)(iVar2 + 0x94) + *(int *)(iVar2 + 0xc)) = 0;
    iVar7 = *(int *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar7 + 1;
    if (iVar7 + 1 == *(int *)(iVar2 + 8)) {
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
  }
  else {
    iVar7 = -1;
  }
  *(int *)(iVar5 + 0x20) = iVar7;
  iVar2 = *piVar4;
  if ((*(int *)(iVar2 + 4) != 1) ||
     ((double)*(float *)(*(int *)(iVar2 + 0xc) * 0x70 + *(int *)(iVar2 + 0x8c) + 0x18) <= param_5))
  {
    fStack_158 = (float)(param_5 + param_6);
    if (*(float *)(iVar2 + 0x14) < fStack_158) {
      *(float *)(iVar2 + 0x14) = fStack_158;
    }
    uStack_170 = *param_8;
    uStack_16c = param_8[1];
    uVar3 = (ulonglong)*(uint *)(iVar2 + 0xc) & 0x3fffffff;
    lVar8 = uVar3 * 4;
    lVar9 = uVar3 * 0x70;
    uStack_168 = param_8[2];
    fStack_164 = (float)param_4;
    fStack_15c = (float)param_5;
    fn_82A1DBD8(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_170,0x1c);
    fn_82A1DBD8(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x1c,&uStack_170,0x1c);
    fn_82A1DBD8((lVar8 + 2) * 0x1c + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_170,0x1c);
    fn_82A1DBD8((lVar8 + 3) * 0x1c + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_170,0x1c);
    fStack_180 = (float)dVar12;
    fStack_17c = (float)dVar11;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x10,&fStack_180,2);
    fStack_180 = (float)dVar11;
    fStack_17c = (float)dVar11;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x2c,&fStack_180,2);
    fStack_180 = (float)dVar11;
    fStack_17c = (float)dVar12;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x48,&fStack_180,2);
    fStack_180 = (float)dVar12;
    fStack_17c = (float)dVar12;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 100,&fStack_180,2);
    uVar13 = param_8[1];
    uVar14 = param_8[2];
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0xc) = *param_8;
    puVar6 = (undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90));
    *puVar6 = puVar6[3];
    uVar15 = *param_9;
    uVar16 = param_9[1];
    uVar1 = param_9[2];
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x10) = uVar13;
    iVar7 = *(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90);
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar7 + 0x10);
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x14) = uVar14;
    iVar7 = *(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90);
    *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar7 + 0x14);
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x24) = uVar15;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x28) = uVar16;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x2c) = uVar1;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x30) = (float)dVar10;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x34) = (float)param_2;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x38) = (float)param_3;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x40) = (float)param_4;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x48) = (float)param_5;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x4c) = 0;
    *(undefined1 *)(*(int *)(iVar2 + 0x94) + *(int *)(iVar2 + 0xc)) = 0;
    iVar7 = *(int *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar7 + 1;
    if (iVar7 + 1 == *(int *)(iVar2 + 8)) {
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
  }
  else {
    iVar7 = -1;
  }
  *(int *)(iVar5 + 0x24) = iVar7;
  iVar2 = *piVar4;
  if ((*(int *)(iVar2 + 4) != 1) ||
     ((double)*(float *)(*(int *)(iVar2 + 0xc) * 0x70 + *(int *)(iVar2 + 0x8c) + 0x18) <= param_5))
  {
    fStack_138 = (float)(param_5 + param_6);
    if (*(float *)(iVar2 + 0x14) < fStack_138) {
      *(float *)(iVar2 + 0x14) = fStack_138;
    }
    uStack_150 = *param_8;
    uStack_148 = param_8[2];
    uVar3 = (ulonglong)*(uint *)(iVar2 + 0xc) & 0x3fffffff;
    lVar8 = uVar3 * 4;
    fStack_144 = (float)param_4;
    lVar9 = uVar3 * 0x70;
    fStack_13c = (float)param_5;
    uStack_14c = param_8[1];
    fn_82A1DBD8(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_150,0x1c);
    fn_82A1DBD8(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x1c,&uStack_150,0x1c);
    fn_82A1DBD8((lVar8 + 2) * 0x1c + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_150,0x1c);
    fn_82A1DBD8((lVar8 + 3) * 0x1c + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_150,0x1c);
    fStack_180 = (float)dVar12;
    fStack_17c = (float)dVar11;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x10,&fStack_180,2);
    fStack_180 = (float)dVar11;
    fStack_17c = (float)dVar11;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x2c,&fStack_180,2);
    fStack_180 = (float)dVar11;
    fStack_17c = (float)dVar12;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x48,&fStack_180,2);
    fStack_180 = (float)dVar12;
    fStack_17c = (float)dVar12;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 100,&fStack_180,2);
    uVar13 = param_8[1];
    uVar14 = param_8[2];
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0xc) = *param_8;
    puVar6 = (undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90));
    *puVar6 = puVar6[3];
    uVar15 = *param_9;
    uVar16 = param_9[1];
    uVar1 = param_9[2];
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x10) = uVar13;
    iVar7 = *(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90);
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar7 + 0x10);
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x14) = uVar14;
    iVar7 = *(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90);
    *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar7 + 0x14);
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x24) = uVar15;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x28) = uVar16;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x2c) = uVar1;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x30) = (float)dVar10;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x34) = (float)param_2;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x38) = (float)param_3;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x40) = (float)param_4;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x48) = (float)param_5;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x4c) = 0;
    *(undefined1 *)(*(int *)(iVar2 + 0x94) + *(int *)(iVar2 + 0xc)) = 0;
    iVar7 = *(int *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar7 + 1;
    if (iVar7 + 1 == *(int *)(iVar2 + 8)) {
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
  }
  else {
    iVar7 = -1;
  }
  *(int *)(iVar5 + 0x28) = iVar7;
  iVar2 = *piVar4;
  if ((*(int *)(iVar2 + 4) != 1) ||
     ((double)*(float *)(*(int *)(iVar2 + 0xc) * 0x70 + *(int *)(iVar2 + 0x8c) + 0x18) <= param_5))
  {
    fStack_118 = (float)(param_5 + param_6);
    if (*(float *)(iVar2 + 0x14) < fStack_118) {
      *(float *)(iVar2 + 0x14) = fStack_118;
    }
    uStack_130 = *param_8;
    uStack_12c = param_8[1];
    uStack_128 = param_8[2];
    uVar3 = (ulonglong)*(uint *)(iVar2 + 0xc) & 0x3fffffff;
    lVar8 = uVar3 * 4;
    lVar9 = uVar3 * 0x70;
    fStack_124 = (float)param_4;
    fStack_11c = (float)param_5;
    fn_82A1DBD8(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_130,0x1c);
    fn_82A1DBD8(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x1c,&uStack_130,0x1c);
    fn_82A1DBD8((lVar8 + 2) * 0x1c + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_130,0x1c);
    fn_82A1DBD8((lVar8 + 3) * 0x1c + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_130,0x1c);
    fStack_180 = (float)dVar12;
    fStack_17c = (float)dVar11;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x10,&fStack_180,2);
    fStack_180 = (float)dVar11;
    fStack_17c = (float)dVar11;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x2c,&fStack_180,2);
    fStack_180 = (float)dVar11;
    fStack_17c = (float)dVar12;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x48,&fStack_180,2);
    fStack_180 = (float)dVar12;
    fStack_17c = (float)dVar12;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 100,&fStack_180,2);
    uVar13 = param_8[1];
    uVar14 = param_8[2];
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0xc) = *param_8;
    puVar6 = (undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90));
    *puVar6 = puVar6[3];
    uVar15 = *param_9;
    uVar16 = param_9[1];
    uVar1 = param_9[2];
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x10) = uVar13;
    iVar7 = *(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90);
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar7 + 0x10);
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x14) = uVar14;
    iVar7 = *(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90);
    *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar7 + 0x14);
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x24) = uVar15;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x28) = uVar16;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x2c) = uVar1;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x30) = (float)dVar10;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x34) = (float)param_2;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x38) = (float)param_3;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x40) = (float)param_4;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x48) = (float)param_5;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x4c) = 0;
    *(undefined1 *)(*(int *)(iVar2 + 0x94) + *(int *)(iVar2 + 0xc)) = 0;
    iVar7 = *(int *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar7 + 1;
    if (iVar7 + 1 == *(int *)(iVar2 + 8)) {
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
  }
  else {
    iVar7 = -1;
  }
  *(int *)(iVar5 + 0x2c) = iVar7;
  iVar2 = *piVar4;
  if ((*(int *)(iVar2 + 4) != 1) ||
     ((double)*(float *)(*(int *)(iVar2 + 0xc) * 0x70 + *(int *)(iVar2 + 0x8c) + 0x18) <= param_5))
  {
    fStack_d8 = (float)(param_5 + param_6);
    if (*(float *)(iVar2 + 0x14) < fStack_d8) {
      *(float *)(iVar2 + 0x14) = fStack_d8;
    }
    uStack_f0 = *param_8;
    uStack_ec = param_8[1];
    uStack_e8 = param_8[2];
    uVar3 = (ulonglong)*(uint *)(iVar2 + 0xc) & 0x3fffffff;
    lVar8 = uVar3 * 4;
    lVar9 = uVar3 * 0x70;
    fStack_e4 = (float)param_4;
    fStack_dc = (float)param_5;
    fn_82A1DBD8(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_f0,0x1c);
    fn_82A1DBD8(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x1c,&uStack_f0,0x1c);
    fn_82A1DBD8((lVar8 + 2) * 0x1c + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_f0,0x1c);
    fn_82A1DBD8((lVar8 + 3) * 0x1c + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_f0,0x1c);
    fStack_180 = (float)dVar12;
    fStack_17c = (float)dVar11;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x10,&fStack_180,2);
    fStack_180 = (float)dVar11;
    fStack_17c = (float)dVar11;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x2c,&fStack_180,2);
    fStack_180 = (float)dVar11;
    fStack_17c = (float)dVar12;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x48,&fStack_180,2);
    fStack_180 = (float)dVar12;
    fStack_17c = (float)dVar12;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 100,&fStack_180,2);
    uVar13 = param_8[1];
    uVar14 = param_8[2];
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0xc) = *param_8;
    puVar6 = (undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90));
    *puVar6 = puVar6[3];
    uVar15 = *param_9;
    uVar16 = param_9[1];
    uVar1 = param_9[2];
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x10) = uVar13;
    iVar7 = *(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90);
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar7 + 0x10);
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x14) = uVar14;
    iVar7 = *(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90);
    *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar7 + 0x14);
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x24) = uVar15;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x28) = uVar16;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x2c) = uVar1;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x30) = (float)dVar10;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x34) = (float)param_2;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x38) = (float)param_3;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x40) = (float)param_4;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x48) = (float)param_5;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x4c) = 0;
    *(undefined1 *)(*(int *)(iVar2 + 0x94) + *(int *)(iVar2 + 0xc)) = 0;
    iVar7 = *(int *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar7 + 1;
    if (iVar7 + 1 == *(int *)(iVar2 + 8)) {
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
  }
  else {
    iVar7 = -1;
  }
  *(int *)(iVar5 + 0x30) = iVar7;
  iVar2 = *piVar4;
  if ((*(int *)(iVar2 + 4) != 1) ||
     ((double)*(float *)(*(int *)(iVar2 + 0xc) * 0x70 + *(int *)(iVar2 + 0x8c) + 0x18) <= param_5))
  {
    fStack_98 = (float)(param_5 + param_6);
    if (*(float *)(iVar2 + 0x14) < fStack_98) {
      *(float *)(iVar2 + 0x14) = fStack_98;
    }
    uStack_b0 = *param_8;
    uStack_ac = param_8[1];
    uStack_a8 = param_8[2];
    uVar3 = (ulonglong)*(uint *)(iVar2 + 0xc) & 0x3fffffff;
    lVar8 = uVar3 * 4;
    lVar9 = uVar3 * 0x70;
    fStack_a4 = (float)param_4;
    fStack_9c = (float)param_5;
    fn_82A1DBD8(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_b0,0x1c);
    fn_82A1DBD8(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x1c,&uStack_b0,0x1c);
    fn_82A1DBD8((lVar8 + 2) * 0x1c + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_b0,0x1c);
    fn_82A1DBD8((lVar8 + 3) * 0x1c + (ulonglong)*(uint *)(iVar2 + 0x8c),&uStack_b0,0x1c);
    fStack_180 = (float)dVar12;
    fStack_17c = (float)dVar11;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x10,&fStack_180,2);
    fStack_180 = (float)dVar11;
    fStack_17c = (float)dVar11;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x2c,&fStack_180,2);
    fStack_180 = (float)dVar11;
    fStack_17c = (float)dVar12;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 0x48,&fStack_180,2);
    fStack_180 = (float)dVar12;
    fStack_17c = (float)dVar12;
    fn_828F10B0(lVar9 + (ulonglong)*(uint *)(iVar2 + 0x8c) + 100,&fStack_180,2);
    uVar13 = param_8[1];
    uVar14 = param_8[2];
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0xc) = *param_8;
    puVar6 = (undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90));
    *puVar6 = puVar6[3];
    uVar15 = *param_9;
    uVar16 = param_9[1];
    uVar1 = param_9[2];
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x10) = uVar13;
    iVar7 = *(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90);
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar7 + 0x10);
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x14) = uVar14;
    iVar7 = *(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90);
    *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar7 + 0x14);
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x24) = uVar15;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x28) = uVar16;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x2c) = uVar1;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x30) = (float)dVar10;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x34) = (float)param_2;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x38) = (float)param_3;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x40) = (float)param_4;
    *(float *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x48) = (float)param_5;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) * 0x50 + *(int *)(iVar2 + 0x90) + 0x4c) = 0;
    *(undefined1 *)(*(int *)(iVar2 + 0x94) + *(int *)(iVar2 + 0xc)) = 0;
    iVar7 = *(int *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar7 + 1;
    if (iVar7 + 1 == *(int *)(iVar2 + 8)) {
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
  }
  else {
    iVar7 = -1;
  }
  *(int *)(iVar5 + 0x34) = iVar7;
  puVar6 = (undefined4 *)(in_r0 + (int)param_8 & 0xfffffff0);
  uVar13 = *puVar6;
  uVar14 = puVar6[1];
  uVar15 = puVar6[2];
  uVar16 = puVar6[3];
  *(undefined4 *)(iVar5 + 0x38) = 0;
  puVar6 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
  *puVar6 = uVar13;
  puVar6[1] = uVar14;
  puVar6[2] = uVar15;
  puVar6[3] = uVar16;
  *(int *)(iVar5 + 0x3c) = piVar4[1];
  piVar4[1] = iVar5;
  fn_82F6A584();
  return;
}

