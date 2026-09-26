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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82779C60();
extern unsigned int lbl_8201545C;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82779CD8(uint *param_1,char param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  *(undefined1 *)(param_1 + 4) = 0;
  fVar5 = lbl_8201545C;
  if ((param_2 != '\0') && (uVar8 = *param_1, uVar8 != 0)) {
    puVar1 = (undefined4 *)param_1[3];
    uVar2 = *puVar1;
    if (1 < uVar8) {
      iVar12 = *(int *)((uVar8 - 1 >> 4 & 0xffffffc) + (int)puVar1);
      pfVar7 = (float *)(*(int *)(((uint)(((ulonglong)uVar8 - 2 & 0xffffffff) >> 4) & 0xffffffc) +
                                 (int)puVar1) + ((uint)((ulonglong)uVar8 - 2) & 0x3f) * 0xc);
      iVar11 = (uVar8 - 1 & 0x3f) * 0xc;
      fVar3 = *(float *)(iVar12 + iVar11) - *pfVar7;
      fVar4 = *(float *)(iVar12 + iVar11 + 4) - pfVar7[1];
      fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
      pfVar7[2] = fVar3;
      if ((fVar3 <= fVar5) && (*param_1 != 0)) {
        *param_1 = *param_1 - 1;
      }
    }
    fn_82779C60(param_1,uVar2);
  }
  fVar5 = lbl_8201545C;
  if (1 < *param_1) {
    uVar8 = *param_1 - 1;
    pfVar7 = *(float **)param_1[3];
    pfVar9 = (float *)(*(int *)((uVar8 >> 4 & 0xffffffc) + (int)param_1[3]) + (uVar8 & 0x3f) * 0xc);
    fVar3 = *pfVar7 - *pfVar9;
    fVar4 = pfVar7[1] - pfVar9[1];
    fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
    pfVar9[2] = fVar3;
    uVar8 = *param_1;
    *(bool *)(param_1 + 4) = fVar3 <= fVar5;
    while (1 < uVar8) {
      uVar8 = *param_1 - 2;
      uVar10 = *param_1 - 1;
      iVar12 = *(int *)((uVar10 >> 4 & 0xffffffc) + param_1[3]);
      pfVar7 = (float *)(*(int *)((uVar8 >> 4 & 0xffffffc) + param_1[3]) + (uVar8 & 0x3f) * 0xc);
      iVar11 = (uVar10 & 0x3f) * 0xc;
      fVar3 = *(float *)(iVar12 + iVar11) - *pfVar7;
      fVar4 = *(float *)(iVar12 + iVar11 + 4) - pfVar7[1];
      fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
      pfVar7[2] = fVar3;
      if (fVar5 < fVar3) break;
      uVar8 = *param_1;
      iVar11 = (*param_1 - 1 & 0x3f) * 0xc;
      iVar12 = *(int *)((*param_1 - 1 >> 4 & 0xffffffc) + param_1[3]);
      uStack_30 = *(undefined4 *)(iVar12 + iVar11);
      iVar12 = iVar12 + iVar11;
      uStack_2c = *(undefined4 *)(iVar12 + 4);
      uStack_28 = *(undefined4 *)(iVar12 + 8);
      if (((ulonglong)uVar8 != 0) &&
         (lVar6 = (ulonglong)uVar8 - 1, *param_1 = (uint)lVar6, lVar6 != 0)) {
        *param_1 = uVar8 - 2;
      }
      fn_82779C60(param_1,&uStack_30);
      fVar5 = lbl_8201545C;
      uVar8 = *param_1;
    }
  }
  if (*(char *)(param_1 + 4) != '\0') {
    while (2 < *param_1) {
      pfVar7 = *(float **)param_1[3];
      pfVar9 = (float *)(*(int *)((*param_1 - 1 >> 4 & 0xffffffc) + (int)param_1[3]) +
                        (*param_1 - 1 & 0x3f) * 0xc);
      fVar3 = *pfVar7 - *pfVar9;
      fVar4 = pfVar7[1] - pfVar9[1];
      fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
      pfVar9[2] = fVar3;
      if (fVar5 < fVar3) break;
      if (*param_1 != 0) {
        *param_1 = *param_1 - 1;
      }
    }
    if (*param_1 < 3) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
  }
  return;
}

