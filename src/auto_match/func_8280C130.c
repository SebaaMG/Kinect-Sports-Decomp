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
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_821AAD20;


void fn_8280C130(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float *pfVar16;
  double dVar17;
  double dVar18;
  
  pfVar16 = (float *)fn_82F6A538();
  fVar1 = pfVar16[9];
  fVar2 = pfVar16[2];
  fVar3 = pfVar16[5];
  fVar4 = pfVar16[1];
  fVar5 = pfVar16[6];
  fVar6 = pfVar16[10];
  fVar7 = pfVar16[4];
  fVar8 = *pfVar16;
  fVar9 = pfVar16[8];
  dVar18 = (double)lbl_821AAD20;
  fVar15 = fVar6 * fVar4 - fVar2 * fVar1;
  fVar10 = pfVar16[0xc];
  fVar14 = fVar5 * fVar4 - fVar2 * fVar3;
  fVar11 = pfVar16[0xd];
  fVar13 = fVar6 * fVar3 - fVar5 * fVar1;
  fVar12 = pfVar16[0xe];
  dVar17 = (double)((fVar14 * fVar9 + (fVar13 * fVar8 - fVar15 * fVar7)) * pfVar16[0xf]);
  if ((double)pfVar16[3] != dVar18) {
    dVar17 = -(double)(float)((double)(fVar13 * fVar10 +
                                      ((fVar12 * fVar1 - fVar6 * fVar11) * fVar7 -
                                      (fVar12 * fVar3 - fVar5 * fVar11) * fVar9)) *
                              (double)pfVar16[3] - dVar17);
  }
  if ((double)pfVar16[7] != dVar18) {
    dVar17 = (double)(float)((double)(fVar15 * fVar10 +
                                     ((fVar12 * fVar1 - fVar6 * fVar11) * fVar8 -
                                     (fVar12 * fVar4 - fVar2 * fVar11) * fVar9)) *
                             (double)pfVar16[7] + dVar17);
  }
  if ((double)pfVar16[0xb] != dVar18) {
    dVar17 = -(double)(float)((double)(fVar14 * fVar10 +
                                      ((fVar12 * fVar3 - fVar5 * fVar11) * fVar8 -
                                      (fVar12 * fVar4 - fVar2 * fVar11) * fVar7)) *
                              (double)pfVar16[0xb] - dVar17);
  }
  fn_82F6A584(dVar17);
  return;
}

