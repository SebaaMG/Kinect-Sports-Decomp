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


ulonglong fn_82A5F7B0(ulonglong param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  float *pfVar13;
  ulonglong uVar14;
  float *pfVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  puVar5 = (uint *)param_1;
  uVar17 = (ulonglong)*puVar5;
  uVar14 = (ulonglong)puVar5[1];
  uVar18 = (ulonglong)puVar5[6];
  uVar19 = (ulonglong)puVar5[7];
  uVar2 = puVar5[8];
  if (puVar5[9] != 0) {
    uVar19 = 1;
    uVar18 = 1;
  }
  uVar3 = puVar5[3];
  if (uVar3 == 0) {
    uVar16 = puVar5[5] / uVar18;
    if ((int)uVar16 != 0) {
      uVar3 = puVar5[2];
      do {
        if (uVar19 != 0) {
          fVar1 = *(float *)uVar17;
          param_1 = uVar17 + 0x30;
          pfVar13 = (float *)(uVar3 - 4);
          uVar9 = uVar19;
          uVar10 = uVar14;
          do {
            pfVar15 = pfVar13 + 1;
            pfVar13 = pfVar13 + 1;
            fVar6 = *pfVar15 * fVar1;
            if (1 < uVar18) {
              lVar11 = uVar18 - 1;
              uVar12 = uVar17;
              do {
                uVar12 = uVar12 + 4;
                pfVar13 = pfVar13 + 1;
                fVar6 = *(float *)uVar12 * *pfVar13 + fVar6;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
            }
            dataCacheBlockTouch(param_1);
            dataCacheBlockTouch(uVar14 + 0x6c);
            if (uVar2 != 0) {
              fVar6 = *(float *)uVar10 + fVar6;
            }
            *(float *)uVar10 = fVar6;
            uVar9 = uVar9 - 1;
            uVar10 = uVar10 + 4;
          } while (uVar9 != 0);
        }
        uVar16 = uVar16 - 1;
        uVar17 = (uVar18 & 0x3fffffff) * 4 + uVar17;
        uVar14 = (uVar19 & 0x3fffffff) * 4 + uVar14;
      } while (uVar16 != 0);
    }
  }
  else {
    uVar9 = puVar5[5] / uVar18;
    uVar16 = 0;
    if ((int)uVar9 != 0) {
      uVar4 = puVar5[2];
      do {
        if (uVar19 != 0) {
          fVar1 = *(float *)uVar17;
          pfVar13 = (float *)(uVar3 - 4);
          pfVar15 = (float *)(uVar4 - 4);
          param_1 = uVar19;
          uVar10 = uVar14;
          do {
            pfVar7 = pfVar13 + 1;
            pfVar13 = pfVar13 + 1;
            pfVar8 = pfVar15 + 1;
            pfVar15 = pfVar15 + 1;
            fVar6 = (*pfVar7 * (float)(uVar16 & 0xffffffff) + *pfVar8) * fVar1;
            if (1 < uVar18) {
              lVar11 = uVar18 - 1;
              uVar12 = uVar17;
              do {
                pfVar13 = pfVar13 + 1;
                pfVar15 = pfVar15 + 1;
                uVar12 = uVar12 + 4;
                fVar6 = (*pfVar13 * (float)(uVar16 & 0xffffffff) + *pfVar15) * *(float *)uVar12 +
                        fVar6;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
            }
            dataCacheBlockTouch(uVar17 + 0x30);
            dataCacheBlockTouch(uVar14 + 0x6c);
            if (uVar2 != 0) {
              fVar6 = *(float *)uVar10 + fVar6;
            }
            *(float *)uVar10 = fVar6;
            param_1 = param_1 - 1;
            uVar10 = uVar10 + 4;
          } while (param_1 != 0);
        }
        uVar16 = uVar16 + 1;
        uVar17 = (uVar18 & 0x3fffffff) * 4 + uVar17;
        uVar14 = (uVar19 & 0x3fffffff) * 4 + uVar14;
      } while ((uVar16 & 0xffffffff) < uVar9);
    }
  }
  return param_1;
}

