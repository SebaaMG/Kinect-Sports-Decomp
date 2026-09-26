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
extern unsigned int *auStack_1b0;


void fn_827B4BC8(int param_1,ulonglong param_2,ulonglong param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  uint auStack_1b0 [108];
  
  if ((param_3 - param_2 & 0xffffffff) < 2) {
    return;
  }
  puVar13 = auStack_1b0;
  do {
    while( true ) {
      uVar7 = (uint)param_2;
      uVar6 = (uint)param_3;
      uVar11 = uVar6 - uVar7;
      uVar16 = param_2 + 1;
      if ((int)uVar11 < 10) break;
      uVar5 = (uint)((param_2 & 0xffffffff) >> 6) & 0x3fffffc;
      uVar11 = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0) + uVar7;
      lVar21 = (param_2 & 0xff) * 0xc;
      uVar18 = param_3 - 1;
      puVar10 = (undefined4 *)
                (*(int *)((uVar11 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0xc)) +
                (uVar11 & 0xff) * 0xc);
      iVar8 = (int)lVar21;
      puVar12 = (undefined4 *)(*(int *)(uVar5 + *(int *)(param_1 + 0xc)) + iVar8);
      uVar11 = (uint)((uVar16 & 0xffffffff) >> 6) & 0x3fffffc;
      lVar20 = (uVar16 & 0xff) * 0xc;
      uVar1 = *puVar12;
      uVar2 = puVar12[1];
      uVar3 = puVar12[2];
      *puVar12 = *puVar10;
      puVar12[1] = puVar10[1];
      uVar15 = (uVar18 & 0xffffffff) >> 6 & 0x3fffffc;
      puVar12[2] = puVar10[2];
      *puVar10 = uVar1;
      lVar14 = (uVar18 & 0xff) * 0xc;
      puVar10[1] = uVar2;
      puVar10[2] = uVar3;
      iVar4 = (int)uVar15;
      cVar9 = (*param_4)((ulonglong)*(uint *)(iVar4 + *(int *)(param_1 + 0xc)) + lVar14,
                         (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar11) + lVar20);
      if (cVar9 != '\0') {
        puVar10 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + uVar11) + (int)lVar20);
        puVar12 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + iVar4) + (int)lVar14);
        uVar1 = *puVar12;
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        *puVar12 = *puVar10;
        puVar12[1] = puVar10[1];
        puVar12[2] = puVar10[2];
        *puVar10 = uVar1;
        puVar10[1] = uVar2;
        puVar10[2] = uVar3;
      }
      cVar9 = (*param_4)((ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar5) + lVar21,
                         (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar11) + lVar20);
      if (cVar9 != '\0') {
        puVar12 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + uVar11) + (int)lVar20);
        puVar10 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + uVar5) + iVar8);
        uVar1 = *puVar10;
        uVar2 = puVar10[1];
        uVar3 = puVar10[2];
        *puVar10 = *puVar12;
        puVar10[1] = puVar12[1];
        puVar10[2] = puVar12[2];
        *puVar12 = uVar1;
        puVar12[1] = uVar2;
        puVar12[2] = uVar3;
      }
      cVar9 = (*param_4)((ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + iVar4) + lVar14,
                         (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar5) + lVar21);
      if (cVar9 == '\0') goto LAB_827b4dc0;
      iVar4 = *(int *)(param_1 + 0xc);
      lVar20 = (ulonglong)*(uint *)(iVar4 + uVar5) + lVar21;
      while( true ) {
        puVar12 = (undefined4 *)lVar20;
        puVar10 = (undefined4 *)(*(int *)(iVar4 + (int)uVar15) + (int)lVar14);
        uVar1 = *puVar10;
        *puVar10 = *puVar12;
        uVar2 = puVar10[1];
        puVar10[1] = puVar12[1];
        uVar3 = puVar10[2];
        puVar10[2] = puVar12[2];
        puVar12[2] = uVar3;
        puVar12[1] = uVar2;
        *puVar12 = uVar1;
LAB_827b4dc0:
        do {
          uVar16 = uVar16 + 1;
          uVar15 = (uVar16 & 0xffffffff) >> 6 & 0x3fffffc;
          lVar14 = (uVar16 & 0xff) * 0xc;
          cVar9 = (*param_4)((ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + (int)uVar15) + lVar14,
                             (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar5) + lVar21);
        } while (cVar9 != '\0');
        do {
          uVar18 = uVar18 - 1;
          uVar11 = (uint)((uVar18 & 0xffffffff) >> 6) & 0x3fffffc;
          lVar20 = (uVar18 & 0xff) * 0xc;
          cVar9 = (*param_4)((ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar5) + lVar21,
                             (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar11) + lVar20);
        } while (cVar9 != '\0');
        iVar4 = *(int *)(param_1 + 0xc);
        uVar19 = (uint)uVar18;
        uVar17 = (uint)uVar16;
        if ((int)uVar19 < (int)uVar17) break;
        lVar20 = (ulonglong)*(uint *)(iVar4 + uVar11) + lVar20;
      }
      puVar12 = (undefined4 *)(*(int *)(iVar4 + uVar11) + (int)lVar20);
      puVar10 = (undefined4 *)(*(int *)(iVar4 + uVar5) + iVar8);
      uVar1 = *puVar10;
      uVar2 = puVar10[1];
      uVar3 = puVar10[2];
      *puVar10 = *puVar12;
      puVar10[1] = puVar12[1];
      puVar10[2] = puVar12[2];
      *puVar12 = uVar1;
      puVar12[1] = uVar2;
      puVar12[2] = uVar3;
      if ((int)(uVar6 - uVar17) < (int)(uVar19 - uVar7)) {
        *puVar13 = uVar7;
        puVar13[1] = uVar19;
        uVar18 = param_3;
        param_2 = uVar16;
      }
      else {
        puVar13[1] = uVar6;
        *puVar13 = uVar17;
      }
      param_3 = uVar18;
      puVar13 = puVar13 + 2;
    }
    while (uVar18 = uVar16, (int)uVar18 < (int)uVar6) {
      while( true ) {
        uVar11 = (uint)((param_2 & 0xffffffff) >> 6) & 0x3fffffc;
        uVar5 = (uint)((param_2 + 1 & 0xffffffff) >> 6) & 0x3fffffc;
        lVar14 = (param_2 + 1 & 0xff) * 0xc;
        lVar20 = (param_2 & 0xff) * 0xc;
        cVar9 = (*param_4)((ulonglong)*(uint *)(uVar5 + *(int *)(param_1 + 0xc)) + lVar14,
                           (ulonglong)*(uint *)(uVar11 + *(int *)(param_1 + 0xc)) + lVar20);
        if (cVar9 == '\0') break;
        puVar10 = (undefined4 *)(*(int *)(uVar11 + *(int *)(param_1 + 0xc)) + (int)lVar20);
        puVar12 = (undefined4 *)(*(int *)(uVar5 + *(int *)(param_1 + 0xc)) + (int)lVar14);
        uVar1 = *puVar12;
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        *puVar12 = *puVar10;
        puVar12[1] = puVar10[1];
        puVar12[2] = puVar10[2];
        *puVar10 = uVar1;
        puVar10[1] = uVar2;
        puVar10[2] = uVar3;
        if ((uint)param_2 == uVar7) break;
        param_2 = param_2 - 1;
      }
      param_2 = uVar18;
      uVar16 = uVar18 + 1;
    }
    if (puVar13 <= auStack_1b0) {
      return;
    }
    param_2 = (ulonglong)puVar13[-2];
    param_3 = (ulonglong)puVar13[-1];
    puVar13 = puVar13 + -2;
  } while( true );
}

