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


void fn_82A5FA70(uint *param_1)

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
  float *pfVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float *pfVar19;
  
  pfVar19 = (float *)param_1[2];
  pfVar14 = (float *)param_1[3];
  uVar17 = (ulonglong)*param_1;
  uVar18 = (ulonglong)param_1[1];
  uVar16 = (ulonglong)param_1[5];
  uVar15 = param_1[8];
  fVar1 = *pfVar19;
  fVar2 = pfVar19[1];
  fVar3 = pfVar19[2];
  fVar4 = pfVar19[3];
  fVar5 = pfVar19[4];
  fVar6 = pfVar19[5];
  if (pfVar14 != (float *)0x0) {
    fVar7 = *pfVar14;
    fVar8 = pfVar14[1];
    fVar9 = pfVar14[2];
    fVar10 = pfVar14[3];
    fVar11 = pfVar14[4];
    fVar12 = pfVar14[5];
    if (uVar16 != 0) {
      do {
        fVar13 = *(float *)uVar17;
        dataCacheBlockTouch(uVar17 + 0x34);
        dataCacheBlockTouch(uVar18 + 0xd8);
        pfVar19 = (float *)uVar18;
        if (uVar15 == 0) {
          *pfVar19 = fVar13 * fVar1;
          pfVar19[1] = fVar13 * fVar2;
          pfVar19[2] = fVar13 * fVar3;
          pfVar19[3] = fVar13 * fVar4;
          pfVar19[4] = fVar13 * fVar5;
          pfVar19[5] = fVar13 * fVar6;
        }
        else {
          *pfVar19 = fVar13 * fVar1 + *pfVar19;
          pfVar19[1] = fVar13 * fVar2 + pfVar19[1];
          pfVar19[2] = fVar13 * fVar3 + pfVar19[2];
          pfVar19[3] = fVar13 * fVar4 + pfVar19[3];
          pfVar19[4] = fVar13 * fVar5 + pfVar19[4];
          pfVar19[5] = fVar13 * fVar6 + pfVar19[5];
        }
        uVar18 = uVar18 + 0x18;
        fVar1 = fVar7 + fVar1;
        fVar2 = fVar8 + fVar2;
        fVar3 = fVar9 + fVar3;
        fVar4 = fVar10 + fVar4;
        fVar5 = fVar11 + fVar5;
        fVar6 = fVar12 + fVar6;
        uVar16 = uVar16 - 1;
        uVar17 = uVar17 + 4;
      } while (uVar16 != 0);
      return;
    }
    return;
  }
  if (uVar16 != 0) {
    do {
      fVar7 = *(float *)uVar17;
      dataCacheBlockTouch(uVar17 + 0x34);
      dataCacheBlockTouch(uVar18 + 0xd8);
      pfVar19 = (float *)uVar18;
      if (uVar15 == 0) {
        *pfVar19 = fVar7 * fVar1;
        pfVar19[1] = fVar7 * fVar2;
        pfVar19[2] = fVar7 * fVar3;
        pfVar19[3] = fVar7 * fVar4;
        pfVar19[4] = fVar7 * fVar5;
        pfVar19[5] = fVar7 * fVar6;
      }
      else {
        *pfVar19 = fVar7 * fVar1 + *pfVar19;
        pfVar19[1] = fVar7 * fVar2 + pfVar19[1];
        pfVar19[2] = fVar7 * fVar3 + pfVar19[2];
        pfVar19[3] = fVar7 * fVar4 + pfVar19[3];
        pfVar19[4] = fVar7 * fVar5 + pfVar19[4];
        pfVar19[5] = fVar7 * fVar6 + pfVar19[5];
      }
      uVar18 = uVar18 + 0x18;
      uVar16 = uVar16 - 1;
      uVar17 = uVar17 + 4;
    } while (uVar16 != 0);
    return;
  }
  return;
}

