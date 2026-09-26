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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern unsigned int fStack_b4;
extern unsigned int fStack_c0;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d4;
extern unsigned int fStack_d8;
extern unsigned int fStack_dc;
extern unsigned int fStack_e0;
extern unsigned int fStack_e4;
extern unsigned int fStack_e8;
extern unsigned int fStack_ec;
extern unsigned int fStack_f0;
extern int fn_826310E0();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_8263CBB0();
extern int fn_82640058();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8329618C;
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_83296BE0;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;
extern unsigned int uStack_a4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_d0;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_824E9DD8(undefined8 param_1,double param_2,double param_3,double param_4,double param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  float fVar8;
  ulonglong *puVar9;
  int in_r0;
  undefined8 *puVar10;
  undefined8 in_r8;
  ulonglong in_r9;
  int in_r10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  undefined1 in_vs32 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar21 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 in_register_00010040;
  undefined4 in_register_00010044;
  undefined4 in_register_00010048;
  undefined4 in_vr4;
  undefined4 in_register_00010080;
  undefined4 in_register_00010084;
  undefined4 in_register_00010088;
  undefined4 in_vr8;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  
  dVar15 = (double)fn_82F6A540();
  puVar9 = lbl_8320A898;
  uVar13 = 0;
  if (lbl_8329618C == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(lbl_8329618C + 4);
  }
  if ((iVar11 != 0) && (iVar11 = *(int *)(iVar11 + 0xd54), iVar11 != 0)) {
    *(undefined4 *)(lbl_8320A898 + 0x5db) = 0;
    puVar9[2] = puVar9[2] | 0x80000;
    fn_82631920(lbl_8320A898,*(undefined4 *)(iVar11 + 0x50));
    fn_82631578(lbl_8320A898,*(undefined4 *)(iVar11 + 0x60));
    puVar9 = lbl_8320A898;
    puVar10 = &lbl_83296890;
    puVar12 = (undefined8 *)(&lbl_83296BE0 + in_r10 * 0x2c);
    if ((&lbl_83296C80)[in_r10 * 0x2c] == 0) {
      puVar12 = &lbl_832968D0;
    }
    else {
      puVar10 = &lbl_83296C20 + in_r10 * 0x16;
    }
    puVar7 = (undefined4 *)(in_r0 + (int)puVar10 & 0xfffffff0);
    uVar23 = *puVar7;
    uVar24 = puVar7[1];
    uVar25 = puVar7[2];
    uVar26 = puVar7[3];
    uVar31 = *(undefined4 *)(puVar10 + 6);
    uVar32 = *(undefined4 *)((int)puVar10 + 0x34);
    uVar33 = *(undefined4 *)(puVar10 + 7);
    uVar34 = *(undefined4 *)((int)puVar10 + 0x3c);{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs44); memcpy(auVar20, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs44); memcpy(auVar17, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs42,in_vs43); memcpy(auVar19, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs42,in_vs43); memcpy(auVar21, &_vt3, 16); }
    uVar27 = *(undefined4 *)(puVar12 + 2);
    uVar28 = *(undefined4 *)((int)puVar12 + 0x14);
    uVar29 = *(undefined4 *)(puVar12 + 3);
    uVar30 = *(undefined4 *)((int)puVar12 + 0x1c);{ V16 _vt4 = vectorMergeHighWord(in_vs45,in_vs44); memcpy(auVar18, &_vt4, 16); }{ V16 _vt5 = vectorMergeLowWord(in_vs45,in_vs44); memcpy(auVar22, &_vt5, 16); }
    vectorMergeHighWord(auVar20,auVar19);
    vectorMergeLowWord(auVar20,auVar19);
    vectorMergeHighWord(auVar17,auVar21);
    vectorMergeLowWord(auVar17,auVar21);{ V16 _vt6 = vectorMergeLowWord(in_vs42,in_vs39); memcpy(auVar19, &_vt6, 16); }{ V16 _vt7 = vectorMergeHighWord(in_vs42,in_vs39); memcpy(auVar17, &_vt7, 16); }
    puVar7 = (undefined4 *)((uint)(auStack_130 + in_r0) & 0xfffffff0);
    *puVar7 = in_register_00010040;
    puVar7[1] = in_register_00010044;
    puVar7[2] = in_register_00010048;
    puVar7[3] = in_vr4;
    puVar7 = (undefined4 *)((uint)(auStack_120 + in_r0) & 0xfffffff0);
    *puVar7 = in_register_00010090;
    puVar7[1] = in_register_00010094;
    puVar7[2] = in_register_00010098;
    puVar7[3] = in_vr9;
    vectorMergeHighWord(auVar22,auVar19);
    puVar7 = (undefined4 *)((uint)(auStack_110 + in_r0) & 0xfffffff0);
    *puVar7 = in_register_00010080;
    puVar7[1] = in_register_00010084;
    puVar7[2] = in_register_00010088;
    puVar7[3] = in_vr8;
    vectorMergeHighWord(auVar18,auVar17);
    puVar7 = (undefined4 *)((uint)(auStack_100 + in_r0) & 0xfffffff0);
    *puVar7 = uVar23;
    puVar7[1] = uVar24;
    puVar7[2] = uVar25;
    puVar7[3] = uVar26;
    vectorMergeLowWord(auVar18,auVar17);
    vectorMergeLowWord(auVar22,auVar19);
    puVar7 = (undefined4 *)((int)&uStack_d0 + in_r0 & 0xfffffff0);
    *puVar7 = in_register_00010090;
    puVar7[1] = in_register_00010094;
    puVar7[2] = in_register_00010098;
    puVar7[3] = in_vr9;
    puVar7 = (undefined4 *)((int)&fStack_f0 + in_r0 & 0xfffffff0);
    *puVar7 = uVar31;
    puVar7[1] = uVar32;
    puVar7[2] = uVar33;
    puVar7[3] = uVar34;
    puVar7 = (undefined4 *)((int)&fStack_e0 + in_r0 & 0xfffffff0);
    *puVar7 = uVar27;
    puVar7[1] = uVar28;
    puVar7[2] = uVar29;
    puVar7[3] = uVar30;
    puVar7 = (undefined4 *)((int)&fStack_c0 + in_r0 & 0xfffffff0);
    *puVar7 = uVar23;
    puVar7[1] = uVar24;
    puVar7[2] = uVar25;
    puVar7[3] = uVar26;
    fn_826310E0(puVar9,0xc0,auStack_130,4,0x8000);
    fn_826310E0(lbl_8320A898,0xc4,&fStack_f0,4,0x4000);
    puVar9 = lbl_8320A898;
    *(float *)(lbl_8320A898 + 0x280) = (float)param_4;
    fVar8 = lbl_821CC160;
    dVar16 = (double)lbl_821CC160;
    *(float *)((int)puVar9 + 0x1404) = (float)param_5;
    *(float *)(puVar9 + 0x281) = fVar8;
    *(float *)((int)puVar9 + 0x140c) = fVar8;
    *puVar9 = *puVar9 | 0x2000;
    fn_8263CBB0(lbl_8320A898,0,in_r8,0x80000000);
    puVar9 = lbl_8320A898;
    uVar1 = *(uint *)(lbl_8320A898 + 0x529);
    uVar2 = *(uint *)((int)lbl_8320A898 + 0x2934);
    uVar3 = *(uint *)((int)lbl_8320A898 + 0x293c);
    uVar4 = *(uint *)((int)lbl_8320A898 + 0x2efc);
    uVar5 = *(uint *)((int)lbl_8320A898 + 0x2f04);
    uVar6 = *(uint *)((int)lbl_8320A898 + 0x2f14);
    uVar14 = 0;
    *(uint *)(lbl_8320A898 + 0x529) = uVar1 & 0xfffffff8;
    puVar9[2] = puVar9[2] | 0x40;
    puVar9 = lbl_8320A898;
    *(undefined4 *)((int)lbl_8320A898 + 0x2f04) = 7;
    *(uint *)((int)puVar9 + 0x28dc) =
         *(uint *)((int)puVar9 + 0x28dc) & 0xfffffff0 | -(uint)(*(int *)(puVar9 + 0x629) != 0) & 7;
    puVar9[2] = puVar9[2] | 0x2000000000;
    puVar9 = lbl_8320A898;
    *(undefined4 *)((int)lbl_8320A898 + 0x2f14) = 1;
    *(uint *)((int)puVar9 + 0x2934) =
         (-(uint)(*(int *)(puVar9 + 0x62b) != 0) & 1) << 1 |
         *(uint *)((int)puVar9 + 0x2934) & 0xfffffffd;
    puVar9[2] = puVar9[2] | 0x20800;
    puVar9 = lbl_8320A898;
    *(uint *)((int)lbl_8320A898 + 0x2934) = *(uint *)((int)lbl_8320A898 + 0x2934) & 0xfffffffb;
    puVar9[2] = puVar9[2] | 0x800;
    puVar9 = lbl_8320A898;
    *(uint *)((int)lbl_8320A898 + 0x293c) = *(uint *)((int)lbl_8320A898 + 0x293c) & 0xfffffff7;
    puVar9[2] = puVar9[2] | 0x40200;
    if ((in_r9 & 0xff) == 0) {
      fn_82637B30(lbl_8320A898,0);
    }
    else {
      uVar14 = *(uint *)(lbl_8320A898 + 0x5df) & 0x1f;
      uVar13 = *(uint *)(lbl_8320A898 + 0x5df) >> 8 & 0x1f;
      fn_82637B30(lbl_8320A898,1);
      fn_82637C50(lbl_8320A898,6);
      fn_82637CE0(lbl_8320A898,7);
    }
    fStack_f0 = (float)dVar15;
    fStack_ec = (float)param_2;
    fStack_e8 = (float)param_3;
    fStack_e4 = (float)dVar16;
    fStack_e0 = (float)dVar16;
    fStack_dc = (float)dVar15;
    fStack_d8 = (float)param_2;
    fStack_d4 = (float)param_3;
    uStack_d0 = lbl_821CA460;
    fStack_cc = (float)dVar16;
    fStack_c8 = (float)dVar15;
    fStack_c4 = (float)param_2;
    fStack_c0 = (float)param_3;
    uStack_bc = lbl_821CA460;
    uStack_b8 = lbl_821CA460;
    fStack_b4 = (float)dVar15;
    fStack_b0 = (float)param_2;
    fStack_ac = (float)param_3;
    fStack_a8 = (float)dVar16;
    uStack_a4 = lbl_821CA460;
    fn_82640058(lbl_8320A898,0xd,4,&fStack_f0,0x14);
    puVar9 = lbl_8320A898;
    *(uint *)(lbl_8320A898 + 0x529) = *(uint *)(lbl_8320A898 + 0x529) & 0xfffffff8 | uVar1 & 7;
    puVar9[2] = puVar9[2] | 0x40;
    puVar9 = lbl_8320A898;
    *(uint *)((int)lbl_8320A898 + 0x2f04) = uVar5;
    *(uint *)((int)puVar9 + 0x28dc) =
         *(uint *)((int)puVar9 + 0x28dc) & 0xfffffff0 |
         -(uint)(*(int *)(puVar9 + 0x629) != 0) & uVar5 & 0xf;
    puVar9[2] = puVar9[2] | 0x2000000000;
    puVar9 = lbl_8320A898;
    *(uint *)((int)lbl_8320A898 + 0x2f14) = uVar6;
    *(uint *)((int)puVar9 + 0x2934) =
         (-(uint)(*(int *)(puVar9 + 0x62b) != 0) & uVar6 & 1) << 1 |
         *(uint *)((int)puVar9 + 0x2934) & 0xfffffffd;
    puVar9[2] = puVar9[2] | 0x20800;
    puVar9 = lbl_8320A898;
    *(uint *)((int)lbl_8320A898 + 0x2934) =
         (uVar2 >> 2 & 1) << 2 | *(uint *)((int)lbl_8320A898 + 0x2934) & 0xfffffffb;
    puVar9[2] = puVar9[2] | 0x800;
    puVar9 = lbl_8320A898;
    *(uint *)((int)lbl_8320A898 + 0x293c) =
         (uVar3 >> 3 & 1) << 3 | *(uint *)((int)lbl_8320A898 + 0x293c) & 0xfffffff7;
    puVar9[2] = puVar9[2] | 0x40200;
    fn_82637B30(lbl_8320A898,uVar4 >> 0x1f);
    if ((in_r9 & 0xff) != 0) {
      fn_82637C50(lbl_8320A898,uVar14);
      fn_82637CE0(lbl_8320A898,uVar13);
    }
  }
  fn_82F6A58C(1);
  return;
}

