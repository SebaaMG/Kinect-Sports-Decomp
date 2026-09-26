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
extern unsigned int *auStack_a0;
extern int fn_82A1DDC0();
extern unsigned int lbl_8329F13C;


void fn_82C8E218(undefined8 param_1,int param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6,int param_7,int param_8)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int in_r0;
  byte *pbVar3;
  longlong lVar4;
  int iVar6;
  int iVar7;
  longlong lVar5;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined1 in_vs43 [16];
  undefined1 in_vs61 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 in_register_000103e0;
  undefined4 in_register_000103e4;
  undefined4 in_register_000103e8;
  undefined4 in_vr62;
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  int in_stack_0000005c;
  int in_stack_00000064;
  uint auStack_a0 [4];
  uint auStack_90 [36];
  
  param_2 = param_2 + param_5;
  iVar11 = param_2 - lbl_8329F13C;
  iVar10 = lbl_8329F13C * 2 + (-param_8 & 0xfU) + param_8;
  pbVar3 = (byte *)(param_2 + param_8 + -1);
  iVar6 = iVar10 - lbl_8329F13C;
  lVar9 = ((-(ulonglong)(in_stack_00000064 != 0) & 0x1c) << 0x20 |
          -(ulonglong)(in_stack_00000064 != 0) & 0x14) + 0x14;
  iVar12 = iVar11;
  if ((int)param_3 < (int)param_4) {
    param_3 = param_4 - param_3;
    do {
      iVar7 = iVar6 + iVar12;
      auStack_90[0] = (uint)*pbVar3;
      puVar1 = (undefined4 *)((int)auStack_90 + in_r0 & 0xfffffff0);
      uVar18 = *puVar1;
      uVar19 = puVar1[1];
      uVar20 = puVar1[2];
      uVar21 = puVar1[3];
      auStack_a0[0] = (uint)*(byte *)((param_2 - iVar11) + iVar12);
      iVar8 = 0;
      puVar1 = (undefined4 *)((int)auStack_a0 + in_r0 & 0xfffffff0);
      uVar14 = *puVar1;
      uVar15 = puVar1[1];
      uVar16 = puVar1[2];
      uVar17 = puVar1[3];
      puVar1 = (undefined4 *)((int)auStack_a0 + in_r0 & 0xfffffff0);
      *puVar1 = uVar14;
      puVar1[1] = uVar15;
      puVar1[2] = uVar16;
      puVar1[3] = uVar17;
      puVar1 = (undefined4 *)((int)auStack_90 + in_r0 & 0xfffffff0);
      *puVar1 = uVar18;
      puVar1[1] = uVar19;
      puVar1[2] = uVar20;
      puVar1[3] = uVar21;
      for (uVar13 = -param_8 & 0xfU; uVar13 != 0; uVar13 = uVar13 - 1) {
        pbVar3[iVar8 + 1] = *pbVar3;
        iVar8 = iVar8 + 1;
      }
      puVar1 = (undefined4 *)(in_r0 + iVar12 & 0xfffffff0);
      *puVar1 = uVar14;
      puVar1[1] = uVar15;
      puVar1[2] = uVar16;
      puVar1[3] = uVar17;
      param_3 = param_3 + -1;
      puVar1 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
      *puVar1 = uVar18;
      puVar1[1] = uVar19;
      puVar1[2] = uVar20;
      puVar1[3] = uVar21;
      pbVar3 = pbVar3 + in_stack_0000005c;
      puVar1 = (undefined4 *)(iVar12 + 0x10U & 0xfffffff0);
      *puVar1 = uVar14;
      puVar1[1] = uVar15;
      puVar1[2] = uVar16;
      puVar1[3] = uVar17;
      iVar12 = iVar12 + in_stack_0000005c;
      puVar1 = (undefined4 *)(iVar7 + 0x10U & 0xfffffff0);
      *puVar1 = uVar18;
      puVar1[1] = uVar19;
      puVar1[2] = uVar20;
      puVar1[3] = uVar21;
    } while (param_3 != 0);
  }
  if (param_6 != 0) {
    iVar8 = iVar11 - (int)lVar9 * in_stack_0000005c;
    iVar6 = (iVar10 >> 3 & 0x1ffffffeU) * 8;
    fn_82A1DDC0(iVar8,iVar11,iVar10);
    lVar4 = lVar9;
    if ((int)lVar9 != 0) {
      do {
        iVar11 = 0;
        if (0 < iVar6) {
          lVar5 = (ulonglong)(iVar6 - 1U >> 4) + 1;
          do {
            altv300_21(in_vs43,in_vs61);
            puVar1 = (undefined4 *)(iVar11 + iVar8 & 0xfffffff0);
            *puVar1 = in_register_000103f0;
            puVar1[1] = in_register_000103f4;
            puVar1[2] = in_register_000103f8;
            puVar1[3] = in_vr63;
            iVar11 = iVar11 + 0x10;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        lVar4 = lVar4 + -1;
        iVar8 = iVar8 + in_stack_0000005c;
      } while (lVar4 != 0);
    }
  }
  if (param_7 != 0) {
    iVar6 = (iVar10 >> 3 & 0x1ffffffeU) * 8;
    if (in_stack_00000064 == 0) {
      uVar2 = -param_4 & 0xf;
    }
    else {
      uVar2 = -param_4 & 0x1f;
    }
    lVar9 = uVar2 + lVar9;
    fn_82A1DDC0(iVar12,iVar12 - in_stack_0000005c,iVar10);
    if ((int)lVar9 != 0) {
      do {
        iVar10 = 0;
        if (0 < iVar6) {
          lVar4 = (ulonglong)(iVar6 - 1U >> 4) + 1;
          do {
            altv300_21(in_vs43,in_vs61);
            puVar1 = (undefined4 *)(iVar10 + iVar12 & 0xfffffff0);
            *puVar1 = in_register_000103e0;
            puVar1[1] = in_register_000103e4;
            puVar1[2] = in_register_000103e8;
            puVar1[3] = in_vr62;
            iVar10 = iVar10 + 0x10;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        lVar9 = lVar9 + -1;
        iVar12 = iVar12 + in_stack_0000005c;
      } while (lVar9 != 0);
    }
  }
  return;
}

