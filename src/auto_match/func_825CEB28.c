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
extern unsigned int *auStack_e8;
extern unsigned int fStack_100;
extern unsigned int fStack_108;
extern unsigned int fStack_10c;
extern unsigned int fStack_110;
extern unsigned int fStack_118;
extern unsigned int fStack_11c;
extern unsigned int fStack_120;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern unsigned int fStack_b4;
extern unsigned int fStack_b8;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern unsigned int fStack_d4;
extern unsigned int fStack_d8;
extern unsigned int fStack_dc;
extern unsigned int fStack_e0;
extern unsigned int fStack_f8;
extern unsigned int fStack_fc;
extern int fn_82520738();
extern int fn_82520780();
extern int fn_82587C30();
extern int fn_82630750();
extern int fn_826308A0();
extern int fn_826310E0();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82639F78();
extern int fn_8263CBB0();
extern int fn_82640680();
extern int fn_82645EA8();
extern int fn_82837D98();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_8218E178;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821914B0;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192D74;
extern float lbl_821954D0;
extern unsigned int lbl_82195644;
extern unsigned int lbl_82195BA4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326C250;
extern unsigned int lbl_83296C80;
extern unsigned int uRam8326c254;
extern unsigned int uRam8326c258;
extern unsigned int uRam8326c25c;
extern unsigned int uStack_104;
extern unsigned int uStack_114;
extern unsigned int uStack_124;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825CEB28(undefined8 param_1,longlong param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 in_r0;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 in_vs32 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  float in_register_00010060;
  float in_register_00010064;
  float in_register_00010068;
  float in_vr6;
  float in_register_00010090;
  float in_register_00010094;
  float in_register_00010098;
  float in_vr9;
  uint uStack_150;
  undefined4 uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  uint uStack_138;
  uint uStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 auStack_e8 [2];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  iVar13 = fn_82F6A544();
  iVar14 = (int)in_r0;
  if ((((*(int *)(iVar13 + 0xc88) != 0) && (*(int *)(iVar13 + 0xc8c) != 0)) &&
      (*(int *)(iVar13 + 0xc90) != 0)) && (*(int *)(iVar13 + 0xcb0) != 0)) {
    fVar1 = *(float *)(iVar13 + 0xcac);
    *(float *)(iVar13 + 0xcac) = *(float *)(iVar13 + 0x828);
    puVar16 = lbl_8320A898;
    dVar26 = (double)(*(float *)(iVar13 + 0x828) - fVar1);
    dVar22 = (double)lbl_82195644;
    uVar2 = *(uint *)((int)lbl_8320A898 + 0x293c);
    fVar1 = *(float *)((int)lbl_8320A898 + 0x2904);
    uVar3 = *(uint *)((int)lbl_8320A898 + 0x2f04);
    *(undefined4 *)((int)lbl_8320A898 + 0x2904) = lbl_82195BA4;
    puVar16[2] = puVar16[2] | 0x8000000;
    puVar16 = lbl_8320A898;
    dVar24 = (double)lbl_8218E8E8;
    uVar17 = (ulonglong)(uVar2 >> 3) & 1;
    dVar23 = (double)lbl_821CC160;
    uVar21 = (ulonglong)((double)fVar1 * dVar22 + dVar24);
    *(uint *)((int)lbl_8320A898 + 0x293c) = *(uint *)((int)lbl_8320A898 + 0x293c) | 8;
    puVar16[2] = puVar16[2] | 0x40200;
    puVar16 = lbl_8320A898;
    *(undefined4 *)((int)lbl_8320A898 + 0x2f04) = 7;
    lVar18 = -0x7cd69770;
    *(uint *)((int)puVar16 + 0x28dc) =
         *(uint *)((int)puVar16 + 0x28dc) & 0xfffffff0 | -(uint)(*(int *)(puVar16 + 0x629) != 0) & 7
    ;
    puVar16[2] = puVar16[2] | 0x2000000000;
    puVar16 = lbl_8320A898;
    *(undefined4 *)(lbl_8320A898 + 0x5db) = 0;
    puVar16[2] = puVar16[2] | 0x80000;
    if (dVar26 != dVar23) {
      fn_82645EA8(lbl_8320A898,3);
      fn_82631920(lbl_8320A898,*(undefined4 *)(iVar13 + 0xc80));
      fn_82631578(lbl_8320A898,*(undefined4 *)(iVar13 + 0xc84));
      fn_8263CBB0(lbl_8320A898,0,*(undefined4 *)(iVar13 + 0xc90),0x80000000);
      puVar16 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x90) = *(uint *)(lbl_8320A898 + 0x90) & 0xffffe3ff | 0x800;
      puVar16[3] = puVar16[3] | 0x80000000;
      puVar16 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x90) = *(uint *)(lbl_8320A898 + 0x90) & 0xffff1fff | 0x4000;
      puVar16[3] = puVar16[3] | 0x80000000;
      puVar16 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x90) = *(uint *)(lbl_8320A898 + 0x90) & 0xfff8ffff | 0x20000;
      puVar16[3] = puVar16[3] | 0x80000000;
      fn_82837D98(*(undefined4 *)(*(int *)(iVar13 + 0xc94) + 0x14),0,auStack_e8);
      fn_8263CBB0(lbl_8320A898,1,auStack_e8[0],0x40000000);
      dVar22 = (double)fn_82587C30((double)lbl_82192D74,dVar26);
      fVar1 = (float)(dVar22 * (double)*(float *)(iVar13 + 0xc98));
      *(float *)(iVar13 + 0xc98) = fVar1;
      dVar22 = (double)lbl_821CA460;
      if ((double)fVar1 < dVar22) {
        *(float *)(iVar13 + 0xc98) = lbl_821CA460;
      }
      *(float *)(iVar13 + 0xc98) =
           (float)(dVar26 * (double)*(float *)(iVar13 + 0xc9c) + (double)*(float *)(iVar13 + 0xc98))
      ;
      dVar24 = (double)fn_82587C30(dVar24,dVar26);
      *(float *)(iVar13 + 0xc9c) = (float)(dVar24 * (double)*(float *)(iVar13 + 0xc9c));
      iVar14 = fn_82520780((double)*(float *)(iVar13 + 0xca8),0xffffffff83265a28);
      if (iVar14 != 0) {
        dVar24 = (double)fn_82520738((double)*(float *)(iVar13 + 0xca0),
                                      (double)*(float *)(iVar13 + 0xca4),0xffffffff83265a28);
        *(float *)(iVar13 + 0xc9c) = (float)(dVar24 + (double)*(float *)(iVar13 + 0xc9c));
      }
      dVar25 = (double)*(float *)(iVar13 + 0xc98);
      dVar24 = (double)fn_82587C30((double)lbl_821914B0,dVar26);
      fn_826310E0(lbl_8320A898,0xc3,iVar13 + 0xc60,2,0xc000);
      iVar14 = (int)in_r0;
      lVar15 = -0x7cd693e0;
      if (lbl_83296C80 == 0) {
        lVar15 = lVar18;
      }
      puVar19 = &uStack_138;
      lVar15 = lVar15 + -8;
      lVar20 = 8;
      do {
        lVar15 = lVar15 + 8;
        puVar19 = puVar19 + 2;
        *(undefined8 *)puVar19 = *(undefined8 *)lVar15;
        puVar16 = lbl_8320A898;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      fVar1 = lbl_821922D0 -
              (fStack_120 * fStack_100 + fStack_118 * fStack_f8 + fStack_11c * fStack_fc);
      if (lbl_8218E178 < fVar1) {
        fVar1 = lbl_8218E178;
      }
      *(float *)(lbl_8320A898 + 0x27a) =
           -(fStack_100 * fStack_130 + fStack_f8 * fStack_128 + fStack_fc * fStack_12c);
      *(float *)((int)puVar16 + 0x13d4) = fVar1;
      *(float *)(puVar16 + 0x27b) =
           -(fStack_110 * fStack_100 + fStack_108 * fStack_f8 + fStack_10c * fStack_fc);
      *(float *)((int)puVar16 + 0x13dc) = (float)dVar23;
      *puVar16 = *puVar16 | 0x4000;
      puVar19 = *(uint **)(iVar13 + 0xcb0);
      if (puVar19 != (uint *)0x0) {
        uStack_13c = 0x4b000000;
        uStack_14c = 0x4b000000;
        do {
          puVar16 = lbl_8320A898;
          uVar2 = *puVar19;
          uStack_138 = uStack_138 & 0xc0f8 | 0x4b072502;
          uStack_144 = puVar19[5] * 5 & 0x7fffff | 0x4b000000;
          uStack_140 = ((uVar2 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1ffffffc) >> 2 | 0x40000000;
          uStack_150 = ((uVar2 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1ffffffc) >> 2 | 0x40000000;
          uStack_148 = uStack_148 & 0xc0f8 | 0x4b072001;
          *(uint *)(lbl_8320A898 + 0x270) = uStack_140;
          *(undefined4 *)((int)puVar16 + 0x1384) = uStack_13c;
          *(uint *)(puVar16 + 0x271) = uStack_138;
          *(uint *)((int)puVar16 + 0x138c) = uStack_144;
          *puVar16 = *puVar16 | 0x8000;
          puVar16 = lbl_8320A898;
          *(uint *)(lbl_8320A898 + 0x272) = uStack_150;
          *(undefined4 *)((int)puVar16 + 0x1394) = uStack_14c;
          *(uint *)(puVar16 + 0x273) = uStack_148;
          *(uint *)((int)puVar16 + 0x139c) = uStack_144;
          *puVar16 = *puVar16 | 0x8000;
          puVar16 = lbl_8320A898;
          uVar2 = puVar19[5];
          *(float *)(lbl_8320A898 + 0x274) = (float)dVar26;
          *(float *)((int)puVar16 + 0x13a4) = (float)dVar25;
          puVar16 = lbl_8320A898;
          *(float *)(lbl_8320A898 + 0x275) = (float)dVar24;
          *(float *)((int)puVar16 + 0x13ac) = (float)(dVar22 / (double)uVar2);
          *puVar16 = *puVar16 | 0x8000;
          uStack_134 = uStack_144;
          fn_82639F78(lbl_8320A898,0,puVar19[1],0,0x28,1);
          fn_82630750(lbl_8320A898,0,puVar19[1],0);
          fn_82640680(lbl_8320A898,1,0,puVar19[5]);
          fn_826308A0(lbl_8320A898,0,puVar19[1],0);
          iVar14 = (int)in_r0;
          puVar19 = (uint *)puVar19[6];
        } while (puVar19 != (uint *)0x0);
      }
      fn_82645EA8(lbl_8320A898,0);
    }
    puVar16 = lbl_8320A898;
    if (*(int *)((int)((param_2 + 0xfdU & 0xffffffff) << 2) + *(int *)(iVar13 + 0x1a8)) == 0) {
      fn_82631920(lbl_8320A898,*(undefined4 *)(iVar13 + 0xc88));
      fn_82631578(lbl_8320A898,*(undefined4 *)(iVar13 + 0xc8c));
      if (*(int *)((int)&lbl_83296C80 + (int)(param_2 * 0xb0)) != 0) {
        lVar18 = param_2 * 0xb0 + -0x7cd693e0;
      }
      puVar19 = &uStack_138;
      lVar18 = lVar18 + -8;
      lVar15 = 8;
      do {
        lVar18 = lVar18 + 8;
        puVar19 = puVar19 + 2;
        *(undefined8 *)puVar19 = *(undefined8 *)lVar18;
        puVar16 = lbl_8320A898;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs45); memcpy(auVar31, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar29, &_vt1, 16); }
      pfVar6 = (float *)((int)&fStack_130 + iVar14 & 0xfffffff0);{ V16 _vt2 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(auVar28, &_vt2, 16); }
      pfVar7 = (float *)((int)&fStack_120 + iVar14 & 0xfffffff0);{ V16 _vt3 = vectorMergeLowWord(in_vs43,in_vs44); memcpy(auVar27, &_vt3, 16); }
      pfVar8 = (float *)((int)&fStack_110 + iVar14 & 0xfffffff0);
      vectorMergeHighWord(auVar31,auVar28);{ V16 _vt4 = vectorMergeLowWord(auVar31,auVar28); memcpy(auVar32, &_vt4, 16); }{ V16 _vt5 = vectorMergeHighWord(auVar29,auVar27); memcpy(auVar31, &_vt5, 16); }{ V16 _vt6 = vectorMergeLowWord(auVar29,auVar27); memcpy(auVar30, &_vt6, 16); }
      fVar1 = *pfVar6 * in_register_00010090 + pfVar6[1] * in_register_00010094 +
              pfVar6[2] * in_register_00010098 + pfVar6[3] * in_vr9;
      fVar4 = *pfVar8 * in_register_00010060 + pfVar8[1] * in_register_00010064 +
              pfVar8[2] * in_register_00010068 + pfVar8[3] * in_vr6;
      fVar5 = *pfVar7 * in_register_00010060 + pfVar7[1] * in_register_00010064 +
              pfVar7[2] * in_register_00010068 + pfVar7[3] * in_vr6;{ V16 _vt7 = vectorMergeHighWord(auVar28,auVar27); memcpy(auVar29, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(in_vs36,in_vs32); memcpy(auVar27, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar28, &_vt9, 16); }
      vectorMergeHighWord(auVar29,auVar27);{ V16 _vt10 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar27, &_vt10, 16); }{ V16 _vt11 = vectorMergeHighWord(auVar32,auVar30); memcpy(auVar29, &_vt11, 16); }{ V16 _vt12 = vectorMergeHighWord(in_vs44,in_vs61); memcpy(auVar30, &_vt12, 16); }
      pfVar6 = (float *)((int)&fStack_e0 + iVar14 & 0xfffffff0);
      *pfVar6 = fVar1;
      pfVar6[1] = fVar1;
      pfVar6[2] = fVar1;
      pfVar6[3] = fVar1;{ V16 _vt13 = vectorMergeHighWord(in_vs45,in_vs33); memcpy(auVar32, &_vt13, 16); }{ V16 _vt14 = vectorMergeHighWord(in_vs43,auVar31); memcpy(auVar31, &_vt14, 16); }
      vectorMergeHighWord(auVar30,auVar27);
      vectorMergeHighWord(auVar32,auVar28);
      vectorMergeHighWord(auVar31,auVar29);
      pfVar6 = (float *)((int)&fStack_c0 + iVar14 & 0xfffffff0);
      *pfVar6 = fVar1;
      pfVar6[1] = fVar1;
      pfVar6[2] = fVar1;
      pfVar6[3] = fVar1;
      pfVar6 = (float *)((int)&fStack_d0 + iVar14 & 0xfffffff0);
      *pfVar6 = fVar5;
      pfVar6[1] = fVar5;
      pfVar6[2] = fVar5;
      pfVar6[3] = fVar5;
      pfVar6 = (float *)((int)&uStack_b0 + iVar14 & 0xfffffff0);
      *pfVar6 = fVar4;
      pfVar6[1] = fVar4;
      pfVar6[2] = fVar4;
      pfVar6[3] = fVar4;
      fStack_12c = fStack_d0;
      fStack_110 = fStack_d8;
      fStack_120 = fStack_dc;
      fStack_100 = fStack_d4;
      fStack_130 = fStack_e0;
      fStack_11c = fStack_cc;
      fStack_10c = fStack_c8;
      fStack_fc = fStack_c4;
      fStack_128 = fStack_c0;
      fStack_118 = fStack_bc;
      fStack_108 = fStack_b8;
      uStack_124 = uStack_b0;
      uStack_114 = uStack_ac;
      uStack_104 = uStack_a8;
      fStack_f8 = fStack_b4;
      uStack_f4 = uStack_a4;
      fn_826310E0(puVar16,0xc0,&fStack_130,4,0x8000);
      uVar12 = uRam8326c25c;
      uVar11 = uRam8326c258;
      uVar10 = uRam8326c254;
      puVar16 = lbl_8320A898;
      puVar9 = (undefined4 *)((int)&uStack_150 + iVar14 & 0xfffffff0);
      *puVar9 = lbl_8326C250;
      puVar9[1] = uVar10;
      puVar9[2] = uVar11;
      puVar9[3] = uVar12;
      *(uint *)(puVar16 + 0x470) = uStack_150;
      *(undefined4 *)((int)puVar16 + 0x2384) = uStack_14c;
      *(uint *)(puVar16 + 0x471) = uStack_148;
      *(uint *)((int)puVar16 + 0x238c) = uStack_144;
      puVar16[1] = puVar16[1] | 0x8000;
      for (iVar14 = *(int *)(iVar13 + 0xcb0); puVar16 = lbl_8320A898, iVar14 != 0;
          iVar14 = *(int *)(iVar14 + 0x18)) {
        fn_82639F78(lbl_8320A898,0,*(undefined4 *)(iVar14 + 4),0,0x28,1);
        fn_82639F78(lbl_8320A898,1,*(undefined4 *)(iVar14 + 8),0,8,1);
        if (*(int *)(iVar14 + 0xc) != 0) {
          fn_82837D98(*(undefined4 *)(*(int *)(iVar14 + 0xc) + 0x14),0,&uStack_ec);
          fn_8263CBB0(lbl_8320A898,0,uStack_ec,0x80000000);
        }
        if (*(int *)(iVar14 + 0x10) != 0) {
          fn_82837D98(*(undefined4 *)(*(int *)(iVar14 + 0x10) + 0x14),0,&uStack_f0);
          fn_8263CBB0(lbl_8320A898,1,uStack_f0,0x40000000);
        }
        fn_82640680(lbl_8320A898,0xd,0,*(int *)(iVar14 + 0x14) << 2);
      }
      *(float *)((int)lbl_8320A898 + 0x2904) = (float)(uVar21 & 0xffffffff) * lbl_821954D0;
      puVar16[2] = puVar16[2] | 0x8000000;
      puVar16 = lbl_8320A898;
      *(uint *)((int)lbl_8320A898 + 0x293c) =
           (uint)(uVar17 << 3) | *(uint *)((int)lbl_8320A898 + 0x293c) & 0xfffffff7;
      puVar16[2] = puVar16[2] | 0x40200;
      puVar16 = lbl_8320A898;
      *(uint *)((int)lbl_8320A898 + 0x2f04) = uVar3;
      *(uint *)((int)puVar16 + 0x28dc) =
           *(uint *)((int)puVar16 + 0x28dc) & 0xfffffff0 |
           -(uint)(*(int *)(puVar16 + 0x629) != 0) & uVar3 & 0xf;
    }
    else {
      *(float *)((int)lbl_8320A898 + 0x2904) = (float)(uVar21 & 0xffffffff) * lbl_821954D0;
      puVar16[2] = puVar16[2] | 0x8000000;
      puVar16 = lbl_8320A898;
      *(uint *)((int)lbl_8320A898 + 0x293c) =
           (uint)(uVar17 << 3) | *(uint *)((int)lbl_8320A898 + 0x293c) & 0xfffffff7;
      puVar16[2] = puVar16[2] | 0x40200;
      puVar16 = lbl_8320A898;
      *(uint *)((int)lbl_8320A898 + 0x2f04) = uVar3;
      *(uint *)((int)puVar16 + 0x28dc) =
           -(uint)(*(int *)(puVar16 + 0x629) != 0) & uVar3 & 0xf |
           *(uint *)((int)puVar16 + 0x28dc) & 0xfffffff0;
    }
    puVar16[2] = puVar16[2] | 0x2000000000;
  }
  fn_82F6A590();
  return;
}

