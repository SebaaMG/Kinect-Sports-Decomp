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
extern unsigned int *auStack_150;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_100;
extern unsigned int fStack_104;
extern unsigned int fStack_110;
extern unsigned int fStack_114;
extern unsigned int fStack_118;
extern unsigned int fStack_124;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_138;
extern unsigned int fStack_13c;
extern unsigned int fStack_140;
extern unsigned int fStack_fc;
extern int fn_826310E0();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82638698();
extern int fn_8263CBB0();
extern int fn_82640058();
extern int fn_82837D98();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8329618C;
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_83296BE0;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_130;
extern unsigned int uStack_134;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_824EE510(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulonglong *puVar8;
  int in_r0;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  undefined1 in_vs32 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar19 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
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
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  int in_stack_00000054;
  char in_stack_0000005f;
  int in_stack_00000064;
  undefined4 auStack_150 [4];
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [192];
  
  dVar14 = (double)fn_82F6A53C();
  puVar8 = lbl_8320A898;
  uVar12 = 0;
  if (lbl_8329618C == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(lbl_8329618C + 4);
  }
  if ((iVar10 != 0) && (iVar10 = *(int *)(iVar10 + 0xd54), iVar10 != 0)) {
    *(undefined4 *)(lbl_8320A898 + 0x5db) = 0;
    puVar8[2] = puVar8[2] | 0x80000;
    fn_82631920(lbl_8320A898,*(undefined4 *)(iVar10 + 0x54));
    fn_82631578(lbl_8320A898,*(undefined4 *)(iVar10 + 0x60));
    puVar8 = lbl_8320A898;
    puVar9 = &lbl_83296890;
    puVar11 = (undefined8 *)(&lbl_83296BE0 + in_stack_00000064 * 0x2c);
    if ((&lbl_83296C80)[in_stack_00000064 * 0x2c] == 0) {
      puVar11 = &lbl_832968D0;
    }
    else {
      puVar9 = &lbl_83296C20 + in_stack_00000064 * 0x16;
    }
    puVar7 = (undefined4 *)(in_r0 + (int)puVar9 & 0xfffffff0);
    uVar21 = *puVar7;
    uVar22 = puVar7[1];
    uVar23 = puVar7[2];
    uVar24 = puVar7[3];
    uVar29 = *(undefined4 *)(puVar9 + 6);
    uVar30 = *(undefined4 *)((int)puVar9 + 0x34);
    uVar31 = *(undefined4 *)(puVar9 + 7);
    uVar32 = *(undefined4 *)((int)puVar9 + 0x3c);{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs44); memcpy(auVar18, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs44); memcpy(auVar15, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs42,in_vs43); memcpy(auVar17, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs42,in_vs43); memcpy(auVar19, &_vt3, 16); }
    uVar25 = *(undefined4 *)(puVar11 + 2);
    uVar26 = *(undefined4 *)((int)puVar11 + 0x14);
    uVar27 = *(undefined4 *)(puVar11 + 3);
    uVar28 = *(undefined4 *)((int)puVar11 + 0x1c);{ V16 _vt4 = vectorMergeHighWord(in_vs45,in_vs44); memcpy(auVar16, &_vt4, 16); }{ V16 _vt5 = vectorMergeLowWord(in_vs45,in_vs44); memcpy(auVar20, &_vt5, 16); }
    vectorMergeHighWord(auVar18,auVar17);
    vectorMergeLowWord(auVar18,auVar17);
    vectorMergeHighWord(auVar15,auVar19);
    vectorMergeLowWord(auVar15,auVar19);{ V16 _vt6 = vectorMergeLowWord(in_vs42,in_vs39); memcpy(auVar17, &_vt6, 16); }{ V16 _vt7 = vectorMergeHighWord(in_vs42,in_vs39); memcpy(auVar15, &_vt7, 16); }
    puVar7 = (undefined4 *)((uint)(auStack_f0 + in_r0) & 0xfffffff0);
    *puVar7 = in_register_00010040;
    puVar7[1] = in_register_00010044;
    puVar7[2] = in_register_00010048;
    puVar7[3] = in_vr4;
    puVar7 = (undefined4 *)((uint)(auStack_e0 + in_r0) & 0xfffffff0);
    *puVar7 = in_register_00010090;
    puVar7[1] = in_register_00010094;
    puVar7[2] = in_register_00010098;
    puVar7[3] = in_vr9;
    vectorMergeHighWord(auVar20,auVar17);
    puVar7 = (undefined4 *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
    *puVar7 = in_register_00010080;
    puVar7[1] = in_register_00010084;
    puVar7[2] = in_register_00010088;
    puVar7[3] = in_vr8;
    vectorMergeHighWord(auVar16,auVar15);
    puVar7 = (undefined4 *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
    *puVar7 = uVar21;
    puVar7[1] = uVar22;
    puVar7[2] = uVar23;
    puVar7[3] = uVar24;
    vectorMergeLowWord(auVar16,auVar15);
    vectorMergeLowWord(auVar20,auVar17);
    puVar7 = (undefined4 *)((int)&uStack_120 + in_r0 & 0xfffffff0);
    *puVar7 = in_register_00010090;
    puVar7[1] = in_register_00010094;
    puVar7[2] = in_register_00010098;
    puVar7[3] = in_vr9;
    puVar7 = (undefined4 *)((int)&fStack_140 + in_r0 & 0xfffffff0);
    *puVar7 = uVar29;
    puVar7[1] = uVar30;
    puVar7[2] = uVar31;
    puVar7[3] = uVar32;
    puVar7 = (undefined4 *)((int)&uStack_130 + in_r0 & 0xfffffff0);
    *puVar7 = uVar25;
    puVar7[1] = uVar26;
    puVar7[2] = uVar27;
    puVar7[3] = uVar28;
    puVar7 = (undefined4 *)((int)&fStack_110 + in_r0 & 0xfffffff0);
    *puVar7 = uVar21;
    puVar7[1] = uVar22;
    puVar7[2] = uVar23;
    puVar7[3] = uVar24;
    fn_826310E0(puVar8,0xc0,auStack_f0,4,0x8000);
    fn_826310E0(lbl_8320A898,0xc4,&fStack_140,4,0x4000);
    puVar8 = lbl_8320A898;
    *(float *)(lbl_8320A898 + 0x280) = (float)param_4;
    *(float *)((int)puVar8 + 0x1404) = (float)param_5;
    *(float *)(puVar8 + 0x281) = (float)param_6;
    *(float *)((int)puVar8 + 0x140c) = (float)param_7;
    *puVar8 = *puVar8 | 0x2000;
    fn_82837D98(*(undefined4 *)(in_stack_00000054 + 0x14),0,auStack_150);
    fn_8263CBB0(lbl_8320A898,0,auStack_150[0],0x80000000);
    puVar8 = lbl_8320A898;
    uVar1 = *(uint *)((int)lbl_8320A898 + 0x293c);
    uVar2 = *(uint *)((int)lbl_8320A898 + 0x2934);
    uVar3 = *(uint *)((int)lbl_8320A898 + 0x2f04);
    uVar4 = *(uint *)(lbl_8320A898 + 0x529);
    uVar5 = *(uint *)((int)lbl_8320A898 + 0x2f14);
    uVar6 = *(uint *)((int)lbl_8320A898 + 0x2efc);
    *(uint *)(lbl_8320A898 + 0x529) = uVar4 & 0xfffffff8;
    puVar8[2] = puVar8[2] | 0x40;
    puVar8 = lbl_8320A898;
    uVar13 = 0;
    *(undefined4 *)((int)lbl_8320A898 + 0x2f04) = 7;
    *(uint *)((int)puVar8 + 0x28dc) =
         *(uint *)((int)puVar8 + 0x28dc) & 0xfffffff0 | -(uint)(*(int *)(puVar8 + 0x629) != 0) & 7;
    puVar8[2] = puVar8[2] | 0x2000000000;
    puVar8 = lbl_8320A898;
    *(undefined4 *)((int)lbl_8320A898 + 0x2f14) = 1;
    *(uint *)((int)puVar8 + 0x2934) =
         (-(uint)(*(int *)(puVar8 + 0x62b) != 0) & 1) << 1 |
         *(uint *)((int)puVar8 + 0x2934) & 0xfffffffd;
    puVar8[2] = puVar8[2] | 0x20800;
    puVar8 = lbl_8320A898;
    *(uint *)((int)lbl_8320A898 + 0x2934) = *(uint *)((int)lbl_8320A898 + 0x2934) & 0xfffffffb;
    puVar8[2] = puVar8[2] | 0x800;
    puVar8 = lbl_8320A898;
    *(uint *)((int)lbl_8320A898 + 0x293c) = *(uint *)((int)lbl_8320A898 + 0x293c) & 0xfffffff7;
    puVar8[2] = puVar8[2] | 0x40200;
    fn_82638698(lbl_8320A898,(float)param_8);
    if (in_stack_0000005f == '\0') {
      fn_82637B30(lbl_8320A898,0);
    }
    else {
      uVar13 = *(uint *)(lbl_8320A898 + 0x5df) & 0x1f;
      uVar12 = *(uint *)(lbl_8320A898 + 0x5df) >> 8 & 0x1f;
      fn_82637B30(lbl_8320A898,1);
      fn_82637C50(lbl_8320A898,6);
      fn_82637CE0(lbl_8320A898,7);
    }
    fStack_140 = (float)dVar14;
    fStack_13c = (float)param_2;
    fStack_138 = (float)param_3;
    fStack_12c = (float)dVar14;
    fStack_128 = (float)param_2;
    fStack_124 = (float)param_3;
    uStack_134 = lbl_821CC160;
    uStack_130 = lbl_821CC160;
    uStack_120 = lbl_821CA460;
    uStack_11c = lbl_821CC160;
    fStack_118 = (float)dVar14;
    fStack_114 = (float)param_2;
    fStack_110 = (float)param_3;
    uStack_10c = lbl_821CA460;
    uStack_108 = lbl_821CA460;
    fStack_104 = (float)dVar14;
    fStack_100 = (float)param_2;
    fStack_fc = (float)param_3;
    uStack_f8 = lbl_821CC160;
    uStack_f4 = lbl_821CA460;
    fn_82640058(lbl_8320A898,0xd,4,&fStack_140,0x14);
    puVar8 = lbl_8320A898;
    *(uint *)(lbl_8320A898 + 0x529) = *(uint *)(lbl_8320A898 + 0x529) & 0xfffffff8 | uVar4 & 7;
    puVar8[2] = puVar8[2] | 0x40;
    puVar8 = lbl_8320A898;
    *(uint *)((int)lbl_8320A898 + 0x2f04) = uVar3;
    *(uint *)((int)puVar8 + 0x28dc) =
         *(uint *)((int)puVar8 + 0x28dc) & 0xfffffff0 |
         -(uint)(*(int *)(puVar8 + 0x629) != 0) & uVar3 & 0xf;
    puVar8[2] = puVar8[2] | 0x2000000000;
    puVar8 = lbl_8320A898;
    *(uint *)((int)lbl_8320A898 + 0x2f14) = uVar5;
    *(uint *)((int)puVar8 + 0x2934) =
         (-(uint)(*(int *)(puVar8 + 0x62b) != 0) & uVar5 & 1) << 1 |
         *(uint *)((int)puVar8 + 0x2934) & 0xfffffffd;
    puVar8[2] = puVar8[2] | 0x20800;
    puVar8 = lbl_8320A898;
    *(uint *)((int)lbl_8320A898 + 0x2934) =
         (uVar2 >> 2 & 1) << 2 | *(uint *)((int)lbl_8320A898 + 0x2934) & 0xfffffffb;
    puVar8[2] = puVar8[2] | 0x800;
    puVar8 = lbl_8320A898;
    *(uint *)((int)lbl_8320A898 + 0x293c) =
         (uVar1 >> 3 & 1) << 3 | *(uint *)((int)lbl_8320A898 + 0x293c) & 0xfffffff7;
    puVar8[2] = puVar8[2] | 0x40200;
    fn_82637B30(lbl_8320A898,uVar6 >> 0x1f);
    fn_82638698(lbl_8320A898,0);
    if (in_stack_0000005f != '\0') {
      fn_82637C50(lbl_8320A898,uVar13);
      fn_82637CE0(lbl_8320A898,uVar12);
    }
  }
  fn_82F6A588(1);
  return;
}

