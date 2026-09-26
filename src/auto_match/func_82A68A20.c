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


void fn_82A68A20(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float *pfVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  
  fVar5 = (float)param_1[7];
  fVar6 = (float)param_1[8];
  pfVar7 = (float *)param_1[2];
  pfVar8 = (float *)param_1[3];
  pfVar15 = (float *)*param_1;
  fVar1 = *pfVar7;
  fVar2 = *pfVar8;
  fVar3 = pfVar7[1];
  iVar9 = param_1[6];
  fVar4 = pfVar8[1];
  if (param_1[4] != 0) {
    lVar16 = (ulonglong)(uint)param_1[1] + 4;
    lVar14 = (ulonglong)(param_1[4] - 1 >> 1) + 1;
    iVar12 = (int)pfVar15 - param_1[1];
    do {
      pfVar13 = (float *)lVar16;
      fVar11 = -(fVar6 * fVar2 - (*pfVar15 - fVar1));
      fVar10 = -(fVar6 * fVar4 - (*(float *)(iVar12 + (int)pfVar13) - fVar3));
      fVar2 = fVar11 * fVar5 + fVar2;
      fVar4 = fVar10 * fVar5 + fVar4;
      fVar1 = fVar2 * fVar5 + fVar1;
      fVar3 = fVar4 * fVar5 + fVar3;
      dataCacheBlockTouch(lVar16 + 0xc);
      if (iVar9 == 0) {
        pfVar13[-1] = fVar1;
        *pfVar13 = fVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 1) {
            pfVar13[-1] = fVar2;
            *pfVar13 = fVar4;
            goto code_r0x82a68af0;
          }
          fVar11 = fVar1 + fVar11;
          fVar10 = fVar3 + fVar10;
        }
        *pfVar13 = fVar10;
        pfVar13[-1] = fVar11;
      }
code_r0x82a68af0:
      pfVar15 = pfVar15 + 2;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  *pfVar7 = fVar1;
  pfVar7[1] = fVar3;
  *pfVar8 = fVar2;
  pfVar8[1] = fVar4;
  return;
}

