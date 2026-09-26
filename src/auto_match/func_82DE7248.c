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
extern unsigned int *auStack_140;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int fStack_104;
extern unsigned int fStack_108;
extern unsigned int fStack_124;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern unsigned int fStack_dc;
extern unsigned int fStack_ec;
extern unsigned int fStack_f4;
extern int fn_82D09248();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_100;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;
extern V16 vectorLogicalAnd();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82DE7248(int *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_r0;
  longlong lVar4;
  int iVar5;
  double dVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_register_00010050;
  undefined4 in_register_00010054;
  undefined4 in_register_00010058;
  undefined4 in_vr5;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_140 [16];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float afStack_120 [4];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float fStack_108;
  float fStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  undefined4 auStack_d0 [4];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar8 = *puVar2;
  uVar9 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  puVar2 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  uVar24 = *puVar2;
  uVar25 = puVar2[1];
  uVar26 = puVar2[2];
  uVar27 = puVar2[3];
  puVar2 = (undefined4 *)(param_2 + 0x20U & 0xfffffff0);
  uVar20 = *puVar2;
  uVar21 = puVar2[1];
  uVar22 = puVar2[2];
  uVar23 = puVar2[3];
  puVar2 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar2 = uVar20;
  puVar2[1] = uVar21;
  puVar2[2] = uVar22;
  puVar2[3] = uVar23;
  puVar2 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  puVar2[2] = uVar10;
  puVar2[3] = uVar11;
  puVar2 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar2 = uVar24;
  puVar2[1] = uVar25;
  puVar2[2] = uVar26;
  puVar2[3] = uVar27;
  fn_82D09248(auStack_140,auStack_70,&uStack_f0,&uStack_e0,afStack_120);
  dVar6 = (double)lbl_821AAD20;
  uStack_110 = uStack_f0;
  uStack_10c = uStack_e0;
  fStack_108 = afStack_120[0];
  fStack_130 = fStack_ec;
  fStack_12c = fStack_dc;
  fStack_128 = afStack_120[1];
  fStack_104 = lbl_821AAD20;
  fStack_124 = lbl_821AAD20;
  puVar2 = (undefined4 *)((int)&uStack_110 + in_r0 & 0xfffffff0);
  uVar12 = *puVar2;
  uVar13 = puVar2[1];
  uVar14 = puVar2[2];
  uVar15 = puVar2[3];
  puVar2 = (undefined4 *)((int)&fStack_130 + in_r0 & 0xfffffff0);
  uVar8 = *puVar2;
  uVar9 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  iVar5 = *param_1;
  uStack_100 = uStack_e8;
  uStack_fc = uStack_d8;
  uStack_f8 = afStack_120[2];
  fStack_f4 = lbl_821AAD20;
  puVar2 = (undefined4 *)((int)&uStack_100 + in_r0 & 0xfffffff0);
  uVar16 = *puVar2;
  uVar17 = puVar2[1];
  uVar18 = puVar2[2];
  uVar19 = puVar2[3];
  puVar2 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000100b0;
  puVar2[1] = in_register_000100b4;
  puVar2[2] = in_register_000100b8;
  puVar2[3] = in_vr11;
  pcVar1 = *(code **)(iVar5 + 0x1c);
  puVar2 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
  *puVar2 = uVar16;
  puVar2[1] = uVar17;
  puVar2[2] = uVar18;
  puVar2[3] = uVar19;
  puVar2 = (undefined4 *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  puVar2[2] = uVar10;
  puVar2[3] = uVar11;
  puVar2 = (undefined4 *)((int)auStack_d0 + in_r0 & 0xfffffff0);
  *puVar2 = uVar12;
  puVar2[1] = uVar13;
  puVar2[2] = uVar14;
  puVar2[3] = uVar15;
  (*pcVar1)(dVar6,param_1,auStack_d0,pcVar1,auStack_90);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs39,in_vs38); memcpy(auVar7, &_vt0, 16); }
  vectorLogicalAnd(auVar7,in_vs32);
  puVar2 = (undefined4 *)((int)afStack_120 + in_r0 & 0xfffffff0);
  *puVar2 = uVar24;
  puVar2[1] = uVar25;
  puVar2[2] = uVar26;
  puVar2[3] = uVar27;
  puVar2 = (undefined4 *)((int)&fStack_130 + in_r0 & 0xfffffff0);
  *puVar2 = in_register_00010050;
  puVar2[1] = in_register_00010054;
  puVar2[2] = in_register_00010058;
  puVar2[3] = in_vr5;
  if (fStack_12c <= fStack_130) {
    lVar4 = 2;
    if (fStack_128 <= fStack_130) {
      lVar4 = 0;
    }
  }
  else if (fStack_128 <= fStack_12c) {
    lVar4 = 1;
  }
  else {
    lVar4 = 2;
  }
  *(float *)((int)afStack_120 + (int)(lVar4 << 2)) = (float)dVar6;
  vectorLogicalAnd(auVar7,in_vs32);
  puVar2 = (undefined4 *)((int)&fStack_130 + in_r0 & 0xfffffff0);
  *puVar2 = uVar20;
  puVar2[1] = uVar21;
  puVar2[2] = uVar22;
  puVar2[3] = uVar23;
  if (fStack_12c <= fStack_130) {
    iVar5 = 2;
    if (fStack_128 <= fStack_130) {
      iVar5 = 0;
    }
  }
  else if (fStack_128 <= fStack_12c) {
    iVar5 = 1;
  }
  else {
    iVar5 = 2;
  }
  iVar3 = (int)(lVar4 << 4);
  uVar8 = *(undefined4 *)((int)auStack_d0 + iVar3 + 4);
  uVar9 = *(undefined4 *)((int)auStack_d0 + iVar3 + 8);
  uVar10 = *(undefined4 *)((int)auStack_d0 + iVar3 + 0xc);
  puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  *puVar2 = *(undefined4 *)((int)auStack_d0 + iVar3);
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  uVar8 = auStack_d0[iVar5 * 4 + 1];
  uVar9 = auStack_d0[iVar5 * 4 + 2];
  uVar10 = auStack_d0[iVar5 * 4 + 3];
  puVar2 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
  *puVar2 = auStack_d0[iVar5 * 4];
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  return;
}

