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
extern unsigned int fStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_70;
extern unsigned int fStack_74;
extern unsigned int fStack_78;
extern unsigned int fStack_80;
extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern unsigned int fStack_90;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_a0;
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern int fn_827EA030();
extern int fn_827EC970();
extern int fn_827EDE70();
extern int fn_827EDED0();
extern int fn_8280A5E8();
extern int fn_82810280();
extern int fn_82810308();
extern int fn_82810328();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_820069B4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831F13C0;


void fn_827EE7C8(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,float *param_6,float *param_7,undefined8 param_8,
                  undefined8 param_9,float *param_10)

{
  float fVar1;
  bool bVar2;
  float *pfVar4;
  int iVar5;
  undefined8 uVar3;
  ulonglong uVar6;
  double extraout_f1;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  
  pfVar4 = (float *)fn_82F6A548();
  dVar10 = extraout_f1;
  fn_82810328(param_5,param_8,&fStack_a8);
  dVar7 = (double)fn_82810308(&fStack_a8);
  if ((double)lbl_820069B4 <= dVar7) {
    fStack_88 = (float)((double)*param_7 + dVar10);
    fStack_78 = (float)((double)*param_6 - dVar10);
    fStack_84 = (float)((double)param_7[1] + dVar10);
    fStack_80 = (float)((double)param_7[2] + dVar10);
    fStack_74 = (float)((double)param_6[1] - dVar10);
    fStack_70 = (float)((double)param_6[2] - dVar10);
    iVar5 = fn_827EA030(param_2,pfVar4,param_5,&fStack_78,&fStack_88,param_8);
    if (iVar5 == 0) goto LAB_827ee840;
    iVar5 = fn_827EC970(dVar10,pfVar4);
    fVar1 = lbl_821AAD20;
    if (iVar5 == 0) {
      uVar6 = 0;
      dVar7 = (double)(fStack_a8 * fStack_b0 + *pfVar4);
      dVar11 = (double)(fStack_a4 * fStack_b0 + pfVar4[1]);
      dVar9 = (double)(fStack_a0 * fStack_b0 + pfVar4[2]);
      if (((double)*param_6 <= dVar7) && (dVar7 <= (double)*param_7)) {
        uVar6 = 1;
      }
      if (((double)param_6[1] <= dVar11) && (dVar11 <= (double)param_7[1])) {
        uVar6 = uVar6 + 1;
      }
      if (((double)param_6[2] <= dVar9) && (dVar9 <= (double)param_7[2])) {
        uVar6 = uVar6 + 1;
      }
      if (1 < uVar6) {
        *param_10 = fStack_b0;
        uVar3 = 1;
        goto LAB_827ee844;
      }
      dVar7 = (double)fn_827EDE70((double)*param_6,(double)*param_7);
      fStack_68 = (float)dVar7;
      dVar7 = (double)fn_827EDE70((double)param_6[1],(double)param_7[1],dVar11);
      fStack_64 = (float)dVar7;
      dVar7 = (double)fn_827EDE70((double)param_6[2],(double)param_7[2],dVar9);
      fStack_60 = (float)dVar7;
      fn_82810328(pfVar4,&fStack_68,&fStack_98);
      fStack_b0 = (float)param_2;
      dVar7 = (double)(float)(dVar10 * dVar10);
      bVar2 = false;
      dVar9 = (double)(fStack_a0 * fStack_a0 + fStack_a8 * fStack_a8);
      iVar5 = fn_8280A5E8(dVar9);
      dVar10 = (double)lbl_821AAD20;
      if ((iVar5 == 0) &&
         (iVar5 = fn_827EDED0(dVar9,(double)(fStack_90 * fStack_a0 + fStack_98 * fStack_a8),
                                (double)(float)((double)(fStack_90 * fStack_90 +
                                                        fStack_98 * fStack_98) - dVar7),
                                (double)fStack_b0), iVar5 != 0)) {
        dVar9 = (double)fStack_a4;
        fVar1 = (float)((double)fStack_ac * dVar9 + (double)pfVar4[1]);
        if ((((lbl_831F13C0 == 0) || (dVar10 <= (double)fStack_ac)) && (param_6[1] <= fVar1)) &&
           (fVar1 <= param_7[1])) {
          fStack_b0 = fStack_ac;
          bVar2 = true;
        }
      }
      else {
        dVar9 = (double)fStack_a4;
      }
      dVar9 = (double)(fStack_a0 * fStack_a0 + (float)(dVar9 * dVar9));
      iVar5 = fn_8280A5E8(dVar9);
      if ((iVar5 == 0) &&
         (iVar5 = fn_827EDED0(dVar9,(double)(fStack_90 * fStack_a0 + fStack_94 * fStack_a4),
                                (double)(float)((double)(fStack_94 * fStack_94 +
                                                        fStack_90 * fStack_90) - dVar7),
                                (double)fStack_b0), iVar5 != 0)) {
        dVar9 = (double)fStack_a8;
        fVar1 = (float)((double)fStack_ac * dVar9 + (double)*pfVar4);
        if (((lbl_831F13C0 == 0) || (dVar10 <= (double)fStack_ac)) &&
           ((*param_6 <= fVar1 && (fVar1 <= *param_7)))) {
          fStack_b0 = fStack_ac;
          bVar2 = true;
        }
      }
      else {
        dVar9 = (double)fStack_a8;
      }
      dVar9 = (double)(fStack_a4 * fStack_a4 + (float)(dVar9 * dVar9));
      iVar5 = fn_8280A5E8(dVar9);
      if ((iVar5 == 0) &&
         (iVar5 = fn_827EDED0(dVar9,(double)(fStack_94 * fStack_a4 + fStack_98 * fStack_a8),
                                (double)(float)((double)(fStack_94 * fStack_94 +
                                                        fStack_98 * fStack_98) - dVar7),
                                (double)fStack_b0), iVar5 != 0)) {
        fVar1 = (float)((double)fStack_ac * (double)fStack_a0 + (double)pfVar4[2]);
        if (((lbl_831F13C0 == 0) || (dVar10 <= (double)fStack_ac)) &&
           ((param_6[2] <= fVar1 && (fVar1 <= param_7[2])))) {
          fStack_b0 = fStack_ac;
          bVar2 = true;
        }
      }
      fVar1 = fStack_b0;
      if (!bVar2) {
        dVar10 = (double)fn_82810308(&fStack_98);
        dVar10 = (double)(float)(dVar10 - dVar7);
        uVar3 = fn_82810280(&fStack_a8,&fStack_98);
        uVar8 = fn_82810308(&fStack_a8);
        uVar3 = fn_827EDED0(uVar8,uVar3,dVar10,param_2);
        goto LAB_827ee844;
      }
    }
  }
  else {
    iVar5 = fn_827EC970(dVar10);
    fVar1 = lbl_821AAD20;
    if (iVar5 == 0) {
LAB_827ee840:
      uVar3 = 0;
      goto LAB_827ee844;
    }
  }
  *param_10 = fVar1;
  uVar3 = 1;
LAB_827ee844:
  fn_82F6A594(uVar3);
  return;
}

