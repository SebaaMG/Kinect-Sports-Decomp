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
extern int fn_82F6A534();
extern int fn_82F6A580();


void fn_82FE5BA8(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,undefined8 param_7,longlong param_8,longlong param_9)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  uint uVar14;
  float *pfVar16;
  longlong lVar15;
  double dVar17;
  double extraout_f1;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  uint in_stack_0000005c;
  
  pfVar9 = (float *)fn_82F6A534();
  iVar12 = (int)param_9;
  iVar10 = (int)param_8;
  if (((param_2 == extraout_f1) && (param_4 == param_3)) && (param_6 == param_5)) {
    pfVar16 = pfVar9 + in_stack_0000005c;
    if (pfVar9 < pfVar16) {
      uVar14 = (int)pfVar16 + (3 - (int)pfVar9);
      if (3 < (int)(((int)uVar14 >> 2) + (uint)((int)uVar14 < 0 && (uVar14 & 3) != 0))) {
        do {
          pfVar11 = (float *)param_8;
          fVar3 = pfVar11[1];
          fVar4 = pfVar11[2];
          fVar5 = pfVar11[3];
          param_8 = param_8 + 0x10;
          iVar10 = (int)param_8;
          pfVar13 = (float *)param_9;
          fVar6 = pfVar13[1];
          fVar7 = pfVar13[2];
          fVar8 = pfVar13[3];
          param_9 = param_9 + 0x10;
          iVar12 = (int)param_9;
          *pfVar9 = (float)(param_6 * (double)*pfVar13 +
                           (double)(float)((double)*pfVar9 * param_2 +
                                          (double)(float)((double)*pfVar11 * param_4)));
          pfVar9[1] = (float)((double)fVar6 * param_6 +
                             (double)(float)((double)pfVar9[1] * param_2 +
                                            (double)(float)((double)fVar3 * param_4)));
          pfVar9[2] = (float)((double)fVar7 * param_6 +
                             (double)(float)((double)pfVar9[2] * param_2 +
                                            (double)(float)((double)fVar4 * param_4)));
          pfVar9[3] = (float)((double)fVar8 * param_6 +
                             (double)(float)((double)pfVar9[3] * param_2 +
                                            (double)(float)((double)fVar5 * param_4)));
          pfVar9 = pfVar9 + 4;
        } while ((int)pfVar9 < (int)(pfVar16 + -3));
      }
      if (pfVar9 < pfVar16) {
        iVar10 = iVar10 - (int)pfVar9;
        iVar12 = iVar12 - (int)pfVar9;
        lVar15 = (ulonglong)((uint)((int)pfVar16 + (-1 - (int)pfVar9)) >> 2) + 1;
        do {
          *pfVar9 = (float)((double)*pfVar9 * param_2 +
                           (double)(float)((double)*(float *)(iVar12 + (int)pfVar9) * param_6 +
                                          (double)(float)((double)*(float *)(iVar10 + (int)pfVar9) *
                                                         param_4)));
          pfVar9 = pfVar9 + 1;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        fn_82F6A580();
        return;
      }
    }
  }
  else {
    fVar3 = (float)in_stack_0000005c;
    pfVar16 = pfVar9 + in_stack_0000005c;
    dVar17 = (double)((float)(param_2 - extraout_f1) / fVar3);
    dVar22 = (double)((float)(param_4 - param_3) / fVar3);
    dVar21 = (double)((float)(param_6 - param_5) / fVar3);
    if (pfVar9 < pfVar16) {
      uVar14 = (int)pfVar16 + (3 - (int)pfVar9);
      dVar18 = extraout_f1;
      if (3 < (int)(((int)uVar14 >> 2) + (uint)((int)uVar14 < 0 && (uVar14 & 3) != 0))) {
        do {
          dVar1 = dVar22 + param_3;
          pfVar11 = (float *)param_8;
          dVar2 = dVar17 + dVar18;
          fVar3 = pfVar11[1];
          fVar4 = pfVar11[3];
          fVar5 = pfVar11[2];
          param_8 = param_8 + 0x10;
          iVar10 = (int)param_8;
          pfVar13 = (float *)param_9;
          fVar6 = pfVar13[1];
          dVar25 = (double)(float)(dVar22 + (double)(float)dVar1);
          fVar7 = pfVar13[2];
          fVar8 = pfVar13[3];
          param_9 = param_9 + 0x10;
          dVar24 = (double)(float)(dVar17 + (double)(float)dVar2);
          dVar23 = (double)(float)(dVar21 + (double)(float)(dVar21 + param_5));
          dVar19 = (double)(float)(dVar22 + dVar25);
          dVar20 = (double)(float)(dVar17 + dVar24);
          dVar26 = (double)(float)(dVar21 + dVar23);
          *pfVar9 = (float)(param_5 * (double)*pfVar13 +
                           (double)(float)((double)*pfVar9 * dVar18 +
                                          (double)(float)((double)*pfVar11 * param_3)));
          param_3 = (double)(float)(dVar22 + dVar19);
          dVar18 = (double)(float)(dVar17 + dVar20);
          pfVar9[1] = (float)((double)fVar6 * (double)(float)(dVar21 + param_5) +
                             (double)(float)((double)pfVar9[1] * (double)(float)dVar2 +
                                            (double)(float)((double)fVar3 * (double)(float)dVar1)));
          param_5 = (double)(float)(dVar21 + dVar26);
          pfVar9[2] = (float)((double)fVar7 * dVar23 +
                             (double)(float)((double)pfVar9[2] * dVar24 +
                                            (double)(float)((double)fVar5 * dVar25)));
          pfVar9[3] = (float)((double)fVar8 * dVar26 +
                             (double)(float)((double)pfVar9[3] * dVar20 +
                                            (double)(float)((double)fVar4 * dVar19)));
          pfVar9 = pfVar9 + 4;
        } while ((int)pfVar9 < (int)(pfVar16 + -3));
      }
      if (pfVar9 < pfVar16) {
        iVar12 = (int)param_9;
        pfVar11 = pfVar9 + -1;
        lVar15 = (ulonglong)((uint)((int)pfVar16 + (-1 - (int)pfVar9)) >> 2) + 1;
        do {
          dVar2 = (double)pfVar11[1] * dVar18;
          pfVar9 = (float *)param_9;
          dVar18 = (double)(float)(dVar17 + dVar18);
          param_9 = param_9 + 4;
          dVar1 = (double)*(float *)((iVar10 - iVar12) + (int)pfVar9) * param_3;
          param_3 = (double)(float)(dVar22 + param_3);
          pfVar11 = pfVar11 + 1;
          *pfVar11 = (float)(param_5 * (double)*pfVar9 +
                            (double)(float)(dVar1 + (double)(float)dVar2));
          param_5 = (double)(float)(dVar21 + param_5);
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
    }
  }
  fn_82F6A580();
  return;
}

