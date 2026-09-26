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
extern unsigned int *auStack_120;
extern int fn_822CEE40();
extern int fn_822CEFA0();
extern int fn_8237A158();
extern int fn_8237A2E0();
extern int fn_8237A598();
extern int fn_8237B3E0();
extern int fn_8237C768();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern int fn_82F6DA24();
extern int fn_82F6DCBC();
extern unsigned int lbl_8218E8E8;


void fn_82379AB8(undefined8 param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
                  int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int in_r0;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double extraout_f1;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined1 auStack_120 [288];
  
  fn_82F6A540();
  lVar13 = fn_82F6DA24();
  iVar8 = (int)lVar13;
  iVar16 = (int)param_2;
  dVar21 = extraout_f1;
  if ((((*(int *)(iVar8 + 0x20ec) != (int)param_4) || (*(int *)(iVar8 + 0x20f0) != param_5)) ||
      ((double)*(float *)(iVar8 + 0x20f4) != extraout_f1)) ||
     (((ulonglong)*(uint *)(iVar8 + 0x20e0) != (param_2 & 0xffffffff) ||
      ((ulonglong)*(uint *)(iVar8 + 0x20e4) != (param_3 & 0xffffffff))))) {
    *(float *)(iVar8 + 0x20f4) = (float)extraout_f1;
    *(int *)(iVar8 + 0x20ec) = (int)param_4;
    *(int *)(iVar8 + 0x20f0) = param_5;
    *(int *)(iVar8 + 0x20e0) = iVar16;
    *(int *)(iVar8 + 0x20e4) = (int)param_3;
    uVar20 = fn_8237A158(extraout_f1,auStack_120,lVar13,param_3,param_4);
    iVar14 = fn_8237A2E0(uVar20,(double)*(float *)(iVar16 + 0x344),auStack_120,lVar13,param_4)
    ;
    puVar9 = (undefined4 *)(in_r0 + iVar14 & 0xfffffff0);
    uVar29 = puVar9[1];
    uVar31 = puVar9[2];
    uVar33 = puVar9[3];
    puVar10 = (undefined4 *)(iVar8 + 0x2100U & 0xfffffff0);
    *puVar10 = *puVar9;
    puVar10[1] = uVar29;
    puVar10[2] = uVar31;
    puVar10[3] = uVar33;
  }
  iVar14 = fn_822CEE40(param_3);
  if (iVar14 != 0) {
    uVar29 = *(undefined4 *)(iVar8 + 0x7c);
    iVar11 = iVar8 + 0x20;
    dVar27 = (double)*(float *)(iVar8 + 0xc4);
    uVar31 = *(undefined4 *)(iVar8 + 0xb0);
    uVar33 = *(undefined4 *)(iVar8 + 0xb4);
    uVar1 = *(undefined4 *)(iVar8 + 0xbc);
    dVar26 = (double)*(float *)(iVar8 + 0x118);
    dVar19 = (double)lbl_8218E8E8;
    uVar2 = *(undefined4 *)(iVar8 + 0xc0);
    puVar9 = (undefined4 *)(in_r0 + iVar11 & 0xfffffff0);
    uVar43 = *puVar9;
    uVar44 = puVar9[1];
    uVar45 = puVar9[2];
    uVar46 = puVar9[3];
    puVar9 = (undefined4 *)(in_r0 + iVar8 + 400 & 0xfffffff0);
    uVar47 = *puVar9;
    uVar48 = puVar9[1];
    uVar49 = puVar9[2];
    uVar50 = puVar9[3];
    uVar3 = *(undefined4 *)(iVar8 + 0x80);
    uVar4 = *(undefined4 *)(iVar8 + 0x84);
    dVar25 = (double)*(float *)(iVar8 + 0x11c);
    dVar24 = (double)*(float *)(iVar8 + 0x120);
    uVar5 = *(undefined4 *)(iVar8 + 0x124);
    dVar23 = (double)*(float *)(iVar8 + 0x1b0);
    uVar6 = *(undefined4 *)(iVar8 + 0xdc);
    dVar22 = (double)*(float *)(iVar8 + 0x1b4);
    iVar12 = iVar8 + 0x1a0;
    uVar7 = *(undefined4 *)(iVar8 + 0x1b8);
    lVar17 = param_4 * 0x148 + lVar13;
    puVar9 = (undefined4 *)(in_r0 + iVar11 & 0xfffffff0);
    *puVar9 = uVar47;
    puVar9[1] = uVar48;
    puVar9[2] = uVar49;
    puVar9[3] = uVar50;
    lVar18 = lVar17 + 0x1dc;
    puVar9 = (undefined4 *)(in_r0 + iVar8 + 0x30 & 0xfffffff0);
    uVar39 = *puVar9;
    uVar40 = puVar9[1];
    uVar41 = puVar9[2];
    uVar42 = puVar9[3];
    puVar9 = (undefined4 *)(in_r0 + iVar12 & 0xfffffff0);
    uVar35 = *puVar9;
    uVar36 = puVar9[1];
    uVar37 = puVar9[2];
    uVar38 = puVar9[3];
    if (dVar19 <= dVar21) {
      lVar18 = lVar17 + 0x280;
    }
    fn_8237A598(lVar13,lVar18,0);
    *(undefined4 *)(iVar8 + 0x2124) = *(undefined4 *)(iVar8 + 0x118);
    iVar15 = fn_822CEFA0(iVar14);
    if (((iVar15 == 0) || (*(int *)(iVar16 + 0x2c) == *(int *)((int)param_3 + 0x2c))) ||
       ((fn_8237B3E0(lVar13,iVar14), *(int *)(iVar14 + 0x24) != 0 &&
        (iVar16 = fn_8237C768(iVar14), iVar16 == 0)))) {
      *(undefined4 *)(iVar8 + 0x20e8) = 0;
    }
    else {
      puVar9 = (undefined4 *)(in_r0 + iVar12 & 0xfffffff0);
      uVar28 = *puVar9;
      uVar30 = puVar9[1];
      uVar32 = puVar9[2];
      uVar34 = puVar9[3];
      *(undefined4 *)(iVar8 + 0x2120) = *(undefined4 *)(iVar8 + 0x1b0);
      *(int *)(iVar8 + 0x20e8) = iVar14;
      puVar9 = (undefined4 *)(iVar8 + 0x2110U & 0xfffffff0);
      *puVar9 = uVar28;
      puVar9[1] = uVar30;
      puVar9[2] = uVar32;
      puVar9[3] = uVar34;
      *(undefined4 *)(iVar14 + 0x340) = 1;
    }
    *(float *)(iVar8 + 0xc4) = (float)dVar27;
    *(undefined4 *)(iVar8 + 0xb0) = uVar31;
    *(float *)(iVar8 + 0x118) = (float)dVar26;
    *(undefined4 *)(iVar8 + 0xb4) = uVar33;
    *(float *)(iVar8 + 0x11c) = (float)dVar25;
    *(undefined4 *)(iVar8 + 0xbc) = uVar1;
    *(float *)(iVar8 + 0x120) = (float)dVar24;
    *(undefined4 *)(iVar8 + 0xc0) = uVar2;
    *(float *)(iVar8 + 0x1b0) = (float)dVar23;
    *(undefined4 *)(iVar8 + 0x7c) = uVar29;
    *(float *)(iVar8 + 0x1b4) = (float)dVar22;
    *(undefined4 *)(iVar8 + 0x80) = uVar3;
    puVar9 = (undefined4 *)(in_r0 + iVar8 + 0x30 & 0xfffffff0);
    *puVar9 = uVar39;
    puVar9[1] = uVar40;
    puVar9[2] = uVar41;
    puVar9[3] = uVar42;
    *(undefined4 *)(iVar8 + 0x84) = uVar4;
    puVar9 = (undefined4 *)(in_r0 + iVar11 & 0xfffffff0);
    *puVar9 = uVar43;
    puVar9[1] = uVar44;
    puVar9[2] = uVar45;
    puVar9[3] = uVar46;
    *(undefined4 *)(iVar8 + 0x124) = uVar5;
    puVar9 = (undefined4 *)(in_r0 + iVar8 + 400 & 0xfffffff0);
    *puVar9 = uVar47;
    puVar9[1] = uVar48;
    puVar9[2] = uVar49;
    puVar9[3] = uVar50;
    *(undefined4 *)(iVar8 + 0xdc) = uVar6;
    puVar9 = (undefined4 *)(in_r0 + iVar12 & 0xfffffff0);
    *puVar9 = uVar35;
    puVar9[1] = uVar36;
    puVar9[2] = uVar37;
    puVar9[3] = uVar38;
    *(undefined4 *)(iVar8 + 0x1b8) = uVar7;
  }
  fn_82F6DCBC();
  fn_82F6A58C();
  return;
}

