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
extern int fn_8261F510();
extern int fn_82F6A52C();
extern int fn_82F6A578();
extern unsigned int lbl_82192AEC;
extern unsigned int lbl_821954EC;
extern unsigned int lbl_82195590;
extern float lbl_821955A0;
extern unsigned int lbl_821956B4;
extern unsigned int lbl_82195DD4;
extern unsigned int lbl_821CC160;


void fn_8261FA78(undefined8 param_1,double param_2,undefined8 param_3,double param_4)

{
  float fVar1;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  float *in_r8;
  int in_r9;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  iVar3 = fn_82F6A52C();
  if (*(int *)(iVar3 + 0x68) != 0) {
    uVar8 = 0;
    dVar9 = (double)lbl_82192AEC;
    dVar12 = (double)lbl_82195DD4;
    dVar10 = (double)lbl_821956B4;
    dVar11 = (double)lbl_821954EC;
    dVar13 = extraout_f1;
    fVar1 = lbl_821CC160;
    do {
      dVar15 = (double)fVar1;
      fVar1 = (float)dVar13;
      dVar16 = (double)(float)(param_2 - dVar15);
      dVar14 = (double)(float)(dVar15 + param_2);
      iVar4 = fn_8261F510(dVar13,dVar16,param_3,param_4,iVar3);
      if ((iVar4 == 0) && (param_4 <= (double)fVar1)) {
        dVar14 = dVar16 * (double)lbl_82195590;
LAB_8261fc10:
        uVar2 = 1;
        *in_r8 = (float)(((double)(float)dVar14 - (double)(longlong)dVar14) * lbl_821955A0);
        goto LAB_8261fbf0;
      }
      if ((((double)(longlong)(int)uVar8 < dVar10) &&
          (iVar4 = fn_8261F510(dVar13,dVar14,param_3,param_4,iVar3), iVar4 == 0)) &&
         (param_4 <= (double)fVar1)) {
        dVar14 = dVar14 * (double)lbl_82195590;
        goto LAB_8261fc10;
      }
      dVar14 = dVar12;
      if (in_r9 == 0) {
        iVar7 = 0;
        iVar5 = 1;
        lVar6 = (longlong)((int)uVar8 >> 2) + (ulonglong)((int)uVar8 < 0 && (uVar8 & 3) != 0) + 1;
        iVar4 = 1;
        if (0 < lVar6) {
          do {
            iVar7 = iVar7 + 1;
            iVar5 = iVar4 << 1;
            iVar4 = iVar5;
          } while (iVar7 < (int)lVar6);
        }
        dVar14 = (double)(longlong)iVar5 * dVar11;
      }
      fVar1 = (float)(dVar15 + dVar14);
      uVar8 = uVar8 + 1;
    } while ((double)(longlong)(int)uVar8 < dVar9);
  }
  uVar2 = 0;
LAB_8261fbf0:
  fn_82F6A578(uVar2);
  return;
}

