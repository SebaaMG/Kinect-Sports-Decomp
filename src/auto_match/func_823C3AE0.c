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
extern int fn_822ABA88();
extern int fn_823693A0();
extern unsigned int lbl_821CC160;
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_823C3AE0(undefined8 param_1)

{
  int *piVar1;
  uint uVar2;
  float *pfVar3;
  undefined8 in_r0;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  float fVar10;
  float fVar11;
  float afStack_20 [8];
  
  uVar8 = 0;
  dVar9 = (double)lbl_821CC160;
  uVar5 = 0;
  piVar1 = *(int **)(*(int *)((int)param_1 + 0xe24) * 4 + **(int **)((int)param_1 + 8));
  uVar2 = *(uint *)(piVar1[4] * 4 + *piVar1);
  uVar7 = (ulonglong)uVar2;
  uVar6 = (ulonglong)*(uint *)(uVar2 + 8);
  if (uVar6 != 0) {
    do {
      uVar4 = fn_822ABA88(uVar7);
      uVar2 = (int)uVar4 + 0x80U & 0xfffffff0;
      fVar10 = *(float *)(uVar2 + 4);
      fVar11 = *(float *)(uVar2 + 8);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(in_vs45, &_vt0, 16); }
      fVar10 = fVar10 * fVar10 + 0.0 + fVar11 * fVar11;
      pfVar3 = (float *)((int)afStack_20 + (int)in_r0 & 0xfffffff0);
      *pfVar3 = fVar10;
      pfVar3[1] = fVar10;
      pfVar3[2] = fVar10;
      pfVar3[3] = fVar10;
      if (((uVar8 & 0xffffffff) == 0) || ((double)afStack_20[0] < dVar9)) {
        uVar8 = uVar4;
        dVar9 = (double)afStack_20[0];
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff));
  }
  fn_823693A0(param_1,uVar8);
  return;
}

