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
extern int fn_8268F318();
extern int fn_8268F580();
extern int fn_8268F620();


longlong fn_8268FCB8(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0xc);
  iVar7 = param_2 * 0xc + param_1;
  iVar11 = *(int *)(iVar7 + 0x20);
  iVar3 = *(int *)(iVar7 + 0x1c);
  uVar12 = (ulonglong)
           (iVar11 - ((((iVar1 * 8 + iVar11) - 1U >> (uVar2 + 3 & 0x3f)) + iVar1) - 1 &
                     ~(iVar1 - 1U)) >> (uVar2 & 0x3f));
  uVar9 = 0xffffffffffffffff;
  lVar10 = 0;
  iVar11 = (iVar3 - ((((iVar1 * 8 + iVar11) - 1U >> (uVar2 + 3 & 0x3f)) + iVar1) - 1 & ~(iVar1 - 1U)
                    )) + iVar11;
  uVar4 = param_3 >> (uVar2 & 0x3f);
  uVar13 = 0xffffffffffffffff;
  uVar15 = 0;
  if (uVar12 != 0) {
    do {
      uVar14 = uVar15;
      uVar5 = (uint)uVar14;
      if ((*(uint *)((uVar5 >> 3 & 0x1ffffffc) + iVar11) >> (uVar5 & 0x1f) & 1) == 0) {
        lVar6 = fn_8268F620(iVar11,uVar14);
        iVar8 = iVar1 * uVar5 + iVar3;
        if (((((iVar8 + param_4) - 1U & ~(param_4 - 1U)) + param_3 <=
              (uint)(iVar1 * (int)lVar6 + iVar8)) &&
            (uVar15 = lVar6 - (ulonglong)uVar4, (uVar15 & 0xffffffff) < (uVar9 & 0xffffffff))) &&
           (uVar9 = uVar15, uVar13 = uVar14, *(char *)(param_1 + 0x1a4) == '\0')) break;
      }
      else {
        lVar6 = fn_8268F580(iVar11,uVar14,uVar12);
      }
      uVar15 = lVar6 + uVar14;
      uVar14 = uVar13;
    } while ((uVar15 & 0xffffffff) < uVar12);
    if ((int)uVar14 != -1) {
      iVar8 = iVar1 * (int)uVar14;
      lVar6 = (longlong)
              ((int)((((iVar8 + iVar3 + param_4) - 1U & ~(param_4 - 1U)) - iVar8) - iVar3) >>
              (uVar2 & 0x3f)) + uVar14;
      lVar10 = (**(code **)(**(int **)(param_1 + 4) + 0xc))
                         (*(int **)(param_1 + 4),(int)lVar6 * iVar1 + iVar3,param_3);
      if (lVar10 != 0) {
        fn_8268F318(iVar11,lVar6,(ulonglong)uVar4);
        *(uint *)(iVar7 + 0x24) = *(int *)(iVar7 + 0x24) + uVar4;
        *(uint *)(param_1 + 0x18) =
             (uVar4 << (*(uint *)(param_1 + 0xc) & 0x3f)) + *(int *)(param_1 + 0x18);
        goto LAB_8268fe74;
      }
    }
  }
  param_2 = -1;
LAB_8268fe74:
  *(int *)(param_1 + 0x1a0) = param_2;
  *(uint *)(param_1 + 0x1a8) = (int)lVar10 + param_3;
  return lVar10;
}

