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
extern unsigned int iStack_104;
extern unsigned int iStack_108;
extern unsigned int iStack_10c;
extern unsigned int iStack_190;
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int iStack_cc;
extern unsigned int iStack_d8;
extern unsigned int iStack_dc;
extern unsigned int iStack_e4;
extern unsigned int iStack_e8;
extern unsigned int iStack_f0;
extern unsigned int iStack_f4;
extern unsigned int iStack_f8;
extern unsigned int iStack_fc;
extern float lbl_82002C28;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_820FC2C8;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_18c;
extern unsigned int uStack_d0;
extern unsigned int uStack_e0;


void fn_82F00A10(int param_1, int param_2, int param_3, int param_4, int *param_5, int *param_6, int *param_7, int param_8, undefined8 unused_arg_9, int in_stack_0000005c)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  int iVar10;
  double dVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  ulonglong uVar16;
  byte *pbVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  longlong lVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;

  int iStack_190;
  uint uStack_18c;
  int aiStack_180 [4];
  byte *pbStack_170;
  int aiStack_160 [4];
  byte *pbStack_150;
  int aiStack_140 [4];
  byte *pbStack_130;
  int aiStack_120 [4];
  byte *pbStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  byte *pbStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  byte *pbStack_ec;
  int iStack_e8;
  int iStack_e4;
  uint uStack_e0;
  int iStack_dc;
  int iStack_d8;
  uint uStack_d0;
  int iStack_cc;
  longlong lStack_c8;
  int iStack_c0;
  int iStack_bc;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  
  dVar11 = lbl_82005730;
  fVar9 = lbl_82002C2C;
  iStack_bc = *(int *)(param_1 + 0x2d0) * 2;
  iStack_dc = *(int *)(param_1 + 0x2d4) * 2;
  if (*(int *)(param_1 + 0x550) != *(int *)(param_1 + 800)) {
    iStack_dc = iStack_dc + -2;
  }
  uVar16 = 0;
  iStack_c0 = (param_8 + -4) * 2;
  iStack_f4 = 0;
  iStack_f8 = 0;
  iStack_10c = 0;
  iVar22 = 0;
  iStack_f0 = 0;
  iStack_fc = 0;
  iStack_190 = 4;
  iStack_108 = 4;
  iStack_104 = 4;
  uStack_e0 = 0;
  iVar33 = 4;
  iVar18 = 4;
  iVar20 = 4;
  iVar21 = 0;
  if (0 < iStack_dc) {
    dVar42 = (double)lbl_821AAD20;
    do {
      iStack_d8 = 0;
      if (0 < iStack_bc) {
        iStack_e8 = 0;
        iStack_e4 = 0;
        do {
          if ((*(int *)(param_1 + 0x548) == *(int *)(param_1 + 0x31c)) ||
             (iStack_d8 < iStack_bc + -2)) {
            iVar33 = 0;
            piVar12 = (int *)(param_1 + 0x52e8);
            do {
              if (*(char *)(*piVar12 + iVar22) == '\0') goto LAB_82f012ec;
              iVar33 = iVar33 + 1;
              piVar12 = piVar12 + 1;
            } while (iVar33 < 5);
            iVar18 = (int)((uVar16 & 0xffffffff) << 3) * param_8 + iStack_e4;
            iVar33 = (int)((uVar16 & 0xffffffff) << 2) * in_stack_0000005c + iStack_e8;
            pbVar17 = (byte *)(iVar18 + param_2);
            aiStack_140[0] = *param_6 + iVar33;
            aiStack_120[0] = iVar18 + *param_5;
            aiStack_180[1] = param_7[1] + iVar33;
            aiStack_120[1] = param_5[1] + iVar18;
            aiStack_120[2] = param_5[2] + iVar18;
            aiStack_120[3] = param_5[3] + iVar18;
            pbStack_110 = (byte *)(param_5[4] + iVar18);
            aiStack_180[0] = *param_7 + iVar33;
            aiStack_140[3] = param_6[3] + iVar33;
            aiStack_140[2] = param_6[2] + iVar33;
            aiStack_140[1] = param_6[1] + iVar33;
            pbStack_170 = (byte *)(param_7[4] + iVar33);
            aiStack_180[3] = param_7[3] + iVar33;
            aiStack_180[2] = param_7[2] + iVar33;
            aiStack_160[0] = iVar18 + *param_5 + param_8;
            aiStack_160[1] = param_5[1] + iVar18 + param_8;
            aiStack_160[2] = param_5[2] + iVar18 + param_8;
            pbStack_130 = (byte *)(param_6[4] + iVar33);
            pbStack_ec = (byte *)(iVar33 + param_3);
            aiStack_160[3] = param_5[3] + iVar18 + param_8;
            pbStack_100 = (byte *)(iVar33 + param_4);
            pbVar15 = pbVar17 + param_8;
            pbStack_150 = (byte *)(param_5[4] + iVar18) + param_8;
            uStack_18c = 4;
            do {
              uStack_d0 = 4;
              do {
                iVar26 = 0;
                iVar18 = 0;
                iVar27 = 0;
                iVar20 = 0;
                lVar35 = 2;
                iVar28 = 0;
                iVar21 = 0;
                iVar29 = 0;
                iVar22 = 0;
                iVar31 = 0;
                iVar23 = 0;
                iVar34 = 0;
                iVar25 = 0;
                iVar33 = 0;
                do {
                  iVar31 = (uint)(*(byte **)((int)aiStack_120 + iVar33))[1] + iVar31;
                  iVar34 = (uint)**(byte **)((int)aiStack_120 + iVar33) + iVar34;
                  iVar29 = (uint)**(byte **)((int)aiStack_160 + iVar33) + iVar29;
                  pbVar1 = *(byte **)((int)aiStack_120 + iVar33 + 4);
                  iVar27 = (uint)**(byte **)((int)aiStack_140 + iVar33) + iVar27;
                  pbVar2 = *(byte **)((int)aiStack_160 + iVar33 + 4);
                  iVar28 = (uint)(*(byte **)((int)aiStack_160 + iVar33))[1] + iVar28;
                  iVar26 = (uint)**(byte **)((int)aiStack_180 + iVar33) + iVar26;
                  iVar25 = (uint)*pbVar1 + iVar25;
                  iVar23 = (uint)pbVar1[1] + iVar23;
                  iVar22 = (uint)*pbVar2 + iVar22;
                  iVar21 = (uint)pbVar2[1] + iVar21;
                  iVar20 = (uint)**(byte **)((int)aiStack_140 + iVar33 + 4) + iVar20;
                  iVar10 = iVar33 + 4;
                  iVar33 = iVar33 + 8;
                  iVar18 = (uint)**(byte **)((int)aiStack_180 + iVar10) + iVar18;
                  lVar35 = lVar35 + -1;
                } while (lVar35 != 0);
                lStack_a0 = (longlong)(int)(iVar25 + iVar34 + (uint)*pbStack_110);
                dVar36 = (double)((float)lStack_a0 * fVar9);
                if (dVar36 <= dVar42) {
                  dVar36 = dVar36 - dVar11;
                }
                else {
                  dVar36 = dVar36 + dVar11;
                }
                lStack_a8 = (longlong)(int)(iVar23 + iVar31 + (uint)pbStack_110[1]);
                dVar37 = (double)((float)lStack_a8 * fVar9);
                if (dVar37 <= dVar42) {
                  dVar37 = dVar37 - dVar11;
                }
                else {
                  dVar37 = dVar37 + dVar11;
                }
                lStack_b0 = (longlong)(int)(iVar22 + iVar29 + (uint)*pbStack_150);
                dVar38 = (double)((float)lStack_b0 * fVar9);
                if (dVar38 <= dVar42) {
                  dVar38 = dVar38 - dVar11;
                }
                else {
                  dVar38 = dVar38 + dVar11;
                }
                lStack_b8 = (longlong)(int)(iVar21 + iVar28 + (uint)pbStack_150[1]);
                dVar39 = (double)((float)lStack_b8 * fVar9);
                if (dVar39 <= dVar42) {
                  dVar39 = dVar39 - dVar11;
                }
                else {
                  dVar39 = dVar39 + dVar11;
                }
                lStack_c8 = (longlong)(int)(iVar20 + iVar27 + (uint)*pbStack_130);
                dVar40 = (double)((float)lStack_c8 * fVar9);
                if (dVar40 <= dVar42) {
                  dVar40 = dVar40 - dVar11;
                }
                else {
                  dVar40 = dVar40 + dVar11;
                }
                dVar41 = (double)((float)(longlong)(int)(iVar18 + iVar26 + (uint)*pbStack_170) *
                                 fVar9);
                if (dVar41 <= dVar42) {
                  dVar41 = dVar41 - dVar11;
                }
                else {
                  dVar41 = dVar41 + dVar11;
                }
                uVar13 = (int)dVar36 - (uint)*pbVar17;
                uVar32 = (int)dVar37 - (uint)pbVar17[1];
                uVar14 = (int)dVar38 - (uint)*pbVar15;
                uVar3 = (int)uVar13 >> 0x1f;
                uVar24 = (int)dVar39 - (uint)pbVar15[1];
                uVar4 = (int)uVar32 >> 0x1f;
                uVar19 = (int)dVar40 - (uint)*pbStack_ec;
                uVar5 = (int)uVar14 >> 0x1f;
                uVar30 = (int)dVar41 - (uint)*pbStack_100;
                uVar6 = (int)uVar24 >> 0x1f;
                iVar33 = *(int *)(param_1 + 0x52fc);
                uVar7 = (int)uVar19 >> 0x1f;
                uVar8 = (int)uVar30 >> 0x1f;
                iVar18 = (uVar13 ^ uVar3) - uVar3;
                iVar23 = (uVar14 ^ uVar5) - uVar5;
                iVar25 = (uVar32 ^ uVar4) - uVar4;
                iVar22 = (uVar24 ^ uVar6) - uVar6;
                iVar21 = (uVar19 ^ uVar7) - uVar7;
                iVar20 = (uVar30 ^ uVar8) - uVar8;
                if ((((iVar18 < iVar33) && (iVar25 < iVar33)) && (iVar23 < iVar33)) &&
                   (((iVar22 < iVar33 && (iVar21 < *(int *)(param_1 + 0x5300))) &&
                    (iVar20 < *(int *)(param_1 + 0x5304))))) {
                  *pbVar17 = (byte)(int)dVar36;
                  pbVar17[1] = (byte)(int)dVar37;
                  *pbVar15 = (byte)(int)dVar38;
                  pbVar15[1] = (byte)(int)dVar39;
                  *pbStack_ec = (byte)(int)dVar40;
                  *pbStack_100 = (byte)(int)dVar41;
                  iStack_fc = iStack_fc + 1;
                  iStack_f4 = iVar22 + iVar23 + iVar25 + iVar18 + iStack_f4;
                  iStack_f8 = iVar21 + iStack_f8;
                  iStack_10c = iVar20 + iStack_10c;
                  if (iStack_190 < iVar18) {
                    iStack_190 = iVar18;
                  }
                  if (iStack_190 < iVar25) {
                    iStack_190 = iVar25;
                  }
                  if (iStack_190 < iVar23) {
                    iStack_190 = iVar23;
                  }
                  if (iStack_190 < iVar22) {
                    iStack_190 = iVar22;
                  }
                  if (iStack_108 < iVar21) {
                    iStack_108 = iVar21;
                  }
                  if (iStack_104 < iVar20) {
                    iStack_104 = iVar20;
                  }
                }
                pbStack_110 = pbStack_110 + 2;
                pbStack_150 = pbStack_150 + 2;
                aiStack_120[0] = aiStack_120[0] + 2;
                aiStack_180[0] = aiStack_180[0] + 1;
                aiStack_120[1] = aiStack_120[1] + 2;
                aiStack_140[1] = aiStack_140[1] + 1;
                aiStack_180[1] = aiStack_180[1] + 1;
                aiStack_160[2] = aiStack_160[2] + 2;
                aiStack_140[2] = aiStack_140[2] + 1;
                aiStack_120[3] = aiStack_120[3] + 2;
                uVar16 = (ulonglong)uStack_d0;
                aiStack_160[3] = aiStack_160[3] + 2;
                pbStack_170 = pbStack_170 + 1;
                aiStack_160[0] = aiStack_160[0] + 2;
                aiStack_140[0] = aiStack_140[0] + 1;
                aiStack_160[1] = aiStack_160[1] + 2;
                aiStack_120[2] = aiStack_120[2] + 2;
                aiStack_180[2] = aiStack_180[2] + 1;
                aiStack_140[3] = aiStack_140[3] + 1;
                uStack_d0 = (uint)(uVar16 - 1);
                aiStack_180[3] = aiStack_180[3] + 1;
                pbStack_130 = pbStack_130 + 1;
                pbStack_ec = pbStack_ec + 1;
                pbStack_100 = pbStack_100 + 1;
                pbVar17 = pbVar17 + 2;
                pbVar15 = pbVar15 + 2;
              } while (uVar16 - 1 != 0);
              uVar16 = (ulonglong)uStack_18c;
              pbVar17 = pbVar17 + iStack_c0;
              aiStack_120[0] = aiStack_120[0] + iStack_c0;
              iVar33 = in_stack_0000005c + -4;
              uStack_18c = (uint)(uVar16 - 1);
              aiStack_120[1] = aiStack_120[1] + iStack_c0;
              pbVar15 = pbVar15 + iStack_c0;
              aiStack_140[0] = aiStack_140[0] + iVar33;
              aiStack_180[0] = aiStack_180[0] + iVar33;
              aiStack_160[1] = aiStack_160[1] + iStack_c0;
              aiStack_140[1] = aiStack_140[1] + iVar33;
              aiStack_180[1] = aiStack_180[1] + iVar33;
              aiStack_120[2] = aiStack_120[2] + iStack_c0;
              aiStack_140[2] = aiStack_140[2] + iVar33;
              aiStack_180[2] = aiStack_180[2] + iVar33;
              aiStack_160[2] = aiStack_160[2] + iStack_c0;
              aiStack_140[3] = aiStack_140[3] + iVar33;
              aiStack_120[3] = aiStack_120[3] + iStack_c0;
              aiStack_160[3] = aiStack_160[3] + iStack_c0;
              aiStack_180[3] = aiStack_180[3] + iVar33;
              pbStack_110 = pbStack_110 + iStack_c0;
              pbStack_150 = pbStack_150 + iStack_c0;
              pbStack_130 = pbStack_130 + iVar33;
              pbStack_170 = pbStack_170 + iVar33;
              aiStack_160[0] = aiStack_160[0] + iStack_c0;
              pbStack_ec = pbStack_ec + iVar33;
              pbStack_100 = pbStack_100 + iVar33;
              iStack_cc = in_stack_0000005c;
            } while (uVar16 - 1 != 0);
            uVar16 = (ulonglong)uStack_e0;
            iVar22 = iStack_f0;
          }
LAB_82f012ec:
          iStack_d8 = iStack_d8 + 1;
          iVar22 = iVar22 + 1;
          iStack_f0 = iVar22;
          iStack_e4 = iStack_e4 + 8;
          iStack_e8 = iStack_e8 + 4;
        } while (iStack_d8 < iStack_bc);
      }
      uVar16 = uVar16 + 1;
      uStack_e0 = (uint)uVar16;
      iVar33 = iStack_190;
      iVar18 = iStack_108;
      iVar20 = iStack_104;
      iVar21 = iStack_fc;
    } while ((int)(uint)uVar16 < iStack_dc);
  }
  dVar36 = lbl_820FC2C8;
  dVar42 = lbl_82005710;
  if (*(int *)(param_1 + 0x324) >> 4 < iVar21) {
    fVar9 = (float)(longlong)iVar21;
    dVar38 = (double)((float)(longlong)iStack_f8 / fVar9);
    dVar37 = (double)((float)(longlong)iStack_10c / fVar9);
    dVar39 = (double)(((float)(longlong)iStack_f4 / fVar9) * lbl_82002C28);
    if (dVar39 * lbl_820FC2C8 <= lbl_82005710) {
      dVar40 = dVar39 * lbl_820FC2C8 - dVar11;
    }
    else {
      dVar40 = dVar39 * lbl_820FC2C8 + dVar11;
    }
    if (iVar33 < (int)dVar40) {
      if (dVar39 * lbl_820FC2C8 <= lbl_82005710) {
        iVar33 = (int)(dVar39 * lbl_820FC2C8 - dVar11);
      }
      else {
        iVar33 = (int)(dVar39 * lbl_820FC2C8 + dVar11);
      }
    }
    dVar39 = dVar38 * lbl_820FC2C8;
    *(int *)(param_1 + 0x52fc) = iVar33;
    if (dVar39 <= dVar42) {
      dVar39 = dVar38 * dVar36 - dVar11;
    }
    else {
      dVar39 = dVar38 * dVar36 + dVar11;
    }
    if (iVar18 < (int)dVar39) {
      if (dVar38 * dVar36 <= dVar42) {
        iVar18 = (int)(dVar38 * dVar36 - dVar11);
      }
      else {
        iVar18 = (int)(dVar38 * dVar36 + dVar11);
      }
    }
    *(int *)(param_1 + 0x5300) = iVar18;
    if (dVar37 * dVar36 <= dVar42) {
      dVar38 = dVar37 * dVar36 - dVar11;
    }
    else {
      dVar38 = dVar37 * dVar36 + dVar11;
    }
    if (iVar20 < (int)dVar38) {
      if (dVar37 * dVar36 <= dVar42) {
        *(int *)(param_1 + 0x5304) = (int)(dVar37 * dVar36 - dVar11);
      }
      else {
        *(int *)(param_1 + 0x5304) = (int)(dVar37 * dVar36 + dVar11);
      }
    }
    else {
      *(int *)(param_1 + 0x5304) = iVar20;
    }
  }
  return;
}

