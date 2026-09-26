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
extern unsigned int *auStack_80;
extern int fn_82BA02A8();
extern int fn_82BE5C30();
extern int fn_82BE5C78();
extern int fn_82BE5CC0();
extern int fn_82BE5D50();
extern int fn_82BE5DC0();
extern int fn_82BE5F40();
extern int fn_82BE6950();
extern int fn_82BEECD0();
extern int fn_82BEEF40();
extern int fn_82BF4368();
extern int fn_82BF43D0();
extern int fn_82BF4730();
extern int fn_82BF4828();
extern int fn_82BF4910();
extern int fn_82BF4A18();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820EB83C;
extern unsigned int lbl_820EB884;
extern unsigned int lbl_820EBAC8;
extern unsigned int lbl_831751CC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * fn_82BF5958(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar4;
  undefined8 uVar2;
  int iVar5;
  int iVar6;
  byte bVar10;
  uint uVar7;
  ulonglong uVar3;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char cVar13;
  uint uVar11;
  undefined **ppuVar12;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  double dVar18;
  double dVar19;
  ushort auStack_80 [2];
  int aiStack_7c [31];
  
  auStack_80[0] = 0;
  aiStack_7c[0] = 0;
  cVar13 = '\0';
  dVar19 = (double)lbl_820EBAC8;
  uVar16 = 0;
  dVar18 = (double)lbl_82002C5C;
  uVar14 = 0;
  uVar7 = 0;
  bVar10 = 0;
  uVar15 = 0x5f;
  iVar5 = 0;
  uVar4 = fn_82BE5CC0();
  iVar1 = *(int *)(param_1 + 0x20);
  uVar11 = 0;
  while (uVar11 < uVar4) {
    uVar2 = fn_82BE5C30(param_1);
    uVar11 = (uint)uVar2 & 0xff;
    if (uVar11 < 0x25) {
      if (uVar11 == 0x24) {
        fn_82BE5DC0(param_1,aiStack_7c,auStack_80);
        if ((aiStack_7c[0] != 0) || (auStack_80[0] == 0)) {
          fn_82BA02A8(param_1);
          goto LAB_82bf5b04;
        }
      }
      else if (uVar11 == 8) {
        dVar19 = (double)fn_82BE5D50(param_1);
      }
      else if (uVar11 == 9) {
        dVar18 = (double)fn_82BE5D50(param_1);
      }
      else if (uVar11 == 10) {
        uVar15 = fn_82BE5C78(param_1);
      }
      else {
        if (uVar11 == 0xb) {
          iVar5 = fn_82BE5CC0(param_1,uVar2);
          goto LAB_82bf5b04;
        }
        if (uVar11 != 0x23) goto LAB_82bf5aa4;
        fn_82BE5D50(param_1);
      }
    }
    else {
      if (uVar11 == 0x26) {
        uVar16 = fn_82BE5CC0(param_1,uVar2);
      }
      else if (uVar11 == 0x27) {
        uVar14 = fn_82BE6950(param_1);
      }
      else if (uVar11 == 0x28) {
        uVar7 = fn_82BE5C78(param_1);
      }
      else {
        if (uVar11 != 0x2e) {
LAB_82bf5aa4:
          iVar6 = fn_82BE5F40(param_1);
          if (iVar6 == 0) {
            return (undefined4 *)0x0;
          }
          goto LAB_82bf5b10;
        }
        bVar10 = fn_82BE5C30(param_1);
      }
LAB_82bf5b04:
      cVar13 = cVar13 + '\x01';
    }
LAB_82bf5b10:
    uVar11 = *(int *)(param_1 + 0x20) - iVar1;
  }
  if (cVar13 != '\x06') {
    return (undefined4 *)0x0;
  }
  uVar7 = uVar7 & 0xffff;
  puVar9 = (undefined4 *)0x0;
  puVar17 = puVar9;
  if (uVar7 == 0x10) {
    if (iVar5 < 0x400) {
      uVar3 = thunk_FUN_82be5550(0x30);
      if ((uVar3 & 0xffffffff) == 0) {
LAB_82bf5c34:
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = (undefined4 *)
                 fn_82BF4730(dVar19,uVar3,uVar14,uVar16,aiStack_7c[0],auStack_80[0],bVar10,
                                   uVar15);
      }
    }
    else if ((iVar5 < 0x401) || (0x7ff < iVar5)) {
      if ((iVar5 < 0x801) || (0xfff < iVar5)) {
        if (iVar5 < 0x1001) goto LAB_82bf5dc4;
        uVar3 = thunk_FUN_82be5550(0x2c);
        if ((uVar3 & 0xffffffff) == 0) goto LAB_82bf5c34;
        puVar8 = (undefined4 *)
                 fn_82BF4A18(uVar3,uVar14,uVar16,aiStack_7c[0],auStack_80[0],bVar10,uVar15);
      }
      else {
        uVar3 = thunk_FUN_82be5550(0x2c);
        if ((uVar3 & 0xffffffff) == 0) goto LAB_82bf5c34;
        puVar8 = (undefined4 *)
                 fn_82BF4828(dVar18,uVar3,uVar14,uVar16,aiStack_7c[0],auStack_80[0],bVar10);
      }
    }
    else {
      uVar3 = thunk_FUN_82be5550(0x34);
      if ((uVar3 & 0xffffffff) == 0) goto LAB_82bf5c34;
      puVar8 = (undefined4 *)
               fn_82BF4910(dVar19,dVar18,uVar3,uVar14,uVar16,aiStack_7c[0],auStack_80[0],
                                 bVar10,uVar15);
    }
    if ((puVar8 != (undefined4 *)0x0) && (puVar17 = puVar8, puVar8[4] == 0)) {
      (**(code **)*puVar8)(puVar8,1);
      puVar17 = puVar9;
    }
    goto LAB_82bf5dc4;
  }
  if (iVar5 < 0x400) {
    uVar3 = thunk_FUN_82be5550(100);
    if ((uVar3 & 0xffffffff) == 0) goto LAB_82bf5d74;
    puVar9 = (undefined4 *)fn_82BF4368(dVar19,uVar3,uVar14,uVar16,uVar15);
  }
  else {
    if ((iVar5 < 0x401) || (0x7ff < iVar5)) {
      if ((iVar5 < 0x801) || (0xfff < iVar5)) {
        if (iVar5 < 0x1001) goto LAB_82bf5dc4;
        puVar9 = (undefined4 *)thunk_FUN_82be5550(0x60);
        if (puVar9 != (undefined4 *)0x0) {
          fn_82BEECD0(puVar9,uVar14,uVar16,uVar7,0);
          *(short *)(puVar9 + 0x17) = (short)uVar15;
          ppuVar12 = &lbl_820EB884;
          goto LAB_82bf5d6c;
        }
      }
      else {
        puVar9 = (undefined4 *)thunk_FUN_82be5550(0x60);
        if (puVar9 != (undefined4 *)0x0) {
          fn_82BEECD0(puVar9,uVar14,uVar16,uVar7,0);
          puVar9[0x17] = (float)dVar18;
          ppuVar12 = &lbl_820EB83C;
LAB_82bf5d6c:
          *puVar9 = ppuVar12;
          goto LAB_82bf5d78;
        }
      }
    }
    else {
      uVar3 = thunk_FUN_82be5550(0x68);
      if ((uVar3 & 0xffffffff) != 0) {
        puVar9 = (undefined4 *)fn_82BF43D0(dVar19,dVar18,uVar3,uVar14,uVar16,uVar15);
        goto LAB_82bf5d78;
      }
    }
LAB_82bf5d74:
    puVar9 = (undefined4 *)0x0;
  }
LAB_82bf5d78:
  if (puVar9 != (undefined4 *)0x0) {
    if (auStack_80[0] != 0) {
      uVar4 = 0;
      do {
        fn_82BEEF40(puVar9,*(undefined4 *)(uVar4 * 4 + aiStack_7c[0]));
        uVar4 = uVar4 + 1 & 0xffff;
      } while (uVar4 < auStack_80[0]);
    }
    *(ushort *)(puVar9 + 0x12) = (ushort)bVar10;
    puVar17 = puVar9;
  }
LAB_82bf5dc4:
  if (aiStack_7c[0] != 0) {
    (*(code *)lbl_831751CC)();
  }
  if ((uVar14 & 0xffffffff) != 0) {
    (*(code *)lbl_831751CC)(uVar14);
  }
  *param_2 = uVar7;
  return puVar17;
}

