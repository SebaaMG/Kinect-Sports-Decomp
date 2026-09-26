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
extern unsigned int lbl_8202EE28;
extern unsigned int lbl_820DC348;
extern unsigned int lbl_820DC34C;


uint fn_82B90110(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  uint uVar11;
  longlong lVar10;
  
  fVar8 = lbl_8202EE28;
  iVar2 = *(int *)(param_1 + 8);
  uVar11 = *(int *)(param_1 + 0x68) * 0x10 + param_2;
  if (*(int *)(param_1 + 0x14) == 0) {
    if ((iVar2 == 1) || (iVar2 == 4)) {
      if (param_2 < uVar11) {
        pfVar9 = (float *)(param_2 - 8);
        lVar10 = (ulonglong)((uVar11 - param_2) - 1 >> 4) + 1;
        do {
          fVar5 = pfVar9[4] * pfVar9[4] * fVar8;
          fVar6 = pfVar9[3] * pfVar9[3] * fVar8;
          fVar7 = pfVar9[2] * pfVar9[2] * fVar8;
          uVar11 = (uint)fVar5;
          param_1 = (uint)fVar6;
          uVar1 = (uint)fVar7;
          iVar2 = uVar1 * 4;
          iVar3 = uVar11 * 4;
          pfVar9[2] = (*(float *)(&lbl_820DC34C + iVar2) - *(float *)(&lbl_820DC348 + iVar2)) *
                      (fVar7 - (float)uVar1) + *(float *)(&lbl_820DC348 + iVar2);
          pfVar9[3] = (*(float *)(&lbl_820DC34C + param_1 * 4) -
                      *(float *)(&lbl_820DC348 + param_1 * 4)) * (fVar6 - (float)param_1) +
                      *(float *)(&lbl_820DC348 + param_1 * 4);
          pfVar9 = pfVar9 + 4;
          *pfVar9 = (*(float *)(&lbl_820DC34C + iVar3) - *(float *)(&lbl_820DC348 + iVar3)) *
                    (fVar5 - (float)uVar11) + *(float *)(&lbl_820DC348 + iVar3);
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
    else if (param_2 < uVar11) {
      pfVar9 = (float *)(param_2 - 4);
      lVar10 = (ulonglong)((uVar11 - param_2) - 1 >> 4) + 1;
      do {
        fVar5 = pfVar9[4] * pfVar9[4] * fVar8;
        uVar11 = (uint)fVar5;
        iVar2 = uVar11 * 4;
        pfVar9 = pfVar9 + 4;
        *pfVar9 = (*(float *)(&lbl_820DC34C + iVar2) - *(float *)(&lbl_820DC348 + iVar2)) *
                  (fVar5 - (float)uVar11) + *(float *)(&lbl_820DC348 + iVar2);
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  else if ((iVar2 == 1) || (iVar2 == 4)) {
    if (param_2 < uVar11) {
      pfVar9 = (float *)(param_2 - 8);
      lVar10 = (ulonglong)((uVar11 - param_2) - 1 >> 4) + 1;
      do {
        pfVar4 = pfVar9 + 4;
        pfVar9[2] = pfVar9[2] * pfVar9[2];
        pfVar9[3] = pfVar9[3] * pfVar9[3];
        pfVar9 = pfVar9 + 4;
        *pfVar9 = *pfVar4 * *pfVar4;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  else if (param_2 < uVar11) {
    pfVar9 = (float *)(param_2 - 4);
    lVar10 = (ulonglong)((uVar11 - param_2) - 1 >> 4) + 1;
    do {
      pfVar4 = pfVar9 + 4;
      pfVar9 = pfVar9 + 4;
      *pfVar9 = *pfVar4 * *pfVar4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return param_1;
}

