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
extern unsigned int lbl_8201467C;


ulonglong fn_82A61858(ulonglong param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  float *pfVar15;
  ulonglong uVar14;
  ulonglong uVar16;
  float *pfVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  
  fVar9 = lbl_8201467C;
  puVar5 = (uint *)param_1;
  uVar18 = (ulonglong)*puVar5;
  uVar12 = (ulonglong)puVar5[1];
  uVar19 = (ulonglong)puVar5[6];
  uVar20 = (ulonglong)puVar5[7];
  uVar2 = puVar5[8];
  if (puVar5[9] != 0) {
    uVar20 = 1;
    uVar19 = 1;
  }
  uVar3 = puVar5[3];
  if (uVar3 == 0) {
    uVar16 = puVar5[5] / uVar19;
    if ((int)uVar16 != 0) {
      uVar3 = puVar5[2];
      do {
        if (uVar20 != 0) {
          sVar1 = *(short *)uVar18;
          param_1 = uVar18 + 0x18;
          pfVar15 = (float *)(uVar3 - 4);
          uVar10 = uVar20;
          uVar11 = uVar12;
          do {
            pfVar17 = pfVar15 + 1;
            pfVar15 = pfVar15 + 1;
            fVar6 = *pfVar17 * (float)(longlong)sVar1 * fVar9;
            if (1 < uVar19) {
              lVar13 = uVar19 - 1;
              uVar14 = uVar18;
              do {
                uVar14 = uVar14 + 2;
                pfVar15 = pfVar15 + 1;
                fVar6 = (float)(longlong)*(short *)uVar14 * *pfVar15 * fVar9 + fVar6;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            }
            dataCacheBlockTouch(param_1);
            dataCacheBlockTouch(uVar12 + 0x6c);
            if (uVar2 != 0) {
              fVar6 = *(float *)uVar11 + fVar6;
            }
            *(float *)uVar11 = fVar6;
            uVar10 = uVar10 - 1;
            uVar11 = uVar11 + 4;
          } while (uVar10 != 0);
        }
        uVar16 = uVar16 - 1;
        uVar18 = (uVar19 & 0x7fffffff) * 2 + uVar18;
        uVar12 = (uVar20 & 0x3fffffff) * 4 + uVar12;
      } while (uVar16 != 0);
    }
  }
  else {
    uVar10 = puVar5[5] / uVar19;
    uVar16 = 0;
    if ((int)uVar10 != 0) {
      uVar4 = puVar5[2];
      do {
        if (uVar20 != 0) {
          sVar1 = *(short *)uVar18;
          pfVar17 = (float *)(uVar3 - 4);
          pfVar15 = (float *)(uVar4 - 4);
          param_1 = uVar20;
          uVar11 = uVar12;
          do {
            pfVar7 = pfVar17 + 1;
            pfVar17 = pfVar17 + 1;
            pfVar8 = pfVar15 + 1;
            pfVar15 = pfVar15 + 1;
            fVar6 = (*pfVar7 * (float)(uVar16 & 0xffffffff) + *pfVar8) * (float)(longlong)sVar1 *
                    fVar9;
            if (1 < uVar19) {
              lVar13 = uVar19 - 1;
              uVar14 = uVar18;
              do {
                uVar14 = uVar14 + 2;
                pfVar15 = pfVar15 + 1;
                pfVar17 = pfVar17 + 1;
                fVar6 = (*pfVar17 * (float)(uVar16 & 0xffffffff) + *pfVar15) *
                        (float)(longlong)*(short *)uVar14 * fVar9 + fVar6;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            }
            dataCacheBlockTouch(uVar18 + 0x18);
            dataCacheBlockTouch(uVar12 + 0x6c);
            if (uVar2 != 0) {
              fVar6 = *(float *)uVar11 + fVar6;
            }
            *(float *)uVar11 = fVar6;
            param_1 = param_1 - 1;
            uVar11 = uVar11 + 4;
          } while (param_1 != 0);
        }
        uVar16 = uVar16 + 1;
        uVar18 = (uVar19 & 0x7fffffff) * 2 + uVar18;
        uVar12 = (uVar20 & 0x3fffffff) * 4 + uVar12;
      } while ((uVar16 & 0xffffffff) < uVar10);
    }
  }
  return param_1;
}

