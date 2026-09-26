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
extern unsigned int *auStack_60;
extern unsigned int *auStack_90;
extern unsigned int fStack_3c;
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern int fn_8275E678();
extern int fn_8275EB28();
extern int fn_8275EB90();
extern int fn_8275FE18();
extern int fn_827603C0();
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82014894;
extern unsigned int lbl_82014898;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;


void fn_82761F78(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  char cStack_a0;
  undefined1 auStack_90 [4];
  byte *pbStack_8c;
  uint uStack_78;
  uint uStack_74;
  undefined1 auStack_60 [4];
  uint uStack_5c;
  uint uStack_58;
  int iStack_54;
  int iStack_50;
  byte *pbStack_44;
  byte *pbStack_40;
  float fStack_3c;
  
  fVar2 = lbl_82014898;
  fVar1 = lbl_82014894;
  *param_2 = lbl_82014898;
  param_2[1] = fVar2;
  param_2[2] = fVar1;
  param_2[3] = fVar1;
  fn_8275EB28(auStack_90,param_1);
  if (uStack_78 < uStack_74) {
    dVar14 = (double)lbl_82002AE0;
    dVar16 = (double)lbl_821AAD20;
    dVar15 = (double)lbl_82005344;
    do {
      uVar4 = uStack_78;
      if ((*pbStack_8c & 7) == 0) {
        fn_827603C0(auStack_90);
      }
      else {
        fn_8275FE18(auStack_60,auStack_90);
        dVar9 = (double)((float)(longlong)iStack_50 * fStack_3c);
        dVar10 = (double)((float)(longlong)iStack_54 * fStack_3c);
        dVar5 = (double)*param_2;
        if (dVar10 <= (double)*param_2) {
          dVar5 = dVar10;
        }
        *param_2 = (float)dVar5;
        dVar5 = (double)param_2[1];
        if (dVar9 <= (double)param_2[1]) {
          dVar5 = dVar9;
        }
        param_2[1] = (float)dVar5;
        dVar5 = dVar10;
        if (dVar10 < (double)param_2[2]) {
          dVar5 = (double)param_2[2];
        }
        param_2[2] = (float)dVar5;
        dVar5 = (double)param_2[3];
        if ((double)param_2[3] <= dVar9) {
          dVar5 = dVar9;
        }
        while (param_2[3] = (float)dVar5, uStack_5c < uStack_58) {
          fn_8275E678(auStack_60,&fStack_b0,0);
          dVar8 = (double)fStack_a4;
          dVar7 = (double)fStack_a8;
          if (cStack_a0 != '\0') {
            dVar12 = (double)fStack_b0;
            dVar13 = (double)fStack_ac;
            dVar5 = (double)(float)((double)(float)(dVar12 * dVar15 - dVar10) - dVar7);
            if (dVar5 != dVar16) {
              dVar5 = (double)(float)((double)(float)(dVar12 - dVar10) / dVar5);
              if ((dVar16 < dVar5) && (dVar5 < dVar14)) {
                dVar11 = (double)(float)((double)(float)(dVar12 - dVar10) * dVar5 + dVar10);
                dVar6 = (double)(float)((double)(float)(dVar13 - dVar9) * dVar5 + dVar9);
                fVar1 = (float)((double)(float)((double)(float)((double)(float)(dVar7 - dVar12) *
                                                                dVar5 + dVar12) - dVar11) * dVar5 +
                               dVar11);
                fVar2 = (float)((double)(float)((double)(float)((double)(float)(dVar8 - dVar13) *
                                                                dVar5 + dVar13) - dVar6) * dVar5 +
                               dVar6);
                fVar3 = *param_2;
                if (fVar1 <= *param_2) {
                  fVar3 = fVar1;
                }
                *param_2 = fVar3;
                fVar3 = fVar2;
                if (param_2[1] < fVar2) {
                  fVar3 = param_2[1];
                }
                param_2[1] = fVar3;
                if (fVar1 < param_2[2]) {
                  fVar1 = param_2[2];
                }
                param_2[2] = fVar1;
                fVar1 = param_2[3];
                if (param_2[3] <= fVar2) {
                  fVar1 = fVar2;
                }
                param_2[3] = fVar1;
              }
            }
            dVar5 = (double)(float)((double)(float)(dVar13 * dVar15 - dVar9) - dVar8);
            if (dVar5 != dVar16) {
              dVar5 = (double)(float)((double)(float)(dVar13 - dVar9) / dVar5);
              if ((dVar16 < dVar5) && (dVar5 < dVar14)) {
                dVar6 = (double)(float)((double)(float)(dVar13 - dVar9) * dVar5 + dVar9);
                dVar9 = (double)(float)((double)(float)(dVar12 - dVar10) * dVar5 + dVar10);
                fVar1 = (float)((double)(float)((double)(float)((double)(float)(dVar7 - dVar12) *
                                                                dVar5 + dVar12) - dVar9) * dVar5 +
                               dVar9);
                fVar2 = (float)((double)(float)((double)(float)((double)(float)(dVar8 - dVar13) *
                                                                dVar5 + dVar13) - dVar6) * dVar5 +
                               dVar6);
                fVar3 = *param_2;
                if (fVar1 <= *param_2) {
                  fVar3 = fVar1;
                }
                *param_2 = fVar3;
                fVar3 = fVar2;
                if (param_2[1] < fVar2) {
                  fVar3 = param_2[1];
                }
                param_2[1] = fVar3;
                if (fVar1 < param_2[2]) {
                  fVar1 = param_2[2];
                }
                param_2[2] = fVar1;
                fVar1 = param_2[3];
                if (param_2[3] <= fVar2) {
                  fVar1 = fVar2;
                }
                param_2[3] = fVar1;
              }
            }
          }
          dVar5 = (double)*param_2;
          if (dVar7 <= (double)*param_2) {
            dVar5 = dVar7;
          }
          *param_2 = (float)dVar5;
          dVar5 = dVar8;
          if ((double)param_2[1] < dVar8) {
            dVar5 = (double)param_2[1];
          }
          param_2[1] = (float)dVar5;
          dVar5 = dVar7;
          if (dVar7 < (double)param_2[2]) {
            dVar5 = (double)param_2[2];
          }
          param_2[2] = (float)dVar5;
          dVar5 = (double)param_2[3];
          dVar9 = dVar8;
          dVar10 = dVar7;
          if ((double)param_2[3] <= dVar8) {
            dVar5 = dVar8;
          }
        }
        pbStack_8c = pbStack_44;
        if (pbStack_44 == (byte *)0x0) {
          pbStack_8c = pbStack_40;
        }
        uStack_78 = uVar4 + 1;
        fn_8275EB90(auStack_90);
      }
    } while (uStack_78 < uStack_74);
  }
  return;
}

