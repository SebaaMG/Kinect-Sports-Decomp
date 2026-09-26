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
extern int fn_83022530();
extern unsigned int lbl_82002C5C;


void fn_83022AD8(int *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  float *pfVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar12 = 0;
  uVar10 = 0;
  for (fVar9 = param_2[1]; fVar9 != 0.0; fVar9 = (float)((int)fVar9 - 1U & (uint)fVar9)) {
    uVar10 = uVar10 + 1;
  }
  dVar17 = (double)lbl_82002C5C;
  pfVar13 = param_2;
  do {
    fVar9 = pfVar13[0xe] * pfVar13[0xe];
    fVar1 = pfVar13[0x16] * pfVar13[0x16];
    pfVar2 = pfVar13 + 0x14;
    pfVar3 = pfVar13 + 0x17;
    pfVar4 = pfVar13 + 0x18;
    pfVar5 = pfVar13 + 0xc;
    pfVar6 = pfVar13 + 0x15;
    pfVar7 = pfVar13 + 0xd;
    pfVar8 = pfVar13 + 0xf;
    pfVar13 = pfVar13 + 0x10;
    lVar11 = ((longlong)(int)(uint)*(ushort *)(param_2 + 3) * (longlong)(int)uVar12 & 0x3fffffffU) *
             4 + (ulonglong)(uint)*param_2;
    dVar14 = (double)SQRT((float)((double)(*pfVar3 * *pfVar3 + fVar1) * dVar17 +
                                 (double)(*pfVar2 * *pfVar2)));
    dVar15 = (double)SQRT((float)((double)(*pfVar4 * *pfVar4 + fVar1) * dVar17 +
                                 (double)(*pfVar6 * *pfVar6)));
    dVar16 = (double)((float)param_1[3] *
                     (float)((double)SQRT((float)((double)(*pfVar13 * *pfVar13 + fVar9) * dVar17 +
                                                 (double)(*pfVar7 * *pfVar7))) - dVar15));
    fn_83022530(dVar14,(double)((float)param_1[3] *
                                     (float)((double)SQRT((float)((double)(*pfVar8 * *pfVar8 + fVar9
                                                                          ) * dVar17 +
                                                                 (double)(*pfVar5 * *pfVar5))) -
                                            dVar14)),param_1,lVar11,*(undefined4 *)*param_1);
    fn_83022530(dVar15,dVar16,param_1,lVar11,
                      (ulonglong)*(ushort *)((uint *)*param_1 + 3) * 4 +
                      (ulonglong)*(uint *)*param_1);
    uVar12 = uVar12 + 1;
  } while (uVar12 < uVar10);
  return;
}

