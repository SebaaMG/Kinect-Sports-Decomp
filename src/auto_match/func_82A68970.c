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


void fn_82A68970(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float *pfVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  fVar3 = (float)param_1[7];
  fVar4 = (float)param_1[8];
  pfVar5 = (float *)param_1[2];
  pfVar6 = (float *)param_1[3];
  uVar12 = (ulonglong)(uint)param_1[4];
  iVar7 = *param_1;
  fVar1 = *pfVar5;
  uVar8 = param_1[1];
  uVar13 = (ulonglong)uVar8;
  fVar2 = *pfVar6;
  iVar9 = param_1[6];
  if (uVar12 != 0) {
    do {
      pfVar11 = (float *)uVar13;
      fVar10 = -(fVar4 * fVar2 - (*(float *)((iVar7 - uVar8) + (int)pfVar11) - fVar1));
      fVar2 = fVar10 * fVar3 + fVar2;
      fVar1 = fVar2 * fVar3 + fVar1;
      dataCacheBlockTouch(uVar13 + 0x10);
      if (iVar9 == 0) {
        *pfVar11 = fVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 1) {
            *pfVar11 = fVar2;
            goto code_r0x82a68a04;
          }
          fVar10 = fVar1 + fVar10;
        }
        *pfVar11 = fVar10;
      }
code_r0x82a68a04:
      uVar13 = uVar13 + 4;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  *pfVar5 = fVar1;
  *pfVar6 = fVar2;
  return;
}

