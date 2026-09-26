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


void fn_82A61A70(uint *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float *pfVar9;
  ulonglong uVar10;
  
  pfVar9 = (float *)param_1[3];
  uVar10 = (ulonglong)*param_1;
  uVar8 = (ulonglong)param_1[1];
  uVar7 = (ulonglong)param_1[5];
  uVar1 = param_1[8];
  fVar2 = *(float *)param_1[2] * lbl_8201467C;
  fVar3 = ((float *)param_1[2])[1] * lbl_8201467C;
  if (pfVar9 != (float *)0x0) {
    fVar4 = *pfVar9 * lbl_8201467C;
    fVar5 = pfVar9[1] * lbl_8201467C;
    if (uVar7 != 0) {
      do {
        fVar6 = (float)(longlong)*(short *)uVar10;
        dataCacheBlockTouch(uVar10 + 0x1a);
        dataCacheBlockTouch(uVar8 + 0x48);
        pfVar9 = (float *)uVar8;
        if (uVar1 == 0) {
          *pfVar9 = fVar6 * fVar2;
          pfVar9[1] = fVar6 * fVar3;
        }
        else {
          *pfVar9 = fVar6 * fVar2 + *pfVar9;
          pfVar9[1] = fVar6 * fVar3 + pfVar9[1];
        }
        uVar8 = uVar8 + 8;
        fVar2 = fVar4 + fVar2;
        fVar3 = fVar5 + fVar3;
        uVar7 = uVar7 - 1;
        uVar10 = uVar10 + 2;
      } while (uVar7 != 0);
      return;
    }
    return;
  }
  if (uVar7 != 0) {
    do {
      fVar4 = (float)(longlong)*(short *)uVar10;
      dataCacheBlockTouch(uVar10 + 0x1a);
      dataCacheBlockTouch(uVar8 + 0x48);
      pfVar9 = (float *)uVar8;
      if (uVar1 == 0) {
        *pfVar9 = fVar4 * fVar2;
        pfVar9[1] = fVar4 * fVar3;
      }
      else {
        *pfVar9 = fVar4 * fVar2 + *pfVar9;
        pfVar9[1] = fVar4 * fVar3 + pfVar9[1];
      }
      uVar8 = uVar8 + 8;
      uVar7 = uVar7 - 1;
      uVar10 = uVar10 + 2;
    } while (uVar7 != 0);
    return;
  }
  return;
}

