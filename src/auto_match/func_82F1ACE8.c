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


ulonglong fn_82F1ACE8(int param_1,ulonglong param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  short *psVar12;
  longlong lVar13;
  
  iVar6 = (int)param_2;
  if ((int)param_4 < 4) {
    uVar1 = *(uint *)(param_1 + 0x2d0);
    iVar2 = *(int *)(param_1 + 0x9f0);
    uVar7 = (ulonglong)param_4 & 1;
    lVar9 = (param_2 & 0x7fffffff) * 2;
    lVar13 = (longlong)(int)((param_4 & 2) + param_3 * 4) * (longlong)(int)uVar1 + uVar7 + lVar9;
    iVar5 = (int)lVar13 * 2;
    iVar3 = iVar5 + iVar2;
    if (*(short *)(iVar5 + iVar2) == 0x4000) {
      uVar4 = (ulonglong)uVar1 & 0x7fffffff;
      if ((uVar7 + lVar9 == 0) || (lVar9 = 1, *(short *)(iVar3 + -2) != 0x4000)) {
        lVar9 = 0;
      }
      uVar10 = lVar9 << 1 | 1;
      if (((param_3 != 0) && (*(int *)(*(int *)(param_1 + 0x8d8) + param_3 * 4) == 0)) ||
         (1 < (int)param_4)) {
        uVar10 = (ulonglong)
                 LZCOUNT(*(ushort *)((int)((lVar13 + uVar4 * -2 & 0xffffffff) << 1) + iVar2) -
                         0x4000) >> 3 & 4 | uVar10;
      }
      if (((int)uVar10 != 7) ||
         (lVar9 = 1,
         *(short *)((int)(((lVar13 + uVar4 * -2) - 1 & 0xffffffff) << 1) + iVar2) != 0x4000)) {
        lVar9 = 0;
      }
      if ((((int)(uVar1 - 1) <= iVar6) && ((int)uVar7 != 0)) ||
         (lVar8 = 1, *(short *)(iVar3 + 2) != 0x4000)) {
        lVar8 = 0;
      }
      if (((*(int *)(param_1 + 0x2d4) + -1 <= param_3) && ((param_4 & 2) != 0)) ||
         (lVar11 = 1, *(short *)((int)((uVar4 * 2 + lVar13 & 0xffffffff) << 1) + iVar2) != 0x4000))
      {
        lVar11 = 0;
      }
      return lVar11 << 5 | lVar8 << 4 | lVar9 << 3 | uVar10;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x2d0);
    iVar2 = *(int *)(param_1 + 0x9f8);
    lVar9 = (longlong)(int)uVar1 * (longlong)param_3 + param_2;
    iVar5 = (int)lVar9 * 2;
    iVar3 = iVar5 + iVar2;
    if (*(short *)(iVar5 + iVar2) == 0x4000) {
      uVar7 = 1;
      if ((iVar6 != 0) && (*(short *)(iVar3 + -2) == 0x4000)) {
        uVar7 = 3;
      }
      if ((param_3 != 0) && (*(int *)(*(int *)(param_1 + 0x8d8) + param_3 * 4) == 0)) {
        psVar12 = (short *)((int)((lVar9 - (ulonglong)uVar1 & 0xffffffff) << 1) + iVar2);
        if (*psVar12 == 0x4000) {
          uVar7 = uVar7 | 4;
        }
        if ((iVar6 != 0) && (psVar12[-1] == 0x4000)) {
          uVar7 = uVar7 | 8;
        }
      }
      if (((int)(uVar1 - 1) <= iVar6) || (lVar13 = 1, *(short *)(iVar3 + 2) != 0x4000)) {
        lVar13 = 0;
      }
      if ((*(int *)(param_1 + 0x2d4) + -1 <= param_3) ||
         (lVar8 = 1,
         *(short *)((int)(((ulonglong)uVar1 + lVar9 & 0xffffffff) << 1) + iVar2) != 0x4000)) {
        lVar8 = 0;
      }
      return lVar8 << 5 | lVar13 << 4 | uVar7;
    }
  }
  return 0;
}

