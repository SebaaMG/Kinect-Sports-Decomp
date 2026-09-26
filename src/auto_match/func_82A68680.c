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
extern unsigned int lbl_8200133C;
extern unsigned int lbl_8201DF54;
extern unsigned int lbl_8208E0A8;
extern unsigned int lbl_8208E0B0;


void fn_82A68680(int param_1,int param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  int *piVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar2 = lbl_8208E0B0;
  dVar1 = lbl_8208E0A8;
  uVar4 = 0;
  dVar9 = (double)lbl_8201DF54;
  dVar10 = (double)lbl_8200133C;
  if (3 < (int)param_3) {
    pfVar5 = (float *)(param_2 + 0xc);
    piVar6 = (int *)(param_1 + 4);
    do {
      dVar7 = (double)pfVar5[-3];
      dVar8 = dVar10;
      if ((dVar10 <= dVar7) && (dVar8 = dVar7, dVar1 < dVar7)) {
        dVar8 = dVar9;
      }
      dVar7 = (double)*(float *)((param_2 - param_1) + (int)piVar6);
      piVar6[-1] = (int)(dVar8 * dVar2);
      dVar8 = dVar10;
      if ((dVar10 <= dVar7) && (dVar8 = dVar7, dVar1 < dVar7)) {
        dVar8 = dVar9;
      }
      dVar7 = (double)pfVar5[-1];
      *piVar6 = (int)(dVar8 * dVar2);
      dVar8 = dVar10;
      if ((dVar10 <= dVar7) && (dVar8 = dVar7, dVar1 < dVar7)) {
        dVar8 = dVar9;
      }
      dVar7 = (double)*pfVar5;
      piVar6[1] = (int)(dVar8 * dVar2);
      dVar8 = dVar10;
      if ((dVar10 <= dVar7) && (dVar8 = dVar7, dVar1 < dVar7)) {
        dVar8 = dVar9;
      }
      uVar4 = uVar4 + 4;
      pfVar5 = pfVar5 + 4;
      piVar6[2] = (int)(dVar8 * dVar2);
      piVar6 = piVar6 + 4;
    } while (uVar4 < param_3 - 3);
  }
  if (uVar4 < param_3) {
    iVar3 = param_3 - uVar4;
    piVar6 = (int *)(uVar4 * 4 + param_1);
    do {
      dVar7 = (double)*(float *)((int)piVar6 + (param_2 - param_1));
      dVar8 = dVar10;
      if ((dVar10 <= dVar7) && (dVar8 = dVar7, dVar1 < dVar7)) {
        dVar8 = dVar9;
      }
      *piVar6 = (int)(dVar8 * dVar2);
      piVar6 = piVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

