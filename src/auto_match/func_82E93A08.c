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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82F655D8();
extern unsigned int lbl_82005758;
extern float lbl_82011638;
extern unsigned int lbl_831A97B8;


void fn_82E93A08(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  
  iVar7 = *(int *)(param_1 + 0x77d0);
  iVar6 = *(int *)(param_1 + 0x77d4);
  *(int *)(param_1 + 0x77c4) = iVar7;
  *(int *)(param_1 + 0x77c8) = iVar6;
  *(undefined4 *)(param_1 + 0x77cc) = *(undefined4 *)(param_1 + 0x77d8);
  dVar9 = lbl_82005758;
  dVar8 = (double)fn_82F655D8((double)(longlong)param_3 / (double)(longlong)param_2,
                                    lbl_82005758 / *(double *)(param_1 + 0x77e0));
  dVar8 = SQRT((double)(longlong)(int)(dVar8 * (double)(longlong)(iVar7 * iVar6)) /
               (double)(longlong)*(int *)(param_1 + 0x77c0));
  if (dVar9 < dVar8) {
    dVar8 = dVar9;
  }
  if (*(int *)(param_1 + 0x76e0) == 0) {
    iVar5 = 0;
    pdVar4 = (double *)&lbl_831A97B8;
    do {
      if (*pdVar4 <= dVar8) {
        iVar7 = *(int *)((iVar5 + 0x1e1c) * 4 + param_1);
        iVar6 = *(int *)((iVar5 + 0x1e20) * 4 + param_1);
        *(int *)(param_1 + 0x77f4) = iVar5;
        *(int *)(param_1 + 0x77f8) = iVar5;
        break;
      }
      pdVar4 = pdVar4 + 1;
      iVar5 = iVar5 + 1;
    } while ((int)pdVar4 < -0x7ce56828);
    if (iVar5 != 4) goto LAB_82e93bd0;
    iVar6 = *(int *)(param_1 + 0x77bc);
    iVar7 = *(int *)(param_1 + 0x77b8);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x77bc);
    iVar7 = *(int *)(param_1 + 0x77b8);
  }
  iVar7 = (int)((double)(longlong)iVar7 * dVar8);
  iVar6 = (int)((double)(longlong)iVar6 * dVar8);
  *(undefined4 *)(param_1 + 0x77f8) = 0;
  *(undefined4 *)(param_1 + 0x77f4) = 0;
LAB_82e93bd0:
  if ((iVar7 < 0x10) || (iVar6 < 0x10)) {
    iVar5 = *(int *)(param_1 + 0x77b8);
    iVar1 = *(int *)(param_1 + 0x77bc);
    if (iVar1 < iVar5) {
      iVar6 = 0x10;
      iVar7 = (int)(((float)(longlong)iVar5 / (float)(longlong)iVar1) * lbl_82011638);
    }
    else {
      iVar7 = 0x10;
      iVar6 = (int)(((float)(longlong)iVar1 / (float)(longlong)iVar5) * lbl_82011638);
    }
  }
  uVar2 = iVar7 + 0xfU & 0xfffffff0;
  uVar3 = iVar6 + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0x77d0) = uVar2;
  *(uint *)(param_1 + 0x77d4) = uVar3;
  *(uint *)(param_1 + 0x77d8) = uVar2 * uVar3;
  if ((uVar2 == *(uint *)(param_1 + 0x77c4)) && (uVar3 == *(uint *)(param_1 + 0x77c8))) {
    *(undefined4 *)(param_1 + 0x77e8) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x77e8) = 1;
    *(undefined4 *)(param_1 + 0x77ec) = 1;
  }
  return;
}

