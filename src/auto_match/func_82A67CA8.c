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
extern unsigned int lbl_8208E08C;
extern unsigned int lbl_8208E090;
extern unsigned int uStack_a;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82A67CA8(int param_1,int param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  float *pfVar9;
  undefined2 uStack_a;
  
  fVar5 = lbl_8208E090;
  fVar4 = lbl_8208E08C;
  fVar3 = lbl_8200133C;
  uVar8 = 0;
  if (3 < (int)param_3) {
    puVar7 = (undefined2 *)(param_1 + -2);
    pfVar9 = (float *)(param_2 + 8);
    do {
      fVar1 = pfVar9[-2];
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      fVar1 = pfVar9[-1];
      uStack_a = (undefined2)(int)(fVar2 * fVar5);
      puVar7[1] = uStack_a;
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      fVar1 = *pfVar9;
      uStack_a = (undefined2)(int)(fVar2 * fVar5);
      puVar7[2] = uStack_a;
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      fVar1 = pfVar9[1];
      uStack_a = (undefined2)(int)(fVar2 * fVar5);
      puVar7[3] = uStack_a;
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      uVar8 = uVar8 + 4;
      pfVar9 = pfVar9 + 4;
      uStack_a = (undefined2)(int)(fVar2 * fVar5);
      puVar7 = puVar7 + 4;
      *puVar7 = uStack_a;
    } while (uVar8 < param_3 - 3);
  }
  if (uVar8 < param_3) {
    iVar6 = param_3 - uVar8;
    puVar7 = (undefined2 *)(uVar8 * 2 + param_1 + -2);
    pfVar9 = (float *)(uVar8 * 4 + param_2);
    do {
      fVar1 = *pfVar9;
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      pfVar9 = pfVar9 + 1;
      uStack_a = (undefined2)(int)(fVar2 * fVar5);
      puVar7 = puVar7 + 1;
      *puVar7 = uStack_a;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    return;
  }
  return;
}

