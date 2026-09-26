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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_826826A8();
extern int fn_82683270();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82694738();
extern int fn_82695DA0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_826ADE60();
extern int fn_826AEA50();


undefined8
fn_826AEC60(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,char *param_5,
             undefined8 *param_6,undefined8 param_7)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar6;
  undefined8 uVar5;
  ulonglong uVar7;
  undefined1 uVar9;
  uint uVar8;
  longlong lVar10;
  undefined1 *puVar12;
  ulonglong uVar11;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  char *pcVar17;
  char *pcVar18;
  ulonglong uVar19;
  uint *puVar20;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [176];
  
  lVar16 = 0;
  if (param_5 != (char *)0x0) {
    puVar20 = (uint *)(param_4 + 8);
    lVar16 = (longlong)*param_5;
    lVar10 = (longlong)(*(int *)(param_4 + 8) - *(int *)(param_4 + 0xc) >> 4) +
             ((ulonglong)*(uint *)(param_4 + 0x1c) & 0x7ffffff) * 0x20;
    lVar13 = lVar10 + -0x20;
    if (lVar16 != 0) {
      pcVar18 = param_5;
      do {
        pcVar17 = pcVar18 + 1;
        if ((int)lVar16 != 0x25) {
          uVar5 = 0xffffffff820076fc;
          goto LAB_826aef98;
        }
        cVar1 = *pcVar17;
        pcVar17 = pcVar18 + 2;
        if (cVar1 == 'd') {
          uVar8 = *puVar20;
          uVar3 = (int)param_6 + 7U & 0xfffffff8;
          *puVar20 = uVar8 + 0x10;
          param_6 = (undefined8 *)(uVar3 + 8);
          if (*(uint *)(param_4 + 0x10) <= uVar8 + 0x10) {
            fn_826826A8(puVar20);
          }
          puVar12 = (undefined1 *)*puVar20;
          if (puVar12 != (undefined1 *)0x0) {
            uVar2 = *(undefined4 *)(uVar3 + 4);
            *puVar12 = 4;
            *(undefined4 *)(puVar12 + 8) = uVar2;
          }
        }
        else if (cVar1 == 'u') {
          uVar8 = *puVar20;
          auStack_c0[0] = 0;
          *puVar20 = uVar8 + 0x10;
          if (*(uint *)(param_4 + 0x10) <= uVar8 + 0x10) {
            fn_826826A8(puVar20);
          }
          if (*puVar20 != 0) {
            fn_82695DA0(*puVar20,auStack_c0);
          }
          fn_82696330(auStack_c0);
        }
        else if (cVar1 == 'n') {
          uVar8 = *puVar20;
          *puVar20 = uVar8 + 0x10;
          if (*(uint *)(param_4 + 0x10) <= uVar8 + 0x10) {
            fn_826826A8(puVar20);
          }
          puVar12 = (undefined1 *)*puVar20;
          if (puVar12 != (undefined1 *)0x0) {
            uVar9 = 1;
LAB_826aee3c:
            *puVar12 = uVar9;
          }
        }
        else if (cVar1 == 'b') {
          uVar8 = *puVar20;
          uVar3 = (int)param_6 + 7U & 0xfffffff8;
          param_6 = (undefined8 *)(uVar3 + 8);
          iVar6 = *(int *)(uVar3 + 4);
          *puVar20 = uVar8 + 0x10;
          if (*(uint *)(param_4 + 0x10) <= uVar8 + 0x10) {
            fn_826826A8(puVar20);
          }
          puVar12 = (undefined1 *)*puVar20;
          if (puVar12 != (undefined1 *)0x0) {
            uVar9 = 2;
            puVar12[4] = '\x01' - (iVar6 == 0);
            goto LAB_826aee3c;
          }
        }
        else {
          if (cVar1 != 'f') {
            if (cVar1 != 'h') {
              if (cVar1 == 's') {
                uVar8 = (int)param_6 + 7U & 0xfffffff8;
                iVar6 = fn_82694700((ulonglong)*(uint *)(param_4 + 0x78) + 0x254,
                                     *(undefined4 *)(uVar8 + 4));
LAB_826aeedc:
                param_6 = (undefined8 *)(uVar8 + 8);
                *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
                uVar8 = *puVar20;
                *puVar20 = uVar8 + 0x10;
                if (*(uint *)(param_4 + 0x10) <= uVar8 + 0x10) {
                  fn_826826A8(puVar20);
                }
                puVar12 = (undefined1 *)*puVar20;
                if (puVar12 != (undefined1 *)0x0) {
                  *(int *)(puVar12 + 4) = iVar6;
                  *puVar12 = 5;
                  *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
                }
                lVar16 = (ulonglong)*(uint *)(iVar6 + 8) - 1;
                *(int *)(iVar6 + 8) = (int)lVar16;
                if (lVar16 == 0) {
                  fn_826944C8(iVar6);
                }
              }
              else {
                if (cVar1 == 'l') {
                  cVar1 = *pcVar17;
                  pcVar17 = pcVar18 + 3;
                  if (cVar1 == 's') {
                    uVar8 = (int)param_6 + 7U & 0xfffffff8;
                    iVar6 = fn_82694738((ulonglong)*(uint *)(param_4 + 0x78) + 0x254,
                                              *(undefined4 *)(uVar8 + 4));
                    goto LAB_826aeedc;
                  }
                  uVar5 = 0xffffffff82007688;
                }
                else {
                  uVar5 = 0xffffffff820076c4;
                }
LAB_826aef98:
                fn_826ADE60(param_4,uVar5,param_7,param_5);
              }
              goto LAB_826aefa8;
            }
            cVar1 = *pcVar17;
            pcVar17 = pcVar18 + 3;
            uVar5 = 0xffffffff8200764c;
            if (cVar1 != 'f') goto LAB_826aef98;
          }
          uVar8 = *puVar20;
          puVar4 = (undefined8 *)((int)param_6 + 7U & 0xfffffff8);
          param_6 = puVar4 + 1;
          uVar5 = *puVar4;
          *puVar20 = uVar8 + 0x10;
          if (*(uint *)(param_4 + 0x10) <= uVar8 + 0x10) {
            fn_826826A8(puVar20);
          }
          puVar12 = (undefined1 *)*puVar20;
          if (puVar12 != (undefined1 *)0x0) {
            *(undefined8 *)(puVar12 + 8) = uVar5;
            *puVar12 = 3;
          }
        }
LAB_826aefa8:
        cVar1 = *pcVar17;
        pcVar18 = pcVar17;
        while ((cVar1 != '\0' && (((cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == ','))))) {
          pcVar18 = pcVar18 + 1;
          cVar1 = *pcVar18;
        }
        lVar16 = (longlong)cVar1;
      } while (lVar16 != 0);
    }
    lVar14 = 0;
    lVar16 = (((longlong)((int)(*puVar20 - *(int *)(param_4 + 0xc)) >> 4) +
              ((ulonglong)*(uint *)(param_4 + 0x1c) & 0x7ffffff) * 0x20) - lVar13) + -0x20;
    iVar6 = (int)lVar16 >> 1;
    if (0 < iVar6) {
      uVar19 = lVar13 + lVar16;
      do {
        uVar7 = lVar10 + -0x1f + lVar14;
        lVar13 = 0;
        uVar11 = (longlong)((int)(*puVar20 - *(int *)(param_4 + 0xc)) >> 4) +
                 ((ulonglong)*(uint *)(param_4 + 0x1c) - 1 & 0x7ffffff) * 0x20;
        if ((uVar19 & 0xffffffff) <= (uVar11 & 0xffffffff)) {
          lVar13 = (ulonglong)*(uint *)(((uint)uVar19 >> 3 & 0x1ffffffc) + *(int *)(param_4 + 0x18))
                   + (uVar19 & 0x1f) * 0x10;
        }
        lVar15 = 0;
        if ((uVar7 & 0xffffffff) <= (uVar11 & 0xffffffff)) {
          lVar15 = (ulonglong)
                   *(uint *)(((uint)((uVar7 & 0xffffffff) >> 3) & 0x1ffffffc) +
                            *(int *)(param_4 + 0x18)) + (uVar7 & 0x1f) * 0x10;
        }
        fn_82695DA0(auStack_b0,lVar15);
        fn_82695FA0(lVar15,lVar13);
        fn_82695FA0(lVar13,auStack_b0);
        fn_82696330(auStack_b0);
        lVar14 = lVar14 + 1;
        uVar19 = uVar19 - 1;
      } while ((int)lVar14 < iVar6);
    }
  }
  uVar5 = fn_826AEA50(param_1,param_2,param_3,param_4,lVar16,
                        (longlong)(*(int *)(param_4 + 8) - *(int *)(param_4 + 0xc) >> 4) +
                        ((ulonglong)*(uint *)(param_4 + 0x1c) & 0x7ffffff) * 0x20 + -0x20,param_7);
  fn_82683270(param_4 + 8,lVar16);
  return uVar5;
}

