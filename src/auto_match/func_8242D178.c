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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_822ABA88();
extern int fn_8242C410();
extern int fn_82F65350();
extern unsigned int lbl_821916FC;
extern float lbl_82192604;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int stack0x00000000;


void fn_8242D178(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar5;
  uint uVar6;
  ulonglong uVar4;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  
  uVar3 = ZEXT48(&stack0x00000000);
  uVar17 = 2;
  uVar5 = *(uint *)(*(int *)(param_1 + 0x174) + 0xbc);
  uVar13 = (ulonglong)uVar5;
  if (uVar13 < 3) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar12 = (ulonglong)
             (uint)(int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                         lbl_82192604 + lbl_821916FC);
  }
  else {
    uVar12 = 2;
  }
  uVar15 = ((ulonglong)uVar5 & 0x3fffffff) * 4 + (uVar3 - 0x80);
  if (((uVar15 & 0xffffffff) != (uVar3 - 0x60 & 0xffffffff)) &&
     (uVar16 = uVar15 + 4, (uVar16 & 0xffffffff) != (uVar3 - 0x60 & 0xffffffff))) {
    do {
      uVar14 = 0x7fff;
      uVar5 = fn_82F65350();
      uVar4 = (ulonglong)uVar5 & 0x7fff;
      uVar5 = uVar5 & 0x7fff;
      if (0x7fff < uVar17) {
        do {
          if (uVar14 == 0xffffffff) break;
          uVar6 = fn_82F65350();
          uVar4 = (uVar4 & 0x1ffff) << 0xf | (ulonglong)uVar6 & 0xffffffff00007fff;
          uVar5 = uVar5 << 0xf | uVar6 & 0x7fff;
          uVar14 = uVar14 << 0xf | 0x7fff;
        } while (uVar14 < uVar17);
      }
      uVar1 = *(undefined4 *)uVar16;
      iVar9 = (int)(uVar4 / uVar17) * uVar17;
      uVar17 = uVar17 + 1;
      iVar9 = (uVar5 - iVar9) * 4;
      *(undefined4 *)uVar16 = *(undefined4 *)(iVar9 + (int)uVar15);
      uVar16 = uVar16 + 4;
      *(undefined4 *)(iVar9 + (int)uVar15) = uVar1;
    } while ((uVar16 & 0xffffffff) != (uVar3 - 0x60 & 0xffffffff));
  }
  uVar15 = uVar13 - 1;
  if (-1 < (longlong)uVar15) {
    lVar11 = (uVar15 & 0x3fffffff) * 4 + (uVar3 - 0x7c);
    lVar10 = (uVar15 + uVar12 & 0x3fffffff) * 4 + (uVar3 - 0x7c);
    do {
      uVar1 = *(undefined4 *)((int)lVar11 + -4);
      lVar11 = lVar11 + -4;
      *(undefined4 *)lVar11 = *(undefined4 *)((int)lVar10 + -4);
      lVar10 = lVar10 + -4;
      *(undefined4 *)lVar10 = uVar1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  uVar13 = 0;
  lVar11 = uVar3 - 0x80;
  do {
    iVar9 = *(int *)lVar11;
    iVar7 = **(int **)(param_1 + 8);
    if (iVar9 < (*(int **)(param_1 + 8))[1] - iVar7 >> 2) {
      piVar2 = *(int **)(iVar9 * 4 + iVar7);
      iVar7 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),0);
      *(char *)(*(int *)(iVar7 + 0x1a0) + 0x44) = (char)uVar13;
      iVar8 = fn_8242C410(param_1);
      if (iVar9 < iVar8) {
        *(undefined4 *)(iVar7 + 0x120) = 1;
      }
      else {
        *(undefined4 *)(iVar7 + 0x120) = 0;
        *(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x1d0) = 1;
      }
    }
    uVar13 = uVar13 + 1;
    lVar11 = lVar11 + 4;
  } while ((uVar13 & 0xffffffff) < 8);
  return;
}

