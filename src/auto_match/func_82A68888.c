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


void fn_82A68888(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float *pfVar16;
  ulonglong uVar17;
  
  fVar3 = (float)param_1[7];
  fVar4 = (float)param_1[8];
  uVar5 = param_1[5];
  uVar13 = (ulonglong)uVar5;
  uVar6 = param_1[1];
  uVar15 = (ulonglong)uVar6;
  iVar7 = *param_1;
  uVar14 = (uint)param_1[4] / uVar13;
  pfVar8 = (float *)param_1[2];
  iVar9 = param_1[3];
  iVar10 = param_1[6];
  if ((int)uVar14 != 0) {
    do {
      dataCacheBlockTouch(uVar15 + 0x20);
      if (uVar13 != 0) {
        iVar12 = (int)uVar15 - (int)pfVar8;
        uVar17 = uVar13;
        pfVar16 = pfVar8;
        do {
          fVar1 = *pfVar16;
          fVar2 = *(float *)((iVar9 - (int)pfVar8) + (int)pfVar16);
          fVar11 = -(fVar2 * fVar4 -
                    (*(float *)(((iVar7 - uVar6) - (int)pfVar8) + (int)uVar15 + (int)pfVar16) -
                    fVar1));
          fVar2 = fVar11 * fVar3 + fVar2;
          *(float *)((iVar9 - (int)pfVar8) + (int)pfVar16) = fVar2;
          fVar1 = fVar2 * fVar3 + fVar1;
          *pfVar16 = fVar1;
          if (iVar10 == 2) {
            *(float *)(iVar12 + (int)pfVar16) = fVar11;
          }
          else if (iVar10 == 0) {
            *(float *)(iVar12 + (int)pfVar16) = fVar1;
          }
          else {
            if (iVar10 != 1) {
              fVar2 = fVar1 + fVar11;
            }
            *(float *)(iVar12 + (int)pfVar16) = fVar2;
          }
          pfVar16 = pfVar16 + 1;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      uVar14 = uVar14 - 1;
      uVar15 = ((ulonglong)uVar5 & 0x3fffffff) * 4 + uVar15;
    } while (uVar14 != 0);
  }
  return;
}

