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
extern unsigned int lbl_820FDA30;
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


void fn_830F1780(int param_1,ulonglong param_2,uint param_3,uint param_4,uint param_5,uint param_6
                  ,longlong param_7,uint param_8)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
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
  uVar7 = ((ulonglong)param_3 & 0xffff) << 0x10;
  iVar5 = *(int *)(param_1 + 0x15c);
  uVar21 = (ulonglong)*(uint *)(param_1 + 0x11c);
  uVar12 = (ulonglong)*(uint *)(param_1 + 0x124);
  uVar16 = (longlong)(int)(uint)uVar1 * (longlong)(int)param_3 + param_2 & 0x7fffffff;
  iVar4 = (int)(uVar16 << 3);
  uVar15 = (uVar7 | param_2 & 0xffffffff) & 0x3ffffff;
  lVar18 = uVar15 * 0x40;
  uVar2 = *(uint *)(iVar4 + iVar5);
  sVar6 = (short)uVar2;
  uStack_b8 = (int)uVar2 >> 0x10;
  uStack_b4 = (uint)sVar6;
  uStack_bc = ((int)(((int)sVar6 & 3U) + 1) >> 2) + (int)sVar6 >> 1;
  uStack_c0 = *(int *)(&lbl_820FDA30 + (uStack_b8 & 0xf) * 4) + ((int)uVar2 >> 0x11 & 0xfffffff8U);
  uVar13 = (int)sVar6;
  uVar11 = uStack_b8;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack0000004c = param_8;
  if ((((ulonglong)uVar2 + ((ulonglong)uVar2 & 0x8000) * -2 + lVar18 + 0x730073 |
       (uVar21 - uVar2) + uVar15 * -0x40) & 0x80008000) != 0) {
    fn_830EF918(&uStack_b4,&uStack_b8,lVar18,uVar21);
    uVar13 = uStack_b4;
    uVar11 = uStack_b8;
  }
  uVar2 = *(uint *)(iVar4 + iVar5 + 4);
  lVar19 = lVar18 + 0x20;
  sVar6 = (short)uVar2;
  uStack_ac = (int)uVar2 >> 0x10;
  uStack_b0 = (uint)sVar6;
  uStack_b4 = ((int)(((int)sVar6 & 3U) + 1) >> 2) + (int)sVar6 >> 1;
  uStack_b8 = *(int *)(&lbl_820FDA30 + (uStack_ac & 0xf) * 4) + ((int)uVar2 >> 0x11 & 0xfffffff8U);
  uVar10 = (int)sVar6;
  uVar9 = uStack_ac;
  if ((((ulonglong)uVar2 + ((ulonglong)uVar2 & 0x8000) * -2 + lVar19 + 0x730073 |
       (uVar21 - uVar2) - lVar19) & 0x80008000) != 0) {
    fn_830EF918(&uStack_b0,&uStack_ac,lVar19,uVar21);
    uVar10 = uStack_b0;
    uVar9 = uStack_ac;
  }
  iVar4 = (int)(((ulonglong)uVar1 + uVar16 * 2 & 0xffffffff) << 2);
  lVar19 = lVar18 + 0x40000;
  uVar2 = *(uint *)(iVar4 + iVar5);
  sVar6 = (short)uVar2;
  uStack_b0 = (int)uVar2 >> 0x10;
  uStack_ac = (uint)sVar6;
  uStack_a4 = ((int)(((int)sVar6 & 3U) + 1) >> 2) + (int)sVar6 >> 1;
  uVar16 = (ulonglong)(int)uStack_a4;
  uVar15 = (ulonglong)*(uint *)(&lbl_820FDA30 + (uStack_b0 & 0xf) * 4) +
           ((ulonglong)(uint)((int)uVar2 >> 0x11) & 0xfffffff8);
  uStack_a8 = (uint)uVar15;
  uVar14 = (int)sVar6;
  uVar8 = uStack_b0;
  if ((((ulonglong)uVar2 + ((ulonglong)uVar2 & 0x8000) * -2 + lVar19 + 0x730073 |
       (uVar21 - uVar2) - lVar19) & 0x80008000) != 0) {
    fn_830EF918(&uStack_ac,&uStack_b0,lVar19,uVar21);
    uVar14 = uStack_ac;
    uVar8 = uStack_b0;
  }
  uVar2 = *(uint *)(iVar4 + iVar5 + 4);
  lVar18 = lVar18 + 0x40020;
  sVar6 = (short)uVar2;
  uStack_b0 = (int)uVar2 >> 0x10;
  uStack_ac = (uint)sVar6;
  auStack_9c[0] = ((int)(((int)sVar6 & 3U) + 1) >> 2) + (int)sVar6 >> 1;
  uVar20 = (ulonglong)(int)auStack_9c[0];
  uVar17 = (ulonglong)*(uint *)(&lbl_820FDA30 + (uStack_b0 & 0xf) * 4) +
           ((ulonglong)(uint)((int)uVar2 >> 0x11) & 0xfffffff8);
  uStack_a0 = (uint)uVar17;
  if ((((ulonglong)uVar2 + ((ulonglong)uVar2 & 0x8000) * -2 + lVar18 + 0x730073 |
       (uVar21 - uVar2) - lVar18) & 0x80008000) != 0) {
    fn_830EF918(&uStack_ac,&uStack_b0,lVar18,uVar21);
  }
  uVar2 = uStack_ac;
  uVar7 = (uVar7 | param_2 & 0xffffffff) & 0x7ffffff;
  lVar18 = uVar7 * 0x20;
  uVar21 = ((ulonglong)uStack_c0 & 0xffff) << 0x10 | (ulonglong)uStack_bc & 0xffffffff0000ffff;
  if (((uVar21 + ((ulonglong)uStack_bc & 0x8000) * -2 + lVar18 + 0x3b003b |
       (uVar12 - uVar21) + uVar7 * -0x20) & 0x80008000) != 0) {
    fn_830EF9E8(&uStack_bc,&uStack_c0,lVar18,uVar12);
  }
  uVar3 = uStack_c0;
  lVar19 = lVar18 + 0x10;
  uVar7 = ((ulonglong)uStack_b8 & 0xffff) << 0x10 | (ulonglong)uStack_b4 & 0xffffffff0000ffff;
  if (((uVar7 + ((ulonglong)uStack_b4 & 0x8000) * -2 + lVar19 + 0x3b003b | (uVar12 - uVar7) - lVar19
       ) & 0x80008000) != 0) {
    fn_830EF9E8(&uStack_b4,&uStack_b8,lVar19,uVar12);
  }
  uVar15 = (uVar15 & 0xffff) << 0x10 | uVar16 & 0xffffffff0000ffff;
  lVar19 = lVar18 + 0x40000;
  if (((uVar15 + (uVar16 & 0x8000) * -2 + lVar19 + 0x3b003b | (uVar12 - uVar15) - lVar19) &
      0x80008000) != 0) {
    fn_830EF9E8(&uStack_a4,&uStack_a8,lVar19,uVar12);
  }
  uVar15 = (uVar17 & 0xffff) << 0x10 | uVar20 & 0xffffffff0000ffff;
  lVar18 = lVar18 + 0x40010;
  if (((uVar15 + (uVar20 & 0x8000) * -2 + lVar18 + 0x3b003b | (uVar12 - uVar15) - lVar18) &
      0x80008000) != 0) {
    fn_830EF9E8(auStack_9c,&uStack_a0,lVar18,uVar12);
  }
  uVar15 = (ulonglong)*(ushort *)(param_1 + 0x4a);
  uVar16 = (ulonglong)uStack0000002c;
  lVar19 = (longlong)((int)uVar11 >> 2) * (longlong)(int)(uint)*(ushort *)(param_1 + 0x4a) +
           (longlong)((int)uVar13 >> 2) + uVar16;
  lVar18 = uVar15 * 2;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 2) + (uint)((int)lbl_83232460 < 0 && (lbl_83232460 & 3) != 0)) * 4) {
    dataCacheBlockTouch(lVar19 + 0x80);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar19);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar19);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar19);
    lbl_83232460 = 0;
  }
  uVar11 = uVar11 & 3;
  lbl_83232460 = lbl_83232460 + 1;
  iVar5 = (**(code **)(((uVar13 & 3) * 4 + uVar11 + 0xf1) * 4 + param_1))
                    (lVar19,lVar18,param_7,lVar18,param_1,uVar13 & 3,uVar11,0);
  if (iVar5 != 0) {
    fn_82CC4918(lVar19,lVar18,param_7,lVar18,uVar13 & 3,uVar11,*(undefined1 *)(param_1 + 0x23)
                      ,0);
  }
  uVar15 = (ulonglong)*(ushort *)(param_1 + 0x4a);
  lVar19 = (longlong)((int)uVar9 >> 2) * (longlong)(int)(uint)*(ushort *)(param_1 + 0x4a) +
           (longlong)((int)uVar10 >> 2) + uVar16;
  lVar22 = lVar19 + 8;
  lVar18 = uVar15 * 2;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 2) + (uint)((int)lbl_83232460 < 0 && (lbl_83232460 & 3) != 0)) * 4) {
    dataCacheBlockTouch(lVar19 + 0x88);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar22);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar22);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar22);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar22);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar22);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar22);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar22);
    lbl_83232460 = 0;
  }
  lbl_83232460 = lbl_83232460 + 1;
  uVar9 = uVar9 & 3;
  iVar5 = (**(code **)(((uVar10 & 3) * 4 + uVar9 + 0xf1) * 4 + param_1))
                    (lVar22,lVar18,param_7 + 8,lVar18,param_1,uVar10 & 3,uVar9,0);
  if (iVar5 != 0) {
    fn_82CC4918(lVar22,lVar18,param_7 + 8,lVar18,uVar10 & 3,uVar9,
                      *(undefined1 *)(param_1 + 0x23),0);
  }
  uVar15 = (ulonglong)*(ushort *)(param_1 + 0x4a);
  lVar19 = (longlong)(((int)uVar8 >> 2) + 1) * (longlong)(int)(uint)*(ushort *)(param_1 + 0x4a) +
           (longlong)((int)uVar14 >> 2) + uVar16;
  lVar18 = uVar15 * 2;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 2) + (uint)((int)lbl_83232460 < 0 && (lbl_83232460 & 3) != 0)) * 4) {
    dataCacheBlockTouch(lVar19 + 0x80);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar19);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar19);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar19);
    lbl_83232460 = 0;
  }
  lbl_83232460 = lbl_83232460 + 1;
  uVar8 = uVar8 & 3;
  iVar5 = (**(code **)(((uVar14 & 3) * 4 + uVar8 + 0xf1) * 4 + param_1))
                    (lVar19,lVar18,uVar15 + param_7,lVar18,param_1,uVar14 & 3,uVar8,0);
  if (iVar5 != 0) {
    fn_82CC4918(lVar19,lVar18,uVar15 + param_7,lVar18,uVar14 & 3,uVar8,
                      *(undefined1 *)(param_1 + 0x23),0);
  }
  uVar15 = (ulonglong)*(ushort *)(param_1 + 0x4a);
  lVar19 = (longlong)(((int)uStack_b0 >> 2) + 1) * (longlong)(int)(uint)*(ushort *)(param_1 + 0x4a)
           + (longlong)((int)uVar2 >> 2) + uVar16;
  lVar23 = lVar19 + 8;
  lVar22 = uVar15 + param_7 + 8;
  lVar18 = uVar15 * 2;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 2) + (uint)((int)lbl_83232460 < 0 && (lbl_83232460 & 3) != 0)) * 4) {
    dataCacheBlockTouch(lVar19 + 0x88);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar23);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar23);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar23);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar23);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar23);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar23);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar23);
    lbl_83232460 = 0;
  }
  lbl_83232460 = lbl_83232460 + 1;
  uVar11 = uStack_b0 & 3;
  iVar5 = (**(code **)(((uVar2 & 3) * 4 + uVar11 + 0xf1) * 4 + param_1))
                    (lVar23,lVar18,lVar22,lVar18,param_1,uVar2 & 3,uVar11,0);
  if (iVar5 != 0) {
    fn_82CC4918(lVar23,lVar18,lVar22,lVar18,uVar2 & 3,uVar11,*(undefined1 *)(param_1 + 0x23),0
                     );
  }
  uVar2 = uStack_bc;
  uVar15 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  uVar7 = (ulonglong)uStack00000034;
  uVar16 = (ulonglong)uStack0000003c;
  lVar22 = (longlong)((int)uVar3 >> 2) * (longlong)(int)(uint)*(ushort *)(param_1 + 0x4c) +
           (longlong)((int)uStack_bc >> 2);
  lVar19 = lVar22 + uVar7;
  lVar22 = lVar22 + uVar16;
  lVar18 = uVar15 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar19 + 0x80);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar19);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar19);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar19);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar12 = (ulonglong)uStack0000004c;
  uVar3 = uVar3 & 3;
  uVar11 = uStack_bc & 3;
  (**(code **)(((uStack_bc & 3) * 4 + uVar3 + 0x101) * 4 + param_1))
            (lVar19,lVar18,uVar12,lVar18,uVar11,uVar3,*(undefined1 *)(param_1 + 0x23),0);
  uVar15 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  lVar18 = uVar15 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar22 + 0x80);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar22);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar22);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar22);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar22);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar22);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar22);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar22);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar21 = (ulonglong)in_stack_00000054;
  (**(code **)(((uVar2 & 3) * 4 + uVar3 + 0x101) * 4 + param_1))
            (lVar22,lVar18,uVar21,lVar18,uVar11,uVar3,*(undefined1 *)(param_1 + 0x23),0);
  uVar2 = uStack_b4;
  uVar15 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  lVar23 = (longlong)((int)uStack_b8 >> 2) * (longlong)(int)(uint)*(ushort *)(param_1 + 0x4c) +
           (longlong)((int)uStack_b4 >> 2);
  lVar22 = lVar23 + uVar7;
  lVar23 = lVar23 + uVar16;
  lVar19 = lVar22 + 4;
  lVar24 = lVar23 + 4;
  lVar18 = uVar15 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar22 + 0x84);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar19);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar19);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar19);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar11 = uStack_b8 & 3;
  uVar13 = uStack_b4 & 3;
  (**(code **)(((uStack_b4 & 3) * 4 + uVar11 + 0x101) * 4 + param_1))
            (lVar19,lVar18,uVar12 + 4,lVar18,uVar13,uVar11,*(undefined1 *)(param_1 + 0x23),0);
  uVar15 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  lVar18 = uVar15 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar23 + 0x84);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar24);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar24);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar24);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar24);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar24);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar24);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar24);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  (**(code **)(((uVar2 & 3) * 4 + uVar11 + 0x101) * 4 + param_1))
            (lVar24,lVar18,uVar21 + 4,lVar18,uVar13,uVar11,*(undefined1 *)(param_1 + 0x23),0);
  uVar2 = uStack_a4;
  uVar15 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  lVar22 = uVar15 + (longlong)((int)uStack_a8 >> 2) *
                    (longlong)(int)(uint)*(ushort *)(param_1 + 0x4c) +
                    (longlong)((int)uStack_a4 >> 2);
  lVar19 = lVar22 + uVar7;
  lVar22 = lVar22 + uVar16;
  lVar18 = uVar15 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar19 + 0x80);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar19);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar19);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar19);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar11 = uStack_a8 & 3;
  uVar13 = uStack_a4 & 3;
  (**(code **)(((uStack_a4 & 3) * 4 + uVar11 + 0x101) * 4 + param_1))
            (lVar19,lVar18,uVar15 + uVar12,lVar18,uVar13,uVar11,*(undefined1 *)(param_1 + 0x23),0);
  uVar17 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  lVar18 = uVar17 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar22 + 0x80);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar22);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar22);
    dataCacheBlockTouch(uVar17 * 6 + 0x80 + lVar22);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar22);
    dataCacheBlockTouch(uVar17 * 10 + 0x80 + lVar22);
    dataCacheBlockTouch(uVar17 * 0xc + 0x80 + lVar22);
    dataCacheBlockTouch(uVar17 * 0xe + 0x80 + lVar22);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  (**(code **)(((uVar2 & 3) * 4 + uVar11 + 0x101) * 4 + param_1))
            (lVar22,lVar18,uVar15 + uVar21,lVar18,uVar13,uVar11,*(undefined1 *)(param_1 + 0x23),0);
  uVar2 = auStack_9c[0];
  uVar15 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  lVar23 = uVar15 + (longlong)((int)uStack_a0 >> 2) *
                    (longlong)(int)(uint)*(ushort *)(param_1 + 0x4c) +
                    (longlong)((int)auStack_9c[0] >> 2);
  lVar22 = lVar23 + uVar7;
  lVar23 = lVar23 + uVar16;
  lVar19 = lVar22 + 4;
  lVar24 = lVar23 + 4;
  lVar18 = uVar15 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar22 + 0x84);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar19);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar19);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar19);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar11 = uStack_a0 & 3;
  uVar13 = auStack_9c[0] & 3;
  (**(code **)(((auStack_9c[0] & 3) * 4 + uVar11 + 0x101) * 4 + param_1))
            (lVar19,lVar18,uVar15 + uVar12 + 4,lVar18,uVar13,uVar11,*(undefined1 *)(param_1 + 0x23),
             0);
  uVar16 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  lVar18 = uVar16 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar23 + 0x84);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar24);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar24);
    dataCacheBlockTouch(uVar16 * 6 + 0x80 + lVar24);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar24);
    dataCacheBlockTouch(uVar16 * 10 + 0x80 + lVar24);
    dataCacheBlockTouch(uVar16 * 0xc + 0x80 + lVar24);
    dataCacheBlockTouch(uVar16 * 0xe + 0x80 + lVar24);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  (**(code **)(((uVar2 & 3) * 4 + uVar11 + 0x101) * 4 + param_1))
            (lVar24,lVar18,uVar15 + uVar21 + 4,lVar18,uVar13,uVar11,*(undefined1 *)(param_1 + 0x23),
             0);
  return;
}

