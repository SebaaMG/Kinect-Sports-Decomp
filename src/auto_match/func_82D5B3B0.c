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
extern unsigned int *auStack_1120;
extern unsigned int *auStack_1160;
extern unsigned int *auStack_1170;
extern unsigned int *auStack_1180;
extern unsigned int *auStack_11a0;
extern unsigned int *auStack_11b0;
extern unsigned int *auStack_11c0;
extern unsigned int *auStack_11d0;
extern int fn_82CE5410();
extern int fn_82CE6820();
extern int fn_82D5BCE0();
extern int fn_82D5BDC0();
extern int fn_82D699A8();
extern int fn_82D69C40();
extern int fn_82D70D40();
extern int fn_82D70F30();
extern int fn_82D71B20();
extern int fn_82DD6E28();
extern unsigned int iStack_1190;
extern unsigned int iStack_11e4;
extern unsigned int iStack_11e8;
extern unsigned int iStack_11ec;
extern unsigned int iStack_11f0;
extern unsigned int iStack_1234;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82138F5C;
extern unsigned int lbl_82138F84;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_1200;
extern unsigned int uStack_1208;
extern unsigned int uStack_1210;
extern unsigned int uStack_1214;
extern unsigned int uStack_1218;
extern unsigned int uStack_121c;
extern unsigned int uStack_1238;
extern unsigned int uStack_123a;


uint fn_82D5B3B0(int *param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 in_r0;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined **ppuStack_1240;
  undefined2 uStack_123a;
  undefined4 uStack_1238;
  int iStack_1234;
  char cStack_1230;
  undefined1 *puStack_1220;
  undefined4 uStack_121c;
  undefined4 uStack_1218;
  undefined4 uStack_1214;
  undefined4 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  int iStack_11f0;
  int iStack_11ec;
  int iStack_11e8;
  int iStack_11e4;
  undefined ***pppuStack_11e0;
  undefined1 auStack_11d0 [16];
  undefined1 auStack_11c0 [16];
  undefined1 auStack_11b0 [16];
  undefined1 auStack_11a0 [16];
  int iStack_1190;
  undefined1 auStack_1180 [16];
  undefined1 auStack_1170 [16];
  undefined1 auStack_1160 [64];
  undefined1 auStack_1120 [4384];
  
  iVar8 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  if (puVar2 < *(undefined4 **)(iVar8 + 0xc)) {
    *puVar2 = "LtCvxLst";
    puVar2[3] = "StTim";
    uVar12 = TBLr;
    puVar2[1] = (int)uVar12;
    *(undefined4 **)(iVar8 + 4) = puVar2 + 4;
  }
  iVar8 = *(int *)param_1[1];
  fn_82D5BDC0(auStack_1120,param_5);
  dVar17 = (double)lbl_82005344;
  uVar12 = 0x19;
  uVar13 = 0xffffffff8212fc60;
  if ((*(byte *)(param_3 + 0xb) & 0x20) != 0) goto LAB_82d5b578;
  while( true ) {
    iVar9 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar9 + 4);
    if (puVar2 < *(undefined4 **)(iVar9 + 0xc)) {
      *puVar2 = "StStream";
      uVar4 = TBLr;
      puVar2[1] = (int)uVar4;
      *(undefined4 **)(iVar9 + 4) = puVar2 + 3;
    }
    sVar1 = *(short *)(param_3 + 0xc);
    *(short *)(param_3 + 0xc) = sVar1 + -1;
    if (-1 < sVar1) break;
    *(short *)(param_3 + 0xc) = (short)uVar12;
    fn_82CE6820(auStack_1160,*(undefined4 *)(*param_1 + 8),*(undefined4 *)(param_1[1] + 8));
    uStack_1218 = *(undefined4 *)*param_1;
    puStack_1220 = auStack_1160;
    uStack_1214 = *(undefined4 *)param_1[1];
    uStack_121c = ((undefined4 *)*param_1)[2];
    uStack_1210 = *(undefined4 *)(param_1[3] + 8);
    iVar9 = fn_82DD6E28(&puStack_1220,param_3,param_4,auStack_1170);
    if (iVar9 == 0) break;
    fn_82D70D40(param_3 + 0x10,*(undefined4 *)param_1[3],param_1[4],
                      *(undefined4 *)(param_5 + 4));
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(byte *)(param_3 + 0xb) = *(byte *)(param_3 + 0xb) | 0x20;
    fn_82D5BCE0(auStack_1120,*param_1,param_1[1],param_5,param_1[4]);
LAB_82d5b578:
    iStack_11e8 = param_1[2];
    iStack_11e4 = param_1[3];
    iStack_1190 = param_1[0x18];
    iStack_11f0 = *param_1;
    iStack_11ec = param_1[1];
    iStack_1234 = param_1[4];
    iVar9 = (int)in_r0;
    puVar2 = (undefined4 *)((int)param_1 + iVar9 + 0x20 & 0xfffffff0);
    uVar18 = *puVar2;
    uVar19 = puVar2[1];
    uVar20 = puVar2[2];
    uVar21 = puVar2[3];
    pppuStack_11e0 = &ppuStack_1240;
    puVar2 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
    uVar34 = puVar2[1];
    uVar35 = puVar2[2];
    uVar36 = puVar2[3];
    puVar5 = (undefined4 *)((uint)(param_1 + 0x10) & 0xfffffff0);
    uVar30 = *puVar5;
    uVar31 = puVar5[1];
    uVar32 = puVar5[2];
    uVar33 = puVar5[3];
    puVar5 = (undefined4 *)((uint)(param_1 + 0x14) & 0xfffffff0);
    uVar26 = *puVar5;
    uVar27 = puVar5[1];
    uVar28 = puVar5[2];
    uVar29 = puVar5[3];
    puVar5 = (undefined4 *)((uint)(param_1 + 0x1c) & 0xfffffff0);
    uVar22 = *puVar5;
    uVar23 = puVar5[1];
    uVar24 = puVar5[2];
    uVar25 = puVar5[3];
    puVar5 = (undefined4 *)((uint)(auStack_11c0 + iVar9) & 0xfffffff0);
    *puVar5 = *puVar2;
    puVar5[1] = uVar34;
    puVar5[2] = uVar35;
    puVar5[3] = uVar36;
    puVar2 = (undefined4 *)((uint)(auStack_11b0 + iVar9) & 0xfffffff0);
    *puVar2 = uVar30;
    puVar2[1] = uVar31;
    puVar2[2] = uVar32;
    puVar2[3] = uVar33;
    puVar2 = (undefined4 *)((uint)(auStack_11d0 + iVar9) & 0xfffffff0);
    *puVar2 = uVar18;
    puVar2[1] = uVar19;
    puVar2[2] = uVar20;
    puVar2[3] = uVar21;
    uStack_123a = 1;
    puVar2 = (undefined4 *)((uint)(auStack_11a0 + iVar9) & 0xfffffff0);
    *puVar2 = uVar26;
    puVar2[1] = uVar27;
    puVar2[2] = uVar28;
    puVar2[3] = uVar29;
    uStack_1238 = 2;
    puVar2 = (undefined4 *)((uint)(auStack_1180 + iVar9) & 0xfffffff0);
    *puVar2 = uVar22;
    puVar2[1] = uVar23;
    puVar2[2] = uVar24;
    puVar2[3] = uVar25;
    ppuStack_1240 = &lbl_82138F5C;
    cStack_1230 = '\0';
    uStack_1208 = uVar12;
    uStack_1200 = uVar13;
    iVar10 = fn_82D69C40(&iStack_11f0,param_2,param_3,param_4,param_5);
    uVar13 = uStack_1200;
    uVar12 = uStack_1208;
    pppuStack_11e0 = (undefined ***)iStack_1234;
    ppuVar14 = (undefined **)uStack_1200;
    if (cStack_1230 == '\0') {
      if ((*(char *)(param_3 + 0xe) == '\0') || ((*(byte *)(param_3 + 0xb) & 0x40) != 0))
      goto LAB_82d5b7b4;
      iVar9 = param_1[1];
      for (iVar6 = *(int *)(param_1[1] + 0xc); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xc)) {
        iVar9 = iVar6;
      }
      iVar6 = *param_1;
      for (iVar7 = *(int *)(*param_1 + 0xc); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0xc)) {
        iVar6 = iVar7;
      }
      dVar16 = (double)*(float *)(iVar9 + 0x4c);
      if ((float)((double)*(float *)(iVar6 + 0x4c) - (double)*(float *)(iVar9 + 0x4c)) < 0.0) {
        dVar16 = (double)*(float *)(iVar6 + 0x4c);
      }
      if (-(float)(dVar16 * dVar17) <= *(float *)(param_4 + 0xc)) goto LAB_82d5b7b4;
    }
    fn_82D5BCE0(auStack_1120,*param_1,param_1[1],param_5,param_1[4]);
    fn_82D699A8(param_2,param_3,param_1[4],*(undefined4 *)(param_5 + 4));
    *(byte *)(param_3 + 0xb) = *(byte *)(param_3 + 0xb) & 0xdf;
    if ((undefined2 *)(param_3 + 0xc) != (undefined2 *)0x0) {
      *(undefined4 *)(param_3 + 0x10) = 0;
      *(undefined4 *)(param_3 + 0x14) = 0;
      *(undefined4 *)(param_3 + 0x18) = 0x80000000;
    }
    fn_82D70F30(param_3 + 0x10);
    *(undefined2 *)(param_3 + 0xc) = (short)uVar12;
    ppuStack_1240 = ppuVar14;
  }
  *(undefined4 *)(param_4 + 0xc) = lbl_82138F84;
  uVar3 = *(uint *)(iVar8 + 0x48);
  uVar15 = (ulonglong)uVar3;
  piVar11 = (int *)fn_82CE5410();
  iVar9 = *piVar11;
  iVar10 = 0;
  *piVar11 = (uVar3 * 4 + 0x83 & 0xffffff80) + iVar9;
  if (0 < (int)uVar3) {
    piVar11 = (int *)(iVar9 + -4);
    do {
      piVar11 = piVar11 + 1;
      *piVar11 = iVar10;
      iVar10 = iVar10 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  *(undefined4 *)(uVar3 * 4 + iVar9) = 0xffffffff;
  fn_82D71B20(param_3 + 0x10,param_1,iVar8 + 0x14,iVar9,param_5);
  piVar11 = (int *)fn_82CE5410();
  iVar10 = param_3 + 0x1c;
  *piVar11 = iVar9;
  ppuVar14 = ppuStack_1240;
LAB_82d5b7b4:
  ppuStack_1240 = ppuVar14;
  *(byte *)(param_3 + 0xb) = *(byte *)(param_3 + 0xb) | 0x40;
  iVar8 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  if (puVar2 < *(undefined4 **)(iVar8 + 0xc)) {
    *puVar2 = &lbl_8202CF7C;
    uVar12 = TBLr;
    puVar2[1] = (int)uVar12;
    *(undefined4 **)(iVar8 + 4) = puVar2 + 3;
  }
  return iVar10 + 0xfU & 0xfffffff0;
}

