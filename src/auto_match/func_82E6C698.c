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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83248A10;


undefined8 fn_82E6C698(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  
  fVar12 = lbl_821AAD20;
  fVar11 = lbl_82002C5C;
  iVar19 = param_1[0x1df2];
  iVar3 = param_2[0x17];
  iVar4 = *(int *)(*param_2 + 0x24);
  if (0x101 < iVar19) {
    iVar19 = 0x101;
  }
  piVar5 = (int *)param_2[0x2e];
  iVar14 = *(int *)(param_2[0x2f] + -4);
  iVar15 = 0;
  iVar6 = *(int *)(*param_1 + 0x38);
  iVar13 = 0;
  fVar1 = (float)(&lbl_83248A10)[iVar19];
  iVar19 = 0;
  iVar18 = 0;
  fVar7 = fVar1 * lbl_82002C5C;
  fVar8 = lbl_82002AE0 / fVar1;
  if (0 < iVar14) {
    piVar21 = (int *)(param_2[0x2f] + -8);
    piVar20 = piVar5;
    iVar15 = 0;
    iVar19 = 0;
    do {
      piVar21 = piVar21 + 2;
      iVar14 = iVar14 + -2;
      iVar13 = *piVar21 + iVar13;
      iVar18 = *piVar21 + iVar18;
      iVar16 = iVar19;
      if (iVar4 <= iVar13) goto LAB_82e6c7fc;
      fVar2 = *(float *)(iVar13 * 4 + iVar3);
      fVar9 = ABS(fVar2);
      if (fVar7 <= fVar9) {
        if (fVar7 + fVar1 <= fVar9) {
          uVar17 = 0x80000000;
          if (fVar2 <= fVar12) {
            uVar17 = 0;
          }
          fVar9 = fVar9 * fVar8;
          if (fVar12 <= fVar9) {
            fVar9 = fVar9 + fVar11;
          }
          else {
            fVar9 = fVar9 - fVar11;
          }
          if (iVar6 < (int)fVar9) {
            param_1[0x1df1] = 1;
            return 0;
          }
          uVar17 = (int)fVar9 | uVar17;
        }
        else {
          uVar17 = 0x80000000;
          if (fVar2 <= fVar12) {
            uVar17 = 0;
          }
          uVar17 = uVar17 | 1;
        }
        *piVar20 = iVar18;
        iVar15 = 1;
        piVar20[1] = uVar17;
        bVar10 = false;
        iVar18 = 0;
        piVar20 = piVar20 + 2;
        iVar19 = iVar19 + 2;
      }
      else {
        bVar10 = true;
        iVar18 = iVar18 + 1;
      }
      iVar13 = iVar13 + 1;
    } while (0 < iVar14);
    iVar16 = iVar19;
    if (bVar10) {
LAB_82e6c7fc:
      iVar19 = iVar16 + 2;
      piVar5[iVar16] = iVar18;
      piVar5[iVar16 + 1] = 0;
    }
  }
  param_2[0x35] = iVar15;
  piVar5[-1] = iVar19;
  return 0;
}

