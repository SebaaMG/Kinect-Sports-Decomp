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
extern unsigned int *auStack_a4;
extern int fn_8262FFB0();
extern int fn_8263AB38();
extern int fn_8263AC58();
extern int fn_8263B0F8();
extern int fn_8263B230();
extern unsigned int iStack0000001c;
extern unsigned int iStack_a8;
extern unsigned int iStack_b8;
extern unsigned int *iStack_c0;
extern unsigned int lbl_821CBFB1;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;


void fn_8263B958(int param_1,int param_2,ulonglong param_3,uint *param_4,uint *param_5,
                  uint *param_6,int *param_7,uint *param_8)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iStack0000001c;
  uint *puStack0000002c;
  uint *puStack00000034;
  uint *puStack0000003c;
  int *piStack00000044;
  uint *puStack0000004c;
  uint *in_stack_00000054;
  int *in_stack_0000005c;
  int *in_stack_00000064;
  int iStack_c0;
  uint uStack_bc;
  int iStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  int iStack_a8;
  uint auStack_a4 [41];
  
  uVar15 = *(uint *)(param_1 + 0x20);
  uVar12 = *(uint *)(param_1 + 0x1c);
  uVar2 = *(uint *)(param_1 + 0x30);
  iVar11 = *(int *)(param_1 + 0x28) >> 0x1f;
  iVar8 = -iVar11;
  bVar1 = (&lbl_821CBFB1)[(uVar15 & 0x3f) * 2];
  iStack_a8 = 0;
  iVar4 = -((int)uVar12 >> 0x1f);
  uVar6 = uVar2 >> 9 & 3;
  uVar5 = uVar15 & 0x3f;
  iVar11 = iVar11 * -2;
  iStack0000001c = param_2;
  puStack0000002c = param_4;
  puStack00000034 = param_5;
  puStack0000003c = param_6;
  piStack00000044 = param_7;
  puStack0000004c = param_8;
  fn_8263B0F8(param_1,&uStack_b0,&uStack_ac,&iStack_b8);
  uVar7 = uStack_ac;
  uVar10 = 1 << ((iVar8 - (int)LZCOUNT((uStack_b0 - iVar11) - 1)) + 0x20U & 0x3f);
  uVar16 = 1 << ((iVar8 - (int)LZCOUNT((uStack_ac - iVar11) - 1)) + 0x20U & 0x3f);
  if (uVar6 == 2) {
    iStack_c0 = 1 << ((iVar8 - (int)LZCOUNT((iStack_b8 - iVar11) + -1)) + 0x20U & 0x3f);
  }
  else {
    iStack_c0 = 1;
  }
  if (((0x10 < uVar10) && (0x10 < uVar16)) || (iVar9 = 1, (uVar2 & 0x800) == 0)) {
    iVar9 = 0;
  }
  if (((param_3 & 0xffffffff) == 0) || (uVar13 = uVar2, iVar9 != 0)) {
    uVar13 = uVar15;
  }
  uVar13 = uVar13 & 0xfffff000;
  uVar14 = (uint)bVar1;
  if (((param_3 & 0xffffffff) == 0) && (iVar9 == 0)) {
    uStack_b4 = uStack_b0;
    uStack_bc = uStack_ac;
    iStack_c0 = iStack_b8;
    fn_8263AC58(&uStack_b4,&uStack_bc,&iStack_c0,bVar1,uVar5,uVar6,iVar4);
    uVar16 = uStack_bc;
    if ((((iVar4 == 0) && ((uVar15 & 0x400) == 0)) &&
        (((uVar2 & 0x800) == 0 && ((uVar6 == 1 && ((*(uint *)(param_1 + 0x2c) & 0x3c0) == 0)))))) &&
       (iVar8 == 0)) {
      fn_8263AB38(uVar5,auStack_a4,&uStack_bc);
      uVar16 = (uStack_bc + uVar7) - 1 & ~(uStack_bc - 1);
    }
    if (uVar6 == 0) {
      auStack_a4[0] = uStack_b4 * uVar14 >> 3;
    }
    else {
      auStack_a4[0] = (uVar12 >> 0x16 & 0x1ff) * uVar14 * 4;
    }
  }
  else {
    uVar12 = (uint)param_3;
    uStack_b0 = uStack_b0 - iVar11 >> (uVar12 & 0x3f);
    if (uStack_b0 < 2) {
      uStack_b0 = 1;
    }
    uStack_ac = uStack_ac - iVar11 >> (uVar12 & 0x3f);
    uStack_b0 = uStack_b0 + iVar11;
    if (uStack_ac < 2) {
      uStack_ac = 1;
    }
    uStack_ac = uStack_ac + iVar11;
    if (uVar6 == 2) {
      uVar12 = (uint)(iStack_b8 - iVar11) >> (uVar12 & 0x3f);
      if (uVar12 < 2) {
        uVar12 = 1;
      }
      iStack_b8 = uVar12 + iVar11;
    }
    else {
      iStack_b8 = 1;
    }
    iVar8 = fn_8262FFB0(param_1);
    if ((iVar8 == 0x12) || (iVar8 == 0x13)) {
      iVar8 = 1 << (uVar15 >> 9 & 2);
      uVar15 = (*(uint *)(param_1 + 0x24) >> 0x1a) + iVar8 & ~(iVar8 - 1U);
    }
    else {
      uVar15 = 1;
    }
    uVar17 = -LZCOUNT(uVar10) + 0x1f;
    uVar18 = -LZCOUNT(uVar16) + 0x1f;
    uVar19 = -LZCOUNT(iStack_c0) + 0x1f;
    if (iVar9 == 0) {
      param_3 = param_3 - 1;
    }
    else {
      uVar17 = -LZCOUNT(uVar10) + 0x20;
      uVar18 = -LZCOUNT(uVar16) + 0x20;
      uVar19 = -LZCOUNT(iStack_c0) + 0x20;
    }
    param_6 = puStack0000003c;
    param_5 = puStack00000034;
    if (-1 < (int)param_3) {
      do {
        if ((uVar17 & 0xffffffff) != 0) {
          uVar17 = uVar17 - 1;
        }
        if ((uVar18 & 0xffffffff) != 0) {
          uVar18 = uVar18 - 1;
        }
        if ((uVar19 & 0xffffffff) != 0) {
          uVar19 = uVar19 - 1;
        }
        uVar12 = 1 << ((uint)uVar17 & 0x3f);
        uVar10 = 1 << ((uint)uVar18 & 0x3f);
        iVar8 = 1 << ((uint)uVar19 & 0x3f);
        iStack_c0 = iVar8;
        uStack_bc = uVar10;
        uStack_b4 = uVar12;
        fn_8263AC58(&uStack_b4,&uStack_bc,&iStack_c0,bVar1,uVar5,uVar6,iVar4);
        uVar16 = uStack_bc;
        uVar3 = ((longlong)(int)uStack_b4 * (longlong)(int)uVar14 & 0xffffffffU) >> 3;
        auStack_a4[0] = (uint)uVar3;
        if (((uVar12 < 0x11) || (uVar10 < 0x11)) && ((uVar2 & 0x800) != 0)) {
          iStack_a8 = fn_8263B230(param_3,uVar12,uVar10,iVar8,uVar3,
                                    (longlong)(int)auStack_a4[0] * (longlong)(int)uStack_bc,uVar5,
                                    &uStack_b4);
          uVar13 = uVar13 + iStack_a8;
          param_6 = puStack0000003c;
          param_5 = puStack00000034;
          break;
        }
        if (0 < (int)param_3) {
          if (uVar6 == 2) {
            uVar12 = auStack_a4[0] * iStack_c0 * uStack_bc + 0xfff & 0xfffff000;
          }
          else {
            uVar12 = (auStack_a4[0] * uStack_bc + 0xfff & 0xfffff000) * iStack_c0;
          }
          uVar13 = uVar12 * uVar15 + uVar13;
        }
        param_3 = param_3 - 1;
        param_6 = puStack0000003c;
        param_5 = puStack00000034;
      } while (-1 < (longlong)param_3);
    }
  }
  uVar16 = auStack_a4[0] * uVar16;
  uVar15 = uVar16 + 0xfff & 0xfffff000;
  *in_stack_00000064 = uVar15 * iStack0000001c + uVar13;
  *puStack0000002c = auStack_a4[0];
  if ((*(uint *)(param_1 + 0x30) & 0x600) == 0x400) {
    *param_5 = uVar16;
    uVar12 = uVar16 * iStack_c0 + 0xfff & 0xfffff000;
  }
  else {
    uVar12 = uVar15 * iStack_c0;
    *param_5 = uVar15;
  }
  *param_6 = uVar12;
  *puStack0000004c = uStack_b0;
  *in_stack_00000054 = uStack_ac;
  *in_stack_0000005c = iStack_b8;
  *piStack00000044 = iStack_a8;
  return;
}

