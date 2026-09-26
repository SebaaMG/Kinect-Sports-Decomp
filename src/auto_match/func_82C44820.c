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
extern int fn_82F63CA0();
extern int fn_82F68CC0();
extern unsigned int lbl_821AAD20;


undefined8 fn_82C44820(int *param_1,longlong param_2,ulonglong param_3,int param_4,int *param_5)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar12;
  ulonglong uVar11;
  int iVar13;
  int iVar14;
  
  fVar4 = lbl_821AAD20;
  lVar5 = 0;
  uVar10 = (param_3 - (uint)param_1[2]) + (ulonglong)(uint)param_1[4] + 1;
  uVar10 = ((uVar10 & 0xffffffff) >> 0x1f) - 1 & uVar10;
  iVar14 = (int)uVar10;
  if (0 < iVar14) {
    iVar13 = 0;
    do {
      uVar1 = param_1[4];
      iVar12 = 0;
      fVar3 = fVar4;
      if ((int)lVar5 < (int)uVar1) {
        iVar8 = 0;
        lVar9 = lVar5;
        iVar7 = iVar13;
        do {
          lVar9 = lVar9 + 1;
          iVar12 = iVar12 + 1;
          fVar3 = *(float *)(iVar7 + param_1[3]) * *(float *)(iVar8 + *param_1) + fVar3;
          iVar8 = iVar8 + 4;
          iVar7 = iVar7 + 4;
        } while ((int)lVar9 < (int)uVar1);
      }
      if (iVar12 < param_1[2]) {
        iVar7 = iVar12 << 2;
        lVar9 = (((lVar5 - (ulonglong)uVar1 & 0xffffffff) >> 0x1f) - 1 & lVar5 - (ulonglong)uVar1 &
                0x3fffffff) * 4 + param_2 + -4;
        do {
          iVar12 = iVar12 + 1;
          pfVar2 = (float *)(iVar7 + *param_1);
          lVar9 = lVar9 + 4;
          iVar7 = iVar7 + 4;
          fVar3 = *pfVar2 * *(float *)lVar9 + fVar3;
        } while (iVar12 < param_1[2]);
      }
      lVar5 = lVar5 + 1;
      *(float *)(iVar13 + param_4) = fVar3;
      iVar13 = iVar13 + 4;
    } while ((int)lVar5 < iVar14);
  }
  uVar11 = (ulonglong)(uint)param_1[4];
  uVar6 = (ulonglong)(uint)param_1[3];
  if (iVar14 < param_1[4]) {
    fn_82F63CA0(uVar6,(uVar10 & 0x3fffffff) * 4 + uVar6,(uVar11 - uVar10 & 0x3fffffff) << 2);
    fn_82F68CC0(((uint)param_1[4] - uVar10 & 0x3fffffff) * 4 + (ulonglong)(uint)param_1[3],param_2,
                 (param_3 & 0x3fffffff) << 2);
    param_1[4] = ((int)param_3 - iVar14) + param_1[4];
  }
  else {
    fn_82F68CC0(uVar6,(uVar10 - uVar11 & 0x3fffffff) * 4 + param_2,
                 ((uVar11 - uVar10) + param_3 & 0x3fffffff) << 2);
    param_1[4] = ((int)param_3 - iVar14) + param_1[4];
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar14;
  }
  return 0;
}

