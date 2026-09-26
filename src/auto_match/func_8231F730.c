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
extern unsigned int lbl_82195530;
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


ulonglong fn_8231F730(int param_1,ulonglong param_2)

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
  ulonglong uVar9;
  double dVar10;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  float fVar11;
  float fVar12;
  float afStack_30 [6];
  
  uVar9 = (ulonglong)*(uint *)(param_1 + 0xc);
  uVar6 = 0;
  uVar5 = 0;
  piVar1 = *(int **)(*(uint *)(param_1 + 0xc) + 0x1c);
  dVar10 = (double)lbl_82195530;
  uVar2 = *(uint *)(piVar1[4] * 4 + *piVar1);
  uVar8 = (ulonglong)uVar2;
  uVar7 = (ulonglong)*(uint *)(uVar2 + 8);
  if (uVar7 != 0) {
    do {
      uVar4 = fn_822ABA88(uVar8);
      if ((((uVar9 & 0xffffffff) != (uVar4 & 0xffffffff)) &&
          ((param_2 & 0xffffffff) != (uVar4 & 0xffffffff))) &&
         (*(int *)(*(int *)((int)uVar4 + 0x110) + 0x1c) == 2)) {
        uVar2 = (int)uVar9 + 0x80U & 0xfffffff0;
        fVar11 = *(float *)(uVar2 + 4);
        fVar12 = *(float *)(uVar2 + 8);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(in_vs32, &_vt0, 16); }
        fVar11 = fVar11 * fVar11 + 0.0 + fVar12 * fVar12;
        pfVar3 = (float *)((int)afStack_30 + (int)in_r0 & 0xfffffff0);
        *pfVar3 = fVar11;
        pfVar3[1] = fVar11;
        pfVar3[2] = fVar11;
        pfVar3[3] = fVar11;
        if ((double)afStack_30[0] < dVar10) {
          uVar6 = uVar4;
          dVar10 = (double)afStack_30[0];
        }
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  return uVar6;
}

