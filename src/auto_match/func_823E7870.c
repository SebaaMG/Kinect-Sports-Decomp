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
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_260;
extern unsigned int *auStack_280;
extern int fn_822ABA88();
extern int fn_822ACC48();
extern int fn_823D2A18();
extern int fn_823DC098();
extern int fn_82526C70();
extern unsigned int stack0x00000000;


void fn_823E7870(undefined4 param_1,uint *param_2,int param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 in_r0;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 uVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 auStack_280 [8];
  uint auStack_260 [9];
  int aiStack_23c [27];
  undefined4 auStack_1d0 [116];
  
  uVar4 = ZEXT48(&stack0x00000000);
  uVar5 = fn_823D2A18();
  fn_82526C70(uVar4 - 0xf0,0x80,0xffffffff821b65ec,uVar5);
  fn_822ACC48(*(undefined4 *)(*(int *)(param_2[4] * 4 + *param_2) + 0x48),uVar4 - 0xf0,7,
                    uVar4 - 0x240);
  uVar13 = (ulonglong)*param_2;
  uVar16 = 0xffffffffffffffff;
  lVar11 = ((ulonglong)param_2[4] & 0x3fffffff) << 2;
  uVar22 = 0;
  lVar17 = 0;
  uVar8 = 0;
  uVar7 = *(uint *)(*(int *)((int)lVar11 + *param_2) + 8);
  if (uVar7 != 0) {
    lVar19 = uVar4 - 0x284;
    lVar10 = uVar4 - 0x1d0;
    lVar20 = uVar4 - 0x240;
    lVar18 = uVar4 - 0x264;
    lVar9 = uVar4 - 0x160;
    do {
      iVar6 = fn_822ABA88(*(undefined4 *)((int)lVar11 + (int)uVar13));
      iVar1 = *(int *)(iVar6 + 0x1ec);
      if (iVar1 != 0) {
        uVar16 = uVar8;
      }
      iVar3 = (int)in_r0;
      if (param_3 == iVar6) {
LAB_823e7964:
        if (iVar1 != 0) goto LAB_823e796c;
LAB_823e7974:
        puVar12 = (undefined4 *)(iVar3 + (int)lVar20 & 0xfffffff0);
        uVar21 = *puVar12;
        uVar23 = puVar12[1];
        uVar24 = puVar12[2];
        uVar25 = puVar12[3];
        lVar19 = lVar19 + 4;
        *(undefined4 *)lVar19 = (int)uVar8;
        puVar12 = (undefined4 *)(iVar3 + (int)lVar10 & 0xfffffff0);
        *puVar12 = uVar21;
        puVar12[1] = uVar23;
        puVar12[2] = uVar24;
        puVar12[3] = uVar25;
        uVar22 = uVar22 + 1;
        lVar10 = lVar10 + 0x10;
      }
      else {
        if (iVar1 == 0) {
          lVar18 = lVar18 + 4;
          *(undefined4 *)lVar18 = (int)uVar8;
          lVar17 = lVar17 + 1;
          puVar12 = (undefined4 *)(iVar6 + 0x80U & 0xfffffff0);
          uVar21 = puVar12[1];
          uVar23 = puVar12[2];
          uVar24 = puVar12[3];
          puVar2 = (undefined4 *)(iVar3 + (int)lVar9 & 0xfffffff0);
          *puVar2 = *puVar12;
          puVar2[1] = uVar21;
          puVar2[2] = uVar23;
          puVar2[3] = uVar24;
          lVar9 = lVar9 + 0x10;
          goto LAB_823e7964;
        }
LAB_823e796c:
        if (param_3 == iVar6) goto LAB_823e7974;
      }
      uVar8 = uVar8 + 1;
      lVar20 = lVar20 + 0x10;
    } while ((uVar8 & 0xffffffff) < (ulonglong)uVar7);
  }
  uVar21 = 0xffffffff;
  if ((param_3 != 0) && (param_4 != (undefined4 *)0x0)) {
    uVar8 = (**(code **)*param_4)(param_4,param_3,uVar4 - 0x1d0,uVar4 - 0x280,uVar22);
    uVar22 = uVar22 - 1;
    iVar3 = (int)((uVar8 & 0xffffffff) << 2);
    iVar1 = (int)((uVar22 & 0xffffffff) << 4);
    iVar6 = (int)((uVar8 & 0xffffffff) << 4);
    uVar21 = *(undefined4 *)((int)auStack_280 + iVar3);
    uVar23 = *(undefined4 *)((int)auStack_1d0 + iVar1);
    uVar24 = *(undefined4 *)((int)auStack_1d0 + iVar1 + 4);
    uVar25 = *(undefined4 *)((int)auStack_1d0 + iVar1 + 8);
    uVar26 = *(undefined4 *)((int)auStack_1d0 + iVar1 + 0xc);
    *(undefined4 *)((int)auStack_280 + iVar3) =
         *(undefined4 *)((int)auStack_280 + (int)((uVar22 & 0xffffffff) << 2));
    *(undefined4 *)((int)auStack_1d0 + iVar6) = uVar23;
    *(undefined4 *)((int)auStack_1d0 + iVar6 + 4) = uVar24;
    *(undefined4 *)((int)auStack_1d0 + iVar6 + 8) = uVar25;
    *(undefined4 *)((int)auStack_1d0 + iVar6 + 0xc) = uVar26;
  }
  lVar11 = uVar4 - 0x244;
  lVar18 = 7;
  do {
    *(undefined4 *)((int)lVar11 + 4) = 0;
    lVar11 = lVar11 + 8;
    *(undefined4 *)lVar11 = 0;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  uVar7 = fn_823DC098(uVar4 - 0x160,lVar17,uVar4 - 0x1d0,uVar22,uVar4 - 0x240);
  uVar8 = 0;
  puVar12 = param_5;
  if (*(int *)(*(int *)(param_2[4] * 4 + *param_2) + 8) != 0) {
    do {
      puVar12 = puVar12 + 1;
      if ((param_3 == 0) || ((uVar8 & 0xffffffff) != (ulonglong)*(uint *)(param_3 + 0x28))) {
        if ((uVar8 & 0xffffffff) == (uVar16 & 0xffffffff)) {
          *puVar12 = 0;
        }
        else {
          uVar15 = 0;
          uVar14 = 0xffffffff;
          if (uVar7 != 0) {
            lVar11 = uVar4 - 0x240;
            do {
              uVar14 = uVar15;
              if ((ulonglong)auStack_260[*(int *)lVar11] == (uVar8 & 0xffffffff)) break;
              uVar15 = uVar15 + 1;
              lVar11 = lVar11 + 8;
              uVar14 = 0xffffffff;
            } while (uVar15 < uVar7);
          }
          *puVar12 = auStack_280[aiStack_23c[uVar14 * 2]];
        }
      }
      else {
        *puVar12 = uVar21;
      }
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xffffffff) < (ulonglong)*(uint *)(*(int *)(param_2[4] * 4 + *param_2) + 8));
  }
  *param_5 = param_1;
  return;
}

