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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_825404D0();
extern unsigned int iStack_8c;
extern unsigned int iStack_dc;
extern unsigned int iStack_f0;
extern unsigned int lbl_82196290;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;


void fn_8254BD40(int param_1,int *param_2,undefined4 *param_3,ulonglong *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined8 in_r0;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint in_stack_00000054;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  uVar9 = (ulonglong)in_stack_00000054;
  if ((in_stack_00000054 != 0) &&
     ((**(code **)(*(int *)param_2[0x6a] + 4))
                ((double)lbl_821CA460,(double)lbl_821CA460,(double)lbl_821CC160,(int *)param_2[0x6a]
                 ,param_3[3],param_5,0xffffffff8329ead0), 0 < (int)in_stack_00000054)) {
    do {
      if ((int)uVar9 < 0x21) {
        uVar10 = uVar9;
        if (0 < (int)uVar9) goto LAB_8254bde4;
      }
      else {
        uVar10 = 0x20;
LAB_8254bde4:
        uVar5 = 0x30;
        lVar6 = (param_8 & 0xfffffff) << 4;
        uVar11 = uVar10;
        iVar7 = 0x300;
        do {
          puVar8 = (undefined4 *)((int)lVar6 + *(int *)(param_1 + 0x94));
          uVar3 = uVar5 & 0xffffffff;
          *(undefined4 *)((int)param_4 + iVar7 + 0x780) = *puVar8;
          lVar6 = lVar6 + 0x10;
          uVar5 = uVar5 + 1;
          *(undefined4 *)((int)param_4 + iVar7 + 0x784) = puVar8[1];
          *(undefined4 *)((int)param_4 + iVar7 + 0x788) = puVar8[2];
          *(undefined4 *)((int)param_4 + iVar7 + 0x78c) = puVar8[3];
          *param_4 = 0x8000000000000000U >> (uVar3 >> 2 & 0x7f) | *param_4;
          uVar11 = uVar11 - 1;
          iVar7 = iVar7 + 0x10;
        } while (uVar11 != 0);
      }
      iVar7 = *(int *)(param_1 + 0x90);
      iVar4 = (**(code **)(*param_2 + 0x3c))(param_2);
      iStack_dc = param_2[0x18];
      iStack_8c = param_2[0x67];
      uStack_7c = *(undefined4 *)(param_1 + 0xfc);
      uStack_90 = param_3[9];
      uStack_80 = *(undefined4 *)(iVar4 + 0x20);
      iVar1 = (int)in_r0;
      puVar8 = (undefined4 *)((int)param_2 + iVar1 + 0x30 & 0xfffffff0);
      uVar12 = puVar8[1];
      uVar13 = puVar8[2];
      uVar14 = puVar8[3];
      puVar2 = (undefined4 *)((uint)(auStack_b0 + iVar1) & 0xfffffff0);
      *puVar2 = *puVar8;
      puVar2[1] = uVar12;
      puVar2[2] = uVar13;
      puVar2[3] = uVar14;
      puVar8 = (undefined4 *)((int)param_2 + iVar1 + 0x20 & 0xfffffff0);
      uVar12 = puVar8[1];
      uVar13 = puVar8[2];
      uVar14 = puVar8[3];
      puVar2 = (undefined4 *)((uint)(auStack_c0 + iVar1) & 0xfffffff0);
      *puVar2 = *puVar8;
      puVar2[1] = uVar12;
      puVar2[2] = uVar13;
      puVar2[3] = uVar14;
      puVar8 = (undefined4 *)((int)param_2 + iVar1 + 0x50 & 0xfffffff0);
      uVar12 = puVar8[1];
      uVar13 = puVar8[2];
      uVar14 = puVar8[3];
      puVar2 = (undefined4 *)((uint)(auStack_a0 + iVar1) & 0xfffffff0);
      *puVar2 = *puVar8;
      puVar2[1] = uVar12;
      puVar2[2] = uVar13;
      puVar2[3] = uVar14;
      puVar8 = (undefined4 *)((int)&lbl_82196290 + iVar1 & 0xfffffff0);
      uVar12 = puVar8[1];
      uVar13 = puVar8[2];
      uVar14 = puVar8[3];
      uStack_ec = (undefined4)uVar10;
      uStack_e8 = 0;
      uStack_e4 = 0xffffffff;
      puVar2 = (undefined4 *)((uint)(auStack_d0 + iVar1) & 0xfffffff0);
      *puVar2 = *puVar8;
      puVar2[1] = uVar12;
      puVar2[2] = uVar13;
      puVar2[3] = uVar14;
      uStack_e0 = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      iStack_f0 = (int)((param_8 & 0xffffffff) << 6) + iVar7;
      fn_825404D0(*param_3,iVar4,param_3,&iStack_f0);
      uVar9 = uVar9 - uVar10;
      param_8 = uVar10 + param_8;
    } while (0 < (longlong)uVar9);
  }
  return;
}

