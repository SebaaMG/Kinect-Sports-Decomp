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
extern unsigned int *auStack_150;
extern unsigned int *auStack_180;
extern unsigned int fStack_100;
extern unsigned int fStack_104;
extern unsigned int fStack_108;
extern unsigned int fStack_10c;
extern unsigned int fStack_114;
extern unsigned int fStack_118;
extern unsigned int fStack_11c;
extern unsigned int fStack_120;
extern unsigned int fStack_124;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern unsigned int fStack_154;
extern unsigned int fStack_158;
extern unsigned int fStack_15c;
extern unsigned int fStack_160;
extern unsigned int fStack_164;
extern unsigned int fStack_168;
extern unsigned int fStack_16c;
extern unsigned int fStack_170;
extern unsigned int fStack_e8;
extern unsigned int fStack_ec;
extern unsigned int fStack_f0;
extern unsigned int fStack_f4;
extern int fn_824EFEE0();
extern int fn_826310E0();
extern int fn_826311B8();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_8263CBB0();
extern int fn_82640058();
extern int fn_82837D98();
extern int fn_82F6A530();
extern int fn_82F6A57C();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8329618C;
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_83296BE0;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;
extern unsigned int stack0x00000060;
extern unsigned int stack0x00000070;
extern unsigned int uStack_110;
extern unsigned int uStack_e4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_824ECE78(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,double param_9,double param_10)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int in_r0;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  double dVar15;
  double dVar16;
  undefined1 in_vs32 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar22 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
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
  int in_stack_0000005c;
  float in_stack_00000060;
  undefined4 in_stack_00000064;
  undefined4 in_stack_00000068;
  float in_stack_00000070;
  undefined4 in_stack_00000074;
  undefined4 in_stack_00000078;
  int in_stack_0000008c;
  int in_stack_00000094;
  undefined4 auStack_180 [4];
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined4 uStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  
  dVar15 = (double)fn_82F6A530();
  puVar9 = (undefined4 *)((int)&stack0x00000060 + in_r0 & 0xfffffff0);
  *puVar9 = in_register_00010010;
  puVar9[1] = in_register_00010014;
  puVar9[2] = in_register_00010018;
  puVar9[3] = in_vr1;
  iVar12 = lbl_8329618C;
  puVar9 = (undefined4 *)((int)&stack0x00000070 + in_r0 & 0xfffffff0);
  *puVar9 = in_register_00010020;
  puVar9[1] = in_register_00010024;
  puVar9[2] = in_register_00010028;
  puVar9[3] = in_vr2;
  iVar1 = lbl_8320A898;
  if (iVar12 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(iVar12 + 4);
  }
  if ((iVar12 != 0) && (iVar12 = *(int *)(iVar12 + 0xd54), iVar12 != 0)) {
    if (in_stack_0000008c == 0) {
      *(undefined4 *)(lbl_8320A898 + 0x2ed8) = 0;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x80000;
      fn_82631920(lbl_8320A898,*(undefined4 *)(iVar12 + 0x5c));
      fn_82631578(lbl_8320A898,*(undefined4 *)(iVar12 + 0x6c));
      iVar1 = lbl_8320A898;
      puVar11 = &lbl_83296890;
      puVar14 = (undefined8 *)(&lbl_83296BE0 + in_stack_00000094 * 0x2c);
      if ((&lbl_83296C80)[in_stack_00000094 * 0x2c] == 0) {
        puVar14 = &lbl_832968D0;
      }
      else {
        puVar11 = &lbl_83296C20 + in_stack_00000094 * 0x16;
      }
      puVar9 = (undefined4 *)(in_r0 + (int)puVar11 & 0xfffffff0);
      uVar23 = *puVar9;
      uVar24 = puVar9[1];
      uVar25 = puVar9[2];
      uVar26 = puVar9[3];
      uVar31 = *(undefined4 *)(puVar11 + 6);
      uVar32 = *(undefined4 *)((int)puVar11 + 0x34);
      uVar33 = *(undefined4 *)(puVar11 + 7);
      uVar34 = *(undefined4 *)((int)puVar11 + 0x3c);{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs44); memcpy(auVar21, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs44); memcpy(auVar17, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs42,in_vs43); memcpy(auVar20, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs42,in_vs43); memcpy(auVar22, &_vt3, 16); }
      uVar27 = *(undefined4 *)(puVar14 + 2);
      uVar28 = *(undefined4 *)((int)puVar14 + 0x14);
      uVar29 = *(undefined4 *)(puVar14 + 3);
      uVar30 = *(undefined4 *)((int)puVar14 + 0x1c);{ V16 _vt4 = vectorMergeHighWord(in_vs45,in_vs39); memcpy(auVar19, &_vt4, 16); }{ V16 _vt5 = vectorMergeHighWord(in_vs42,in_vs44); memcpy(auVar18, &_vt5, 16); }
      vectorMergeHighWord(auVar21,auVar20);
      vectorMergeLowWord(auVar21,auVar20);
      vectorMergeHighWord(auVar17,auVar22);
      vectorMergeLowWord(auVar17,auVar22);{ V16 _vt6 = vectorMergeLowWord(in_vs42,in_vs44); memcpy(auVar17, &_vt6, 16); }{ V16 _vt7 = vectorMergeLowWord(in_vs45,in_vs39); memcpy(auVar20, &_vt7, 16); }
      vectorMergeHighWord(auVar19,auVar18);
      puVar9 = (undefined4 *)((int)&fStack_170 + in_r0 & 0xfffffff0);
      *puVar9 = in_register_00010040;
      puVar9[1] = in_register_00010044;
      puVar9[2] = in_register_00010048;
      puVar9[3] = in_vr4;
      vectorMergeLowWord(auVar19,auVar18);
      puVar9 = (undefined4 *)((int)&fStack_160 + in_r0 & 0xfffffff0);
      *puVar9 = in_register_00010090;
      puVar9[1] = in_register_00010094;
      puVar9[2] = in_register_00010098;
      puVar9[3] = in_vr9;
      puVar9 = (undefined4 *)((uint)(auStack_150 + in_r0) & 0xfffffff0);
      *puVar9 = in_register_00010080;
      puVar9[1] = in_register_00010084;
      puVar9[2] = in_register_00010088;
      puVar9[3] = in_vr8;
      vectorMergeHighWord(auVar20,auVar17);
      puVar9 = (undefined4 *)((uint)(auStack_140 + in_r0) & 0xfffffff0);
      *puVar9 = uVar23;
      puVar9[1] = uVar24;
      puVar9[2] = uVar25;
      puVar9[3] = uVar26;
      vectorMergeLowWord(auVar20,auVar17);
      puVar9 = (undefined4 *)((int)&fStack_130 + in_r0 & 0xfffffff0);
      *puVar9 = uVar31;
      puVar9[1] = uVar32;
      puVar9[2] = uVar33;
      puVar9[3] = uVar34;
      puVar9 = (undefined4 *)((int)&fStack_120 + in_r0 & 0xfffffff0);
      *puVar9 = uVar27;
      puVar9[1] = uVar28;
      puVar9[2] = uVar29;
      puVar9[3] = uVar30;
      puVar9 = (undefined4 *)((int)&uStack_110 + in_r0 & 0xfffffff0);
      *puVar9 = in_register_00010090;
      puVar9[1] = in_register_00010094;
      puVar9[2] = in_register_00010098;
      puVar9[3] = in_vr9;
      puVar9 = (undefined4 *)((int)&fStack_100 + in_r0 & 0xfffffff0);
      *puVar9 = uVar23;
      puVar9[1] = uVar24;
      puVar9[2] = uVar25;
      puVar9[3] = uVar26;
      fn_826310E0(iVar1,0xc0,&fStack_170,4,0x8000);
      fn_826310E0(lbl_8320A898,0xc4,&fStack_130,4,0x4000);
      fStack_170 = (float)param_4;
      fStack_16c = (float)param_5;
      fStack_168 = (float)param_6;
      fStack_160 = (float)param_7;
      fStack_15c = (float)param_8;
      dVar16 = (double)lbl_821CC160;
      fStack_164 = lbl_821CC160;
      fStack_158 = (float)param_9;
      fStack_154 = lbl_821CC160;
      fn_826310E0(lbl_8320A898,200,&fStack_170,2,0x2000);
      fStack_170 = in_stack_00000060;
      fStack_16c = (float)in_stack_00000064;
      fStack_168 = (float)in_stack_00000068;
      fStack_164 = (float)param_10;
      fStack_160 = in_stack_00000070;
      fStack_15c = (float)in_stack_00000074;
      fStack_158 = (float)in_stack_00000078;
      fStack_154 = (float)dVar16;
      fn_826311B8(lbl_8320A898,0xc0,&fStack_170,2,0x8000);
      fn_82837D98(*(undefined4 *)(in_stack_0000005c + 0x14),0,auStack_180);
      fn_8263CBB0(lbl_8320A898,0,auStack_180[0],0x80000000);
      iVar1 = lbl_8320A898;
      uVar2 = *(uint *)(lbl_8320A898 + 0x2934);
      uVar3 = *(uint *)(lbl_8320A898 + 0x293c);
      uVar4 = *(uint *)(lbl_8320A898 + 0x2948);
      uVar5 = *(uint *)(lbl_8320A898 + 0x2f04);
      uVar6 = *(uint *)(lbl_8320A898 + 0x2f14);
      uVar7 = *(uint *)(lbl_8320A898 + 0x2efc);
      *(uint *)(lbl_8320A898 + 0x2948) = uVar4 & 0xfffffff8;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40;
      iVar1 = lbl_8320A898;
      *(undefined4 *)(lbl_8320A898 + 0x2f04) = 7;
      *(uint *)(iVar1 + 0x28dc) =
           *(uint *)(iVar1 + 0x28dc) & 0xfffffff0 | -(uint)(*(int *)(iVar1 + 0x3148) != 0) & 7;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x2000000000;
      iVar1 = lbl_8320A898;
      *(undefined4 *)(lbl_8320A898 + 0x2f14) = 1;
      *(uint *)(iVar1 + 0x2934) =
           (-(uint)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 |
           *(uint *)(iVar1 + 0x2934) & 0xfffffffd;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x20800;
      iVar1 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x2934) = *(uint *)(lbl_8320A898 + 0x2934) & 0xfffffffb;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
      iVar1 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x293c) = *(uint *)(lbl_8320A898 + 0x293c) & 0xfffffff7;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40200;
      uVar8 = *(uint *)(lbl_8320A898 + 0x2ef8);
      fn_82637B30(lbl_8320A898,1);
      fn_82637C50(lbl_8320A898,6);
      fn_82637CE0(lbl_8320A898,7);
      fStack_130 = (float)dVar15;
      fStack_12c = (float)param_2;
      fStack_128 = (float)param_3;
      fStack_124 = (float)dVar16;
      fStack_120 = (float)dVar16;
      fStack_11c = (float)dVar15;
      fStack_118 = (float)param_2;
      fStack_114 = (float)param_3;
      uStack_110 = lbl_821CA460;
      fStack_10c = (float)dVar16;
      fStack_108 = (float)dVar15;
      fStack_104 = (float)param_2;
      fStack_100 = (float)param_3;
      uStack_fc = lbl_821CA460;
      uStack_f8 = lbl_821CA460;
      fStack_f4 = (float)dVar15;
      fStack_f0 = (float)param_2;
      fStack_ec = (float)param_3;
      fStack_e8 = (float)dVar16;
      uStack_e4 = lbl_821CA460;
      fn_82640058(lbl_8320A898,0xd,4,&fStack_130,0x14);
      iVar1 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x2948) = uVar4 & 7 | *(uint *)(lbl_8320A898 + 0x2948) & 0xfffffff8;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40;
      iVar1 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x2f04) = uVar5;
      *(uint *)(iVar1 + 0x28dc) =
           -(uint)(*(int *)(iVar1 + 0x3148) != 0) & uVar5 & 0xf |
           *(uint *)(iVar1 + 0x28dc) & 0xfffffff0;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x2000000000;
      iVar1 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x2f14) = uVar6;
      *(uint *)(iVar1 + 0x2934) =
           (-(uint)(*(int *)(iVar1 + 0x3158) != 0) & uVar6 & 1) << 1 |
           *(uint *)(iVar1 + 0x2934) & 0xfffffffd;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x20800;
      iVar1 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x2934) =
           (uVar2 >> 2 & 1) << 2 | *(uint *)(lbl_8320A898 + 0x2934) & 0xfffffffb;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
      iVar1 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x293c) =
           (uVar3 >> 3 & 1) << 3 | *(uint *)(lbl_8320A898 + 0x293c) & 0xfffffff7;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40200;
      fn_82637B30(lbl_8320A898,uVar7 >> 0x1f);
      fn_82637C50(lbl_8320A898,uVar8 & 0x1f);
      fn_82637CE0(lbl_8320A898,uVar8 >> 8 & 0x1f);
    }
    else if (in_stack_0000008c == 2) {
      if (*(int *)(iVar12 + 0x1344) != 0) {
        fn_824EFEE0(iVar12 + 0x40);
      }
      iVar1 = *(int *)(iVar12 + 0x1340);
      iVar13 = iVar1 * 0x60 + iVar12 + 0x40;
      if (iVar1 == 0x32) {
        uVar10 = 0;
        goto LAB_824ed484;
      }
      *(int *)(iVar12 + 0x1340) = iVar1 + 1;
      if ((undefined4 *)(iVar13 + 0x40) != (undefined4 *)0x0) {
        *(undefined4 *)(iVar13 + 0x40) = 0x17;
        *(float *)(iVar13 + 0x44) = (float)dVar15;
        *(float *)(iVar13 + 0x48) = (float)param_2;
        *(float *)(iVar13 + 0x4c) = (float)param_3;
        *(float *)(iVar13 + 0x50) = (float)param_4;
        *(float *)(iVar13 + 0x54) = (float)param_5;
        *(float *)(iVar13 + 0x58) = (float)param_6;
        *(float *)(iVar13 + 0x5c) = (float)param_7;
        *(float *)(iVar13 + 0x60) = (float)param_8;
        *(float *)(iVar13 + 100) = (float)param_9;
        puVar9 = (undefined4 *)(iVar13 + 0x70U & 0xfffffff0);
        *puVar9 = in_register_00010010;
        puVar9[1] = in_register_00010014;
        puVar9[2] = in_register_00010018;
        puVar9[3] = in_vr1;
        puVar9 = (undefined4 *)(iVar13 + 0x80U & 0xfffffff0);
        *puVar9 = in_register_00010020;
        puVar9[1] = in_register_00010024;
        puVar9[2] = in_register_00010028;
        puVar9[3] = in_vr2;
        *(float *)(iVar13 + 0x90) = (float)param_10;
        *(int *)(iVar13 + 0x94) = in_stack_00000094;
        *(int *)(iVar13 + 0x98) = in_stack_0000005c;
      }
    }
  }
  uVar10 = 1;
LAB_824ed484:
  fn_82F6A57C(uVar10);
  return;
}

