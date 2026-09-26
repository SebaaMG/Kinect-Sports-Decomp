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
extern unsigned int *auStack_1e0;
extern unsigned int *auStack_200;
extern unsigned int *auStack_220;
extern unsigned int *auStack_240;
extern unsigned int *auStack_260;
extern unsigned int *auStack_280;
extern unsigned int *auStack_2a0;
extern int fn_82F68CC0();


void fn_8277D730(int param_1,ulonglong param_2,ulonglong param_3,code *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined1 *puVar7;
  uint uVar9;
  ulonglong uVar8;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_2a0 [32];
  undefined1 auStack_280 [32];
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [32];
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [32];
  uint auStack_1c0 [112];
  
  if ((param_3 - param_2 & 0xffffffff) < 2) {
    return;
  }
  puVar10 = auStack_1c0;
  do {
    while( true ) {
      uVar5 = (uint)param_2;
      uVar4 = (uint)param_3;
      uVar9 = uVar4 - uVar5;
      if ((int)uVar9 < 10) break;
      uVar2 = (uint)((param_2 & 0xffffffff) >> 4) & 0xffffffc;
      uVar8 = (longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0) +
              param_2;
      lVar18 = (param_2 & 0x3f) * 0x18;
      lVar17 = (ulonglong)*(uint *)(uVar2 + *(int *)(param_1 + 0xc)) + lVar18;
      lVar16 = (ulonglong)
               *(uint *)(((uint)((uVar8 & 0xffffffff) >> 4) & 0xffffffc) + *(int *)(param_1 + 0xc))
               + (uVar8 & 0x3f) * 0x18;
      fn_82F68CC0(auStack_220,lVar17,0x18);
      fn_82F68CC0(lVar17,lVar16,0x18);
      fn_82F68CC0(lVar16,auStack_220,0x18);
      uVar8 = param_3 - 1;
      uVar13 = param_2 + 1;
      uVar9 = (uint)((uVar13 & 0xffffffff) >> 4) & 0xffffffc;
      lVar16 = (uVar8 & 0x3f) * 0x18;
      uVar3 = (uint)((uVar8 & 0xffffffff) >> 4) & 0xffffffc;
      lVar17 = (uVar13 & 0x3f) * 0x18;
      cVar6 = (*param_4)((ulonglong)*(uint *)(uVar3 + *(int *)(param_1 + 0xc)) + lVar16,
                         (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar9) + lVar17);
      if (cVar6 != '\0') {
        lVar12 = (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar3) + lVar16;
        lVar11 = (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar9) + lVar17;
        fn_82F68CC0(auStack_260,lVar12,0x18);
        fn_82F68CC0(lVar12,lVar11,0x18);
        fn_82F68CC0(lVar11,auStack_260,0x18);
      }
      cVar6 = (*param_4)((ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar2) + lVar18,
                         (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar9) + lVar17);
      if (cVar6 != '\0') {
        lVar11 = (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar2) + lVar18;
        lVar17 = (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar9) + lVar17;
        fn_82F68CC0(auStack_1e0,lVar11,0x18);
        fn_82F68CC0(lVar11,lVar17,0x18);
        fn_82F68CC0(lVar17,auStack_1e0,0x18);
      }
      cVar6 = (*param_4)((ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar3) + lVar16,
                         (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar2) + lVar18);
      if (cVar6 == '\0') goto code_r0x8277d928;
      lVar16 = (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar3) + lVar16;
      lVar17 = (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar2) + lVar18;
      fn_82F68CC0(auStack_2a0,lVar16,0x18);
      fn_82F68CC0(lVar16,lVar17,0x18);
      puVar7 = auStack_2a0;
      while( true ) {
        fn_82F68CC0(lVar17,puVar7,0x18);
code_r0x8277d928:
        do {
          uVar13 = uVar13 + 1;
          uVar9 = (uint)((uVar13 & 0xffffffff) >> 4) & 0xffffffc;
          lVar16 = (uVar13 & 0x3f) * 0x18;
          cVar6 = (*param_4)((ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar9) + lVar16,
                             (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar2) + lVar18);
        } while (cVar6 != '\0');
        do {
          uVar8 = uVar8 - 1;
          uVar3 = (uint)((uVar8 & 0xffffffff) >> 4) & 0xffffffc;
          lVar17 = (uVar8 & 0x3f) * 0x18;
          cVar6 = (*param_4)((ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar2) + lVar18,
                             (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + uVar3) + lVar17);
        } while (cVar6 != '\0');
        iVar1 = *(int *)(param_1 + 0xc);
        uVar15 = (uint)uVar8;
        uVar14 = (uint)uVar13;
        if ((int)uVar15 < (int)uVar14) break;
        lVar16 = (ulonglong)*(uint *)(iVar1 + uVar9) + lVar16;
        lVar17 = (ulonglong)*(uint *)(iVar1 + uVar3) + lVar17;
        fn_82F68CC0(auStack_280,lVar16,0x18);
        fn_82F68CC0(lVar16,lVar17,0x18);
        puVar7 = auStack_280;
      }
      lVar18 = (ulonglong)*(uint *)(iVar1 + uVar2) + lVar18;
      lVar17 = (ulonglong)*(uint *)(iVar1 + uVar3) + lVar17;
      fn_82F68CC0(auStack_240,lVar18,0x18);
      fn_82F68CC0(lVar18,lVar17,0x18);
      fn_82F68CC0(lVar17,auStack_240,0x18);
      if ((int)(uVar4 - uVar14) < (int)(uVar15 - uVar5)) {
        *puVar10 = uVar5;
        puVar10[1] = uVar15;
        uVar8 = param_3;
        param_2 = uVar13;
      }
      else {
        puVar10[1] = uVar4;
        *puVar10 = uVar14;
      }
      param_3 = uVar8;
      puVar10 = puVar10 + 2;
    }
LAB_8277dae8:
    uVar8 = param_2;
    param_2 = uVar8 + 1;
    if ((int)param_2 < (int)uVar4) {
      while( true ) {
        uVar9 = (uint)((uVar8 & 0xffffffff) >> 4) & 0xffffffc;
        uVar2 = (uint)((uVar8 + 1 & 0xffffffff) >> 4) & 0xffffffc;
        lVar16 = (uVar8 + 1 & 0x3f) * 0x18;
        lVar17 = (uVar8 & 0x3f) * 0x18;
        cVar6 = (*param_4)((ulonglong)*(uint *)(uVar2 + *(int *)(param_1 + 0xc)) + lVar16,
                           (ulonglong)*(uint *)(uVar9 + *(int *)(param_1 + 0xc)) + lVar17);
        if (cVar6 == '\0') break;
        lVar16 = (ulonglong)*(uint *)(uVar2 + *(int *)(param_1 + 0xc)) + lVar16;
        lVar17 = (ulonglong)*(uint *)(uVar9 + *(int *)(param_1 + 0xc)) + lVar17;
        fn_82F68CC0(auStack_200,lVar16,0x18);
        fn_82F68CC0(lVar16,lVar17,0x18);
        fn_82F68CC0(lVar17,auStack_200,0x18);
        if ((uint)uVar8 == uVar5) break;
        uVar8 = uVar8 - 1;
      }
      goto LAB_8277dae8;
    }
    if (puVar10 <= auStack_1c0) {
      return;
    }
    param_2 = (ulonglong)puVar10[-2];
    param_3 = (ulonglong)puVar10[-1];
    puVar10 = puVar10 + -2;
  } while( true );
}

