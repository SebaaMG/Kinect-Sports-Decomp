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


void fn_82A61BB0(uint *param_1)

{
  float *pfVar1;
  uint uVar2;
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
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float *pfVar19;
  
  pfVar19 = (float *)param_1[2];
  pfVar1 = (float *)param_1[3];
  uVar17 = (ulonglong)*param_1;
  uVar18 = (ulonglong)param_1[1];
  uVar16 = (ulonglong)param_1[5];
  uVar2 = param_1[8];
  fVar3 = *pfVar19 * lbl_8201467C;
  fVar4 = pfVar19[1] * lbl_8201467C;
  fVar5 = pfVar19[2] * lbl_8201467C;
  fVar6 = pfVar19[3] * lbl_8201467C;
  fVar7 = pfVar19[4] * lbl_8201467C;
  fVar8 = pfVar19[5] * lbl_8201467C;
  if (pfVar1 != (float *)0x0) {
    fVar9 = *pfVar1 * lbl_8201467C;
    fVar10 = pfVar1[1] * lbl_8201467C;
    fVar11 = pfVar1[2] * lbl_8201467C;
    fVar12 = pfVar1[3] * lbl_8201467C;
    fVar13 = pfVar1[4] * lbl_8201467C;
    fVar14 = pfVar1[5] * lbl_8201467C;
    if (uVar16 != 0) {
      do {
        fVar15 = (float)(longlong)*(short *)uVar17;
        dataCacheBlockTouch(uVar17 + 0x1a);
        dataCacheBlockTouch(uVar18 + 0xd8);
        pfVar19 = (float *)uVar18;
        if (uVar2 == 0) {
          *pfVar19 = fVar15 * fVar3;
          pfVar19[1] = fVar15 * fVar4;
          pfVar19[2] = fVar15 * fVar5;
          pfVar19[3] = fVar15 * fVar6;
          pfVar19[4] = fVar15 * fVar7;
          pfVar19[5] = fVar15 * fVar8;
        }
        else {
          *pfVar19 = fVar15 * fVar3 + *pfVar19;
          pfVar19[1] = fVar15 * fVar4 + pfVar19[1];
          pfVar19[2] = fVar15 * fVar5 + pfVar19[2];
          pfVar19[3] = fVar15 * fVar6 + pfVar19[3];
          pfVar19[4] = fVar15 * fVar7 + pfVar19[4];
          pfVar19[5] = fVar15 * fVar8 + pfVar19[5];
        }
        uVar18 = uVar18 + 0x18;
        fVar3 = fVar9 + fVar3;
        fVar4 = fVar10 + fVar4;
        fVar5 = fVar11 + fVar5;
        fVar6 = fVar12 + fVar6;
        fVar7 = fVar13 + fVar7;
        fVar8 = fVar14 + fVar8;
        uVar16 = uVar16 - 1;
        uVar17 = uVar17 + 2;
      } while (uVar16 != 0);
      return;
    }
    return;
  }
  if (uVar16 != 0) {
    do {
      fVar9 = (float)(longlong)*(short *)uVar17;
      dataCacheBlockTouch(uVar17 + 0x1a);
      dataCacheBlockTouch(uVar18 + 0xd8);
      pfVar19 = (float *)uVar18;
      if (uVar2 == 0) {
        *pfVar19 = fVar9 * fVar3;
        pfVar19[1] = fVar9 * fVar4;
        pfVar19[2] = fVar9 * fVar5;
        pfVar19[3] = fVar9 * fVar6;
        pfVar19[4] = fVar9 * fVar7;
        pfVar19[5] = fVar9 * fVar8;
      }
      else {
        *pfVar19 = fVar9 * fVar3 + *pfVar19;
        pfVar19[1] = fVar9 * fVar4 + pfVar19[1];
        pfVar19[2] = fVar9 * fVar5 + pfVar19[2];
        pfVar19[3] = fVar9 * fVar6 + pfVar19[3];
        pfVar19[4] = fVar9 * fVar7 + pfVar19[4];
        pfVar19[5] = fVar9 * fVar8 + pfVar19[5];
      }
      uVar18 = uVar18 + 0x18;
      uVar16 = uVar16 - 1;
      uVar17 = uVar17 + 2;
    } while (uVar16 != 0);
    return;
  }
  return;
}

