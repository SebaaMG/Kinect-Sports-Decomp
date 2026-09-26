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
extern unsigned int *auStack_c0;
extern int fn_82C94500();
extern int fn_82C947D0();
extern int fn_82C948D8();
extern int fn_82C94E60();
extern int fn_82CB2190();
extern unsigned int *iStack00000044;
extern unsigned int iStack_c4;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


undefined8
fn_82C97A60(int param_1,uint *param_2,longlong param_3,undefined4 param_4,undefined4 param_5,
             int param_6,int param_7)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  longlong lVar15;
  undefined4 uStack0000002c;
  undefined4 uStack00000034;
  int iStack00000044;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined1 auStack_c0 [192];
  
  if ((*(int *)(param_1 + 0x11c) != 0) || (bVar2 = true, *(int *)(param_1 + 0x55b4) != 0)) {
    bVar2 = false;
  }
  if (*(int *)(param_1 + 0x18c) == 0) {
    iStack_c4 = param_1 + 0xb64;
    iVar8 = param_1 + 0xb70;
  }
  else {
    uVar12 = *param_2 >> 0x16 & 3;
    iStack_c4 = (uVar12 + 0x2df) * 4 + param_1;
    iVar8 = (uVar12 + 0x2e2) * 4 + param_1;
  }
  uVar12 = 0;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  iStack00000044 = param_7;
  do {
    uVar11 = uVar12;
    uVar1 = *(undefined1 *)((int)param_2 + uVar11 + 0xe);
    iVar14 = param_6 * 2 + (uVar11 & 1);
    iVar6 = *(int *)(param_1 + 0x6ec);
    iVar4 = ((int)uVar11 >> 1 & 1U) + param_7 * 2;
    puVar13 = (undefined1 *)0x0;
    iVar5 = (*(int *)(param_1 + 0x88) * iVar4 * 2 + iVar14) * 0x20 + *(int *)(param_1 + 0x1d0);
    if (bVar2) {
      fn_82C947D0();
      uVar3 = fn_82CB2190(param_1,iVar8,uVar11,uVar1,uStack_c8,uStack_cc,uStack_d0,iVar5);
    }
    else {
      iVar4 = fn_82C94500(param_1,param_2,iVar5,uVar11,iVar14,iVar4,&uStack_d0,&uStack_cc);
      if (iVar4 != 0) {
        puVar13 = auStack_c0;
      }
      uVar3 = fn_82CB2190(param_1,iVar8,uVar11,uVar1,puVar13,uStack_cc,uStack_d0,iVar5);
    }
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if ((*(uint *)(param_1 + 0xbbc) & 1) != 0) {
      uVar12 = *(uint *)(param_1 + 0x88);
      lVar15 = 8;
      iVar5 = ((uVar11 & 2) + 0x2f2) * 4;
      iVar4 = iVar14 * 8;
      puVar7 = (undefined2 *)(iVar6 + -2);
      puVar10 = (undefined2 *)(iVar14 * 0x10 + *(int *)(iVar5 + param_1) + -2);
      do {
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      lVar15 = 8;
      puVar7 = (undefined2 *)(iVar6 + 0xe);
      puVar10 = (undefined2 *)((uVar12 * 0x10 + iVar4) * 2 + *(int *)(iVar5 + param_1) + -2);
      do {
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      lVar15 = 8;
      puVar7 = (undefined2 *)(iVar6 + 0x1e);
      puVar10 = (undefined2 *)((uVar12 * 0x20 + iVar4) * 2 + *(int *)(iVar5 + param_1) + -2);
      do {
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      lVar15 = 8;
      puVar7 = (undefined2 *)(iVar6 + 0x2e);
      puVar10 = (undefined2 *)((uVar12 * 0x30 + iVar4) * 2 + *(int *)(iVar5 + param_1) + -2);
      do {
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      lVar15 = 8;
      puVar7 = (undefined2 *)(iVar6 + 0x3e);
      puVar10 = (undefined2 *)((uVar12 * 0x40 + iVar4) * 2 + *(int *)(iVar5 + param_1) + -2);
      do {
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      lVar15 = 8;
      puVar7 = (undefined2 *)(iVar6 + 0x4e);
      puVar10 = (undefined2 *)((uVar12 * 0x50 + iVar4) * 2 + *(int *)(iVar5 + param_1) + -2);
      do {
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      lVar15 = 8;
      puVar7 = (undefined2 *)(iVar6 + 0x5e);
      puVar10 = (undefined2 *)((uVar12 * 0x60 + iVar4) * 2 + *(int *)(iVar5 + param_1) + -2);
      do {
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      lVar15 = 8;
      puVar7 = (undefined2 *)(iVar6 + 0x6e);
      puVar10 = (undefined2 *)
                ((uVar12 * 0x80 + (uVar12 & 0xfffffff) * -0x10 + iVar4) * 2 +
                 *(int *)(iVar5 + param_1) + -2);
      do {
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    (**(code **)(param_1 + 0xc74))
              (param_3,param_3,iVar6,*(undefined4 *)(param_1 + 0xcc),
               *(undefined4 *)(param_1 + 0x108));
    iVar6 = iStack00000044;
    *(undefined1 *)((int)param_2 + uVar11 + 8) = 0;
    if ((uVar11 & 1) == 0) {
      uVar9 = 8;
    }
    else {
      uVar9 = (ulonglong)*(uint *)(param_1 + 0xec);
    }
    uVar12 = uVar11 + 1;
    param_3 = uVar9 + param_3;
  } while ((int)uVar12 < 4);
  puVar13 = (undefined1 *)0x0;
  iVar8 = (*(int *)(param_1 + 0x88) * iStack00000044 + param_6) * 0x20 + *(int *)(param_1 + 0x1d4);
  if (bVar2) {
    fn_82C94E60();
    iVar4 = iStack_c4;
    iVar5 = *(int *)(param_1 + 0x6ec);
    uVar3 = fn_82CB2190(param_1,iStack_c4,uVar12,*(undefined1 *)((int)param_2 + 0x12),
                              uStack_c8,uStack_cc,uStack_d0,iVar8);
  }
  else {
    iVar5 = fn_82C948D8(param_1,param_2,iVar8,param_6,iStack00000044,&uStack_d0,&uStack_cc,
                          auStack_c0);
    iVar4 = iStack_c4;
    if (iVar5 != 0) {
      puVar13 = auStack_c0;
    }
    iVar5 = *(int *)(param_1 + 0x6ec);
    uVar3 = fn_82CB2190(param_1,iStack_c4,uVar12,*(undefined1 *)((int)param_2 + 0x12),puVar13,
                              uStack_cc,uStack_d0,iVar8);
  }
  if ((int)uVar3 == 0) {
    if ((*(uint *)(param_1 + 0xbbc) & 1) != 0) {
      uVar12 = *(uint *)(param_1 + 0x88);
      lVar15 = 8;
      puVar7 = (undefined2 *)(iVar5 + -2);
      iVar8 = param_6 * 8;
      puVar10 = (undefined2 *)(param_6 * 0x10 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      lVar15 = 8;
      puVar7 = (undefined2 *)(iVar5 + 0xe);
      puVar10 = (undefined2 *)((uVar12 * 8 + iVar8) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      lVar15 = 8;
      puVar7 = (undefined2 *)(iVar5 + 0x1e);
      puVar10 = (undefined2 *)((uVar12 * 0x10 + iVar8) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      lVar15 = 8;
      puVar7 = (undefined2 *)(iVar5 + 0x2e);
      puVar10 = (undefined2 *)((uVar12 * 0x18 + iVar8) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      lVar15 = 8;
      puVar7 = (undefined2 *)(iVar5 + 0x3e);
      puVar10 = (undefined2 *)((uVar12 * 0x20 + iVar8) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      lVar15 = 8;
      puVar7 = (undefined2 *)(iVar5 + 0x4e);
      puVar10 = (undefined2 *)((uVar12 * 0x28 + iVar8) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      lVar15 = 8;
      puVar7 = (undefined2 *)(iVar5 + 0x5e);
      puVar10 = (undefined2 *)((uVar12 * 0x30 + iVar8) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      lVar15 = 8;
      puVar7 = (undefined2 *)(iVar5 + 0x6e);
      puVar10 = (undefined2 *)
                ((uVar12 * 0x40 + (uVar12 & 0x1fffffff) * -8 + iVar8) * 2 +
                 *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    (**(code **)(param_1 + 0xc74))
              (uStack0000002c,uStack0000002c,iVar5,*(undefined4 *)(param_1 + 0xd0),
               *(undefined4 *)(param_1 + 0x108));
    *(undefined1 *)(param_2 + 3) = 0;
    puVar13 = (undefined1 *)0x0;
    iVar8 = (*(int *)(param_1 + 0x88) * iVar6 + param_6) * 0x20 + *(int *)(param_1 + 0x1d8);
    if (bVar2) {
      fn_82C94E60();
      iVar6 = *(int *)(param_1 + 0x6ec);
      uVar3 = fn_82CB2190(param_1,iVar4,uVar11 + 2,*(undefined1 *)((int)param_2 + 0x13),
                                uStack_c8,uStack_cc,uStack_d0,iVar8);
    }
    else {
      iVar6 = fn_82C948D8(param_1,param_2,iVar8,param_6,iVar6,&uStack_d0,&uStack_cc,auStack_c0);
      if (iVar6 != 0) {
        puVar13 = auStack_c0;
      }
      iVar6 = *(int *)(param_1 + 0x6ec);
      uVar3 = fn_82CB2190(param_1,iVar4,uVar11 + 2,*(undefined1 *)((int)param_2 + 0x13),
                                puVar13,uStack_cc,uStack_d0,iVar8);
    }
    if ((int)uVar3 == 0) {
      if ((*(uint *)(param_1 + 0xbbc) & 1) != 0) {
        uVar12 = *(uint *)(param_1 + 0x88);
        lVar15 = 8;
        puVar7 = (undefined2 *)(iVar6 + -2);
        iVar8 = param_6 * 8;
        puVar10 = (undefined2 *)(param_6 * 0x10 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
          *puVar10 = *puVar7;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        lVar15 = 8;
        puVar7 = (undefined2 *)(iVar6 + 0xe);
        puVar10 = (undefined2 *)((uVar12 * 8 + iVar8) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
          *puVar10 = *puVar7;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        lVar15 = 8;
        puVar7 = (undefined2 *)(iVar6 + 0x1e);
        puVar10 = (undefined2 *)((uVar12 * 0x10 + iVar8) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
          *puVar10 = *puVar7;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        lVar15 = 8;
        puVar7 = (undefined2 *)(iVar6 + 0x2e);
        puVar10 = (undefined2 *)((uVar12 * 0x18 + iVar8) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
          *puVar10 = *puVar7;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        lVar15 = 8;
        puVar7 = (undefined2 *)(iVar6 + 0x3e);
        puVar10 = (undefined2 *)((uVar12 * 0x20 + iVar8) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
          *puVar10 = *puVar7;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        lVar15 = 8;
        puVar7 = (undefined2 *)(iVar6 + 0x4e);
        puVar10 = (undefined2 *)((uVar12 * 0x28 + iVar8) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
          *puVar10 = *puVar7;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        lVar15 = 8;
        puVar7 = (undefined2 *)(iVar6 + 0x5e);
        puVar10 = (undefined2 *)((uVar12 * 0x30 + iVar8) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
          *puVar10 = *puVar7;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        lVar15 = 8;
        puVar7 = (undefined2 *)(iVar6 + 0x6e);
        puVar10 = (undefined2 *)
                  ((uVar12 * 0x40 + (uVar12 & 0x1fffffff) * -8 + iVar8) * 2 +
                   *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
          *puVar10 = *puVar7;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      (**(code **)(param_1 + 0xc74))
                (uStack00000034,uStack00000034,iVar6,*(undefined4 *)(param_1 + 0xd0),
                 *(undefined4 *)(param_1 + 0x108));
      uVar3 = 0;
      *(undefined1 *)((int)param_2 + 0xd) = 0;
      *param_2 = *param_2 & 0x7fffffff;
    }
  }
  return uVar3;
}

