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
extern unsigned int *auStack_170;


void fn_827673B0(int *param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ushort *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  ushort *puVar16;
  undefined4 *puVar17;
  uint *puVar18;
  uint auStack_170 [92];
  
  if ((param_3 - param_2 & 0xffffffff) < 2) {
    return;
  }
  puVar18 = auStack_170;
  do {
    while( true ) {
      uVar7 = (uint)param_2;
      uVar6 = (uint)param_3;
      uVar14 = uVar6 - uVar7;
      if ((int)uVar14 < 10) break;
      iVar1 = *param_1;
      iVar3 = uVar7 * 4;
      uVar9 = param_3 - 1;
      uVar2 = *(undefined4 *)(iVar3 + iVar1);
      uVar8 = param_2 + 1;
      puVar15 = (undefined4 *)
                ((((int)uVar14 >> 1) + (uint)((int)uVar14 < 0 && (uVar14 & 1) != 0) + uVar7) * 4 +
                iVar1);
      lVar11 = (uVar9 & 0x3fffffff) << 2;
      lVar12 = (uVar8 & 0x3fffffff) * 4;
      *(undefined2 *)(iVar3 + iVar1) = *(undefined2 *)puVar15;
      *(undefined2 *)(iVar3 + iVar1 + 2) = *(undefined2 *)((int)puVar15 + 2);
      *puVar15 = uVar2;
      puVar13 = (ushort *)((int)lVar11 + *param_1);
      puVar16 = (ushort *)((int)lVar12 + *param_1);
      if (*puVar13 < *puVar16) {
        uVar2 = *(undefined4 *)puVar13;
        *puVar13 = *puVar16;
        puVar13[1] = puVar16[1];
        *(undefined4 *)puVar16 = uVar2;
      }
      puVar16 = (ushort *)((int)lVar12 + *param_1);
      puVar13 = (ushort *)(iVar3 + *param_1);
      if (*puVar13 < *puVar16) {
        uVar2 = *(undefined4 *)puVar13;
        *puVar13 = *puVar16;
        puVar13[1] = puVar16[1];
        *(undefined4 *)puVar16 = uVar2;
      }
      puVar16 = (ushort *)((int)lVar11 + *param_1);
      puVar13 = (ushort *)(iVar3 + *param_1);
      if (*puVar16 < *puVar13) {
        uVar2 = *(undefined4 *)puVar16;
        *puVar16 = *puVar13;
        puVar16[1] = puVar13[1];
        *(undefined4 *)puVar13 = uVar2;
      }
      while( true ) {
        iVar1 = *param_1;
        puVar15 = (undefined4 *)(iVar3 + iVar1);
        do {
          lVar12 = lVar12 + 4;
          uVar8 = uVar8 + 1;
        } while (*(ushort *)((int)lVar12 + iVar1) < *(ushort *)(iVar3 + iVar1));
        do {
          lVar11 = lVar11 + -4;
          uVar9 = uVar9 - 1;
        } while (*(ushort *)(iVar3 + iVar1) < *(ushort *)((int)lVar11 + iVar1));
        uVar10 = (uint)uVar9;
        uVar14 = (uint)uVar8;
        if ((int)uVar10 < (int)uVar14) break;
        lVar11 = (uVar9 & 0x3fffffff) << 2;
        lVar12 = (uVar8 & 0x3fffffff) << 2;
        iVar4 = (int)lVar11;
        iVar5 = (int)lVar12;
        uVar2 = *(undefined4 *)(iVar5 + iVar1);
        *(undefined2 *)(iVar5 + iVar1) = *(undefined2 *)(iVar4 + iVar1);
        *(undefined2 *)(iVar5 + iVar1 + 2) = *(undefined2 *)(iVar4 + iVar1 + 2);
        *(undefined4 *)(iVar4 + iVar1) = uVar2;
      }
      uVar2 = *puVar15;
      puVar17 = (undefined4 *)(uVar10 * 4 + iVar1);
      *(undefined2 *)puVar15 = *(undefined2 *)puVar17;
      *(undefined2 *)((int)puVar15 + 2) = *(undefined2 *)((int)puVar17 + 2);
      *puVar17 = uVar2;
      if ((int)(uVar6 - uVar14) < (int)(uVar10 - uVar7)) {
        *puVar18 = uVar7;
        puVar18[1] = uVar10;
        uVar9 = param_3;
        param_2 = uVar8;
      }
      else {
        puVar18[1] = uVar6;
        *puVar18 = uVar14;
      }
      param_3 = uVar9;
      puVar18 = puVar18 + 2;
    }
LAB_827675d0:
    uVar9 = param_2;
    param_2 = uVar9 + 1;
    if ((int)param_2 < (int)uVar6) {
      while (puVar13 = (ushort *)((int)((uVar9 & 0xffffffff) << 2) + *param_1),
            puVar13[2] < *puVar13) {
        uVar2 = *(undefined4 *)(puVar13 + 2);
        puVar13[2] = *puVar13;
        puVar13[3] = puVar13[1];
        *(undefined4 *)puVar13 = uVar2;
        if ((uint)uVar9 == uVar7) break;
        uVar9 = uVar9 - 1;
      }
      goto LAB_827675d0;
    }
    if (puVar18 <= auStack_170) {
      return;
    }
    param_2 = (ulonglong)puVar18[-2];
    param_3 = (ulonglong)puVar18[-1];
    puVar18 = puVar18 + -2;
  } while( true );
}

