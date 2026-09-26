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


void fn_83047D88(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar12;
  int iVar13;
  ulonglong uVar11;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  
  uVar9 = 0;
  uVar5 = *(ushort *)((int)param_2 + 0xe);
  uVar7 = param_1[1];
  for (uVar15 = uVar7; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
    uVar9 = uVar9 + 1;
  }
  uVar15 = 0;
  if (uVar9 != 0) {
    uVar6 = *(ushort *)(param_2 + 3);
    iVar8 = *param_2;
    param_1 = (undefined4 *)*param_1;
    do {
      uVar17 = uVar15;
      if ((uVar7 & 8) != 0) {
        uVar12 = 0;
        for (uVar16 = uVar7 & 7; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
          uVar12 = uVar12 + 1;
        }
        if (uVar15 == uVar12) {
          iVar13 = 0;
          for (uVar17 = uVar7; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
            iVar13 = iVar13 + 1;
          }
          uVar17 = iVar13 - 1;
        }
        else if (uVar12 < uVar15) {
          uVar17 = uVar15 - 1;
        }
      }
      uVar11 = 0;
      puVar18 = (undefined4 *)(uVar6 * uVar17 * 4 + iVar8);
      puVar14 = param_1;
      if (3 < uVar5) {
        do {
          uVar11 = uVar11 + 4;
          puVar1 = puVar14 + uVar9;
          uVar2 = *puVar1;
          puVar1 = puVar1 + uVar9;
          uVar3 = *puVar1;
          uVar4 = puVar1[uVar9];
          *puVar18 = *puVar14;
          puVar18[1] = uVar2;
          puVar14 = puVar1 + uVar9 + uVar9;
          puVar18[2] = uVar3;
          puVar18[3] = uVar4;
          puVar18 = puVar18 + 4;
        } while ((uVar11 & 0xffffffff) < ((ulonglong)uVar5 - 3 & 0xffffffff));
      }
      if ((uVar11 & 0xffffffff) < (ulonglong)(uint)uVar5) {
        lVar10 = uVar5 - uVar11;
        puVar18 = puVar18 + -1;
        puVar14 = puVar14 + -(uVar9 & 0x3fffffff);
        do {
          puVar14 = puVar14 + uVar9;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar14;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      uVar15 = uVar15 + 1;
      param_1 = param_1 + 1;
    } while (uVar15 < uVar9);
  }
  return;
}

