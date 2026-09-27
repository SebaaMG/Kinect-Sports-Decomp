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
extern unsigned int fStack_5c;
extern int fn_82809558();
extern int fn_82810558();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82002AE0;
extern float lbl_82002C5C;
extern unsigned int lbl_82005344;
extern float lbl_82021540;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831F13AC;


void fn_827E8DD0(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_60 [4];
  float fStack_5c;
  
  dVar13 = (double)fn_82F6A544();
  fVar2 = (float)(param_2 - dVar13);
  pfVar8 = (float *)param_8;
  fVar3 = pfVar8[1];
  pfVar9 = (float *)param_7;
  fVar4 = pfVar8[2];
  fVar5 = pfVar9[2];
  dVar15 = (double)lbl_82002AE0;
  fVar1 = (float)(dVar15 / param_3);
  fVar6 = *pfVar8;
  fVar7 = *pfVar9;
  fVar10 = pfVar9[1] * fVar2 + (float)(dVar13 * param_3);
  dVar13 = (double)lbl_82005344;
  dVar16 = (double)lbl_821AAD20;
  fVar11 = fVar10 * fVar1;
  dVar17 = -(double)(fVar3 * fVar3 * fVar1 * fVar1 * fVar2 * fVar2 - (fVar6 * fVar6 + fVar4 * fVar4)
                    );
  dVar18 = (double)(float)((double)(fVar7 * fVar6 + fVar5 * fVar4) * dVar13 -
                          (double)(float)((double)(fVar3 * fVar10 * fVar1 * fVar1 * fVar2) * dVar13)
                          );
  dVar14 = (double)(float)(dVar18 * dVar18 -
                          (double)((float)(-(double)(fVar11 * fVar11 -
                                                    (fVar7 * fVar7 + fVar5 * fVar5)) * dVar17) *
                                  lbl_82021540));
  if (dVar16 < dVar14) {
    if (dVar14 <= (double)lbl_831F13AC) {
      dVar13 = -(double)(float)(dVar18 / (double)(float)(dVar17 * dVar13));
    }
    else {
      dVar14 = (double)fn_82809558();
      dVar13 = (double)(float)(dVar14 - dVar18);
      dVar14 = (double)(float)(-dVar18 - dVar14);
      if ((dVar13 <= (double)lbl_831F13AC) || (dVar14 <= (double)lbl_831F13AC)) goto LAB_827e8f40;
      if (dVar14 <= dVar13) {
        dVar13 = dVar14;
      }
      dVar13 = (double)((float)(dVar13 / dVar17) * lbl_82002C5C);
    }
    if ((dVar16 <= dVar13) && (dVar13 <= dVar15)) {
      fn_82810558(dVar13,param_8,param_7,param_6,auStack_60);
      if ((dVar16 <= (double)fStack_5c) && ((double)fStack_5c <= param_3)) {
        *param_9 = (float)dVar13;
        uVar12 = 1;
        goto LAB_827e8f44;
      }
    }
  }
LAB_827e8f40:
  uVar12 = 0;
LAB_827e8f44:
  fn_82F6A590(uVar12);
  return;
}

