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
extern unsigned int *auStack_130;
extern unsigned int *auStack_160;
extern unsigned int fStack_100;
extern unsigned int fStack_104;
extern unsigned int fStack_108;
extern unsigned int fStack_10c;
extern unsigned int fStack_110;
extern unsigned int fStack_134;
extern unsigned int fStack_138;
extern unsigned int fStack_13c;
extern unsigned int fStack_140;
extern unsigned int fStack_144;
extern unsigned int fStack_148;
extern unsigned int fStack_14c;
extern unsigned int fStack_150;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern unsigned int fStack_d4;
extern unsigned int fStack_e0;
extern unsigned int fStack_e4;
extern unsigned int fStack_e8;
extern unsigned int fStack_ec;
extern unsigned int fStack_f4;
extern unsigned int fStack_f8;
extern unsigned int fStack_fc;
extern int fn_824EFEE0();
extern int fn_826310E0();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_8263CBB0();
extern int fn_82640058();
extern int fn_82837D98();
extern int fn_82F6A534();
extern int fn_82F6A580();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8329618C;
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_83296BE0;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;
extern unsigned int uStack_c4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_f0;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_824EC8C0(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,double param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int in_r0;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  undefined1 in_vs32 [16];
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
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
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
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  int in_stack_0000005c;
  char in_stack_00000067;
  int in_stack_0000006c;
  int in_stack_00000074;
  undefined4 auStack_160 [4];
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  
  dVar16 = (double)fn_82F6A534();
  iVar1 = lbl_8320A898;
  uVar14 = 0;
  if (lbl_8329618C == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(lbl_8329618C + 4);
  }
  if ((iVar11 != 0) && (iVar11 = *(int *)(iVar11 + 0xd54), iVar11 != 0)) {
    if (in_stack_0000006c == 0) {
      *(undefined4 *)(lbl_8320A898 + 0x2ed8) = 0;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x80000;
      fn_82631920(lbl_8320A898,*(undefined4 *)(iVar11 + 0x58));
      fn_82631578(lbl_8320A898,*(undefined4 *)(iVar11 + 0x60));
      iVar1 = lbl_8320A898;
      puVar10 = &lbl_83296890;
      puVar13 = (undefined8 *)(&lbl_83296BE0 + in_stack_00000074 * 0x2c);
      if ((&lbl_83296C80)[in_stack_00000074 * 0x2c] == 0) {
        puVar13 = &lbl_832968D0;
      }
      else {
        puVar10 = &lbl_83296C20 + in_stack_00000074 * 0x16;
      }
      puVar8 = (undefined4 *)(in_r0 + (int)puVar10 & 0xfffffff0);
      uVar24 = *puVar8;
      uVar25 = puVar8[1];
      uVar26 = puVar8[2];
      uVar27 = puVar8[3];
      uVar32 = *(undefined4 *)(puVar10 + 6);
      uVar33 = *(undefined4 *)((int)puVar10 + 0x34);
      uVar34 = *(undefined4 *)(puVar10 + 7);
      uVar35 = *(undefined4 *)((int)puVar10 + 0x3c);{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs44); memcpy(auVar21, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs44); memcpy(auVar18, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs42,in_vs43); memcpy(auVar20, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs42,in_vs43); memcpy(auVar22, &_vt3, 16); }
      uVar28 = *(undefined4 *)(puVar13 + 2);
      uVar29 = *(undefined4 *)((int)puVar13 + 0x14);
      uVar30 = *(undefined4 *)(puVar13 + 3);
      uVar31 = *(undefined4 *)((int)puVar13 + 0x1c);{ V16 _vt4 = vectorMergeHighWord(in_vs45,in_vs44); memcpy(auVar19, &_vt4, 16); }{ V16 _vt5 = vectorMergeLowWord(in_vs45,in_vs44); memcpy(auVar23, &_vt5, 16); }
      vectorMergeHighWord(auVar21,auVar20);
      vectorMergeLowWord(auVar21,auVar20);
      vectorMergeHighWord(auVar18,auVar22);
      vectorMergeLowWord(auVar18,auVar22);{ V16 _vt6 = vectorMergeLowWord(in_vs42,in_vs39); memcpy(auVar20, &_vt6, 16); }{ V16 _vt7 = vectorMergeHighWord(in_vs42,in_vs39); memcpy(auVar18, &_vt7, 16); }
      puVar8 = (undefined4 *)((int)&fStack_150 + in_r0 & 0xfffffff0);
      *puVar8 = in_register_00010040;
      puVar8[1] = in_register_00010044;
      puVar8[2] = in_register_00010048;
      puVar8[3] = in_vr4;
      puVar8 = (undefined4 *)((int)&fStack_140 + in_r0 & 0xfffffff0);
      *puVar8 = in_register_00010090;
      puVar8[1] = in_register_00010094;
      puVar8[2] = in_register_00010098;
      puVar8[3] = in_vr9;
      vectorMergeHighWord(auVar23,auVar20);
      puVar8 = (undefined4 *)((uint)(auStack_130 + in_r0) & 0xfffffff0);
      *puVar8 = in_register_00010080;
      puVar8[1] = in_register_00010084;
      puVar8[2] = in_register_00010088;
      puVar8[3] = in_vr8;
      vectorMergeHighWord(auVar19,auVar18);
      puVar8 = (undefined4 *)((uint)(auStack_120 + in_r0) & 0xfffffff0);
      *puVar8 = uVar24;
      puVar8[1] = uVar25;
      puVar8[2] = uVar26;
      puVar8[3] = uVar27;
      vectorMergeLowWord(auVar19,auVar18);
      vectorMergeLowWord(auVar23,auVar20);
      puVar8 = (undefined4 *)((int)&uStack_f0 + in_r0 & 0xfffffff0);
      *puVar8 = in_register_00010090;
      puVar8[1] = in_register_00010094;
      puVar8[2] = in_register_00010098;
      puVar8[3] = in_vr9;
      puVar8 = (undefined4 *)((int)&fStack_110 + in_r0 & 0xfffffff0);
      *puVar8 = uVar32;
      puVar8[1] = uVar33;
      puVar8[2] = uVar34;
      puVar8[3] = uVar35;
      puVar8 = (undefined4 *)((int)&fStack_100 + in_r0 & 0xfffffff0);
      *puVar8 = uVar28;
      puVar8[1] = uVar29;
      puVar8[2] = uVar30;
      puVar8[3] = uVar31;
      puVar8 = (undefined4 *)((int)&fStack_e0 + in_r0 & 0xfffffff0);
      *puVar8 = uVar24;
      puVar8[1] = uVar25;
      puVar8[2] = uVar26;
      puVar8[3] = uVar27;
      fn_826310E0(iVar1,0xc0,&fStack_150,4,0x8000);
      fn_826310E0(lbl_8320A898,0xc4,&fStack_110,4,0x4000);
      fStack_150 = (float)param_4;
      fStack_14c = (float)param_5;
      fStack_148 = (float)param_6;
      fStack_140 = (float)param_7;
      fStack_13c = (float)param_8;
      dVar17 = (double)lbl_821CC160;
      fStack_144 = lbl_821CC160;
      fStack_138 = (float)param_9;
      fStack_134 = lbl_821CC160;
      fn_826310E0(lbl_8320A898,200,&fStack_150,2,0x2000);
      fn_82837D98(*(undefined4 *)(in_stack_0000005c + 0x14),0,auStack_160);
      fn_8263CBB0(lbl_8320A898,0,auStack_160[0],0x80000000);
      iVar1 = lbl_8320A898;
      uVar2 = *(uint *)(lbl_8320A898 + 0x2948);
      uVar3 = *(uint *)(lbl_8320A898 + 0x293c);
      uVar15 = 0;
      uVar4 = *(uint *)(lbl_8320A898 + 0x2934);
      uVar5 = *(uint *)(lbl_8320A898 + 0x2efc);
      uVar6 = *(uint *)(lbl_8320A898 + 0x2f04);
      uVar7 = *(uint *)(lbl_8320A898 + 0x2f14);
      *(uint *)(lbl_8320A898 + 0x2948) = uVar2 & 0xfffffff8;
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
      if (in_stack_00000067 == '\0') {
        fn_82637B30(lbl_8320A898,0);
      }
      else {
        uVar15 = *(uint *)(lbl_8320A898 + 0x2ef8) & 0x1f;
        uVar14 = *(uint *)(lbl_8320A898 + 0x2ef8) >> 8 & 0x1f;
        fn_82637B30(lbl_8320A898,1);
        fn_82637C50(lbl_8320A898,6);
        fn_82637CE0(lbl_8320A898,7);
      }
      fStack_110 = (float)dVar16;
      fStack_10c = (float)param_2;
      fStack_108 = (float)param_3;
      fStack_104 = (float)dVar17;
      fStack_100 = (float)dVar17;
      fStack_fc = (float)dVar16;
      fStack_f8 = (float)param_2;
      fStack_f4 = (float)param_3;
      uStack_f0 = lbl_821CA460;
      fStack_ec = (float)dVar17;
      fStack_e8 = (float)dVar16;
      fStack_e4 = (float)param_2;
      fStack_e0 = (float)param_3;
      uStack_dc = lbl_821CA460;
      uStack_d8 = lbl_821CA460;
      fStack_d4 = (float)dVar16;
      fStack_d0 = (float)param_2;
      fStack_cc = (float)param_3;
      fStack_c8 = (float)dVar17;
      uStack_c4 = lbl_821CA460;
      fn_82640058(lbl_8320A898,0xd,4,&fStack_110,0x14);
      iVar1 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x2948) = uVar2 & 7 | *(uint *)(lbl_8320A898 + 0x2948) & 0xfffffff8;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40;
      iVar1 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x2f04) = uVar6;
      *(uint *)(iVar1 + 0x28dc) =
           *(uint *)(iVar1 + 0x28dc) & 0xfffffff0 |
           -(uint)(*(int *)(iVar1 + 0x3148) != 0) & uVar6 & 0xf;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x2000000000;
      iVar1 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x2f14) = uVar7;
      *(uint *)(iVar1 + 0x2934) =
           (-(uint)(*(int *)(iVar1 + 0x3158) != 0) & uVar7 & 1) << 1 |
           *(uint *)(iVar1 + 0x2934) & 0xfffffffd;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x20800;
      iVar1 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x2934) =
           (uVar4 >> 2 & 1) << 2 | *(uint *)(lbl_8320A898 + 0x2934) & 0xfffffffb;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
      iVar1 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x293c) =
           (uVar3 >> 3 & 1) << 3 | *(uint *)(lbl_8320A898 + 0x293c) & 0xfffffff7;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40200;
      fn_82637B30(lbl_8320A898,uVar5 >> 0x1f);
      if (in_stack_00000067 != '\0') {
        fn_82637C50(lbl_8320A898,uVar15);
        fn_82637CE0(lbl_8320A898,uVar14);
      }
    }
    else if (in_stack_0000006c == 2) {
      if (*(int *)(iVar11 + 0x1344) != 0) {
        fn_824EFEE0(iVar11 + 0x40);
      }
      iVar1 = *(int *)(iVar11 + 0x1340);
      iVar12 = iVar1 * 0x60 + iVar11 + 0x40;
      if (iVar1 == 0x32) {
        uVar9 = 0;
        goto LAB_824ece64;
      }
      *(int *)(iVar11 + 0x1340) = iVar1 + 1;
      if ((undefined4 *)(iVar12 + 0x40) != (undefined4 *)0x0) {
        *(undefined4 *)(iVar12 + 0x40) = 0xc;
        *(float *)(iVar12 + 0x44) = (float)dVar16;
        *(float *)(iVar12 + 0x48) = (float)param_2;
        *(float *)(iVar12 + 0x4c) = (float)param_3;
        *(float *)(iVar12 + 0x50) = (float)param_4;
        *(float *)(iVar12 + 0x54) = (float)param_5;
        *(float *)(iVar12 + 0x58) = (float)param_6;
        *(float *)(iVar12 + 0x5c) = (float)param_7;
        *(float *)(iVar12 + 0x60) = (float)param_8;
        *(float *)(iVar12 + 100) = (float)param_9;
        *(char *)(iVar12 + 0x68) = in_stack_00000067;
        *(int *)(iVar12 + 0x94) = in_stack_00000074;
        *(int *)(iVar12 + 0x98) = in_stack_0000005c;
      }
    }
  }
  uVar9 = 1;
LAB_824ece64:
  fn_82F6A580(uVar9);
  return;
}

