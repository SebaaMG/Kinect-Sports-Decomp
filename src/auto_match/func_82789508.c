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
extern unsigned int *auStack_1c0;
extern int fn_827887E8();
extern unsigned int stack0x0000002c;
extern unsigned int uStack0000002c;


void fn_82789508(int param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 uStack0000002c;
  uint auStack_1c0 [112];
  
  if ((param_3 - param_2 & 0xffffffff) < 2) {
    return;
  }
  puVar14 = auStack_1c0;
  uStack0000002c = param_4;
  do {
    while( true ) {
      uVar8 = (uint)param_2;
      uVar7 = (uint)param_3;
      uVar13 = uVar7 - uVar8;
      if ((int)uVar13 < 10) break;
      uVar5 = (uint)((param_2 & 0xffffffff) >> 6) & 0x3fffffc;
      uVar13 = ((int)uVar13 >> 1) + (uint)((int)uVar13 < 0 && (uVar13 & 1) != 0) + uVar8;
      lVar21 = (param_2 & 0xff) * 0xc;
      uVar18 = param_2 + 1;
      puVar11 = (undefined4 *)
                (*(int *)((uVar13 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0xc)) +
                (uVar13 & 0xff) * 0xc);
      iVar9 = (int)lVar21;
      puVar12 = (undefined4 *)(*(int *)(uVar5 + *(int *)(param_1 + 0xc)) + iVar9);
      uVar15 = param_3 - 1;
      lVar20 = (uVar18 & 0xff) * 0xc;
      uVar1 = puVar12[1];
      uVar2 = *puVar12;
      uVar3 = puVar12[2];
      *puVar12 = *puVar11;
      puVar12[1] = puVar11[1];
      uVar13 = (uint)((uVar18 & 0xffffffff) >> 6) & 0x3fffffc;
      uVar16 = (uint)((uVar15 & 0xffffffff) >> 6) & 0x3fffffc;
      puVar12[2] = puVar11[2];
      puVar11[1] = uVar1;
      lVar17 = (uVar15 & 0xff) * 0xc;
      *puVar11 = uVar2;
      puVar11[2] = uVar3;
      cVar10 = fn_827887E8(&stack0x0000002c,
                             (ulonglong)*(uint *)(uVar16 + *(int *)(param_1 + 0xc)) + lVar17,
                             (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar13) + lVar20);
      if (cVar10 != '\0') {
        puVar12 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + uVar13) + (int)lVar20);
        puVar11 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + uVar16) + (int)lVar17);
        uVar1 = *puVar11;
        uVar2 = puVar11[1];
        uVar3 = puVar11[2];
        *puVar11 = *puVar12;
        puVar11[1] = puVar12[1];
        puVar11[2] = puVar12[2];
        *puVar12 = uVar1;
        puVar12[1] = uVar2;
        puVar12[2] = uVar3;
      }
      cVar10 = fn_827887E8(&stack0x0000002c,
                             (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar5) + lVar21,
                             (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar13) + lVar20);
      if (cVar10 != '\0') {
        puVar11 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + uVar13) + (int)lVar20);
        puVar12 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + uVar5) + iVar9);
        uVar1 = *puVar12;
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        *puVar12 = *puVar11;
        puVar12[1] = puVar11[1];
        puVar12[2] = puVar11[2];
        *puVar11 = uVar1;
        puVar11[1] = uVar2;
        puVar11[2] = uVar3;
      }
      cVar10 = fn_827887E8(&stack0x0000002c,
                             (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar16) + lVar17,
                             (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar5) + lVar21);
      if (cVar10 == '\0') goto LAB_82789700;
      lVar20 = (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar5) + lVar21;
      lVar17 = (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar16) + lVar17;
      while( true ) {
        puVar11 = (undefined4 *)lVar20;
        puVar12 = (undefined4 *)lVar17;
        uVar1 = *puVar12;
        *puVar12 = *puVar11;
        uVar2 = puVar12[1];
        puVar12[1] = puVar11[1];
        uVar3 = puVar12[2];
        puVar12[2] = puVar11[2];
        puVar11[2] = uVar3;
        puVar11[1] = uVar2;
        *puVar11 = uVar1;
LAB_82789700:
        iVar4 = *(int *)(param_1 + 0xc);
        do {
          uVar18 = uVar18 + 1;
          uVar13 = (uint)((uVar18 & 0xffffffff) >> 6) & 0x3fffffc;
          lVar17 = (uVar18 & 0xff) * 0xc;
          cVar10 = fn_827887E8(&stack0x0000002c,(ulonglong)*(uint *)(iVar4 + uVar13) + lVar17,
                                 (ulonglong)*(uint *)(iVar4 + uVar5) + lVar21);
        } while (cVar10 != '\0');
        iVar4 = *(int *)(param_1 + 0xc);
        uVar16 = *(uint *)(uVar5 + iVar4);
        do {
          uVar15 = uVar15 - 1;
          uVar6 = (uint)((uVar15 & 0xffffffff) >> 6) & 0x3fffffc;
          lVar20 = (uVar15 & 0xff) * 0xc;
          cVar10 = fn_827887E8(&stack0x0000002c,(ulonglong)uVar16 + lVar21,
                                 (ulonglong)*(uint *)(uVar6 + iVar4) + lVar20);
        } while (cVar10 != '\0');
        iVar4 = *(int *)(param_1 + 0xc);
        uVar16 = (uint)uVar15;
        uVar19 = (uint)uVar18;
        if ((int)uVar16 < (int)uVar19) break;
        lVar20 = (ulonglong)*(uint *)(uVar6 + iVar4) + lVar20;
        lVar17 = (ulonglong)*(uint *)(uVar13 + iVar4) + lVar17;
      }
      puVar11 = (undefined4 *)(*(int *)(uVar6 + iVar4) + (int)lVar20);
      puVar12 = (undefined4 *)(*(int *)(uVar5 + iVar4) + iVar9);
      uVar1 = *puVar12;
      uVar2 = puVar12[1];
      uVar3 = puVar12[2];
      *puVar12 = *puVar11;
      puVar12[1] = puVar11[1];
      puVar12[2] = puVar11[2];
      *puVar11 = uVar1;
      puVar11[1] = uVar2;
      puVar11[2] = uVar3;
      if ((int)(uVar7 - uVar19) < (int)(uVar16 - uVar8)) {
        *puVar14 = uVar8;
        puVar14[1] = uVar16;
        uVar15 = param_3;
        param_2 = uVar18;
      }
      else {
        puVar14[1] = uVar7;
        *puVar14 = uVar19;
      }
      param_3 = uVar15;
      puVar14 = puVar14 + 2;
    }
LAB_827898a4:
    uVar15 = param_2;
    param_2 = uVar15 + 1;
    if ((int)param_2 < (int)uVar7) {
      while( true ) {
        uVar13 = (uint)((uVar15 & 0xffffffff) >> 6) & 0x3fffffc;
        uVar5 = (uint)((uVar15 + 1 & 0xffffffff) >> 6) & 0x3fffffc;
        lVar17 = (uVar15 + 1 & 0xff) * 0xc;
        lVar20 = (uVar15 & 0xff) * 0xc;
        cVar10 = fn_827887E8(&stack0x0000002c,
                               (ulonglong)*(uint *)(uVar5 + *(int *)(param_1 + 0xc)) + lVar17,
                               (ulonglong)*(uint *)(uVar13 + *(int *)(param_1 + 0xc)) + lVar20);
        if (cVar10 == '\0') break;
        puVar11 = (undefined4 *)(*(int *)(uVar13 + *(int *)(param_1 + 0xc)) + (int)lVar20);
        puVar12 = (undefined4 *)(*(int *)(uVar5 + *(int *)(param_1 + 0xc)) + (int)lVar17);
        uVar1 = *puVar12;
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        *puVar12 = *puVar11;
        puVar12[1] = puVar11[1];
        puVar12[2] = puVar11[2];
        *puVar11 = uVar1;
        puVar11[1] = uVar2;
        puVar11[2] = uVar3;
        if ((uint)uVar15 == uVar8) break;
        uVar15 = uVar15 - 1;
      }
      goto LAB_827898a4;
    }
    if (puVar14 <= auStack_1c0) {
      return;
    }
    param_2 = (ulonglong)puVar14[-2];
    param_3 = (ulonglong)puVar14[-1];
    puVar14 = puVar14 + -2;
  } while( true );
}

