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
extern int fn_8249F240();


undefined4 * fn_8249EDB0(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  
  pfVar12 = param_3 + -3;
  uVar10 = ((int)param_3 - (int)param_2) / 0xc;
  iVar11 = ((int)pfVar12 - (int)param_2) / 0xc;
  pfVar7 = param_2 + (((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0)) * 3;
  pfVar5 = param_2;
  if (0x28 < iVar11) {
    uVar10 = iVar11 + 1;
    iVar11 = ((int)uVar10 >> 3) + (uint)((int)uVar10 < 0 && (uVar10 & 7) != 0);
    fn_8249F240(param_2,param_2 + iVar11 * 3,param_2 + iVar11 * 6);
    fn_8249F240(pfVar7 + iVar11 * -3,pfVar7,pfVar7 + iVar11 * 3);
    fn_8249F240(pfVar12 + iVar11 * -6,pfVar12 + iVar11 * -3,pfVar12);
    pfVar5 = param_2 + iVar11 * 3;
    pfVar12 = pfVar12 + iVar11 * -3;
  }
  fn_8249F240(pfVar5,pfVar7,pfVar12);
  pfVar5 = pfVar7 + 3;
  while (pfVar12 = pfVar7, param_2 < pfVar12) {
    if ((pfVar12[-3] < *pfVar12) || (pfVar7 = pfVar12 + -3, *pfVar12 < pfVar12[-3])) break;
  }
  pfVar7 = pfVar12;
  pfVar6 = pfVar5;
  if (pfVar5 < param_3) {
    do {
      pfVar6 = pfVar5;
      if ((*pfVar5 < *pfVar12) || (*pfVar12 < *pfVar5)) break;
      pfVar5 = pfVar5 + 3;
      pfVar6 = pfVar5;
    } while (pfVar5 < param_3);
  }
LAB_8249ef80:
  do {
    pfVar4 = pfVar12;
    pfVar9 = pfVar7;
    if (pfVar5 < param_3) {
      if (*pfVar5 <= *pfVar12) {
        if (*pfVar5 < *pfVar12) goto joined_r0x8249ef8c;
        fVar1 = *pfVar6;
        fVar2 = pfVar6[1];
        fVar3 = pfVar6[2];
        *pfVar6 = *pfVar5;
        pfVar6[1] = pfVar5[1];
        pfVar6[2] = pfVar5[2];
        *pfVar5 = fVar1;
        pfVar5[1] = fVar2;
        pfVar5[2] = fVar3;
        goto LAB_8249ef78;
      }
LAB_8249ef7c:
      pfVar5 = pfVar5 + 3;
      goto LAB_8249ef80;
    }
joined_r0x8249ef8c:
    for (; param_2 < pfVar7; pfVar7 = pfVar7 + -3) {
      pfVar8 = pfVar9 + -3;
      pfVar12 = pfVar4;
      if (*pfVar4 <= *pfVar8) {
        if (*pfVar4 < *pfVar8) break;
        pfVar12 = pfVar4 + -3;
        fVar3 = *pfVar12;
        fVar1 = pfVar4[-2];
        *pfVar12 = *pfVar8;
        fVar2 = pfVar4[-1];
        pfVar4[-2] = pfVar9[-2];
        pfVar4[-1] = pfVar9[-1];
        *pfVar8 = fVar3;
        pfVar9[-2] = fVar1;
        pfVar9[-1] = fVar2;
      }
      pfVar4 = pfVar12;
      pfVar9 = pfVar8;
    }
    if (pfVar7 == param_2) {
      if (pfVar5 == param_3) {
        *param_1 = pfVar4;
        param_1[1] = pfVar6;
        return param_1;
      }
      if (pfVar6 != pfVar5) {
        fVar1 = *pfVar4;
        fVar2 = pfVar4[1];
        fVar3 = pfVar4[2];
        *pfVar4 = *pfVar6;
        pfVar4[1] = pfVar6[1];
        pfVar4[2] = pfVar6[2];
        *pfVar6 = fVar1;
        pfVar6[1] = fVar2;
        pfVar6[2] = fVar3;
      }
      pfVar12 = pfVar4 + 3;
      fVar1 = *pfVar4;
      *pfVar4 = *pfVar5;
      fVar2 = pfVar4[1];
      fVar3 = pfVar4[2];
      pfVar4[1] = pfVar5[1];
      pfVar4[2] = pfVar5[2];
      *pfVar5 = fVar1;
      pfVar5[1] = fVar2;
      pfVar5[2] = fVar3;
LAB_8249ef78:
      pfVar6 = pfVar6 + 3;
      goto LAB_8249ef7c;
    }
    pfVar9 = pfVar7 + -3;
    if (pfVar5 != param_3) {
      fVar1 = *pfVar5;
      fVar2 = pfVar5[1];
      fVar3 = pfVar5[2];
      *pfVar5 = *pfVar9;
      pfVar5[1] = pfVar7[-2];
      pfVar5[2] = pfVar7[-1];
      *pfVar9 = fVar1;
      pfVar7[-2] = fVar2;
      pfVar7[-1] = fVar3;
      pfVar12 = pfVar4;
      pfVar7 = pfVar9;
      goto LAB_8249ef7c;
    }
    pfVar12 = pfVar4 + -3;
    if (pfVar9 != pfVar12) {
      fVar1 = *pfVar9;
      fVar2 = pfVar7[-2];
      fVar3 = pfVar7[-1];
      *pfVar9 = *pfVar12;
      pfVar7[-2] = pfVar4[-2];
      pfVar7[-1] = pfVar4[-1];
      *pfVar12 = fVar1;
      pfVar4[-2] = fVar2;
      pfVar4[-1] = fVar3;
    }
    pfVar8 = pfVar6 + -3;
    fVar1 = *pfVar12;
    fVar2 = pfVar4[-2];
    fVar3 = pfVar4[-1];
    *pfVar12 = *pfVar8;
    pfVar4[-2] = pfVar6[-2];
    pfVar4[-1] = pfVar6[-1];
    *pfVar8 = fVar1;
    pfVar6[-2] = fVar2;
    pfVar6[-1] = fVar3;
    pfVar7 = pfVar9;
    pfVar6 = pfVar8;
  } while( true );
}

