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
extern unsigned int *auStack_9c;
extern int fn_82CC4918();
extern int fn_830EF918();
extern int fn_830EF9E8();
extern unsigned int lbl_83232460;
extern unsigned int lbl_83232464;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack0000004c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_830F0790(int param_1,ulonglong param_2,uint param_3,uint param_4,uint param_5,uint param_6
                  ,longlong param_7,uint param_8)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uStack0000002c;
  uint uStack00000034;
  uint uStack0000003c;
  uint uStack0000004c;
  uint in_stack_00000054;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint auStack_9c [39];
  
  uVar1 = *(ushort *)(param_1 + 0x32);
  iVar7 = *(int *)(param_1 + 0x15c);
  uVar24 = (ulonglong)*(uint *)(param_1 + 0x11c);
  uVar17 = (ulonglong)*(uint *)(param_1 + 0x124);
  uVar9 = ((ulonglong)param_3 & 0xffff) << 0x10;
  uVar21 = (longlong)(int)(uint)uVar1 * (longlong)(int)param_3 + param_2 & 0x7fffffff;
  iVar6 = (int)(uVar21 << 3);
  uVar18 = (uVar9 | param_2 & 0xffffffff) & 0x3ffffff;
  lVar19 = uVar18 * 0x40;
  uVar2 = *(uint *)(iVar6 + iVar7);
  sVar8 = (short)uVar2;
  uStack_b8 = (int)uVar2 >> 0x10;
  uStack_b4 = (uint)sVar8;
  uStack_bc = ((int)(((int)sVar8 & 3U) + 1) >> 2) + (int)sVar8 >> 1;
  uStack_c0 = (int)(((int)((uStack_b8 & 3) + 1) >> 2) + uStack_b8) >> 1;
  uVar15 = uStack_b8;
  uVar16 = (int)sVar8;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack0000004c = param_8;
  if ((((ulonglong)uVar2 + ((ulonglong)uVar2 & 0x8000) * -2 + lVar19 + 0x730073 |
       (uVar24 - uVar2) + uVar18 * -0x40) & 0x80008000) != 0) {
    fn_830EF918(&uStack_b4,&uStack_b8,lVar19,uVar24);
    uVar15 = uStack_b8;
    uVar16 = uStack_b4;
  }
  uVar2 = *(uint *)(iVar6 + iVar7 + 4);
  lVar20 = lVar19 + 0x20;
  sVar8 = (short)uVar2;
  uStack_ac = (int)uVar2 >> 0x10;
  uStack_b0 = (uint)sVar8;
  uStack_b4 = ((int)(((int)sVar8 & 3U) + 1) >> 2) + (int)sVar8 >> 1;
  uStack_b8 = (int)(((int)((uStack_ac & 3) + 1) >> 2) + uStack_ac) >> 1;
  uVar14 = (int)sVar8;
  uVar12 = uStack_ac;
  if ((((ulonglong)uVar2 + ((ulonglong)uVar2 & 0x8000) * -2 + lVar20 + 0x730073 |
       (uVar24 - uVar2) - lVar20) & 0x80008000) != 0) {
    fn_830EF918(&uStack_b0,&uStack_ac,lVar20,uVar24);
    uVar14 = uStack_b0;
    uVar12 = uStack_ac;
  }
  iVar6 = (int)(((ulonglong)uVar1 + uVar21 * 2 & 0xffffffff) << 2);
  lVar20 = lVar19 + 0x200000;
  uVar2 = *(uint *)(iVar6 + iVar7);
  sVar8 = (short)uVar2;
  uStack_b0 = (int)uVar2 >> 0x10;
  uStack_ac = (uint)sVar8;
  uStack_a4 = ((int)(((int)sVar8 & 3U) + 1) >> 2) + (int)sVar8 >> 1;
  uVar18 = (ulonglong)(int)uStack_a4;
  uVar3 = (int)(((int)((uStack_b0 & 3) + 1) >> 2) + uStack_b0) >> 1;
  uVar13 = (int)sVar8;
  uVar11 = uStack_b0;
  uStack_a8 = uVar3;
  if ((((ulonglong)uVar2 + ((ulonglong)uVar2 & 0x8000) * -2 + lVar20 + 0x730073 |
       (uVar24 - uVar2) - lVar20) & 0x80008000) != 0) {
    fn_830EF918(&uStack_ac,&uStack_b0,lVar20,uVar24);
    uVar13 = uStack_ac;
    uVar11 = uStack_b0;
  }
  uVar2 = *(uint *)(iVar6 + iVar7 + 4);
  lVar19 = lVar19 + 0x200020;
  sVar8 = (short)uVar2;
  uStack_b0 = (int)uVar2 >> 0x10;
  uStack_ac = (uint)sVar8;
  auStack_9c[0] = ((int)(((int)sVar8 & 3U) + 1) >> 2) + (int)sVar8 >> 1;
  uVar21 = (ulonglong)(int)auStack_9c[0];
  uVar4 = (int)(((int)((uStack_b0 & 3) + 1) >> 2) + uStack_b0) >> 1;
  uStack_a0 = uVar4;
  if ((((ulonglong)uVar2 + ((ulonglong)uVar2 & 0x8000) * -2 + lVar19 + 0x730073 |
       (uVar24 - uVar2) - lVar19) & 0x80008000) != 0) {
    fn_830EF918(&uStack_ac,&uStack_b0,lVar19,uVar24);
  }
  uVar2 = uStack_ac;
  uVar9 = (uVar9 | param_2 & 0xffffffff) & 0x7ffffff;
  lVar19 = uVar9 * 0x20;
  uVar24 = ((ulonglong)uStack_c0 & 0xffff) << 0x10 | (ulonglong)uStack_bc & 0xffffffff0000ffff;
  if (((uVar24 + ((ulonglong)uStack_bc & 0x8000) * -2 + lVar19 + 0x3b003b |
       (uVar17 - uVar24) + uVar9 * -0x20) & 0x80008000) != 0) {
    fn_830EF9E8(&uStack_bc,&uStack_c0,lVar19,uVar17);
  }
  uVar5 = uStack_c0;
  lVar20 = lVar19 + 0x10;
  uVar9 = ((ulonglong)uStack_b8 & 0xffff) << 0x10 | (ulonglong)uStack_b4 & 0xffffffff0000ffff;
  if (((uVar9 + ((ulonglong)uStack_b4 & 0x8000) * -2 + lVar20 + 0x3b003b | (uVar17 - uVar9) - lVar20
       ) & 0x80008000) != 0) {
    fn_830EF9E8(&uStack_b4,&uStack_b8,lVar20,uVar17);
  }
  uVar9 = ((ulonglong)uVar3 & 0xffff) << 0x10 | uVar18 & 0xffffffff0000ffff;
  lVar20 = lVar19 + 0x100000;
  if (((uVar9 + (uVar18 & 0x8000) * -2 + lVar20 + 0x3b003b | (uVar17 - uVar9) - lVar20) & 0x80008000
      ) != 0) {
    fn_830EF9E8(&uStack_a4,&uStack_a8,lVar20,uVar17);
  }
  uVar18 = ((ulonglong)uVar4 & 0xffff) << 0x10 | uVar21 & 0xffffffff0000ffff;
  lVar19 = lVar19 + 0x100010;
  if (((uVar18 + (uVar21 & 0x8000) * -2 + lVar19 + 0x3b003b | (uVar17 - uVar18) - lVar19) &
      0x80008000) != 0) {
    fn_830EF9E8(auStack_9c,&uStack_a0,lVar19,uVar17);
  }
  uVar21 = (ulonglong)*(ushort *)(param_1 + 0x4a);
  uVar18 = (ulonglong)uStack0000002c;
  lVar19 = (longlong)((int)uVar15 >> 2) * (longlong)(int)(uint)*(ushort *)(param_1 + 0x4a) +
           (longlong)((int)uVar16 >> 2) + uVar18;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 2) + (uint)((int)lbl_83232460 < 0 && (lbl_83232460 & 3) != 0)) * 4) {
    dataCacheBlockTouch(lVar19 + 0x80);
    dataCacheBlockTouch(uVar21 + 0x80 + lVar19);
    dataCacheBlockTouch((uVar21 + 0x40) * 2 + lVar19);
    dataCacheBlockTouch(uVar21 * 3 + 0x80 + lVar19);
    dataCacheBlockTouch((uVar21 + 0x20) * 4 + lVar19);
    dataCacheBlockTouch(uVar21 * 5 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar21 * 6 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar21 * 7 + 0x80 + lVar19);
    lbl_83232460 = 0;
  }
  uVar15 = uVar15 & 3;
  lbl_83232460 = lbl_83232460 + 1;
  iVar7 = (**(code **)(((uVar16 & 3) * 4 + uVar15 + 0xf1) * 4 + param_1))
                    (lVar19,uVar21,param_7,uVar21,param_1,uVar16 & 3,uVar15,0);
  if (iVar7 != 0) {
    fn_82CC4918(lVar19,uVar21,param_7,uVar21,uVar16 & 3,uVar15,*(undefined1 *)(param_1 + 0x23)
                      ,0);
  }
  uVar21 = (ulonglong)*(ushort *)(param_1 + 0x4a);
  lVar19 = (longlong)((int)uVar12 >> 2) * (longlong)(int)(uint)*(ushort *)(param_1 + 0x4a) +
           (longlong)((int)uVar14 >> 2) + uVar18;
  lVar20 = lVar19 + 8;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 2) + (uint)((int)lbl_83232460 < 0 && (lbl_83232460 & 3) != 0)) * 4) {
    dataCacheBlockTouch(lVar19 + 0x88);
    dataCacheBlockTouch(uVar21 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar21 + 0x40) * 2 + lVar20);
    dataCacheBlockTouch(uVar21 * 3 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar21 + 0x20) * 4 + lVar20);
    dataCacheBlockTouch(uVar21 * 5 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar21 * 6 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar21 * 7 + 0x80 + lVar20);
    lbl_83232460 = 0;
  }
  uVar12 = uVar12 & 3;
  lbl_83232460 = lbl_83232460 + 1;
  iVar7 = (**(code **)(((uVar14 & 3) * 4 + uVar12 + 0xf1) * 4 + param_1))
                    (lVar20,uVar21,param_7 + 8,uVar21,param_1,uVar14 & 3,uVar12,0);
  if (iVar7 != 0) {
    fn_82CC4918(lVar20,uVar21,param_7 + 8,uVar21,uVar14 & 3,uVar12,
                      *(undefined1 *)(param_1 + 0x23),0);
  }
  uVar21 = (ulonglong)*(ushort *)(param_1 + 0x4a);
  lVar20 = (longlong)(((int)uVar11 >> 2) + 8) * (longlong)(int)(uint)*(ushort *)(param_1 + 0x4a) +
           (longlong)((int)uVar13 >> 2) + uVar18;
  lVar19 = uVar21 * 8 + param_7;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 2) + (uint)((int)lbl_83232460 < 0 && (lbl_83232460 & 3) != 0)) * 4) {
    dataCacheBlockTouch(lVar20 + 0x80);
    dataCacheBlockTouch(uVar21 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar21 + 0x40) * 2 + lVar20);
    dataCacheBlockTouch(uVar21 * 3 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar21 + 0x20) * 4 + lVar20);
    dataCacheBlockTouch(uVar21 * 5 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar21 * 6 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar21 * 7 + 0x80 + lVar20);
    lbl_83232460 = 0;
  }
  lbl_83232460 = lbl_83232460 + 1;
  uVar11 = uVar11 & 3;
  iVar7 = (**(code **)(((uVar13 & 3) * 4 + uVar11 + 0xf1) * 4 + param_1))
                    (lVar20,uVar21,lVar19,uVar21,param_1,uVar13 & 3,uVar11,0);
  if (iVar7 != 0) {
    fn_82CC4918(lVar20,uVar21,lVar19,uVar21,uVar13 & 3,uVar11,*(undefined1 *)(param_1 + 0x23),
                      0);
  }
  uVar21 = (ulonglong)*(ushort *)(param_1 + 0x4a);
  lVar19 = (longlong)(((int)uStack_b0 >> 2) + 8) * (longlong)(int)(uint)*(ushort *)(param_1 + 0x4a)
           + (longlong)((int)uVar2 >> 2) + uVar18;
  lVar20 = lVar19 + 8;
  param_7 = (uVar21 + 1) * 8 + param_7;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 2) + (uint)((int)lbl_83232460 < 0 && (lbl_83232460 & 3) != 0)) * 4) {
    dataCacheBlockTouch(lVar19 + 0x88);
    dataCacheBlockTouch(uVar21 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar21 + 0x40) * 2 + lVar20);
    dataCacheBlockTouch(uVar21 * 3 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar21 + 0x20) * 4 + lVar20);
    dataCacheBlockTouch(uVar21 * 5 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar21 * 6 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar21 * 7 + 0x80 + lVar20);
    lbl_83232460 = 0;
  }
  lbl_83232460 = lbl_83232460 + 1;
  uVar15 = uStack_b0 & 3;
  iVar7 = (**(code **)(((uVar2 & 3) * 4 + uVar15 + 0xf1) * 4 + param_1))
                    (lVar20,uVar21,param_7,uVar21,param_1,uVar2 & 3,uVar15,0);
  if (iVar7 != 0) {
    fn_82CC4918(lVar20,uVar21,param_7,uVar21,uVar2 & 3,uVar15,*(undefined1 *)(param_1 + 0x23),
                      0);
  }
  uVar2 = uStack_bc;
  uVar18 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  uVar9 = (ulonglong)uStack00000034;
  uVar21 = (ulonglong)uStack0000003c;
  lVar20 = (longlong)((int)uVar5 >> 2) * (longlong)(int)(uint)*(ushort *)(param_1 + 0x4c) +
           (longlong)((int)uStack_bc >> 2);
  lVar19 = lVar20 + uVar9;
  lVar20 = lVar20 + uVar21;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar19 + 0x80);
    dataCacheBlockTouch(uVar18 + 0x80 + lVar19);
    dataCacheBlockTouch((uVar18 + 0x40) * 2 + lVar19);
    dataCacheBlockTouch(uVar18 * 3 + 0x80 + lVar19);
    dataCacheBlockTouch((uVar18 + 0x20) * 4 + lVar19);
    dataCacheBlockTouch(uVar18 * 5 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar18 * 6 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar18 * 7 + 0x80 + lVar19);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar5 = uVar5 & 3;
  uVar17 = (ulonglong)uStack0000004c;
  uVar15 = uStack_bc & 3;
  (**(code **)(((uStack_bc & 3) * 4 + uVar5 + 0x101) * 4 + param_1))
            (lVar19,uVar18,uVar17,uVar18,uVar15,uVar5,*(undefined1 *)(param_1 + 0x23),0);
  uVar18 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar20 + 0x80);
    dataCacheBlockTouch(uVar18 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar18 + 0x40) * 2 + lVar20);
    dataCacheBlockTouch(uVar18 * 3 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar18 + 0x20) * 4 + lVar20);
    dataCacheBlockTouch(uVar18 * 5 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar18 * 6 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar18 * 7 + 0x80 + lVar20);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar24 = (ulonglong)in_stack_00000054;
  (**(code **)(((uVar2 & 3) * 4 + uVar5 + 0x101) * 4 + param_1))
            (lVar20,uVar18,uVar24,uVar18,uVar15,uVar5,*(undefined1 *)(param_1 + 0x23),0);
  uVar2 = uStack_b4;
  uVar18 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  lVar10 = (longlong)((int)uStack_b8 >> 2) * (longlong)(int)(uint)*(ushort *)(param_1 + 0x4c) +
           (longlong)((int)uStack_b4 >> 2);
  lVar20 = lVar10 + uVar9;
  lVar10 = lVar10 + uVar21;
  lVar19 = lVar20 + 4;
  lVar22 = lVar10 + 4;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar20 + 0x84);
    dataCacheBlockTouch(uVar18 + 0x80 + lVar19);
    dataCacheBlockTouch((uVar18 + 0x40) * 2 + lVar19);
    dataCacheBlockTouch(uVar18 * 3 + 0x80 + lVar19);
    dataCacheBlockTouch((uVar18 + 0x20) * 4 + lVar19);
    dataCacheBlockTouch(uVar18 * 5 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar18 * 6 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar18 * 7 + 0x80 + lVar19);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar15 = uStack_b8 & 3;
  uVar16 = uStack_b4 & 3;
  (**(code **)(((uStack_b4 & 3) * 4 + uVar15 + 0x101) * 4 + param_1))
            (lVar19,uVar18,uVar17 + 4,uVar18,uVar16,uVar15,*(undefined1 *)(param_1 + 0x23),0);
  uVar18 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar10 + 0x84);
    dataCacheBlockTouch(uVar18 + 0x80 + lVar22);
    dataCacheBlockTouch((uVar18 + 0x40) * 2 + lVar22);
    dataCacheBlockTouch(uVar18 * 3 + 0x80 + lVar22);
    dataCacheBlockTouch((uVar18 + 0x20) * 4 + lVar22);
    dataCacheBlockTouch(uVar18 * 5 + 0x80 + lVar22);
    dataCacheBlockTouch(uVar18 * 6 + 0x80 + lVar22);
    dataCacheBlockTouch(uVar18 * 7 + 0x80 + lVar22);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  (**(code **)(((uVar2 & 3) * 4 + uVar15 + 0x101) * 4 + param_1))
            (lVar22,uVar18,uVar24 + 4,uVar18,uVar16,uVar15,*(undefined1 *)(param_1 + 0x23),0);
  uVar2 = uStack_a4;
  uVar18 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  lVar19 = uVar18 * 4;
  lVar10 = lVar19 + (longlong)((int)uStack_a8 >> 2) *
                    (longlong)(int)(uint)*(ushort *)(param_1 + 0x4c) +
                    (longlong)((int)uStack_a4 >> 2);
  lVar20 = lVar10 + uVar9;
  lVar10 = lVar10 + uVar21;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar20 + 0x80);
    dataCacheBlockTouch(uVar18 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar18 + 0x40) * 2 + lVar20);
    dataCacheBlockTouch(uVar18 * 3 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar18 + 0x20) * 4 + lVar20);
    dataCacheBlockTouch(uVar18 * 5 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar18 * 6 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar18 * 7 + 0x80 + lVar20);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar15 = uStack_a8 & 3;
  uVar16 = uStack_a4 & 3;
  (**(code **)(((uStack_a4 & 3) * 4 + uVar15 + 0x101) * 4 + param_1))
            (lVar20,uVar18,lVar19 + uVar17,uVar18,uVar16,uVar15,*(undefined1 *)(param_1 + 0x23),0);
  uVar18 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar10 + 0x80);
    dataCacheBlockTouch(uVar18 + 0x80 + lVar10);
    dataCacheBlockTouch((uVar18 + 0x40) * 2 + lVar10);
    dataCacheBlockTouch(uVar18 * 3 + 0x80 + lVar10);
    dataCacheBlockTouch((uVar18 + 0x20) * 4 + lVar10);
    dataCacheBlockTouch(uVar18 * 5 + 0x80 + lVar10);
    dataCacheBlockTouch(uVar18 * 6 + 0x80 + lVar10);
    dataCacheBlockTouch(uVar18 * 7 + 0x80 + lVar10);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  (**(code **)(((uVar2 & 3) * 4 + uVar15 + 0x101) * 4 + param_1))
            (lVar10,uVar18,lVar19 + uVar24,uVar18,uVar16,uVar15,*(undefined1 *)(param_1 + 0x23),0);
  uVar2 = auStack_9c[0];
  uVar18 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  lVar19 = uVar18 * 4;
  lVar22 = lVar19 + (longlong)((int)uStack_a0 >> 2) *
                    (longlong)(int)(uint)*(ushort *)(param_1 + 0x4c) +
                    (longlong)((int)auStack_9c[0] >> 2);
  lVar10 = lVar22 + uVar9;
  lVar22 = lVar22 + uVar21;
  lVar20 = lVar10 + 4;
  lVar23 = lVar22 + 4;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar10 + 0x84);
    dataCacheBlockTouch(uVar18 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar18 + 0x40) * 2 + lVar20);
    dataCacheBlockTouch(uVar18 * 3 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar18 + 0x20) * 4 + lVar20);
    dataCacheBlockTouch(uVar18 * 5 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar18 * 6 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar18 * 7 + 0x80 + lVar20);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar15 = uStack_a0 & 3;
  uVar16 = auStack_9c[0] & 3;
  (**(code **)(((auStack_9c[0] & 3) * 4 + uVar15 + 0x101) * 4 + param_1))
            (lVar20,uVar18,lVar19 + uVar17 + 4,uVar18,uVar16,uVar15,*(undefined1 *)(param_1 + 0x23),
             0);
  uVar18 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar22 + 0x84);
    dataCacheBlockTouch(uVar18 + 0x80 + lVar23);
    dataCacheBlockTouch((uVar18 + 0x40) * 2 + lVar23);
    dataCacheBlockTouch(uVar18 * 3 + 0x80 + lVar23);
    dataCacheBlockTouch((uVar18 + 0x20) * 4 + lVar23);
    dataCacheBlockTouch(uVar18 * 5 + 0x80 + lVar23);
    dataCacheBlockTouch(uVar18 * 6 + 0x80 + lVar23);
    dataCacheBlockTouch(uVar18 * 7 + 0x80 + lVar23);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  (**(code **)(((uVar2 & 3) * 4 + uVar15 + 0x101) * 4 + param_1))
            (lVar23,uVar18,lVar19 + uVar24 + 4,uVar18,uVar16,uVar15,*(undefined1 *)(param_1 + 0x23),
             0);
  return;
}

