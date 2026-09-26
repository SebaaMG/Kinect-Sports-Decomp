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
extern unsigned int *auStack_8c;
extern unsigned int *auStack_a8;
extern int fn_8267BE38();
extern int fn_82683F88();
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268B330();
extern int fn_8268C750();
extern int fn_826C6368();
extern int fn_8273E568();
extern int fn_82753670();
extern int fn_827553F0();
extern int fn_8278B850();
extern int fn_8278C028();
extern int fn_8278CE30();
extern int fn_8279E230();
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_90;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern U64 storeWordConditionalIndexed();


int fn_8279E2A8(int param_1,int *param_2,char param_3)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  bool bVar7;
  char cVar13;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  undefined8 uVar8;
  uint *puVar12;
  ulonglong uVar14;
  longlong lVar15;
  int *piVar16;
  int *piVar17;
  char in_RESERVE;
  byte bVar18;
  uint uStack_b0;
  uint uStack_ac;
  uint auStack_a8 [2];
  int *piStack_a0;
  int *piStack_9c;
  undefined4 uStack_90;
  uint auStack_8c [35];
  
  piVar16 = param_2 + 3;
  piVar17 = (int *)0x0;
  if ((param_2[3] != 0) && (param_2[2] != 0)) {
    cVar13 = fn_8278B850(param_2[1]);
    if (cVar13 != '\0') goto LAB_8279e6e8;
  }
  if (*param_2 != 0) {
    iVar9 = fn_8273E568(*param_2,param_2 + 1);
    piVar17 = (int *)(-(uint)(iVar9 != 0) & iVar9 + 4U);
  }
  if (piVar17 != (int *)0x0) {
    piVar10 = (int *)*piVar17;
    if (piVar10 != (int *)0x0) {
      *piVar10 = *piVar10 + 1;
    }
    puVar11 = (uint *)*piVar16;
    if (puVar11 != (uint *)0x0) {
      uVar4 = *puVar11;
      *puVar11 = (uint)((ulonglong)uVar4 - 1);
      if ((ulonglong)uVar4 - 1 == 0) {
        fn_826C6368(puVar11);
        fn_8267BE38(puVar11);
      }
    }
    *piVar16 = *piVar17;
    goto LAB_8279e6e8;
  }
  piVar17 = param_2 + 1;
  uVar3 = *(ushort *)(param_2[1] + 0x2a);
  if ((uVar3 >> 0xb & 1) == 0) {
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    if ((uVar3 >> 2 & 1) != 0) {
      bVar18 = *(byte *)(param_2[1] + 0x28);
      bVar2 = *(byte *)(param_1 + 0x13d);
      puVar11 = (uint *)fn_8278C028();
      iVar9 = fn_827553F0(uVar5,((ulonglong)*puVar11 & 0xfffffffc) + 8,
                                -((bVar18 & 1) != 0) & 2U | (bVar18 >> 1 & 1) != 0 |
                                -((bVar2 >> 5 & 1) != 0) & 0x10U,(uVar3 >> 0xc & 1) == 0,0);
      puVar11 = (uint *)*piVar16;
      if (puVar11 != (uint *)0x0) {
        uVar4 = *puVar11;
        *puVar11 = (uint)((ulonglong)uVar4 - 1);
        if ((ulonglong)uVar4 - 1 == 0) {
          fn_826C6368(puVar11);
          fn_8267BE38(puVar11);
        }
      }
      *piVar16 = iVar9;
    }
    if (*piVar16 == 0) {
      if (((param_3 == '\0') && ((*(byte *)(param_1 + 0x13f) & 0x10) == 0)) &&
         (*(int *)(param_1 + 0x134) != 0)) {
        uStack_90 = 1;
        fn_8268AFB0(auStack_8c,lbl_831E7E64);
        bVar18 = *(byte *)(param_1 + 0x13d);
        uVar3 = *(ushort *)(*piVar17 + 0x2a);
        bVar2 = *(byte *)(*piVar17 + 0x28);
        puVar11 = (uint *)fn_8278C028();
        puVar11 = (uint *)fn_827553F0(uVar5,((ulonglong)*puVar11 & 0xfffffffc) + 8,
                                            -((bVar2 & 1) != 0) & 2U | (bVar2 >> 1 & 1) != 0 |
                                            -((bVar18 >> 5 & 1) != 0) & 0x10U,
                                            (uVar3 >> 0xc & 1) == 0,&uStack_90);
        bVar1 = *(int **)(param_1 + 0x10) == (int *)0x0;
        if (bVar1) {
          uVar8 = fn_8268B330(&uStack_ac);
        }
        else {
          uVar8 = (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(auStack_a8);
        }
        fn_8268C750(&uStack_b0,uVar8);
        bVar7 = !bVar1;
        if (!bVar7) {
          lVar15 = ((ulonglong)uStack_ac & 0xfffffffc) + 4;
          do {
            puVar12 = (uint *)lVar15;
            uVar14 = (ulonglong)*puVar12;
            if (in_RESERVE != '\0') {
              uVar4 = storeWordConditionalIndexed(uVar14 - 1,0,lVar15);
              *puVar12 = uVar4;
              bVar7 = true;
            }
          } while (!bVar7);
          if (uVar14 == 1) {
            fn_8267BE38();
          }
        }
        bVar18 = bVar1 << 1;
        if (!bVar1) {
          lVar15 = ((ulonglong)auStack_a8[0] & 0xfffffffc) + 4;
          do {
            puVar12 = (uint *)lVar15;
            uVar14 = (ulonglong)*puVar12;
            if (in_RESERVE != '\0') {
              uVar4 = storeWordConditionalIndexed(uVar14 - 1,0,lVar15);
              *puVar12 = uVar4;
              bVar18 = 2;
            }
          } while (!(bool)(bVar18 >> 1));
          bVar18 = (uVar14 == 1) << 1;
          if (uVar14 == 1) {
            fn_8267BE38();
          }
        }
        uVar14 = (ulonglong)auStack_8c[0];
        if (uVar14 == 0) {
          uVar14 = 0xffffffff82196582;
        }
        uVar6 = (ulonglong)uStack_b0;
        puVar12 = (uint *)fn_8278C028(*piVar17);
        fn_82683F88((ulonglong)*(uint *)(param_1 + 0x134) + 0xc,0xffffffff82015b48,
                          ((ulonglong)*puVar12 & 0xfffffffc) + 8,(uVar6 & 0xfffffffc) + 8,uVar14);
        *(byte *)(param_1 + 0x13f) = *(byte *)(param_1 + 0x13f) | 0x10;
        lVar15 = ((ulonglong)uStack_b0 & 0xfffffffc) + 4;
        do {
          puVar12 = (uint *)lVar15;
          uVar14 = (ulonglong)*puVar12;
          if (in_RESERVE != '\0') {
            uVar4 = storeWordConditionalIndexed(uVar14 - 1,0,lVar15);
            *puVar12 = uVar4;
            bVar18 = 2;
          }
        } while (!(bool)(bVar18 >> 1 & 1));
        if (uVar14 == 1) {
          fn_8267BE38();
        }
        if (puVar11 != (uint *)0x0) {
          uVar4 = *puVar11;
          *puVar11 = (uint)((ulonglong)uVar4 - 1);
          if ((ulonglong)uVar4 - 1 == 0) {
            fn_826C6368(puVar11);
            fn_8267BE38(puVar11);
          }
        }
        fn_8268AFD8(auStack_8c);
      }
      piVar10 = (int *)fn_82753670(uVar5);
      puVar11 = (uint *)*piVar16;
      goto LAB_8279e69c;
    }
  }
  else {
    piVar10 = (int *)fn_8278CE30();
    if (piVar10 != (int *)0x0) {
      *piVar10 = *piVar10 + 1;
    }
    puVar11 = (uint *)*piVar16;
LAB_8279e69c:
    if (puVar11 != (uint *)0x0) {
      uVar4 = *puVar11;
      *puVar11 = (uint)((ulonglong)uVar4 - 1);
      if ((ulonglong)uVar4 - 1 == 0) {
        fn_826C6368(puVar11);
        fn_8267BE38(puVar11);
      }
    }
    *piVar16 = (int)piVar10;
  }
  iVar9 = *param_2;
  if (iVar9 != 0) {
    piStack_a0 = piVar17;
    piStack_9c = piVar16;
    fn_8279E230(iVar9,*(undefined4 *)(iVar9 + 4),&piStack_a0);
  }
LAB_8279e6e8:
  param_2[2] = param_2[1];
  return *piVar16;
}

