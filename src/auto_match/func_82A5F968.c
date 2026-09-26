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


void fn_82A5F968(uint *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float *pfVar10;
  
  pfVar10 = (float *)param_1[3];
  uVar8 = (ulonglong)*param_1;
  uVar9 = (ulonglong)param_1[1];
  uVar7 = (ulonglong)param_1[5];
  uVar6 = param_1[8];
  fVar1 = *(float *)param_1[2];
  fVar2 = ((float *)param_1[2])[1];
  if (pfVar10 != (float *)0x0) {
    fVar3 = *pfVar10;
    fVar4 = pfVar10[1];
    if (uVar7 != 0) {
      do {
        fVar5 = *(float *)uVar8;
        dataCacheBlockTouch(uVar8 + 0x34);
        dataCacheBlockTouch(uVar9 + 0x48);
        pfVar10 = (float *)uVar9;
        if (uVar6 == 0) {
          *pfVar10 = fVar5 * fVar1;
          pfVar10[1] = fVar5 * fVar2;
        }
        else {
          *pfVar10 = fVar5 * fVar1 + *pfVar10;
          pfVar10[1] = fVar5 * fVar2 + pfVar10[1];
        }
        uVar9 = uVar9 + 8;
        fVar1 = fVar3 + fVar1;
        fVar2 = fVar4 + fVar2;
        uVar7 = uVar7 - 1;
        uVar8 = uVar8 + 4;
      } while (uVar7 != 0);
      return;
    }
    return;
  }
  if (uVar7 != 0) {
    do {
      fVar3 = *(float *)uVar8;
      dataCacheBlockTouch(uVar8 + 0x34);
      dataCacheBlockTouch(uVar9 + 0x48);
      pfVar10 = (float *)uVar9;
      if (uVar6 == 0) {
        *pfVar10 = fVar3 * fVar1;
        pfVar10[1] = fVar3 * fVar2;
      }
      else {
        *pfVar10 = fVar3 * fVar1 + *pfVar10;
        pfVar10[1] = fVar3 * fVar2 + pfVar10[1];
      }
      uVar9 = uVar9 + 8;
      uVar7 = uVar7 - 1;
      uVar8 = uVar8 + 4;
    } while (uVar7 != 0);
    return;
  }
  return;
}

