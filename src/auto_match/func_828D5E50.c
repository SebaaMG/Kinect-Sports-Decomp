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
extern int fn_828D4E48();
extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack00000020;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


void fn_828D5E50(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uStack00000010;
  ulonglong uStack00000018;
  ulonglong uStack00000020;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong auStack_50 [10];
  
  uStack00000010 = ((((U64)(uStack00000010)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((int)param_1)) & ((U64)0xFFFFFFFF)) << 32));
  iVar1 = (((U64)(uStack00000010) >> 32) & 0xFFFFFFFF);
  uVar12 = param_1 & 0xffffffff;
  lVar13 = (param_2 & 0xffffffff) - uVar12;
  lVar4 = (param_3 & 0xffffffff) - uVar12;
  iVar14 = (int)lVar13;
  lVar5 = lVar13;
  lVar9 = lVar4;
  lVar10 = lVar4;
  if (iVar14 != 0) {
    do {
      lVar10 = lVar5;
      lVar5 = lVar9 - (longlong)((int)lVar9 / (int)lVar10) * (longlong)(int)lVar10;
      lVar9 = lVar10;
    } while (lVar5 != 0);
  }
  if (((int)lVar10 < (int)lVar4) &&
     (uStack00000010 = param_1, uStack00000018 = param_2, uStack00000020 = param_3, 0 < (int)lVar10)
     ) {
    do {
      uVar11 = uVar12 + lVar10;
      uStack_68 = ((((U64)(uStack_68)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int)(param_1 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
      uVar2 = (((U64)(uStack_68) >> 0) & 0xFFFFFFFF);
      uStack_68 = CONCAT44((((U64)(uStack_68) >> 0) & 0xFFFFFFFF),(int)uVar11);
      if ((uVar11 + lVar13 & 0xffffffff) == (param_3 & 0xffffffff)) {
        puVar8 = &stack0x00000010;
      }
      else {
        puVar8 = &uStack_60;
        uStack_70 = CONCAT44((((U64)(uStack_68) >> 0) & 0xFFFFFFFF),(int)(uVar11 + lVar13));
        uStack_60 = uStack_70;
      }
      uVar16 = *puVar8 & 0xffffffff;
      uVar3 = *puVar8;
      do {
        uVar15 = uVar3;
        uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int)(uVar15 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
        uVar3 = uVar16;
        if (*(uint *)((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) + 8) <= uVar16) {
          uVar3 = uVar16 - *(uint *)((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) + 8);
        }
        uVar6 = uStack_68 & 0xffffffff;
        if (*(uint *)((((U64)(uStack_68) >> 0) & 0xFFFFFFFF) + 8) <= uVar6) {
          uVar6 = uVar6 - *(uint *)((((U64)(uStack_68) >> 0) & 0xFFFFFFFF) + 8);
        }
        fn_828D4E48(*(undefined4 *)
                       (*(int *)((((U64)(uStack_68) >> 0) & 0xFFFFFFFF) + 4) + (int)((uVar6 & 0xffffffff) << 2)),
                      *(undefined4 *)
                       (*(int *)((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) + 4) + (int)((uVar3 & 0xffffffff) << 2)));
        iVar7 = (int)param_3 - (int)uVar16;
        if (iVar14 < iVar7) {
          puVar8 = &uStack_58;
          uStack_70 = CONCAT44((((U64)(uStack_70) >> 0) & 0xFFFFFFFF),(int)uVar16 + iVar14);
          uStack_58 = uStack_70;
        }
        else {
          puVar8 = auStack_50;
          uStack_70 = CONCAT44(uVar2,(iVar1 - iVar7) + iVar14);
          auStack_50[0] = uStack_70;
        }
        uVar16 = *puVar8 & 0xffffffff;
        uVar3 = *puVar8;
        uStack_68 = uVar15;
      } while (uVar16 != (uVar11 & 0xffffffff));
      lVar10 = lVar10 + -1;
    } while (0 < lVar10);
  }
  return;
}

