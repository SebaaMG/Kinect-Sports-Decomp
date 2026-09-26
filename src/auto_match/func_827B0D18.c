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


void fn_827B0D18(int param_1,ulonglong param_2,ulonglong param_3,code *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  uint auStack_1b0 [108];
  
  if ((param_3 - param_2 & 0xffffffff) < 2) {
    return;
  }
  puVar11 = auStack_1b0;
  do {
    while( true ) {
      uVar5 = (uint)param_2;
      uVar4 = (uint)param_3;
      uVar8 = uVar4 - uVar5;
      uVar14 = param_2 + 1;
      if ((int)uVar8 < 10) break;
      uVar2 = (uint)((param_2 & 0xffffffff) >> 4) & 0xffffffc;
      lVar19 = (param_2 & 0x3f) * 8;
      uVar15 = ((int)uVar8 >> 1) + (uint)((int)uVar8 < 0 && (uVar8 & 1) != 0) + uVar5;
      uVar16 = param_3 - 1;
      iVar1 = *(int *)(uVar2 + *(int *)(param_1 + 0xc));
      uVar8 = (uint)((uVar14 & 0xffffffff) >> 4) & 0xffffffc;
      uVar13 = (uVar16 & 0xffffffff) >> 4 & 0xffffffc;
      lVar18 = (uVar14 & 0x3f) * 8;
      lVar12 = (uVar16 & 0x3f) * 8;
      iVar3 = (int)lVar19;
      uVar7 = *(undefined8 *)(iVar1 + iVar3);
      puVar9 = (undefined8 *)
               (*(int *)((uVar15 >> 4 & 0xffffffc) + *(int *)(param_1 + 0xc)) + (uVar15 & 0x3f) * 8)
      ;
      *(undefined4 *)(iVar1 + iVar3) = *(undefined4 *)puVar9;
      *(undefined4 *)(iVar1 + iVar3 + 4) = *(undefined4 *)((int)puVar9 + 4);
      *puVar9 = uVar7;
      iVar1 = (int)uVar13;
      cVar6 = (*param_4)((ulonglong)*(uint *)(iVar1 + *(int *)(param_1 + 0xc)) + lVar12,
                         (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar8) + lVar18);
      if (cVar6 != '\0') {
        puVar10 = (undefined8 *)(*(int *)(*(int *)(param_1 + 0xc) + uVar8) + (int)lVar18);
        puVar9 = (undefined8 *)(*(int *)(*(int *)(param_1 + 0xc) + iVar1) + (int)lVar12);
        uVar7 = *puVar9;
        *(undefined4 *)puVar9 = *(undefined4 *)puVar10;
        *(undefined4 *)((int)puVar9 + 4) = *(undefined4 *)((int)puVar10 + 4);
        *puVar10 = uVar7;
      }
      cVar6 = (*param_4)((ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar2) + lVar19,
                         (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar8) + lVar18);
      if (cVar6 != '\0') {
        puVar10 = (undefined8 *)(*(int *)(*(int *)(param_1 + 0xc) + uVar8) + (int)lVar18);
        puVar9 = (undefined8 *)(*(int *)(*(int *)(param_1 + 0xc) + uVar2) + iVar3);
        uVar7 = *puVar9;
        *(undefined4 *)puVar9 = *(undefined4 *)puVar10;
        *(undefined4 *)((int)puVar9 + 4) = *(undefined4 *)((int)puVar10 + 4);
        *puVar10 = uVar7;
      }
      cVar6 = (*param_4)((ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + iVar1) + lVar12,
                         (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar2) + lVar19);
      if (cVar6 == '\0') goto LAB_827b0ea0;
      iVar1 = *(int *)(param_1 + 0xc);
      lVar18 = (ulonglong)*(uint *)(iVar1 + uVar2) + lVar19;
      while( true ) {
        puVar10 = (undefined8 *)lVar18;
        puVar9 = (undefined8 *)(*(int *)(iVar1 + (int)uVar13) + (int)lVar12);
        uVar7 = *puVar9;
        *(undefined4 *)puVar9 = *(undefined4 *)puVar10;
        *(undefined4 *)((int)puVar9 + 4) = *(undefined4 *)((int)puVar10 + 4);
        *puVar10 = uVar7;
LAB_827b0ea0:
        do {
          uVar14 = uVar14 + 1;
          uVar13 = (uVar14 & 0xffffffff) >> 4 & 0xffffffc;
          lVar12 = (uVar14 & 0x3f) * 8;
          cVar6 = (*param_4)((ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + (int)uVar13) + lVar12,
                             (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar2) + lVar19);
        } while (cVar6 != '\0');
        do {
          uVar16 = uVar16 - 1;
          uVar8 = (uint)((uVar16 & 0xffffffff) >> 4) & 0xffffffc;
          lVar18 = (uVar16 & 0x3f) * 8;
          cVar6 = (*param_4)((ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar2) + lVar19,
                             (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar8) + lVar18);
        } while (cVar6 != '\0');
        iVar1 = *(int *)(param_1 + 0xc);
        uVar17 = (uint)uVar16;
        uVar15 = (uint)uVar14;
        if ((int)uVar17 < (int)uVar15) break;
        lVar18 = (ulonglong)*(uint *)(iVar1 + uVar8) + lVar18;
      }
      puVar10 = (undefined8 *)(*(int *)(iVar1 + uVar8) + (int)lVar18);
      puVar9 = (undefined8 *)(*(int *)(iVar1 + uVar2) + iVar3);
      uVar7 = *puVar9;
      *(undefined4 *)puVar9 = *(undefined4 *)puVar10;
      *(undefined4 *)((int)puVar9 + 4) = *(undefined4 *)((int)puVar10 + 4);
      *puVar10 = uVar7;
      if ((int)(uVar4 - uVar15) < (int)(uVar17 - uVar5)) {
        *puVar11 = uVar5;
        puVar11[1] = uVar17;
        uVar16 = param_3;
        param_2 = uVar14;
      }
      else {
        puVar11[1] = uVar4;
        *puVar11 = uVar15;
      }
      param_3 = uVar16;
      puVar11 = puVar11 + 2;
    }
    while (uVar16 = uVar14, (int)uVar16 < (int)uVar4) {
      while( true ) {
        uVar8 = (uint)((param_2 & 0xffffffff) >> 4) & 0xffffffc;
        uVar2 = (uint)((param_2 + 1 & 0xffffffff) >> 4) & 0xffffffc;
        lVar12 = (param_2 + 1 & 0x3f) * 8;
        lVar18 = (param_2 & 0x3f) * 8;
        cVar6 = (*param_4)((ulonglong)*(uint *)(uVar2 + *(int *)(param_1 + 0xc)) + lVar12,
                           (ulonglong)*(uint *)(uVar8 + *(int *)(param_1 + 0xc)) + lVar18);
        if (cVar6 == '\0') break;
        puVar10 = (undefined8 *)(*(int *)(uVar8 + *(int *)(param_1 + 0xc)) + (int)lVar18);
        puVar9 = (undefined8 *)(*(int *)(uVar2 + *(int *)(param_1 + 0xc)) + (int)lVar12);
        uVar7 = *puVar9;
        *(undefined4 *)puVar9 = *(undefined4 *)puVar10;
        *(undefined4 *)((int)puVar9 + 4) = *(undefined4 *)((int)puVar10 + 4);
        *puVar10 = uVar7;
        if ((uint)param_2 == uVar5) break;
        param_2 = param_2 - 1;
      }
      param_2 = uVar16;
      uVar14 = uVar16 + 1;
    }
    if (puVar11 <= auStack_1b0) {
      return;
    }
    param_2 = (ulonglong)puVar11[-2];
    param_3 = (ulonglong)puVar11[-1];
    puVar11 = puVar11 + -2;
  } while( true );
}

