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
extern unsigned int *auStack_f0;
extern unsigned int fStack_16c;
extern unsigned int fStack_174;
extern unsigned int fStack_178;
extern unsigned int fStack_18c;
extern int fn_82CE5410();
extern int fn_82CE8B30();
extern int fn_82CE9108();
extern int fn_82DAA348();
extern int fn_82DB58C0();
extern int fn_82DC3748();
extern unsigned int iStack_1bc;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int iStack_cc;
extern unsigned int lbl_8323C860;
extern unsigned int uStack0000001c;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_170;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_190;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1b4;
extern unsigned int uStack_1b8;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1ca;
extern unsigned int uStack_1cc;
extern unsigned int uStack_1ce;
extern unsigned int uStack_1cf;
extern unsigned int uStack_1d0;
extern unsigned int uStack_a8;
extern unsigned int uStack_c0;
extern unsigned int uStack_c3;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;


void fn_82DA8F88(int param_1,ulonglong param_2,int param_3,int *param_4,ulonglong param_5,
                  int param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 in_r0;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uStack0000001c;
  undefined1 uStack_1d0;
  undefined1 uStack_1cf;
  undefined1 uStack_1ce;
  undefined2 uStack_1cc;
  undefined2 uStack_1ca;
  undefined2 uStack_1c0;
  int iStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  int aiStack_1a0 [4];
  undefined4 uStack_190;
  float fStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  float fStack_178;
  float fStack_174;
  undefined4 uStack_170;
  float fStack_16c;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_130;
  undefined1 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined4 uStack_c0;
  int iStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 *puStack_a4;
  
  uStack0000001c = (uint)param_2;
  iVar11 = (int)param_5;
  if ((*(int *)(param_1 + 200) == 0) || (param_3 <= *(int *)(*(int *)(param_1 + 0xc) + 0xec))) {
    if (0 < iVar11) {
      param_4 = param_4 + -6;
      do {
        puVar8 = (uint *)(param_4 + 8);
        piVar12 = param_4 + 7;
        param_4 = param_4 + 6;
        fn_82DB58C0(param_1,((ulonglong)*puVar8 & 0x3fffffff) * 4 + param_2,*piVar12,param_6,
                          *param_4,param_7);
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
  }
  else {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0xe8);
    uVar16 = (ulonglong)uVar1;
    piVar12 = (int *)0x0;
    piVar9 = (int *)fn_82CE5410();
    iVar2 = *piVar9;
    *piVar9 = ((int)((param_5 + (param_5 & 0x3fffffff) * 4 & 0xffffffff) << 4) + 0x7fU & 0xffffff80)
              + iVar2;
    if (0 < iVar11) {
      puVar18 = (undefined2 *)(iVar2 + 4);
      uVar15 = param_5;
      piVar9 = param_4;
      piVar14 = piVar12;
      while( true ) {
        piVar12 = piVar9;
        if (*piVar9 != *(int *)(*(int *)(param_1 + 0xc) + 0x20)) {
          iVar3 = piVar9[2];
          iVar4 = piVar9[1];
          if (puVar18 == (undefined2 *)0x4) {
            puVar17 = (undefined2 *)0x0;
          }
          else {
            *(undefined1 *)(puVar18 + -2) = 0xf;
            puVar17 = puVar18 + -2;
            *(undefined1 *)((int)puVar18 + -3) = 0;
            *(undefined1 *)(puVar18 + -1) = 1;
            puVar18[6] = 0xffff;
            *puVar18 = 0x50;
            puVar18[1] = 0xffff;
            *(undefined4 *)(puVar18 + 8) = 0;
            *(undefined4 *)(puVar18 + 10) = 0;
            *(undefined4 *)(puVar18 + 0x16) = *(undefined4 *)(param_6 + 0x50);
            *(undefined4 *)(puVar18 + 0x18) = *(undefined4 *)(param_6 + 0x54);
            *(undefined4 *)(puVar18 + 0x1a) = *(undefined4 *)(param_6 + 0x58);
            *(undefined4 *)(puVar18 + 0x1c) = *(undefined4 *)(param_6 + 0x5c);
            puVar18[6] = 0;
            puVar18[0x10] = 0;
            *(int *)(puVar18 + 0x14) = iVar3 * 4 + (int)param_2;
            puVar18[0x12] = (short)iVar4;
            puVar18[0x13] = (short)uVar1;
            *(undefined4 *)(puVar18 + 0xe) = 0;
            *(undefined1 *)((int)puVar18 + -3) = 1;
            *(char *)(puVar18 + 0x1e) = (char)param_7;
          }
          *(undefined4 *)(puVar17 + 0xe) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x74);
          piVar12 = piVar14;
          if (0 < iVar4) {
            uVar13 = iVar4 - 1;
            trapWord(6,uVar16,0);
            trapWord(5,uVar16 & ~((((ulonglong)uVar13 & 0x7fffffff) << 1 |
                                  (ulonglong)(uVar13 >> 0x1f)) - 1),0xffff);
            uVar10 = fn_82DAA348((longlong)((int)uVar13 / (int)uVar1) + 1,uVar16);
            *(undefined1 *)(puVar17 + 1) = 2;
            *(undefined4 *)(puVar17 + 0x10) = uVar10;
            puVar17[8] = *(undefined2 *)(*piVar9 + 0x20);
            fn_82CE8B30(*(undefined4 *)(param_1 + 200),puVar17,1);
            piVar9[4] = (int)puVar17;
          }
        }
        uVar15 = uVar15 - 1;
        piVar9 = piVar9 + 6;
        puVar18 = puVar18 + 0x28;
        if (uVar15 == 0) break;
        param_2 = (ulonglong)uStack0000001c;
        piVar14 = piVar12;
      }
    }
    fn_82CE9108(*(undefined4 *)(param_1 + 200));
    if (0 < iVar11) {
      param_4 = param_4 + 4;
      do {
        iVar11 = *param_4;
        if (iVar11 != 0) {
          uStack_1cc = 0x30;
          uStack_1cf = 0;
          uStack_1ce = 2;
          uStack_1ca = 0xffff;
          aiStack_1a0[0] = *(int *)(param_1 + 0xc);
          uStack_1d0 = 0xe;
          iStack_1bc = param_4[-4];
          iStack_ac = aiStack_1a0[0] + 0x1d0;
          uStack_1b8 = *(undefined4 *)(iVar11 + 0x18);
          uStack_1b4 = *(undefined4 *)(iVar11 + 0x1c);
          uStack_1c0 = *(undefined2 *)(iVar11 + 0x10);
          uStack_1b0 = *(undefined4 *)(iVar11 + 0x20);
          iStack_cc = 0;
          puVar5 = *(undefined4 **)(aiStack_1a0[0] + 0x78);
          uStack_130 = *puVar5;
          uStack_12c = *(undefined1 *)(puVar5 + 1);
          uStack_128 = puVar5[2];
          uStack_124 = puVar5[3];
          uStack_120 = puVar5[4];
          uStack_11c = puVar5[5];
          iVar11 = (int)in_r0;
          puVar6 = (undefined4 *)((int)puVar5 + iVar11 + 0x20 & 0xfffffff0);
          uVar10 = puVar6[1];
          uVar19 = puVar6[2];
          uVar20 = puVar6[3];
          puVar7 = (undefined4 *)((uint)(auStack_110 + iVar11) & 0xfffffff0);
          *puVar7 = *puVar6;
          puVar7[1] = uVar10;
          puVar7[2] = uVar19;
          puVar7[3] = uVar20;
          puVar6 = (undefined4 *)((uint)(puVar5 + 0xc) & 0xfffffff0);
          uVar10 = puVar6[1];
          uVar19 = puVar6[2];
          uVar20 = puVar6[3];
          puVar7 = (undefined4 *)((uint)(auStack_100 + iVar11) & 0xfffffff0);
          *puVar7 = *puVar6;
          puVar7[1] = uVar10;
          puVar7[2] = uVar19;
          puVar7[3] = uVar20;
          puVar6 = (undefined4 *)((uint)(puVar5 + 0x10) & 0xfffffff0);
          uVar10 = puVar6[1];
          uVar19 = puVar6[2];
          uVar20 = puVar6[3];
          puVar7 = (undefined4 *)((uint)(auStack_f0 + iVar11) & 0xfffffff0);
          *puVar7 = *puVar6;
          puVar7[1] = uVar10;
          puVar7[2] = uVar19;
          puVar7[3] = uVar20;
          uStack_d8 = *(undefined8 *)(puVar5 + 0x16);
          uStack_d0 = puVar5[0x18];
          uStack_c8 = puVar5[0x1a];
          uStack_c4 = *(undefined1 *)(puVar5 + 0x1b);
          uStack_c3 = *(undefined1 *)((int)puVar5 + 0x6d);
          uStack_c0 = puVar5[0x1c];
          uStack_190 = *(undefined4 *)(aiStack_1a0[0] + 0x2ec);
          fStack_18c = *(float *)(aiStack_1a0[0] + 0x2ec) * *(float *)(aiStack_1a0[0] + 0x2fc);
          uStack_188 = *(undefined4 *)(aiStack_1a0[0] + 0x2f0);
          uStack_17c = *(undefined4 *)(aiStack_1a0[0] + 0x300);
          fStack_178 = *(float *)(aiStack_1a0[0] + 0x2fc) * *(float *)(aiStack_1a0[0] + 0x300);
          uStack_150 = *(undefined4 *)(aiStack_1a0[0] + 0x1e4);
          uStack_14c = *(undefined4 *)(aiStack_1a0[0] + 0x1e8);
          fStack_174 = *(float *)(aiStack_1a0[0] + 0x234) * *(float *)(aiStack_1a0[0] + 0x2f0);
          uStack_170 = *(undefined4 *)(aiStack_1a0[0] + 0x1e8);
          fStack_16c = *(float *)(aiStack_1a0[0] + 0x23c) * *(float *)(aiStack_1a0[0] + 0x2f0);
          uStack_184 = *(undefined4 *)(aiStack_1a0[0] + 0x1d8);
          uStack_180 = *(undefined4 *)(aiStack_1a0[0] + 0x1dc);
          uStack_a8 = *(undefined4 *)(*(int *)(aiStack_1a0[0] + 0x78) + 8);
          puStack_a4 = &lbl_8323C860;
          iStack_b0 = param_1;
          fn_82DC3748(aiStack_1a0,0,&uStack_1d0);
          if (iStack_cc != 0) {
            iVar11 = fn_82CE5410();
            (**(code **)(**(int **)(iVar11 + 0x10) + 8))(*(int **)(iVar11 + 0x10),iStack_cc,0x200);
          }
        }
        param_5 = param_5 - 1;
        param_4 = param_4 + 6;
      } while (param_5 != 0);
    }
    if (piVar12 != (int *)0x0) {
      fn_82DB58C0(param_1,((ulonglong)(uint)piVar12[2] & 0x3fffffff) * 4 +
                                (ulonglong)uStack0000001c,piVar12[1],param_6,*piVar12,0);
    }
    piVar12 = (int *)fn_82CE5410();
    *piVar12 = iVar2;
  }
  return;
}

