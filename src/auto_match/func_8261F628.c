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
extern int fn_8261F420();
extern int fn_82F6A524();
extern int fn_82F6A570();
extern unsigned int lbl_8218E2B0;
extern unsigned int lbl_821955EC;
extern unsigned int lbl_82195938;
extern unsigned int lbl_82195DD8;
extern unsigned int lbl_82195DDC;
extern unsigned int lbl_821CC160;


void fn_8261F628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar4;
  float *in_r9;
  float *in_r10;
  double dVar8;
  double extraout_f1;
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
  undefined4 *in_stack_00000064;
  undefined4 *in_stack_0000006c;
  int *in_stack_00000074;
  float *in_stack_0000007c;
  float *in_stack_00000084;
  
  iVar5 = fn_82F6A524();
  if ((*(int *)(iVar5 + 0x90) != 0) && (*(int *)(iVar5 + 0x68) != 0)) {
    *in_stack_00000074 = 0;
    fVar3 = lbl_821CC160;
    dVar8 = (double)lbl_821CC160;
    *in_stack_00000064 = 0;
    *in_stack_0000006c = 0;
    dVar12 = (double)*in_r9;
    *in_stack_0000007c = fVar3;
    *in_stack_00000084 = (float)extraout_f1;
    iVar7 = 0x12;
    dVar9 = (double)*in_r10;
    dVar13 = extraout_f1;
    dVar15 = extraout_f1;
    iVar6 = fn_8261F420(param_3);
    dVar16 = (double)lbl_8218E2B0;
    dVar10 = (double)lbl_82195DD8;
    dVar11 = (double)lbl_821955EC;
    if (iVar6 == 0) {
      *in_stack_00000074 = 1;
      *in_stack_0000007c = fVar3;
      *in_stack_00000084 = (float)dVar13;
    }
    else {
      if ((*param_5 != 0) && (param_5[3] != 0)) {
        *in_stack_00000074 = 0;
        *in_stack_0000007c = fVar3;
        *in_stack_00000084 = (float)dVar15;
        goto LAB_8261f744;
      }
      bVar1 = false;
      bVar2 = false;
      dVar14 = dVar13;
      do {
        iVar7 = iVar7 + -1;
        if (!bVar1) {
          dVar13 = (double)(float)(dVar8 + dVar15);
          if ((double)(float)(dVar8 + dVar15) < dVar11) {
            bVar1 = true;
            dVar13 = dVar11;
          }
          iVar6 = fn_8261F420(param_3,param_2,dVar13,iVar5);
          if (*in_stack_0000007c < fVar3) {
            *in_stack_0000007c = fVar3;
            *in_stack_00000084 = (float)dVar13;
          }
          if (iVar6 == 0) {
            *in_stack_00000074 = 1;
            goto LAB_8261f858;
          }
        }
        if (!bVar2) {
          dVar13 = (double)(float)(dVar15 - dVar8);
          if (dVar16 < (double)(float)(dVar15 - dVar8)) {
            bVar2 = true;
            dVar13 = dVar16;
          }
          iVar6 = fn_8261F420(param_3,param_2,dVar13,iVar5);
          if (*in_stack_0000007c < fVar3) {
            *in_stack_0000007c = fVar3;
            *in_stack_00000084 = (float)dVar13;
          }
          if (iVar6 == 0) {
            *in_stack_00000074 = 1;
            break;
          }
        }
        dVar13 = dVar14;
        dVar8 = (double)(float)(dVar8 - dVar10);
        dVar14 = dVar13;
      } while (iVar7 != 0);
    }
    if (*in_stack_00000074 != 0) {
LAB_8261f858:
      dVar17 = (double)lbl_82195DDC;
      iVar6 = 0x12;
      dVar14 = (double)lbl_82195938;
      *in_r9 = (float)dVar13;
      bVar1 = false;
      dVar8 = dVar10;
      do {
        iVar6 = iVar6 + -1;
        dVar18 = (double)(float)(dVar13 + dVar8);
        if (!bVar1) {
          if (dVar16 < dVar18) {
LAB_8261f8a8:
            dVar18 = dVar16;
LAB_8261f8ac:
            bVar1 = true;
            *in_stack_00000064 = 1;
          }
          else if (((double)(float)(dVar13 + dVar14) < dVar18) &&
                  ((double)(float)(dVar15 + dVar14) < dVar18)) {
            if (dVar16 < dVar18) goto LAB_8261f8a8;
            goto LAB_8261f8ac;
          }
          iVar7 = fn_8261F420(param_3,param_2,dVar18,iVar5);
          if (*in_stack_0000007c < fVar3) {
            *in_stack_0000007c = fVar3;
            *in_stack_00000084 = (float)dVar18;
          }
          if (iVar7 != 0) {
            if (((double)*in_r9 < dVar12) && (dVar12 < dVar18)) {
              iVar6 = fn_8261F420(param_3,param_2,dVar12,iVar5);
              if (*in_stack_0000007c < fVar3) {
                *in_stack_0000007c = fVar3;
                *in_stack_00000084 = (float)dVar18;
              }
              if (iVar6 == 0) {
                *in_r9 = (float)dVar12;
              }
            }
            break;
          }
          *in_r9 = (float)dVar18;
        }
        dVar8 = (double)(float)(dVar8 - dVar17);
      } while (iVar6 != 0);
      *in_r10 = (float)dVar13;
      bVar1 = false;
      iVar6 = 0x12;
      do {
        iVar6 = iVar6 + -1;
        dVar8 = (double)(float)(dVar13 + dVar17);
        if (!bVar1) {
          if (dVar8 < dVar11) {
LAB_8261f9a4:
            dVar8 = dVar11;
LAB_8261f9a8:
            bVar1 = true;
            *in_stack_0000006c = 1;
          }
          else if ((dVar8 < (double)(float)(dVar13 - dVar14)) &&
                  (dVar8 < (double)(float)(dVar15 - dVar14))) {
            if (dVar8 < dVar11) goto LAB_8261f9a4;
            goto LAB_8261f9a8;
          }
          iVar7 = fn_8261F420(param_3,param_2,dVar8,iVar5);
          if (*in_stack_0000007c < fVar3) {
            *in_stack_0000007c = fVar3;
            *in_stack_00000084 = (float)dVar8;
          }
          if (iVar7 != 0) {
            if ((dVar9 < (double)*in_r10) && (dVar8 < dVar9)) {
              iVar5 = fn_8261F420(param_3,param_2,dVar9,iVar5);
              if (*in_stack_0000007c < fVar3) {
                *in_stack_0000007c = fVar3;
                *in_stack_00000084 = (float)dVar8;
              }
              if (iVar5 == 0) {
                *in_r10 = (float)dVar9;
              }
            }
            break;
          }
          *in_r10 = (float)dVar8;
        }
        dVar17 = (double)(float)(dVar17 - dVar10);
      } while (iVar6 != 0);
      if (*in_r9 < *in_r10) {
        *in_r10 = *in_r9;
      }
      uVar4 = 1;
      goto LAB_8261f748;
    }
  }
LAB_8261f744:
  uVar4 = 0;
LAB_8261f748:
  fn_82F6A570(uVar4);
  return;
}

