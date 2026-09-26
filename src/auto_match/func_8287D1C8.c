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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_50;
extern unsigned int iStack00000014;
extern unsigned int stack0x00000010;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


void fn_8287D1C8(ulonglong param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong *puVar10;
  ulonglong uVar9;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  int iStack00000014;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong auStack_50 [10];
  
  iStack00000014 = (int)param_1;
  uVar16 = param_1 & 0xffffffff;
  lVar17 = param_2 - uVar16;
  lVar7 = param_3 - uVar16;
  iVar18 = (int)lVar17;
  lVar8 = lVar17;
  lVar13 = lVar7;
  lVar14 = lVar7;
  if (iVar18 != 0) {
    do {
      lVar14 = lVar8;
      lVar8 = lVar13 - (longlong)((int)lVar13 / (int)lVar14) * (longlong)(int)lVar14;
      lVar13 = lVar14;
    } while (lVar8 != 0);
  }
  if (((int)lVar14 < (int)lVar7) && (0 < (int)lVar14)) {
    do {
      uVar15 = uVar16 + lVar14;
      uStack_68 = ((((U64)(uStack_68)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int)(param_1 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
      uVar5 = (((U64)(uStack_68) >> 0) & 0xFFFFFFFF);
      uStack_68 = CONCAT44((((U64)(uStack_68) >> 0) & 0xFFFFFFFF),(int)uVar15);
      if ((uVar15 + lVar17 & 0xffffffff) == (ulonglong)param_3) {
        puVar10 = (ulonglong *)&stack0x00000010;
      }
      else {
        puVar10 = &uStack_60;
        uStack_70 = CONCAT44((((U64)(uStack_68) >> 0) & 0xFFFFFFFF),(int)(uVar15 + lVar17));
        uStack_60 = uStack_70;
      }
      uVar6 = *puVar10 & 0xffffffff;
      uVar9 = *puVar10;
      do {
        uVar19 = uVar9;
        uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int)(uVar19 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
        uVar9 = uVar6 >> 2;
        if (*(uint *)((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) + 8) <= uVar9) {
          uVar9 = uVar9 - *(uint *)((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) + 8);
        }
        uVar11 = (((U64)(uStack_68) >> 32) & 0xFFFFFFFF) >> 2;
        if (*(uint *)((((U64)(uStack_68) >> 0) & 0xFFFFFFFF) + 8) <= uVar11) {
          uVar11 = uVar11 - *(uint *)((((U64)(uStack_68) >> 0) & 0xFFFFFFFF) + 8);
        }
        iVar3 = ((((U64)(uStack_68) >> 32) & 0xFFFFFFFF) & 3) * 4;
        iVar4 = (int)((uVar6 & 3) << 2);
        iVar1 = *(int *)(*(int *)((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) + 4) + (int)((uVar9 & 0xffffffff) << 2));
        iVar12 = *(int *)(*(int *)((((U64)(uStack_68) >> 0) & 0xFFFFFFFF) + 4) + uVar11 * 4);
        uVar2 = *(undefined4 *)(iVar12 + iVar3);
        *(undefined4 *)(iVar12 + iVar3) = *(undefined4 *)(iVar1 + iVar4);
        iVar12 = param_3 - (int)uVar6;
        *(undefined4 *)(iVar1 + iVar4) = uVar2;
        if (iVar18 < iVar12) {
          puVar10 = &uStack_58;
          uStack_70 = CONCAT44((((U64)(uStack_70) >> 0) & 0xFFFFFFFF),(int)uVar6 + iVar18);
          uStack_58 = uStack_70;
        }
        else {
          puVar10 = auStack_50;
          uStack_70 = CONCAT44(uVar5,(iStack00000014 - iVar12) + iVar18);
          auStack_50[0] = uStack_70;
        }
        uVar6 = *puVar10 & 0xffffffff;
        uVar9 = *puVar10;
        uStack_68 = uVar19;
      } while (uVar6 != (uVar15 & 0xffffffff));
      lVar14 = lVar14 + -1;
    } while (0 < lVar14);
  }
  return;
}

