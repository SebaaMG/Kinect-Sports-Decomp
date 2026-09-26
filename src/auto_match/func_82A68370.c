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
extern unsigned int lbl_8208E098;
extern unsigned int lbl_8208E09C;


void fn_82A68370(int param_1,int param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  int *piVar9;
  
  fVar5 = lbl_8208E09C;
  fVar4 = lbl_8208E098;
  fVar3 = lbl_8200133C;
  uVar7 = 0;
  if (3 < (int)param_3) {
    pfVar8 = (float *)(param_2 + 0xc);
    piVar9 = (int *)(param_1 + 4);
    do {
      fVar1 = pfVar8[-3];
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      fVar1 = *(float *)((param_2 - param_1) + (int)piVar9);
      piVar9[-1] = (int)(fVar2 * fVar5) << 0xc;
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      fVar1 = pfVar8[-1];
      *piVar9 = (int)(fVar2 * fVar5) << 0xc;
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      fVar1 = *pfVar8;
      piVar9[1] = (int)(fVar2 * fVar5) << 0xc;
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      uVar7 = uVar7 + 4;
      pfVar8 = pfVar8 + 4;
      piVar9[2] = (int)(fVar2 * fVar5) << 0xc;
      piVar9 = piVar9 + 4;
    } while (uVar7 < param_3 - 3);
  }
  if (uVar7 < param_3) {
    iVar6 = param_3 - uVar7;
    piVar9 = (int *)(uVar7 * 4 + param_1);
    do {
      fVar1 = *(float *)((int)piVar9 + (param_2 - param_1));
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      *piVar9 = (int)(fVar2 * fVar5) << 0xc;
      piVar9 = piVar9 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    return;
  }
  return;
}

