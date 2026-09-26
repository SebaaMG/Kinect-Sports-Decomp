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
extern int fn_827EC538();
extern int fn_827EC5A8();
extern int fn_82809CB0();
extern int fn_8280A5D8();
extern int fn_82810328();
extern int fn_82F6A534();
extern int fn_82F6A580();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_827ECB80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,int param_6,float *param_7)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float afStack_b0 [4];
  float afStack_a0 [4];
  float afStack_90 [36];
  
  uVar1 = fn_82F6A534();
  fn_82810328(uVar1,param_4,afStack_b0);
  fn_82810328(param_2,param_4,afStack_a0);
  fn_82810328(param_3,param_4,afStack_90);
  dVar5 = (double)fn_82809CB0((double)*param_7);
  dVar6 = (double)fn_82809CB0((double)param_7[1]);
  if (dVar5 <= dVar6) {
    dVar5 = (double)fn_82809CB0((double)param_7[2]);
    dVar6 = (double)fn_82809CB0((double)param_7[1]);
    iVar3 = 1;
    if (dVar5 <= dVar6) {
      iVar3 = 2;
    }
LAB_827ecc44:
    iVar4 = 0;
  }
  else {
    dVar5 = (double)fn_82809CB0((double)param_7[2]);
    dVar6 = (double)fn_82809CB0((double)*param_7);
    if (dVar6 < dVar5) {
      iVar3 = 1;
      goto LAB_827ecc44;
    }
    iVar4 = 1;
    iVar3 = 2;
  }
  dVar20 = (double)*(float *)(iVar4 * 4 + param_6);
  dVar19 = (double)*(float *)(iVar3 * 4 + param_5);
  dVar18 = (double)*(float *)(iVar4 * 4 + param_5);
  dVar17 = (double)*(float *)(iVar3 * 4 + param_6);
  dVar6 = (double)fn_8280A5D8((double)(float)(dVar17 * dVar18 - (double)(float)(dVar20 * dVar19)));
  dVar13 = (double)afStack_b0[iVar3];
  dVar5 = (double)afStack_b0[iVar4];
  dVar12 = (double)lbl_82002AE0;
  dVar14 = (double)lbl_821AAD20;
  dVar7 = (double)(float)((double)(float)(dVar5 * dVar17 - (double)(float)(dVar13 * dVar20)) * dVar6
                         );
  dVar8 = (double)(float)((double)(float)(dVar13 * dVar18 - (double)(float)(dVar5 * dVar19)) * dVar6
                         );
  if (((dVar12 < (double)(float)(dVar7 + dVar8)) || (dVar8 < dVar14)) || (dVar7 < dVar14)) {
    dVar16 = (double)afStack_a0[iVar3];
    dVar15 = (double)afStack_a0[iVar4];
    dVar10 = (double)(float)((double)(float)(dVar15 * dVar17 - (double)(float)(dVar16 * dVar20)) *
                            dVar6);
    dVar9 = (double)(float)((double)(float)(dVar16 * dVar18 - (double)(float)(dVar15 * dVar19)) *
                           dVar6);
    if ((((dVar12 < (double)(float)(dVar10 + dVar9)) || (dVar9 < dVar14)) || (dVar10 < dVar14)) &&
       (iVar2 = fn_827EC5A8(dVar7,dVar8,dVar10,dVar9), iVar2 == 0)) {
      dVar11 = (double)afStack_90[iVar3];
      dVar8 = (double)afStack_90[iVar4];
      dVar7 = (double)(float)((double)(float)(dVar8 * dVar17 - (double)(float)(dVar11 * dVar20)) *
                             dVar6);
      dVar6 = (double)(float)((double)(float)(dVar11 * dVar18 - (double)(float)(dVar8 * dVar19)) *
                             dVar6);
      if ((((dVar12 < (double)(float)(dVar7 + dVar6)) || (dVar6 < dVar14)) || (dVar7 < dVar14)) &&
         ((iVar3 = fn_827EC5A8(), iVar3 == 0 && (iVar3 = fn_827EC5A8(dVar10,dVar9), iVar3 == 0))
         )) {
        dVar5 = -dVar5;
        dVar13 = -dVar13;
        uVar1 = fn_827EC538((double)(float)(dVar15 + dVar5),(double)(float)(dVar16 + dVar13),
                              (double)(float)(dVar8 + dVar5),(double)(float)(dVar11 + dVar13),dVar5,
                              dVar13);
        goto LAB_827ecdac;
      }
    }
  }
  uVar1 = 1;
LAB_827ecdac:
  fn_82F6A580(uVar1);
  return;
}

