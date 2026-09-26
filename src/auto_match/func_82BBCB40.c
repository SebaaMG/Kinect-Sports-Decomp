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
extern unsigned int *auStack_ac;
extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82BAF540();
extern int fn_82BAF560();
extern int fn_82BBC038();
extern int fn_82BBC410();
extern int fn_82BBC4C0();
extern int fn_82BBC618();
extern int fn_82BC0088();
extern int fn_82BC37B8();
extern int fn_82BC5538();
extern int fn_82F6C420();
extern unsigned int uStack_a1;
extern unsigned int uStack_b0;


longlong fn_82BBCB40(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar8;
  char cVar9;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar4;
  int iVar7;
  longlong lVar10;
  bool bVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar18;
  longlong lVar17;
  int *piVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined4 uStack_b0;
  undefined4 auStack_ac [2];
  undefined1 uStack_a1;
  char acStack_a0 [160];
  
  iVar7 = (int)param_1;
  lVar15 = 0;
  if (*(char *)(iVar7 + 0x750) == '\0') {
    if ((param_4 < param_5) && ((param_3 == 0x13 || (param_3 == 0x21)))) {
      iVar18 = 0;
      lVar10 = param_1 + 0x410;
      do {
        if (((((int *)lVar10)[-0x10] == param_3) && (iVar5 = *(int *)lVar10, param_4 <= iVar5)) &&
           (iVar5 < param_5)) {
          param_4 = *(int *)((iVar18 + 0x104) * 4 + iVar7) - param_4;
          iVar5 = param_4 + iVar7;
          if ((*(char *)(iVar5 + 0x380) != '\0') || (*(char *)(iVar18 + iVar7 + 0x380) != '\0')) {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0e1c,0xffffffff820e0c10,0x150);
          }
          fn_82BBC618(param_1,param_2,iVar18,param_4);
          *(undefined1 *)(iVar5 + 0x380) = 1;
          break;
        }
        iVar18 = iVar18 + 1;
        lVar10 = lVar10 + 4;
      } while (iVar18 < 0x10);
    }
    lVar21 = param_1 + 0x3d0;
    lVar10 = 0;
    do {
      lVar14 = lVar10 + 1;
      lVar17 = lVar14;
      iVar7 = (int)lVar14;
      while (iVar7 < 0x10) {
        iVar7 = fn_82BBC038(param_1,lVar10,lVar17);
        if (iVar7 < 0) {
          fn_82BBC618(param_1,param_2,lVar10);
        }
        lVar17 = lVar17 + 1;
        iVar7 = (int)lVar17;
      }
      if ((((int *)lVar21)[-0x10] != 0) && (*(int *)lVar21 != 0x12)) {
        lVar15 = lVar10;
      }
      lVar21 = lVar21 + 4;
      lVar10 = lVar14;
    } while ((int)lVar14 < 0xf);
  }
  else {
    puVar12 = &uStack_a1;
    uVar16 = 0;
    lVar10 = param_1 + 0x410;
    lVar21 = 0x10;
    do {
      puVar12 = puVar12 + 1;
      *puVar12 = 0;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 0x10;
    do {
      if ((((uint *)lVar10)[-0x10] == 0x21) &&
         (uVar13 = (ulonglong)*(uint *)lVar10 + 1, (int)uVar16 < (int)uVar13)) {
        uVar16 = uVar13;
      }
      lVar10 = lVar10 + 4;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    iVar18 = 0;
    do {
      cVar8 = fn_82BBC410(param_1,iVar18);
      if (cVar8 != '\0') {
        if (acStack_a0[iVar18] != '\0') {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0f10,0xffffffff820e0c10,0xd2);
        }
        lVar10 = fn_82BBC4C0(param_1,iVar18);
        if (-1 < lVar10) {
          iVar5 = (int)lVar10;
          if (acStack_a0[iVar5] != '\0') {
            iVar7 = *(int *)(iVar7 + 0x754);
            *(undefined4 *)(iVar7 + 0x554) = 0x18;
                    /* WARNING: Subroutine does not return */
            fn_82F6C420(iVar7 + 0x10,1);
          }
          if (iVar5 != iVar18) {
            if ((*(char *)(iVar7 + 0x380 + iVar18) != '\0') ||
               (*(char *)(iVar7 + 0x380 + iVar5) != '\0')) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0f24,0xffffffff820e0c10,0xd9);
            }
            fn_82BBC618(param_1,param_2,iVar18,lVar10);
          }
          acStack_a0[iVar18] = '\x01';
        }
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < 0x10);
    lVar21 = 0;
    lVar17 = param_1 + 0x390;
    lVar10 = -0x370 - param_1;
    do {
      iVar18 = (int)lVar21;
      cVar8 = acStack_a0[iVar18];
      piVar19 = (int *)lVar17;
      if ((cVar8 == '\0') && (*piVar19 != 0)) {
        piVar1 = *(int **)(*piVar19 + 0x38);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x60))();
        }
        *piVar19 = 0;
      }
      cVar9 = fn_82BBC410(param_1,lVar21);
      if (cVar9 != '\0') {
        iVar5 = piVar19[-0xe4];
        if (iVar5 != 0x12) {
          lVar15 = lVar21;
        }
        if (cVar8 == '\0') {
          bVar11 = false;
          lVar14 = 0;
          lVar22 = 4;
          do {
            iVar3 = *(int *)((int)((lVar10 + lVar17 + lVar14 & 0xffffffffU) << 2) + iVar7);
            if (iVar3 == 2) {
              bVar11 = true;
LAB_82bbcd64:
              *(undefined1 *)((int)auStack_ac + (int)lVar14 + -4) = 2;
            }
            else {
              if (iVar3 != 4) goto LAB_82bbcd64;
              bVar11 = true;
              *(undefined1 *)((int)auStack_ac + (int)lVar14 + -4) = 3;
            }
            lVar14 = lVar14 + 1;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          if (bVar11) {
            if (iVar5 == 0x21) {
              uVar13 = uVar16 + 1;
              uVar20 = uVar16;
            }
            else {
              uVar20 = (ulonglong)(uint)piVar19[-0xd4];
              uVar13 = uVar16;
            }
            iVar5 = fn_82BAF540(*(undefined4 *)(param_2 + 0xac),iVar5,uVar20);
            if (iVar5 != 0) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0e58,0xffffffff820e0c10,0x11a);
            }
            iVar5 = fn_82BAF560(*(undefined4 *)(param_2 + 0xac),piVar19[-0xe4],uVar20);
            if (*(int *)(iVar5 + 0x10) != iVar18) {
              if ((*(char *)(iVar18 + iVar7 + 0x380) != '\0') ||
                 (*(char *)(*(int *)(iVar5 + 0x10) + iVar7 + 0x380) != '\0')) {
                fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0ea8,0xffffffff820e0c10,0x120);
              }
              fn_82BBC618(param_1,param_2,lVar21,*(undefined4 *)(iVar5 + 0x10));
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar7 + 0x754) + 0x5ac);
            puVar6 = (undefined4 *)fn_82B7BD28(uVar2,0x3c4);
            *puVar6 = uVar2;
            if (puVar6 + 1 == (undefined4 *)0x0) {
              uVar4 = 0;
            }
            else {
              uVar4 = fn_82BC37B8(puVar6 + 1,iVar5,uStack_b0,*(undefined4 *)(iVar7 + 0x754));
            }
            fn_82BC5538(*(undefined4 *)(param_2 + 0xa8),uVar4);
            puVar6 = (undefined4 *)
                     fn_82BC0088(*(int *)(param_2 + 0x60),
                                       *(undefined4 *)(*(int *)(param_2 + 0x60) + 4));
            *puVar6 = (int)uVar4;
            uVar16 = uVar13;
          }
        }
        else {
          if (*piVar19 == 0) {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0ef4,0xffffffff820e0c10,0x129);
          }
          iVar18 = *(int *)(*piVar19 + 0x38);
          if (iVar18 == 0) {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0f04,0xffffffff820e0c10,0x12d);
          }
          auStack_ac[0] = *(undefined4 *)(iVar18 + 0x80);
          lVar14 = 0;
          lVar22 = 4;
          do {
            iVar5 = (int)lVar14;
            if (*(char *)((int)auStack_ac + iVar5) == '\x01') {
              iVar3 = *(int *)((int)((lVar10 + lVar17 + lVar14 & 0xffffffffU) << 2) + iVar7);
              if (iVar3 == 2) {
LAB_82bbcf80:
                *(undefined1 *)((int)auStack_ac + iVar5) = 2;
              }
              else {
                *(char *)((int)auStack_ac + iVar5) = (iVar3 == 4) + '\x02';
              }
            }
            else if ((*(char *)((int)auStack_ac + iVar5) == '\0') &&
                    (*(int *)((int)((lVar10 + lVar17 + lVar14 & 0xffffffffU) << 2) + iVar7) == 0))
            goto LAB_82bbcf80;
            lVar14 = lVar14 + 1;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          *(undefined4 *)(iVar18 + 0x80) = auStack_ac[0];
        }
      }
      lVar21 = lVar21 + 1;
      lVar17 = lVar17 + 4;
    } while ((int)lVar21 < 0x10);
  }
  return lVar15;
}

