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
extern int fn_82F6A548();
extern int fn_82F6A594();
extern float lbl_82147F70;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82DFBCD0(undefined8 param_1,int param_2)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  piVar4 = (int *)fn_82F6A548();
  uVar7 = 0;
  cVar1 = *(char *)(*(int *)(param_2 + 0x1c) + 0x20);
  dVar11 = (double)lbl_821AAD20;
  dVar12 = dVar11;
  dVar13 = dVar11;
  if (1 < cVar1) {
    pfVar5 = (float *)(piVar4[10] + -4);
    lVar8 = (((longlong)cVar1 - 2U & 0xffffffff) >> 1) + 1;
    pfVar6 = (float *)(*(int *)(param_2 + 0x48) + -0x20);
    uVar7 = lVar8 * 2 & 0xfffffffe;
    do {
      pfVar2 = pfVar6 + 0x38;
      pfVar6 = pfVar6 + 0x70;
      pfVar3 = pfVar5 + 1;
      pfVar5 = pfVar5 + 2;
      dVar13 = (double)(float)((double)(*pfVar2 * lbl_82147F70) * (double)*pfVar3 + dVar13);
      dVar12 = (double)(float)((double)(*pfVar6 * lbl_82147F70) * (double)*pfVar5 + dVar12);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  dVar10 = dVar11;
  if ((int)uVar7 < (int)cVar1) {
    dVar10 = (double)(*(float *)((int)uVar7 * 0xe0 + *(int *)(param_2 + 0x48) + 0xc0) *
                      lbl_82147F70 * *(float *)((int)(uVar7 << 2) + piVar4[10]));
  }
  dVar9 = (double)(**(code **)(*piVar4 + 0x20))();
  dVar12 = (double)(float)(dVar9 * (double)(float)((double)(float)(dVar12 + dVar13) + dVar10));
  if (-dVar12 < 0.0) {
    dVar11 = dVar12;
  }
  fn_82F6A594(dVar11);
  return;
}

