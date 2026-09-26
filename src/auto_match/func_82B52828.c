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
extern unsigned int *auStack_90;
extern int fn_82AA65B0();
extern int fn_82AA66A8();
extern int fn_82ABE870();
extern int fn_82AD6090();
extern int fn_82AF87E0();
extern int fn_82B45B10();
extern int fn_82B45C18();
extern int fn_82B476D0();
extern int fn_82B477E0();
extern int fn_82B4C160();
extern int fn_82B50B70();
extern int fn_82B50D00();
extern int fn_82B50D80();
extern int fn_82B50E90();
extern unsigned int iStack_88;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82B52828(int param_1,int param_2,uint param_3,uint param_4,int param_5,undefined4 *param_6
                  ,undefined4 *param_7,uint *param_8)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint *puVar8;
  ulonglong uVar6;
  longlong lVar7;
  char cVar11;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_90 [8];
  int iStack_88;
  
  *param_8 = 0;
  param_8[1] = 0;
  param_8[2] = 0;
  param_8[3] = 0;
  iStack_88 = 0;
  uVar15 = 0;
  uVar13 = *(uint *)(*(int *)(param_1 + 0x240) + 4);
  uVar13 = -(uint)((uVar13 & 1) == 0) & uVar13;
  while( true ) {
    if ((uVar13 == 0) || (bVar5 = false, iStack_88 == *(int *)(uVar13 + 8))) {
      bVar5 = true;
    }
    if (bVar5) break;
    puVar8 = (uint *)fn_82ABE870(auStack_90);
    uVar15 = 1 << (*puVar8 & 0x3f) & 0xfffffffeU | uVar15;
  }
  uVar16 = 0;
  iStack_88 = 0;
  uVar13 = -(uint)((*(uint *)(param_2 + 4) & 1) == 0) & *(uint *)(param_2 + 4);
LAB_82b52904:
  do {
    if ((uVar13 == 0) || (bVar5 = false, iStack_88 == *(int *)(uVar13 + 8))) {
      bVar5 = true;
    }
    if (bVar5) {
      if (((uVar16 & 4) == 0) && ((uVar16 & 2) != 0)) {
        puVar8 = *(uint **)(param_1 + 0x240);
        if ((puVar8[1] & 1) == 0) {
          uVar13 = *puVar8 & 0xfffffffe;
          iVar9 = uVar13 - 4;
          if ((iVar9 == 0) || (*(uint *)(uVar13 + 8) < *(int *)(uVar13 + 4) + 1U))
          goto LAB_82b52c9c;
        }
        else {
LAB_82b52c9c:
          iVar9 = fn_82AF87E0(puVar8,1);
        }
        iVar1 = *(int *)(iVar9 + 8);
        uVar16 = uVar16 | 4;
        *(int *)(iVar9 + 8) = iVar1 + 1;
        *(undefined8 *)((iVar1 + 2) * 8 + iVar9) = 0x200000000;
      }
      if (uVar16 == 0) goto LAB_82b52e3c;
      if ((param_5 == 3) && (param_6 != (undefined4 *)0x0)) {
        fn_82B50E90(param_1);
        if ((uVar16 & 6) != 0) {
          uVar10 = fn_82B477E0(param_1);
          puVar8 = *(uint **)(param_1 + 0x250);
          if ((puVar8[1] & 1) == 0) {
            uVar13 = *puVar8 & 0xfffffffe;
            iVar9 = uVar13 - 4;
            if ((iVar9 == 0) || (*(uint *)(uVar13 + 8) < *(int *)(uVar13 + 4) + 1U))
            goto LAB_82b52d30;
          }
          else {
LAB_82b52d30:
            iVar9 = fn_82AD6090(puVar8,1);
          }
          iVar1 = *(int *)(iVar9 + 8);
          *(int *)(iVar9 + 8) = iVar1 + 1;
          *(undefined4 *)((iVar1 + 4) * 4 + iVar9) = uVar10;
          puVar8 = *(uint **)(param_1 + 0x250);
          uVar2 = *param_7;
          if ((puVar8[1] & 1) == 0) {
            uVar13 = *puVar8 & 0xfffffffe;
            iVar9 = uVar13 - 4;
            if ((iVar9 == 0) || (*(uint *)(uVar13 + 8) < *(int *)(uVar13 + 4) + 1U))
            goto LAB_82b52d8c;
          }
          else {
LAB_82b52d8c:
            iVar9 = fn_82AD6090(puVar8,1);
          }
          iVar1 = *(int *)(iVar9 + 8);
          *(int *)(iVar9 + 8) = iVar1 + 1;
          *(undefined4 *)((iVar1 + 4) * 4 + iVar9) = uVar2;
          fn_82B50B70(*(undefined4 *)(param_1 + 0x24c),*param_6);
          *param_7 = uVar10;
          *param_6 = 0;
        }
        fn_82B50D00(*(undefined4 *)(param_1 + 0x24c),0,0x10);
      }
      if ((uVar16 & 2) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20000000;
      }
      if ((uVar16 & 0x800) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
      }
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
      if ((((uVar16 & 4) != 0) && (param_5 == 3)) && (param_6 != (undefined4 *)0x0)) {
        fn_82B50D80(param_1,param_7);
        fn_82B50D00(*(undefined4 *)(param_1 + 0x24c),0,4);
      }
LAB_82b52e3c:
      fn_82B476D0(*(undefined4 *)(param_1 + 0x240),param_2);
      param_8[1] = param_3;
      *param_8 = uVar16 | uVar15;
      return;
    }
    iVar9 = (iStack_88 + 2) * 8;
    puVar8 = (uint *)(iVar9 + uVar13);
    uVar14 = *(uint *)(iVar9 + uVar13);
    uVar3 = 1 << (uVar14 & 0x3f);
    if ((uVar3 & param_3 & 0xfffffffe) == 0) {
      if ((uVar3 & param_4 & 0xfffffffe) == 0) {
        iVar9 = *(int *)(puVar8[1] + 0x10);
        if ((iVar9 == 0) || (*(int *)(iVar9 + 4) != 3)) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        if (*(int *)(iVar9 + 0x10) != 9) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        fn_82AA65B0(param_1,0xdfc,*(undefined4 *)(iVar9 + 0x18));
      }
LAB_82b52998:
      fn_82B4C160(auStack_90);
      goto LAB_82b52904;
    }
    if (uVar14 == 1) {
      uVar4 = uVar16 | uVar15;
LAB_82b529b8:
      if ((uVar3 & uVar4) != 0) {
        fn_82AA65B0(param_1,0xdf9);
        goto LAB_82b52998;
      }
    }
    else {
      uVar4 = uVar16;
      if (uVar14 != 2) goto LAB_82b529b8;
    }
    switch(uVar14) {
    case 10:
      param_8[2] = puVar8[1];
      break;
    case 0xd:
      uVar10 = fn_82B45B10(param_1,*(undefined4 *)(puVar8[1] + 0x14));
      *(undefined4 *)(param_1 + 0x314) = uVar10;
      break;
    case 0xe:
      uVar6 = fn_82B45B10(param_1,*(undefined4 *)(puVar8[1] + 0x14));
      *(int *)(param_1 + 0x318) = (int)uVar6;
      if ((uVar6 == 0) || (0x40 < (uVar6 & 0xffffffff))) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xe05,0x40);
      }
      if (((*(int *)(param_1 + 0x38) != 0) &&
          (uVar14 = *(uint *)(*(int *)(param_1 + 0x38) + 0x10), uVar14 != 0)) &&
         ((uVar6 & 0xffffffff) != (ulonglong)uVar14)) {
        uVar12 = 0xdfd;
        goto code_r0x82b52a7c;
      }
      break;
    case 0x10:
      lVar7 = fn_82B45B10(param_1,*(undefined4 *)(puVar8[1] + 0x14));
      *(int *)(param_1 + 0x31c) = (int)lVar7;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xe13,0x40);
      }
      break;
    case 0x11:
      cVar11 = fn_82B45C18(param_1,*(undefined4 *)(puVar8[1] + 0x14));
      if ((*(uint *)(param_1 + 0x30) & 0xffff0000) != 0xffff0000) {
        if (cVar11 == '\0') {
          uVar14 = *(uint *)(param_1 + 0x2c) & 0xffffffef;
        }
        else {
          if ((*(uint **)(param_1 + 0x38) != (uint *)0x0) &&
             ((**(uint **)(param_1 + 0x38) & 0x20) == 0)) {
            fn_82AA65B0(param_1,0xe18);
          }
          uVar14 = *(uint *)(param_1 + 0x2c) | 0x10;
        }
        goto code_r0x82b52b9c;
      }
      break;
    case 0x13:
      if ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
        uVar14 = *(uint *)(param_1 + 0x2c) | 0x40;
        goto code_r0x82b52b9c;
      }
      break;
    case 0x14:
      uVar14 = fn_82B45B10(param_1,*(undefined4 *)(puVar8[1] + 0x14));
      *(uint *)(param_1 + 0x328) = uVar14;
      if ((uVar14 < 0x100) || (0xeff < uVar14)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xe1f,0xeff);
      }
      iVar9 = *(int *)(param_1 + 0x38);
      if (iVar9 != 0) {
        if ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
          uVar3 = *(uint *)(iVar9 + 0x30);
        }
        else {
          uVar3 = *(uint *)(iVar9 + 0x34);
        }
        if ((uVar3 != 0) && (uVar3 != uVar14)) {
          fn_82AA65B0(param_1,0xe20);
        }
      }
      uVar12 = 0xe40;
code_r0x82b52a7c:
      fn_82AA65B0(param_1,uVar12);
      break;
    case 0x16:
      uVar14 = *(uint *)(param_1 + 0x2c) | 0x1000;
code_r0x82b52b9c:
      *(uint *)(param_1 + 0x2c) = uVar14;
      break;
    case 0x17:
      cVar11 = fn_82B45C18(param_1,*(undefined4 *)(puVar8[1] + 0x14));
      if (cVar11 == '\0') {
        uVar14 = *(uint *)(param_1 + 0x34) | 2;
      }
      else {
        uVar14 = *(uint *)(param_1 + 0x34) & 0xfffffffd;
      }
      *(uint *)(param_1 + 0x34) = uVar14;
    }
    fn_82ABE870(auStack_90);
    uVar16 = 1 << (*puVar8 & 0x3f) & 0xfffffffeU | uVar16;
  } while( true );
}

