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
extern unsigned int *auStack_b0;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern unsigned int fStack_dc;
extern unsigned int fStack_e0;
extern int fn_8275E130();
extern int fn_8275E198();
extern int fn_8275FD10();
extern int fn_8275FD58();
extern int fn_82760648();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82014894;
extern unsigned int lbl_82014898;
extern unsigned int lbl_821AAD20;


void fn_82762358(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined8 uVar5;
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
  double dVar17;
  float fStack_e0;
  float fStack_dc;
  int aiStack_d8 [2];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  char cStack_c0;
  undefined1 auStack_b0 [32];
  char cStack_90;
  
  uVar5 = fn_82F6A544();
  fVar2 = lbl_82014898;
  fVar1 = lbl_82014894;
  *param_2 = lbl_82014898;
  param_2[1] = fVar2;
  param_2[2] = fVar1;
  param_2[3] = fVar1;
  fn_82760648(auStack_b0,uVar5);
  if (cStack_90 != '\x01') {
    dVar13 = (double)lbl_82002AE0;
    dVar15 = (double)lbl_821AAD20;
    dVar14 = (double)lbl_82005344;
    do {
      if (cStack_90 == '\x02') {
        fn_8275FD10(auStack_b0);
      }
      else {
        fn_8275FD58(aiStack_d8,auStack_b0);
        fn_8275E130(aiStack_d8,&fStack_dc,&fStack_e0);
        dVar16 = (double)fStack_dc;
        dVar6 = (double)*param_2;
        if (dVar16 <= (double)*param_2) {
          dVar6 = dVar16;
        }
        dVar17 = (double)fStack_e0;
        *param_2 = (float)dVar6;
        dVar6 = dVar17;
        if ((double)param_2[1] < dVar17) {
          dVar6 = (double)param_2[1];
        }
        param_2[1] = (float)dVar6;
        dVar6 = dVar16;
        if (dVar16 < (double)param_2[2]) {
          dVar6 = (double)param_2[2];
        }
        param_2[2] = (float)dVar6;
        dVar6 = (double)param_2[3];
        if ((double)param_2[3] <= dVar17) {
          dVar6 = dVar17;
        }
        while( true ) {
          param_2[3] = (float)dVar6;
          if ((*(byte *)(aiStack_d8[0] + 0x20) == 1) ||
             (bVar4 = false, (*(byte *)(aiStack_d8[0] + 0x20) & 0x80) == 0)) {
            bVar4 = true;
          }
          if (bVar4) break;
          fn_8275E198(aiStack_d8,&fStack_d0,0);
          dVar9 = (double)fStack_c4;
          dVar8 = (double)fStack_c8;
          if (cStack_c0 != '\0') {
            dVar11 = (double)fStack_d0;
            dVar12 = (double)fStack_cc;
            dVar6 = (double)(float)((double)(float)(dVar11 * dVar14 - dVar16) - dVar8);
            if (dVar6 != dVar15) {
              dVar6 = (double)(float)((double)(float)(dVar11 - dVar16) / dVar6);
              if ((dVar15 < dVar6) && (dVar6 < dVar13)) {
                dVar10 = (double)(float)((double)(float)(dVar11 - dVar16) * dVar6 + dVar16);
                dVar7 = (double)(float)((double)(float)(dVar12 - dVar17) * dVar6 + dVar17);
                fVar1 = (float)((double)(float)((double)(float)((double)(float)(dVar8 - dVar11) *
                                                                dVar6 + dVar11) - dVar10) * dVar6 +
                               dVar10);
                fVar2 = (float)((double)(float)((double)(float)((double)(float)(dVar9 - dVar12) *
                                                                dVar6 + dVar12) - dVar7) * dVar6 +
                               dVar7);
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
            dVar6 = (double)(float)((double)(float)(dVar12 * dVar14 - dVar17) - dVar9);
            if (dVar6 != dVar15) {
              dVar6 = (double)(float)((double)(float)(dVar12 - dVar17) / dVar6);
              if ((dVar15 < dVar6) && (dVar6 < dVar13)) {
                dVar17 = (double)(float)((double)(float)(dVar12 - dVar17) * dVar6 + dVar17);
                dVar16 = (double)(float)((double)(float)(dVar11 - dVar16) * dVar6 + dVar16);
                fVar1 = (float)((double)(float)((double)(float)((double)(float)(dVar8 - dVar11) *
                                                                dVar6 + dVar11) - dVar16) * dVar6 +
                               dVar16);
                fVar2 = (float)((double)(float)((double)(float)((double)(float)(dVar9 - dVar12) *
                                                                dVar6 + dVar12) - dVar17) * dVar6 +
                               dVar17);
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
          dVar6 = (double)*param_2;
          if (dVar8 <= (double)*param_2) {
            dVar6 = dVar8;
          }
          *param_2 = (float)dVar6;
          dVar6 = dVar9;
          if ((double)param_2[1] < dVar9) {
            dVar6 = (double)param_2[1];
          }
          param_2[1] = (float)dVar6;
          dVar6 = dVar8;
          if (dVar8 < (double)param_2[2]) {
            dVar6 = (double)param_2[2];
          }
          param_2[2] = (float)dVar6;
          dVar6 = (double)param_2[3];
          dVar16 = dVar8;
          dVar17 = dVar9;
          if ((double)param_2[3] <= dVar9) {
            dVar6 = dVar9;
          }
        }
        fStack_e0 = (float)dVar17;
        fStack_dc = (float)dVar16;
      }
    } while (cStack_90 != '\x01');
  }
  fn_82F6A590();
  return;
}

