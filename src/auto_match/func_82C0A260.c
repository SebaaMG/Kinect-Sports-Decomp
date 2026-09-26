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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_100;
extern int fn_8265C940();
extern int fn_82A59558();
extern int fn_82C09A48();
extern int fn_82C09B40();
extern int fn_82C159B8();
extern int fn_82C16D70();
extern int fn_82C1CE58();
extern int fn_82F68CC0();
extern unsigned int iStack0000002c;
extern unsigned int iStack_cc;
extern unsigned int uStack00000026;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_114;
extern unsigned int uStack_117;
extern unsigned int uStack_118;
extern unsigned int uStack_119;
extern unsigned int uStack_11a;
extern unsigned int uStack_11b;
extern unsigned int uStack_11c;
extern unsigned int uStack_11d;
extern unsigned int uStack_11e;
extern unsigned int uStack_11f;
extern unsigned int uStack_120;
extern unsigned int uStack_121;
extern unsigned int uStack_122;
extern unsigned int uStack_123;
extern unsigned int uStack_124;
extern unsigned int uStack_125;
extern unsigned int uStack_126;
extern unsigned int uStack_127;
extern unsigned int uStack_128;
extern unsigned int uStack_129;
extern unsigned int uStack_12a;
extern unsigned int uStack_12b;
extern unsigned int uStack_12c;
extern unsigned int uStack_12d;
extern unsigned int uStack_12e;
extern unsigned int uStack_12f;
extern unsigned int uStack_130;
extern unsigned int uStack_13a;
extern unsigned int uStack_13b;
extern unsigned int uStack_13c;
extern unsigned int uStack_13d;
extern unsigned int uStack_13e;
extern unsigned int uStack_13f;
extern unsigned int uStack_140;
extern unsigned int uStack_141;
extern unsigned int uStack_142;
extern unsigned int uStack_143;
extern unsigned int uStack_144;
extern unsigned int uStack_145;
extern unsigned int uStack_146;
extern unsigned int uStack_147;
extern unsigned int uStack_148;
extern unsigned int uStack_149;
extern unsigned int uStack_14a;
extern unsigned int uStack_14b;
extern unsigned int uStack_14c;
extern unsigned int uStack_14d;
extern unsigned int uStack_14e;
extern unsigned int uStack_14f;
extern unsigned int uStack_150;
extern unsigned int uStack_15a;
extern unsigned int uStack_15b;
extern unsigned int uStack_15c;
extern unsigned int uStack_15d;
extern unsigned int uStack_15e;
extern unsigned int uStack_15f;
extern unsigned int uStack_160;
extern unsigned int uStack_161;
extern unsigned int uStack_162;
extern unsigned int uStack_163;
extern unsigned int uStack_164;
extern unsigned int uStack_165;
extern unsigned int uStack_166;
extern unsigned int uStack_167;
extern unsigned int uStack_168;
extern unsigned int uStack_169;
extern unsigned int uStack_16a;
extern unsigned int uStack_16b;
extern unsigned int uStack_16c;
extern unsigned int uStack_16d;
extern unsigned int uStack_16e;
extern unsigned int uStack_16f;
extern unsigned int uStack_170;
extern unsigned int uStack_17d;
extern unsigned int uStack_17e;
extern unsigned int uStack_17f;
extern unsigned int uStack_180;
extern unsigned int uStack_181;
extern unsigned int uStack_182;
extern unsigned int uStack_183;
extern unsigned int uStack_184;
extern unsigned int uStack_185;
extern unsigned int uStack_186;
extern unsigned int uStack_187;
extern unsigned int uStack_188;
extern unsigned int uStack_189;
extern unsigned int uStack_18a;
extern unsigned int uStack_18b;
extern unsigned int uStack_18c;
extern unsigned int uStack_18d;
extern unsigned int uStack_18e;
extern unsigned int uStack_18f;
extern unsigned int uStack_190;
extern unsigned int uStack_19f;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1a1;
extern unsigned int uStack_1a2;
extern unsigned int uStack_1a3;
extern unsigned int uStack_1a4;
extern unsigned int uStack_1a5;
extern unsigned int uStack_1a6;
extern unsigned int uStack_1a7;
extern unsigned int uStack_1a8;
extern unsigned int uStack_1a9;
extern unsigned int uStack_1aa;
extern unsigned int uStack_1ab;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1ad;
extern unsigned int uStack_1ae;
extern unsigned int uStack_1af;
extern unsigned int uStack_1b0;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_ba;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c2;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_ce;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong fn_82C0A260(ulonglong param_1,ulonglong param_2,undefined2 param_3,int param_4,
                       ulonglong param_5,uint param_6,ulonglong param_7,short param_8)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  uint *puVar5;
  int iVar7;
  int iVar8;
  undefined8 uVar6;
  uint uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined2 uStack00000026;
  int iStack0000002c;
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
  undefined1 uStack_1ae;
  undefined1 uStack_1ad;
  undefined1 uStack_1ac;
  undefined1 uStack_1ab;
  undefined1 uStack_1aa;
  undefined1 uStack_1a9;
  undefined1 uStack_1a8;
  undefined1 uStack_1a7;
  undefined1 uStack_1a6;
  undefined1 uStack_1a5;
  undefined1 uStack_1a4;
  undefined1 uStack_1a3;
  undefined1 uStack_1a2;
  undefined1 uStack_1a1;
  undefined1 uStack_1a0;
  undefined1 uStack_19f;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined1 uStack_18e;
  undefined1 uStack_18d;
  undefined1 uStack_18c;
  undefined1 uStack_18b;
  undefined1 uStack_18a;
  undefined1 uStack_189;
  undefined1 uStack_188;
  undefined1 uStack_187;
  undefined1 uStack_186;
  undefined1 uStack_185;
  undefined1 uStack_184;
  undefined1 uStack_183;
  undefined1 uStack_182;
  undefined1 uStack_181;
  undefined1 uStack_180;
  undefined1 uStack_17f;
  undefined1 uStack_17e;
  undefined1 uStack_17d;
  undefined1 uStack_170;
  undefined1 uStack_16f;
  undefined1 uStack_16e;
  undefined1 uStack_16d;
  undefined1 uStack_16c;
  undefined1 uStack_16b;
  undefined1 uStack_16a;
  undefined1 uStack_169;
  undefined1 uStack_168;
  undefined1 uStack_167;
  undefined1 uStack_166;
  undefined1 uStack_165;
  undefined1 uStack_164;
  undefined1 uStack_163;
  undefined1 uStack_162;
  undefined1 uStack_161;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined1 uStack_15e;
  undefined1 uStack_15d;
  undefined1 uStack_15c;
  undefined1 uStack_15b;
  undefined1 uStack_15a;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined1 uStack_14e;
  undefined1 uStack_14d;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  undefined1 uStack_14a;
  undefined1 uStack_149;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined1 uStack_146;
  undefined1 uStack_145;
  undefined1 uStack_144;
  undefined1 uStack_143;
  undefined1 uStack_142;
  undefined1 uStack_141;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  undefined1 uStack_13c;
  undefined1 uStack_13b;
  undefined1 uStack_13a;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  undefined1 uStack_128;
  undefined1 uStack_127;
  undefined1 uStack_126;
  undefined1 uStack_125;
  undefined1 uStack_124;
  undefined1 uStack_123;
  undefined1 uStack_122;
  undefined1 uStack_121;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined1 uStack_11e;
  undefined1 uStack_11d;
  undefined1 uStack_11c;
  undefined1 uStack_11b;
  undefined1 uStack_11a;
  undefined1 uStack_119;
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  uint uStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_10c = 0;
  uStack_114 = 0;
  if ((((param_7 & 0xffffffff) == 0) || (param_8 == 0)) || ((param_1 & 0xffffffff) == 0)) {
    return 2;
  }
  puVar4 = (ulonglong *)param_1;
  *(short *)((int)puVar4 + 0xec) = param_8;
  uStack00000026 = param_3;
  iStack0000002c = param_4;
  iVar7 = fn_82C159B8(param_1,1);
  if (((iVar7 != 0) || (*(int *)(puVar4 + 8) == 0)) ||
     ((*(short *)((int)puVar4 + 0x4c) == 0 ||
      ((*(int *)(puVar4 + 9) == 0 || (*(int *)((int)puVar4 + 0x44) == 0)))))) {
    return 3;
  }
  psVar2 = *(short **)(puVar4 + 0x1d);
  uVar10 = ZEXT48(psVar2);
  uVar14 = uStack_114;
  uVar13 = uStack_10c;
  uVar12 = uStack_108;
  uVar11 = uStack_110;
  if (uVar10 != 0) {
    uStack_13a = 0;
    uStack_17d = 0;
    uStack_146 = 0x65;
    uStack_150 = 0x57;
    uStack_14f = 0x4d;
    uStack_14d = 0x57;
    uStack_14c = 0x4d;
    uStack_14b = 0x41;
    uStack_14e = 0x2f;
    uStack_14a = 0x44;
    uStack_149 = 0x52;
    uStack_148 = 0x43;
    uStack_147 = 0x50;
    uStack_145 = 0x61;
    uStack_144 = 0x6b;
    uStack_143 = 0x52;
    uStack_142 = 0x65;
    uStack_141 = 0x66;
    uStack_140 = 0x65;
    uStack_13f = 0x72;
    uStack_13e = 0x65;
    uStack_13d = 0x6e;
    uStack_13c = 99;
    uStack_13b = 0x65;
    uStack_190 = 0x57;
    uStack_18f = 0x4d;
    uStack_18e = 0x2f;
    uStack_18d = 0x57;
    uStack_18c = 0x4d;
    uStack_18b = 0x41;
    uStack_18a = 0x44;
    uStack_189 = 0x52;
    uStack_188 = 0x43;
    uStack_187 = 0x50;
    uStack_186 = 0x65;
    uStack_185 = 0x61;
    uStack_184 = 0x6b;
    uStack_183 = 0x54;
    uStack_182 = 0x61;
    uStack_181 = 0x72;
    uStack_180 = 0x67;
    uStack_17f = 0x65;
    uStack_17e = 0x74;
    uStack_130 = 0x57;
    uStack_12f = 0x4d;
    uStack_12e = 0x2f;
    uStack_12d = 0x57;
    uStack_12c = 0x4d;
    uStack_12b = 0x41;
    uStack_12a = 0x44;
    uStack_129 = 0x52;
    uStack_128 = 0x43;
    uStack_127 = 0x41;
    uStack_126 = 0x76;
    uStack_125 = 0x65;
    uStack_124 = 0x72;
    uStack_123 = 0x61;
    uStack_122 = 0x67;
    uStack_121 = 0x65;
    uStack_120 = 0x52;
    uStack_11f = 0x65;
    uStack_11e = 0x66;
    uStack_119 = 99;
    uStack_1b0 = 0x46;
    uStack_1ad = 100;
    uStack_1a7 = 0x68;
    uStack_1a1 = 0x73;
    uStack_11d = 0x65;
    uStack_11c = 0x72;
    uStack_11b = 0x65;
    uStack_11a = 0x6e;
    uStack_118 = 0x65;
    uStack_117 = 0;
    uStack_170 = 0x57;
    uStack_16f = 0x4d;
    uStack_16e = 0x2f;
    uStack_16d = 0x57;
    uStack_16c = 0x4d;
    uStack_16b = 0x41;
    uStack_16a = 0x44;
    uStack_169 = 0x52;
    uStack_168 = 0x43;
    uStack_167 = 0x41;
    uStack_166 = 0x76;
    uStack_165 = 0x65;
    uStack_164 = 0x72;
    uStack_163 = 0x61;
    uStack_162 = 0x67;
    uStack_161 = 0x65;
    uStack_160 = 0x54;
    uStack_15f = 0x61;
    uStack_15e = 0x72;
    uStack_15d = 0x67;
    uStack_15c = 0x65;
    uStack_15b = 0x74;
    uStack_15a = 0;
    uStack_1af = 0x6f;
    uStack_1ae = 0x6c;
    uStack_1ac = 0x25;
    uStack_1ab = 0x54;
    uStack_1aa = 0x6f;
    uStack_1a9 = 0x25;
    uStack_1a8 = 0x43;
    uStack_1a6 = 0x61;
    uStack_1a5 = 0x6e;
    uStack_1a4 = 0x6e;
    uStack_1a3 = 0x65;
    uStack_1a2 = 0x6c;
    uStack_1a0 = 0x25;
    uStack_19f = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_b8 = param_2;
    uStack_b0 = uVar10;
    uStack_a8 = param_1;
    uStack_a0 = param_7;
    if (((*psVar2 != 0) && (*(int *)(psVar2 + 2) != 0)) && (*psVar2 != 0)) {
      uVar15 = 0;
      do {
        iVar7 = uVar15 * 0x14;
        sVar1 = *(short *)(iVar7 + *(int *)(*(int *)(puVar4 + 0x1d) + 4) + 2);
        if ((sVar1 == 0) || (sVar1 == *(short *)((int)puVar4 + 0xe4))) {
          iVar8 = iVar7 + *(int *)(*(int *)(puVar4 + 0x1d) + 4);
          iVar8 = fn_82C09A48(&uStack_150,*(undefined4 *)(iVar8 + 0xc),*(undefined2 *)(iVar8 + 4),
                                0);
          if (iVar8 == 0) {
            uVar11 = **(undefined4 **)(*(int *)(*(int *)(puVar4 + 0x1d) + 4) + iVar7 + 0x10);
          }
          else {
            iVar8 = *(int *)(*(int *)(puVar4 + 0x1d) + 4) + iVar7;
            iVar8 = fn_82C09A48(&uStack_130,*(undefined4 *)(iVar8 + 0xc),
                                  *(undefined2 *)(iVar8 + 4),0);
            if (iVar8 == 0) {
              uVar12 = **(undefined4 **)(*(int *)(*(int *)(puVar4 + 0x1d) + 4) + iVar7 + 0x10);
            }
            else {
              iVar8 = *(int *)(*(int *)(puVar4 + 0x1d) + 4) + iVar7;
              iVar8 = fn_82C09A48(&uStack_190,*(undefined4 *)(iVar8 + 0xc),
                                    *(undefined2 *)(iVar8 + 4),0);
              if (iVar8 == 0) {
                uVar13 = **(undefined4 **)(*(int *)(*(int *)(puVar4 + 0x1d) + 4) + iVar7 + 0x10);
              }
              else {
                iVar8 = *(int *)(*(int *)(puVar4 + 0x1d) + 4) + iVar7;
                iVar8 = fn_82C09A48(&uStack_170,*(undefined4 *)(iVar8 + 0xc),
                                      *(undefined2 *)(iVar8 + 4),0);
                if (iVar8 == 0) {
                  uVar14 = **(undefined4 **)(*(int *)(*(int *)(puVar4 + 0x1d) + 4) + iVar7 + 0x10);
                }
                else {
                  iVar8 = *(int *)(*(int *)(puVar4 + 0x1d) + 4) + iVar7;
                  iVar8 = fn_82C09A48(&uStack_1b0,*(undefined4 *)(iVar8 + 0xc),
                                        *(undefined2 *)(iVar8 + 4),&uStack_e0);
                  if (iVar8 == 0) {
                    if ((uStack_e0 & 0xffff) == (uint)*(ushort *)((int)puVar4 + 0x4c)) {
                      uVar10 = (longlong)(int)(uStack_dc & 0xffff) *
                               (longlong)(int)(uStack_e0 & 0xffff);
                      uVar6 = fn_8265C940(uVar10 * 4 & 0xfffffffc,0x248c8000);
                      iVar7 = *(int *)(*(int *)(puVar4 + 0x1d) + 4) + iVar7;
                      fn_82C09B40(*(undefined4 *)(iVar7 + 0x10),*(undefined4 *)(iVar7 + 8),uVar6,
                                    uVar10 & 0xffff);
                    }
                  }
                }
              }
            }
          }
        }
        uVar15 = uVar15 + 1 & 0xffff;
      } while (uVar15 < **(ushort **)(puVar4 + 0x1d));
    }
  }
  iVar7 = fn_82C16D70(0,0);
  *(int *)(puVar4 + 0x49) = iVar7;
  if (iVar7 == 0) {
    return 1;
  }
  uVar3 = *(undefined4 *)(puVar4 + 9);
  uStack_d0 = *(undefined2 *)((int)puVar4 + 0x3e);
  uStack_ce = *(undefined2 *)((int)puVar4 + 0x4c);
  iStack_cc = *(int *)(puVar4 + 8);
  uStack_c8 = *(undefined4 *)((int)puVar4 + 0x44);
  uStack_c2 = *(undefined2 *)((int)puVar4 + 0x5c);
  uStack_c0 = *(undefined4 *)(puVar4 + 0xc);
  uStack_bc = *(undefined2 *)((int)puVar4 + 0x54);
  uStack_ba = *(undefined2 *)((int)puVar4 + 0x56);
  uStack_f8 = 0;
  puVar5 = (uint *)param_7;
  puVar5[4] = (uint)(*(ushort *)((int)puVar4 + 0x5a) >> 3);
  uStack_f0 = 0;
  *puVar5 = *(uint *)(puVar4 + 8);
  uStack_e8 = 0;
  uStack_c4 = (undefined2)uVar3;
  puVar5[3] = (uint)*(ushort *)((int)puVar4 + 0x5c);
  fn_82A59558(&uStack_d0,param_7);
  uVar15 = uStack_e8;
  if ((param_2 & 1) != 0) {
    puVar5[2] = (uint)param_5;
    puVar5[1] = 0;
    uVar10 = param_5 & 0xffffffff;
    while (uVar10 != 0) {
      puVar5[1] = ((uint)param_5 & 1) + puVar5[1];
      param_5 = (param_5 & 0xffffffff) >> 1;
      uVar10 = param_5;
    }
  }
  if ((param_2 & 0x100) != 0) {
    uVar9 = puVar5[1];
    if (2 < uVar9) {
      uVar9 = 2;
    }
    puVar5[1] = uVar9;
    if (uVar9 == 2) {
      puVar5[2] = 3;
    }
  }
  if ((param_2 & 0x40) == 0) {
    if ((param_2 & 0x400) == 0) {
      if ((param_2 & 0x800) != 0) {
        puVar5[4] = 4;
      }
    }
    else {
      puVar5[4] = 3;
    }
  }
  else {
    puVar5[3] = 0x10;
    puVar5[4] = 2;
  }
  uStack_e8 = uStack_e8 & 0xffff;
  if ((param_2 & 2) != 0) {
    uStack_e8 = CONCAT22(uStack00000026,(short)uVar15);
  }
  if ((param_2 & 4) != 0) {
    if (iStack_cc == 32000) {
      if (param_6 == 0) {
        param_6 = 0x5622;
      }
    }
    else if (param_6 == 0) goto LAB_82c0a938;
    *puVar5 = param_6;
  }
LAB_82c0a938:
  if ((param_2 & 0x10) == 0) {
    if ((param_2 & 8) == 0) {
      if ((param_2 & 0x20) != 0) {
        *puVar5 = *puVar5 << 1;
      }
    }
    else {
      *puVar5 = *puVar5 >> 1;
    }
  }
  if ((param_2 & 0x80) != 0) {
    if ((ulonglong)*puVar5 == (longlong)(int)(*puVar5 / 0xac44) * 0xac44) {
      *puVar5 = 0xac44;
    }
    if ((ulonglong)*puVar5 == (longlong)(int)(*puVar5 / 48000) * 48000) {
      *puVar5 = 48000;
    }
  }
  if ((param_2 & 0x200) != 0) {
    if ((param_2 & 0x40) != 0) {
      return 1;
    }
    if ((param_2 & 0x400) != 0) {
      return 1;
    }
    if ((param_2 & 0x800) != 0) {
      return 1;
    }
    puVar5[5] = 1;
    puVar5[4] = 4;
    puVar5[3] = 0x20;
  }
  uStack_f8 = CONCAT44(uVar11,uVar12);
  uStack_f0 = CONCAT44(uVar13,uVar14);
  uVar10 = fn_82C1CE58(*(undefined4 *)(puVar4 + 0x49),&uStack_d0,param_7,auStack_100,
                           param_1 + 0x24c,0);
  if ((int)uVar10 < 0) {
    return uVar10;
  }
  if ((int)uVar10 != 0) {
    return 1;
  }
  uVar10 = fn_8265C940(0x1c,0x248c8000);
  *(int *)(puVar4 + 0x4d) = (int)uVar10;
  if ((uVar10 & 0xffffffff) != 0) {
    fn_82F68CC0(uVar10,auStack_100,0x1c);
  }
  *(undefined4 *)((int)puVar4 + 0x224) = 0;
  if (*(int *)(puVar4 + 0x45) == 0) {
    if (*(int *)(puVar4 + 0x13) != 0) {
      if (((*(char *)((int)puVar4 + 0x9c) != 'D') || (*(char *)((int)puVar4 + 0x9d) != 'R')) ||
         ((*(char *)((int)puVar4 + 0x9e) != 'M' || (*(char *)((int)puVar4 + 0x9f) != '\0')))) {
        return 0xc;
      }
      *(undefined4 *)((int)puVar4 + 0x224) = 1;
    }
  }
  else if (*(int *)(puVar4 + 0x13) == 0) {
    return 0xd;
  }
  puVar4[6] = puVar4[5];
  if (*(int *)((int)puVar4 + 0x1c) != 0) {
    if (iStack0000002c != 0) {
      *(int *)((int)puVar4 + 0x1c) = *(int *)((int)puVar4 + 0x1c) + -1;
    }
    puVar4[6] = ((ulonglong)*(uint *)((int)puVar4 + 0x1c) - 1) *
                (ulonglong)*(uint *)((int)puVar4 + 0x14) + puVar4[5];
  }
  if ((puVar4[7] & 0x100000000) != 0) {
    puVar4[6] = -(ulonglong)*(uint *)((int)puVar4 + 0x14) - 1;
  }
  *(undefined4 *)(puVar4 + 0x31) = 3;
  *puVar4 = (ulonglong)*(uint *)(puVar4 + 2);
  puVar4[1] = (ulonglong)*(uint *)(puVar4 + 2);
  if (*(int *)(puVar4 + 0x45) == 0) {
    uVar11 = 0x100;
  }
  else {
    uVar11 = *(undefined4 *)(puVar4 + 3);
  }
  iVar7 = fn_8265C940(uVar11,0x248c8000);
  *(int *)((int)puVar4 + 0x264) = iVar7;
  return -(ulonglong)(iVar7 == 0) & 0x11;
}

