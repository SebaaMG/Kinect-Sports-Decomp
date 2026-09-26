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
extern int fn_8233FED8();


undefined4 * fn_8233F9F8(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  
  pfVar5 = param_3 + -2;
  uVar12 = (int)param_3 - (int)param_2 >> 3;
  iVar3 = (int)pfVar5 - (int)param_2 >> 3;
  pfVar8 = param_2 + (((int)param_3 - (int)param_2 >> 4) +
                     (uint)((int)uVar12 < 0 && (uVar12 & 1) != 0)) * 2;
  pfVar10 = param_2;
  if (0x28 < iVar3) {
    uVar12 = iVar3 + 1;
    uVar12 = ((int)uVar12 >> 3) + (uint)((int)uVar12 < 0 && (uVar12 & 7) != 0);
    fn_8233FED8(param_2,param_2 + uVar12 * 2,param_2 + uVar12 * 4);
    fn_8233FED8(pfVar8 + (uVar12 & 0x1fffffff) * -2,pfVar8,pfVar8 + uVar12 * 2);
    fn_8233FED8(pfVar5 + (uVar12 & 0xfffffff) * -4,pfVar5 + (uVar12 & 0x1fffffff) * -2,pfVar5);
    pfVar5 = pfVar5 + (uVar12 & 0x1fffffff) * -2;
    pfVar10 = param_2 + uVar12 * 2;
  }
  fn_8233FED8(pfVar10,pfVar8,pfVar5);
  pfVar5 = pfVar8 + 2;
  while (pfVar10 = pfVar8, param_2 < pfVar10) {
    if ((*pfVar10 < pfVar10[-2]) || (pfVar8 = pfVar10 + -2, pfVar10[-2] < *pfVar10)) break;
  }
  pfVar8 = pfVar10;
  pfVar6 = pfVar5;
  if (pfVar5 < param_3) {
    do {
      pfVar6 = pfVar5;
      if ((*pfVar10 < *pfVar5) || (*pfVar5 < *pfVar10)) break;
      pfVar5 = pfVar5 + 2;
      pfVar6 = pfVar5;
    } while (pfVar5 < param_3);
  }
LAB_8233fbb8:
  do {
    pfVar7 = pfVar6;
    pfVar9 = pfVar5;
    pfVar4 = pfVar10;
    pfVar5 = pfVar8;
    pfVar6 = pfVar7;
    if (pfVar9 < param_3) {
      fVar2 = *pfVar9;
      if (*pfVar10 <= fVar2) {
        if (*pfVar10 < fVar2) goto joined_r0x8233fbc4;
        pfVar6 = pfVar7 + 2;
        if (pfVar7 != pfVar9) {
          fVar1 = *pfVar7;
          *pfVar7 = fVar2;
          *pfVar9 = fVar1;
          fVar2 = pfVar7[1];
          pfVar7[1] = pfVar9[1];
          pfVar9[1] = fVar2;
        }
      }
LAB_8233fbb4:
      pfVar5 = pfVar9 + 2;
      goto LAB_8233fbb8;
    }
joined_r0x8233fbc4:
    for (; param_2 < pfVar5; pfVar5 = pfVar5 + -2) {
      pfVar11 = pfVar8 + -2;
      pfVar10 = pfVar4;
      if (*pfVar11 <= *pfVar4) {
        if (*pfVar11 < *pfVar4) break;
        pfVar10 = pfVar4 + -2;
        if (pfVar10 != pfVar11) {
          fVar2 = *pfVar10;
          *pfVar10 = *pfVar11;
          *pfVar11 = fVar2;
          fVar2 = pfVar4[-1];
          pfVar4[-1] = pfVar8[-1];
          pfVar8[-1] = fVar2;
        }
      }
      pfVar4 = pfVar10;
      pfVar8 = pfVar11;
    }
    if (pfVar5 == param_2) {
      if (pfVar9 == param_3) {
        *param_1 = pfVar4;
        param_1[1] = pfVar7;
        return param_1;
      }
      if ((pfVar7 != pfVar9) && (pfVar4 != pfVar7)) {
        fVar2 = *pfVar4;
        *pfVar4 = *pfVar7;
        *pfVar7 = fVar2;
        fVar2 = pfVar4[1];
        pfVar4[1] = pfVar7[1];
        pfVar7[1] = fVar2;
      }
      pfVar10 = pfVar4 + 2;
      pfVar8 = pfVar5;
      pfVar5 = pfVar9 + 2;
      pfVar6 = pfVar7 + 2;
      if (pfVar4 != pfVar9) {
        fVar2 = *pfVar4;
        *pfVar4 = *pfVar9;
        *pfVar9 = fVar2;
        fVar2 = pfVar4[1];
        pfVar4[1] = pfVar9[1];
        pfVar9[1] = fVar2;
      }
    }
    else {
      if (pfVar9 != param_3) {
        pfVar8 = pfVar5 + -2;
        pfVar10 = pfVar4;
        if (pfVar9 != pfVar8) {
          fVar2 = *pfVar9;
          *pfVar9 = *pfVar8;
          *pfVar8 = fVar2;
          fVar2 = pfVar9[1];
          pfVar9[1] = pfVar5[-1];
          pfVar5[-1] = fVar2;
        }
        goto LAB_8233fbb4;
      }
      pfVar8 = pfVar5 + -2;
      pfVar10 = pfVar4 + -2;
      if (pfVar8 != pfVar10) {
        fVar2 = *pfVar8;
        *pfVar8 = *pfVar10;
        *pfVar10 = fVar2;
        fVar2 = pfVar5[-1];
        pfVar5[-1] = pfVar4[-1];
        pfVar4[-1] = fVar2;
      }
      pfVar6 = pfVar7 + -2;
      pfVar5 = pfVar9;
      if (pfVar10 != pfVar6) {
        fVar2 = *pfVar10;
        *pfVar10 = *pfVar6;
        *pfVar6 = fVar2;
        fVar2 = pfVar4[-1];
        pfVar4[-1] = pfVar7[-1];
        pfVar7[-1] = fVar2;
      }
    }
  } while( true );
}

