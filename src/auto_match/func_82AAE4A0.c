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
extern unsigned int *auStack_a8;
extern int fn_82A29A38();
extern int fn_82AACF70();
extern int fn_82AAD090();
extern int fn_82AAD2E0();
extern int fn_82AAD4C0();


void fn_82AAE4A0(int *param_1,uint param_2,undefined8 param_3,int param_4,int *param_5)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  int *piStack00000014;
  int *piStack00000034;
  uint *apuStack_b0 [2];
  uint auStack_a8 [42];
  
  puVar8 = (uint *)*param_1;
  puVar1 = (uint *)*param_5;
  uVar5 = *puVar8 & 0x10000000;
  piStack00000014 = param_1;
  piStack00000034 = param_5;
  if ((puVar8[1] & 0x80000000) == 0) {
    fn_82A29A38();
  }
  uVar2 = puVar8[1];
  puVar9 = puVar8 + 2;
  if (*(int *)(param_4 + 4) == 1) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
    if (*(int *)(param_4 + 4) != 2) {
      uVar13 = uVar2 >> 0x16 & 1;
    }
  }
  puVar3 = apuStack_b0[0];
  uVar10 = uVar2;
  if (uVar5 != 0) {
    if ((*puVar9 & 0x80000000) == 0) {
      fn_82A29A38();
    }
    if (param_2 < 0xffff0200) {
      fn_82A29A38();
    }
    puVar3 = (uint *)*puVar9;
    puVar9 = puVar8 + 3;
    uVar10 = uVar2 & 0x8fffe021 | 0xf0021;
  }
  apuStack_b0[1] = (uint *)0x0;
  uVar11 = 0;
  apuStack_b0[0] = (uint *)0x0;
  if ((*puVar9 & 0x80000000) != 0) {
    iVar15 = 0;
    puVar8 = puVar9;
    do {
      if (1 < uVar11) {
        fn_82A29A38();
      }
      uVar4 = *puVar8;
      puVar9 = puVar8 + 1;
      *(uint *)((int)auStack_a8 + iVar15) = uVar4;
      *(undefined4 *)((int)apuStack_b0 + iVar15) = 0;
      if ((uVar4 & 0x2000) == 0x2000) {
        if (param_2 < 0xffff0201) {
          fn_82A29A38();
        }
        if ((*puVar9 & 0x80000000) == 0) {
          fn_82A29A38();
        }
        uVar4 = *puVar9;
        puVar9 = puVar8 + 2;
        *(uint *)((int)apuStack_b0 + iVar15) = uVar4;
      }
      uVar11 = uVar11 + 1;
      iVar15 = iVar15 + 4;
      puVar8 = puVar9;
    } while ((*puVar9 & 0x80000000) != 0);
  }
  puVar8 = apuStack_b0[0];
  uVar12 = 0;
  uVar4 = uVar2;
  if (1 < uVar11) {
    if (param_2 < 0xffff0200) {
      fn_82A29A38();
    }
    uVar12 = *(uint *)*param_1 & 0xff0000;
    uVar4 = auStack_a8[1];
  }
  apuStack_b0[0] = puVar1 + 1;
  uVar6 = uVar12 & 0x20000;
  if (uVar6 == 0) {
    uVar7 = 0x800005d;
  }
  else {
    uVar7 = 0x800005e;
  }
  *puVar1 = (uVar13 << 8 | uVar4 & 0xff) << 0x10 | uVar7;
  if (uVar11 == 0) {
    if (uVar6 != 0) {
      fn_82A29A38();
    }
    if (0xffff0103 < param_2) {
      fn_82A29A38();
    }
    fn_82AACF70(uVar2,param_4,apuStack_b0);
    *apuStack_b0[0] = uVar4 & 0x7ff | 0x510000;
    apuStack_b0[0][1] = 0x803210;
    apuStack_b0[0] = apuStack_b0[0] + 2;
  }
  else if (uVar11 == 1) {
    if (param_2 != 0xffff0104) {
      fn_82A29A38();
    }
    if (uVar6 != 0) {
      fn_82A29A38();
    }
    fn_82AACF70(uVar2,param_4,apuStack_b0);
    fn_82AAD090(auStack_a8[0],puVar8,0,param_4,apuStack_b0);
  }
  else {
    uVar13 = auStack_a8[1] & 0xff0000;
    lVar14 = 0;
    if (uVar11 != 2) {
      fn_82A29A38();
    }
    if (param_2 < 0xffff0200) {
      fn_82A29A38();
    }
    uVar11 = uVar10;
    if ((uVar13 != 0xe40000) && (uVar11 = uVar10 | 0xf0000, uVar5 == 0)) {
      uVar11 = uVar10 & 0x8fffe021 | 0xf0021;
    }
    if ((uVar12 & 0x10000) != 0) {
      lVar14 = 0x600000;
    }
    fn_82AACF70(uVar11,param_4,apuStack_b0);
    fn_82AAD090(auStack_a8[0],puVar8,lVar14,param_4,apuStack_b0);
    if (uVar6 != 0) {
      if ((auStack_a8[0] & 0xb000000) != 0) {
        fn_82A29A38();
      }
      if (lVar14 != 0) {
        fn_82A29A38();
      }
      fn_82AAD090(auStack_a8[0],puVar8,0,param_4,apuStack_b0);
    }
    if (uVar5 == 0) {
      if (uVar13 != 0xe40000) {
        fn_82AAD4C0(uVar2,uVar11,uVar13,param_4,apuStack_b0);
      }
    }
    else {
      fn_82AAD2E0(uVar2,puVar3,uVar13,param_4,apuStack_b0);
    }
  }
  *piStack00000034 = (int)apuStack_b0[0];
  *piStack00000014 = (int)puVar9;
  return;
}

