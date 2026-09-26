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


undefined8 fn_82A81338(float *param_1,longlong param_2,ulonglong param_3,int *param_4)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar8;
  
  fVar1 = param_1[4];
  uVar6 = ((ulonglong)(uint)fVar1 - (ulonglong)(uint)param_1[1]) + param_3;
  uVar6 = ((uVar6 & 0xffffffff) >> 0x1f) - 1 & uVar6;
  iVar14 = (int)uVar6;
  uVar13 = param_3;
  if ((int)fVar1 <= iVar14) {
    uVar13 = ((uint)fVar1 - uVar6) + param_3;
  }
  lVar12 = (uVar13 & 0x3fffffff) << 2;
  fn_82F68CC0(param_1[3],(param_3 - uVar13 & 0x3fffffff) * 4 + param_2,lVar12);
  lVar2 = (uVar6 & 0x3fffffff) * 4;
  iVar4 = 0;
  lVar10 = lVar2 + param_2 + -4;
  if (0 < (longlong)(uVar6 - (uint)param_1[4])) {
    do {
      iVar4 = iVar4 + 1;
      *(float *)lVar10 = ((float *)lVar10)[-(int)param_1[1]] * *param_1;
      lVar10 = lVar10 + -4;
    } while (iVar4 < iVar14 - (int)param_1[4]);
  }
  lVar5 = 0;
  uVar3 = uVar6 - (((uVar6 - (uint)param_1[4] & 0xffffffff) >> 0x1f) - 1 & uVar6 - (uint)param_1[4])
  ;
  iVar4 = (int)uVar3;
  lVar7 = (uVar3 & 0x3fffffff) * 4 + (ulonglong)(uint)param_1[2] + -4;
  iVar8 = (int)lVar7;
  if (3 < iVar4) {
    do {
      pfVar9 = (float *)lVar7;
      lVar5 = lVar5 + 4;
      pfVar11 = (float *)lVar10;
      *pfVar11 = *pfVar9 * *param_1;
      pfVar11[-1] = pfVar9[-1] * *param_1;
      pfVar11[-2] = pfVar9[-2] * *param_1;
      lVar7 = lVar7 + -0x10;
      iVar8 = (int)lVar7;
      pfVar11[-3] = pfVar9[-3] * *param_1;
      lVar10 = lVar10 + -0x10;
    } while ((int)lVar5 < iVar4 + -3);
  }
  if ((int)lVar5 < iVar4) {
    lVar5 = uVar3 - lVar5;
    iVar4 = (int)lVar10;
    do {
      *(float *)lVar10 = *(float *)((iVar8 - iVar4) + (int)(float *)lVar10) * *param_1;
      lVar10 = lVar10 + -4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  uVar3 = (ulonglong)(uint)param_1[2];
  if (iVar14 < (int)param_1[4]) {
    fn_82F63CA0(uVar3,uVar3 + lVar2,((uint)param_1[4] - uVar6 & 0x3fffffff) << 2);
    fn_82F68CC0(((uint)param_1[4] - uVar6 & 0x3fffffff) * 4 + (ulonglong)(uint)param_1[2],
                 param_1[3],lVar12);
    param_1[4] = (float)(((int)(float)uVar13 - iVar14) + (int)param_1[4]);
  }
  else {
    fn_82F68CC0(uVar3,param_1[3],lVar12);
    param_1[4] = (float)uVar13;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar14;
  }
  return 0;
}

