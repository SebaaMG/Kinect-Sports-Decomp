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
#define NAN(x) ((x) != (x))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_8255A780();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82192604;
extern unsigned int lbl_82193D10;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195590;
extern float lbl_821955A0;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831E4E38;


undefined8 fn_825DEE10(double param_1,double param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  iVar5 = *param_3;
  dVar9 = (double)SQRT(*(float *)(iVar5 + 0x40) * *(float *)(iVar5 + 0x40) +
                       *(float *)(iVar5 + 0x48) * *(float *)(iVar5 + 0x48));
  if (*(int *)(param_3[0xf] + 0x24) == 0) {
    pfVar7 = (float *)&lbl_82192604;
    dVar13 = (double)lbl_831E4E38;
    iVar5 = fn_8255A780(ABS((double)*(float *)(iVar5 + 0x50)),dVar13,(double)lbl_82193D10);
    fVar1 = lbl_821CC160;
    dVar11 = (double)pfVar7[-0x395];
    fVar2 = (float)((double)*(float *)(param_3[0x10] + 0x4c) - param_2);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar2 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar2) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar2 = lbl_821CC160;
    }
    *(float *)(param_3[0x10] + 0x4c) = fVar2;
    if (((dVar11 < (double)*(float *)(*param_3 + 0xa0)) || ((double)pfVar7[-0x38c] < ABS(param_1)))
       && (*(int *)(param_3[8] + 0x8c) == 0)) {
      *(float *)(param_3[0x10] + 0x4c) = fVar1;
    }
    if ((*(char *)(param_3[8] + 0x81) != '\0') ||
       (uVar4 = 0, fVar1 < *(float *)(param_3[0x10] + 0x4c))) {
      uVar4 = 1;
    }
    dVar10 = (double)*(float *)(*param_3 + 0x90);
    if (iVar5 != 0) {
      fVar1 = (float)((double)*(float *)(param_3[0x10] + 0x38) + param_2);
    }
    *(float *)(param_3[0x10] + 0x38) = fVar1;
    if ((*pfVar7 < *(float *)(param_3[0x10] + 0x38)) && (dVar11 < dVar9)) {
      dVar10 = (double)*(float *)(*param_3 + 0x98);
    }
    iVar8 = *param_3;
    dVar12 = (double)*(float *)(iVar8 + 0x98);
    dVar14 = (double)*(float *)(iVar8 + 0x90);
    iVar6 = fn_8255A780(dVar14,dVar12,dVar13);
    if (((iVar6 == 0) || (iVar6 = fn_8255A780((double)*(float *)(iVar8 + 0x54),dVar14), iVar6 != 0)
        ) || (bVar3 = true, dVar9 <= dVar11)) {
      bVar3 = false;
    }
    if ((iVar5 != 0) || (bVar3)) {
      if (((int)uVar4 == 0) && (dVar10 = dVar12, *(float *)(iVar8 + 0xa4) <= lbl_821916FC)) {
        dVar10 = (double)*(float *)(param_3[1] + 0x34);
      }
    }
    else {
      dVar10 = (double)*(float *)(iVar8 + 0x54);
    }
    *(float *)(iVar8 + 0x90) =
         (float)(((double)(float)(dVar10 * (double)lbl_82195590) -
                 (double)(longlong)(dVar10 * (double)lbl_82195590)) * lbl_821955A0);
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

