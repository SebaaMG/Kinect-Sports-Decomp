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
extern unsigned int *auStack_58;
extern int fn_823BADB0();
extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack00000020;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


void fn_823BAEC8(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uStack00000010;
  ulonglong uStack00000018;
  ulonglong uStack00000020;
  undefined8 uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong auStack_58 [11];
  
  uStack00000020 = ((((U64)(uStack00000020)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((int)param_3)) & ((U64)0xFFFFFFFF)) << 32));
  iVar2 = (((U64)(uStack00000020) >> 32) & 0xFFFFFFFF);
  uStack00000010 = ((((U64)(uStack00000010)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((int)param_1)) & ((U64)0xFFFFFFFF)) << 32));
  iVar1 = (((U64)(uStack00000010) >> 32) & 0xFFFFFFFF);
  uVar14 = param_1 & 0xffffffff;
  lVar9 = (param_2 & 0xffffffff) - uVar14;
  lVar6 = (param_3 & 0xffffffff) - uVar14;
  iVar10 = (int)lVar9;
  lVar5 = lVar9;
  lVar12 = lVar6;
  lVar13 = lVar6;
  if (iVar10 != 0) {
    do {
      lVar13 = lVar5;
      lVar5 = lVar12 - (longlong)((int)lVar12 / (int)lVar13) * (longlong)(int)lVar13;
      lVar12 = lVar13;
    } while (lVar5 != 0);
  }
  if (((int)lVar13 < (int)lVar6) &&
     (uStack00000010 = param_1, uStack00000018 = param_2, uStack00000020 = param_3, 0 < (int)lVar13)
     ) {
    do {
      uVar11 = uVar14 + lVar13;
      uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((undefined4)(param_1 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
      uVar3 = (((U64)(uStack_70) >> 0) & 0xFFFFFFFF);
      uStack_70 = CONCAT44((((U64)(uStack_70) >> 0) & 0xFFFFFFFF),(int)uVar11);
      uVar4 = uStack_70;
      if ((uVar11 + lVar9 & 0xffffffff) == (param_3 & 0xffffffff)) {
        puVar8 = &stack0x00000010;
      }
      else {
        puVar8 = &uStack_68;
        uStack_70 = CONCAT44((((U64)(uStack_70) >> 0) & 0xFFFFFFFF),(int)(uVar11 + lVar9));
        uStack_68 = uStack_70;
      }
      uVar16 = *puVar8 & 0xffffffff;
      uVar15 = *puVar8;
      do {
        fn_823BADB0(uVar4,uVar15);
        iVar7 = iVar2 - (int)uVar16;
        if (iVar10 < iVar7) {
          puVar8 = &uStack_60;
          uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((undefined4)(uVar15 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
          uStack_70 = CONCAT44((((U64)(uStack_70) >> 0) & 0xFFFFFFFF),(int)uVar16 + iVar10);
          uStack_60 = uStack_70;
        }
        else {
          puVar8 = auStack_58;
          uStack_70 = CONCAT44(uVar3,(iVar1 - iVar7) + iVar10);
          auStack_58[0] = uStack_70;
        }
        uVar16 = *puVar8 & 0xffffffff;
        uVar4 = uVar15;
        uVar15 = *puVar8;
      } while (uVar16 != (uVar11 & 0xffffffff));
      lVar13 = lVar13 + -1;
    } while (0 < lVar13);
  }
  return;
}

