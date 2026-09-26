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
extern unsigned int *auStack_88;
extern int fn_82AB15D0();
extern int fn_82BA0450();
extern int fn_82BA04B8();
extern int fn_82BA05E8();
extern int fn_82BA9178();
extern int fn_82BA9768();
extern int fn_82BA97C8();
extern int fn_82BA9850();
extern int fn_82BB1DA0();
extern int fn_82BBFD90();
extern int fn_82BBFDB0();
extern int fn_82BBFDD0();
extern int fn_82BC2520();
extern int fn_82BC3680();
extern int fn_82BC55C8();
extern int fn_82BC5628();
extern int fn_82BD09F0();
extern unsigned int iStack_8c;
extern unsigned int lbl_820E7F9C;
extern unsigned int uStack_90;


void fn_82BA98E0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  uint *puVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar15;
  undefined8 uVar6;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar7;
  undefined4 uVar12;
  undefined8 uVar8;
  uint uVar13;
  uint uVar14;
  ulonglong uVar16;
  int iVar17;
  int *piVar18;
  longlong lVar19;
  undefined4 uStack_90;
  int iStack_8c;
  uint auStack_88 [34];
  
  iVar9 = *param_3;
  if ((iVar9 != *(int *)(param_2 + 8)) && ((*(uint *)(*(int *)(iVar9 + 4) + 0xe4) >> 2 & 1) != 0)) {
    return;
  }
  iVar10 = 0;
  iVar17 = 0;
  uVar16 = 0;
  if (iVar9 != 0) {
    piVar18 = &iStack_8c;
    iVar10 = 0;
    do {
      if (uVar16 != 0) break;
      uVar14 = *(uint *)(iVar9 + 0xe4);
      if ((uVar14 & 1) != 0) {
        piVar18[1] = 0;
        if ((uVar14 >> 9 & 1) != 0) {
          uVar5 = fn_82BD09F0(*(undefined4 *)(*param_1 + 0xab0),iVar9);
          cVar15 = fn_82BA9850(iVar9,uVar5);
          if (cVar15 == '\0') {
            if (1 < iVar17) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df36c,0xffffffff820df268,0x493);
            }
            piVar18 = piVar18 + 1;
            *piVar18 = iVar9;
            iVar17 = iVar17 + 1;
          }
        }
        if (((*(int *)(iVar9 + 0x10) == 0) || ((*(uint *)(iVar9 + 0xe4) >> 1 & 1) != 0)) ||
           (bVar3 = true, (&lbl_820E7F9C)[*(int *)(iVar9 + 0x50) * 0xc] == '\0')) {
          bVar3 = false;
        }
        if (bVar3) {
          iVar10 = iVar10 + 1;
        }
      }
      puVar2 = (uint *)(iVar9 + 0xe4);
      iVar9 = *(int *)(iVar9 + 8);
      uVar16 = (~(ulonglong)*puVar2 & 0xffffffff) >> 2 & 1;
    } while (iVar9 != 0);
  }
  uVar4 = auStack_88[0];
  iVar1 = *param_3;
  uVar14 = *(uint *)(iVar9 + 4);
  if (iVar17 == 0) {
    return;
  }
  uVar13 = uVar14;
  if (iVar17 == 1) {
    if (iVar10 == 1) {
      uVar5 = fn_82BD09F0(*(undefined4 *)(*param_1 + 0xab0),auStack_88[0]);
      uVar6 = fn_82BA0450(uVar4);
LAB_82ba9a70:
      iVar9 = fn_82BA97C8(uVar4,uVar5,uVar6,*param_1);
LAB_82ba9a80:
      fn_82BC55C8(*(undefined4 *)(uVar14 + 0x3b4),uVar13,iVar9);
      param_1[0x13] = param_1[0x13] + 1;
      return;
    }
    if (iVar10 == 2) {
      uVar5 = fn_82BD09F0(*(undefined4 *)(*param_1 + 0xab0),auStack_88[0]);
      uVar6 = fn_82BA0450(uVar4);
      iVar10 = fn_82BD09F0(*(undefined4 *)(*param_1 + 0xab0),uVar6);
      iVar9 = *param_3;
      bVar3 = false;
      uVar16 = 0;
      while( true ) {
        if ((iVar9 == 0) || (uVar16 != 0)) goto LAB_82ba9b34;
        if (((*(uint *)(iVar9 + 0xe4) & 1) != 0) &&
           (iVar11 = fn_82BD09F0(*(undefined4 *)(*param_1 + 0xab0),iVar9), iVar10 == iVar11))
        break;
        puVar2 = (uint *)(iVar9 + 0xe4);
        iVar9 = *(int *)(iVar9 + 8);
        uVar16 = (~(ulonglong)*puVar2 & 0xffffffff) >> 2 & 1;
      }
      bVar3 = true;
LAB_82ba9b34:
      if (!bVar3) goto LAB_82ba9a70;
      iVar9 = *param_3;
      bVar3 = false;
      uVar16 = 0;
      while( true ) {
        if ((iVar9 == 0) || (uVar16 != 0)) goto LAB_82ba9bc0;
        if (((*(uint *)(iVar9 + 0xe4) & 1) != 0) &&
           ((cVar15 = fn_82BA9178(iVar9,uVar5), cVar15 != '\0' ||
            (((*(uint *)(iVar9 + 0xe4) >> 9 & 1) != 0 &&
             (cVar15 = fn_82BA9850(iVar9,uVar5), cVar15 != '\0')))))) break;
        puVar2 = (uint *)(iVar9 + 0xe4);
        iVar9 = *(int *)(iVar9 + 8);
        uVar16 = (~(ulonglong)*puVar2 & 0xffffffff) >> 2 & 1;
      }
      bVar3 = true;
LAB_82ba9bc0:
      if (!bVar3) {
        uVar5 = fn_82BA97C8(uVar4,uVar5,uVar6,*param_1);
        fn_82BC5628(*(undefined4 *)(iVar1 + 0x3b4),iVar1,uVar5);
        goto LAB_82ba9bf0;
      }
    }
  }
  else if ((iVar17 == 2) && (iVar10 == 2)) {
    uVar6 = fn_82BD09F0(*(undefined4 *)(*param_1 + 0xab0),auStack_88[0]);
    uVar8 = fn_82BA0450(uVar4);
    uVar5 = fn_82BD09F0(*(undefined4 *)(*param_1 + 0xab0),auStack_88[1]);
    uVar7 = fn_82BA0450(auStack_88[1]);
    cVar15 = fn_82BA9850(uVar4,uVar5);
    if ((cVar15 == '\0') && (cVar15 = fn_82BA9850(auStack_88[1],uVar6), cVar15 == '\0')) {
      uVar13 = fn_82BA97C8(uVar4,uVar6,uVar8,*param_1);
      fn_82BC55C8(*(undefined4 *)(uVar14 + 0x3b4),uVar14,uVar13);
      param_1[0x13] = param_1[0x13] + 1;
      iVar9 = fn_82BA97C8(auStack_88[1],uVar5,uVar7,*param_1);
      goto LAB_82ba9a80;
    }
    if ((int)uVar6 == (int)uVar5) {
      iVar9 = 0;
      uStack_90 = *(undefined4 *)(uVar4 + 0x80);
      auStack_88[0] = *(uint *)(auStack_88[1] + 0x80);
      do {
        if ((*(char *)((int)&uStack_90 + iVar9) != '\x01') &&
           (*(char *)((int)auStack_88 + iVar9) != '\x01')) {
          bVar3 = false;
          goto LAB_82ba9d20;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 4);
      bVar3 = true;
LAB_82ba9d20:
      if (!bVar3) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df35c,0xffffffff820df268,0x502);
      }
      iVar9 = 0;
      lVar19 = 4;
      do {
        if (*(char *)((int)auStack_88 + iVar9) != '\x01') {
          *(char *)((int)&uStack_90 + iVar9) = *(char *)((int)auStack_88 + iVar9);
        }
        iVar9 = iVar9 + 1;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      iVar9 = fn_82BA97C8(uVar4,uVar6,uVar8,*param_1);
      *(undefined4 *)(iVar9 + 0x80) = uStack_90;
      goto LAB_82ba9a80;
    }
    cVar15 = fn_82BA9850(auStack_88[1],uVar6);
    if (((cVar15 != '\0') && (cVar15 = fn_82BA9178(uVar4,uVar5), cVar15 == '\0')) &&
       (cVar15 = fn_82BA9178(auStack_88[1],uVar5), cVar15 == '\0')) {
      uVar5 = fn_82BA97C8(auStack_88[1],uVar5,uVar7,*param_1);
      fn_82BC5628(*(undefined4 *)(iVar1 + 0x3b4),iVar1,uVar5);
      param_1[0x13] = param_1[0x13] + 1;
      fn_82BA04B8(auStack_88[1]);
      uVar6 = fn_82BA97C8(uVar4,uVar6,uVar8,*param_1);
      fn_82BC55C8(*(undefined4 *)(uVar14 + 0x3b4),uVar14,uVar6);
LAB_82ba9bf0:
      param_1[0x13] = param_1[0x13] + 1;
      fn_82BA04B8(uVar4);
      *param_3 = (int)uVar5;
      return;
    }
    cVar15 = fn_82BA9850(uVar4,uVar5);
    if (((cVar15 != '\0') && (cVar15 = fn_82BA9178(auStack_88[1],uVar6), cVar15 == '\0')) &&
       (cVar15 = fn_82BA9178(uVar4,uVar6), cVar15 == '\0')) {
      uVar6 = fn_82BA97C8(uVar4,uVar6,uVar8,*param_1);
      fn_82BC5628(*(undefined4 *)(iVar1 + 0x3b4),iVar1,uVar6);
      param_1[0x13] = param_1[0x13] + 1;
      fn_82BA04B8(uVar4);
      uVar5 = fn_82BA97C8(auStack_88[1],uVar5,uVar7,*param_1);
      fn_82BC55C8(*(undefined4 *)(uVar14 + 0x3b4),uVar14,uVar5);
      goto LAB_82baa020;
    }
  }
  uVar12 = fn_82BD09F0(*(undefined4 *)(*param_1 + 0xab0),uVar4);
  uVar5 = fn_82BA0450(uVar4);
  if (param_1[0x21] < 0) {
    iVar9 = fn_82BB1DA0(param_1[0x23]);
    param_1[0x21] = iVar9;
  }
  uVar6 = fn_82BA9768(uVar4,param_1[0x21],uVar5,*param_1);
  fn_82BC5628(*(undefined4 *)(iVar1 + 0x3b4),iVar1,uVar6);
  param_1[0x14] = param_1[0x14] + 1;
  if (iVar17 == 2) {
    uVar5 = fn_82BD09F0(*(undefined4 *)(*param_1 + 0xab0),auStack_88[1]);
    uVar8 = fn_82BA0450(auStack_88[1]);
    uVar13 = fn_82BA97C8(auStack_88[1],uVar5,uVar8,*param_1);
    fn_82BC55C8(*(undefined4 *)(uVar14 + 0x3b4),uVar14,uVar13);
    param_1[0x13] = param_1[0x13] + 1;
    fn_82BA04B8(auStack_88[1]);
  }
  uVar14 = fn_82BC2520(uVar4,*param_1);
  fn_82BBFD90(uVar14,uVar4);
  fn_82BBFDD0(uVar4);
  if (uVar13 == uVar4) {
    uVar13 = uVar14;
  }
  if (uVar4 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = fn_82BC3680(uVar4,*param_1);
  }
  *(undefined4 *)(iVar9 + 0x38) = uVar12;
  *(undefined4 *)(iVar9 + 0x50) = 0;
  fn_82BA05E8(iVar9,1,uVar14);
  fn_82BBFDB0(iVar9,uVar13);
  auStack_88[1] = uVar14;
LAB_82baa020:
  param_1[0x13] = param_1[0x13] + 1;
  fn_82BA04B8(auStack_88[1]);
  *param_3 = (int)uVar6;
  return;
}

