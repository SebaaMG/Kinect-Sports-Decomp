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
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack0000004c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_830EFF58(int param_1,ulonglong param_2,uint param_3,longlong param_4,uint param_5,
                  uint param_6,longlong param_7,uint param_8)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uStack00000034;
  uint uStack0000003c;
  uint uStack0000004c;
  uint in_stack_00000054;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint auStack_9c [39];
  
  uVar1 = *(ushort *)(param_1 + 0x32);
  uVar5 = ((ulonglong)param_3 & 0xffff) << 0x10;
  iVar3 = *(int *)(param_1 + 0x15c);
  uVar15 = (ulonglong)*(uint *)(param_1 + 0x11c);
  uVar11 = (ulonglong)*(uint *)(param_1 + 0x124);
  uVar14 = (longlong)(int)(uint)uVar1 * (longlong)(int)param_3 + param_2 & 0x7fffffff;
  uVar7 = (uVar5 | param_2 & 0xffffffff) & 0x3ffffff;
  lVar17 = uVar7 * 0x40;
  uVar8 = *(uint *)((int)(uVar14 << 3) + iVar3);
  sVar4 = (short)uVar8;
  uStack_ac = (int)uVar8 >> 0x10;
  uStack_b0 = (uint)sVar4;
  uStack_a8 = ((int)(((int)sVar4 & 3U) + 1) >> 2) + (int)sVar4 >> 1;
  uVar10 = (ulonglong)(int)uStack_a8;
  uVar9 = (ulonglong)*(uint *)(&lbl_820FDA30 + (uStack_ac & 0xf) * 4) +
          ((ulonglong)(uint)((int)uVar8 >> 0x11) & 0xfffffff8);
  uStack_a4 = (uint)uVar9;
  uVar13 = (int)sVar4;
  uVar12 = uStack_ac;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack0000004c = param_8;
  if ((((ulonglong)uVar8 + ((ulonglong)uVar8 & 0x8000) * -2 + lVar17 + 0x730073 |
       (uVar15 - uVar8) + uVar7 * -0x40) & 0x80008000) != 0) {
    fn_830EF918(&uStack_b0,&uStack_ac,lVar17,uVar15);
    uVar13 = uStack_b0;
    uVar12 = uStack_ac;
  }
  lVar17 = lVar17 + 0x40000;
  uVar8 = *(uint *)((int)(((ulonglong)uVar1 + uVar14 * 2 & 0xffffffff) << 2) + iVar3);
  sVar4 = (short)uVar8;
  uStack_b0 = (int)uVar8 >> 0x10;
  uStack_ac = (uint)sVar4;
  uStack_a0 = ((int)(((int)sVar4 & 3U) + 1) >> 2) + (int)sVar4 >> 1;
  uVar7 = (ulonglong)(int)uStack_a0;
  uVar14 = (ulonglong)*(uint *)(&lbl_820FDA30 + (uStack_b0 & 0xf) * 4) +
           ((ulonglong)(uint)((int)uVar8 >> 0x11) & 0xfffffff8);
  auStack_9c[0] = (uint)uVar14;
  if ((((ulonglong)uVar8 + ((ulonglong)uVar8 & 0x8000) * -2 + lVar17 + 0x730073 |
       (uVar15 - uVar8) - lVar17) & 0x80008000) != 0) {
    fn_830EF918(&uStack_ac,&uStack_b0,lVar17,uVar15);
  }
  uVar2 = uStack_ac;
  uVar8 = uStack_b0;
  uVar5 = (uVar5 | param_2 & 0xffffffff) & 0x7ffffff;
  lVar17 = uVar5 * 0x20;
  uVar15 = (uVar9 & 0xffff) << 0x10 | uVar10 & 0xffffffff0000ffff;
  if (((uVar15 + (uVar10 & 0x8000) * -2 + lVar17 + 0x3b003b | (uVar11 - uVar15) + uVar5 * -0x20) &
      0x80008000) != 0) {
    fn_830EF9E8(&uStack_a8,&uStack_a4,lVar17,uVar11);
    uVar10 = (ulonglong)uStack_a8;
    uVar9 = (ulonglong)uStack_a4;
  }
  lVar17 = lVar17 + 0x40000;
  uVar14 = (uVar14 & 0xffff) << 0x10 | uVar7 & 0xffffffff0000ffff;
  if (((uVar14 + (uVar7 & 0x8000) * -2 + lVar17 + 0x3b003b | (uVar11 - uVar14) - lVar17) &
      0x80008000) != 0) {
    fn_830EF9E8(&uStack_a0,auStack_9c,lVar17,uVar11);
    uVar7 = (ulonglong)uStack_a0;
  }
  uVar14 = (ulonglong)*(ushort *)(param_1 + 0x4a);
  lVar16 = (longlong)((int)uVar12 >> 2) * (longlong)(int)(uint)*(ushort *)(param_1 + 0x4a) +
           (longlong)((int)uVar13 >> 2) + param_4;
  lVar17 = uVar14 * 2;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 3) + (uint)((int)lbl_83232460 < 0 && (lbl_83232460 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar16 + 0x80);
    dataCacheBlockTouch(lVar17 + 0x80 + lVar16);
    dataCacheBlockTouch((lVar17 + 0x40) * 2 + lVar16);
    dataCacheBlockTouch(uVar14 * 6 + 0x80 + lVar16);
    dataCacheBlockTouch((lVar17 + 0x20) * 4 + lVar16);
    dataCacheBlockTouch(uVar14 * 10 + 0x80 + lVar16);
    dataCacheBlockTouch(uVar14 * 0xc + 0x80 + lVar16);
    dataCacheBlockTouch(uVar14 * 0xe + 0x80 + lVar16);
    lbl_83232460 = 0;
  }
  uVar12 = uVar12 & 3;
  lbl_83232460 = lbl_83232460 + 1;
  iVar3 = (**(code **)(((uVar13 & 3) * 4 + uVar12 + 0xf1) * 4 + param_1))
                    (lVar16,lVar17,param_7,lVar17,param_1,uVar13 & 3,uVar12,1);
  if (iVar3 != 0) {
    fn_82CC4918(lVar16,lVar17,param_7,lVar17,uVar13 & 3,uVar12,*(undefined1 *)(param_1 + 0x23)
                      ,1);
  }
  uVar14 = (ulonglong)*(ushort *)(param_1 + 0x4a);
  param_4 = (longlong)(((int)uVar8 >> 2) + 1) * (longlong)(int)(uint)*(ushort *)(param_1 + 0x4a) +
            (longlong)((int)uVar2 >> 2) + param_4;
  lVar17 = uVar14 * 2;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 3) + (uint)((int)lbl_83232460 < 0 && (lbl_83232460 & 7) != 0)) * 8) {
    dataCacheBlockTouch(param_4 + 0x80);
    dataCacheBlockTouch(lVar17 + 0x80 + param_4);
    dataCacheBlockTouch((lVar17 + 0x40) * 2 + param_4);
    dataCacheBlockTouch(uVar14 * 6 + 0x80 + param_4);
    dataCacheBlockTouch((lVar17 + 0x20) * 4 + param_4);
    dataCacheBlockTouch(uVar14 * 10 + 0x80 + param_4);
    dataCacheBlockTouch(uVar14 * 0xc + 0x80 + param_4);
    dataCacheBlockTouch(uVar14 * 0xe + 0x80 + param_4);
    lbl_83232460 = 0;
  }
  lbl_83232460 = lbl_83232460 + 1;
  uVar8 = uVar8 & 3;
  iVar3 = (**(code **)(((uVar2 & 3) * 4 + uVar8 + 0xf1) * 4 + param_1))
                    (param_4,lVar17,uVar14 + param_7,lVar17,param_1,uVar2 & 3,uVar8,1);
  if (iVar3 != 0) {
    fn_82CC4918(param_4,lVar17,uVar14 + param_7,lVar17,uVar2 & 3,uVar8,
                      *(undefined1 *)(param_1 + 0x23),1);
  }
  uVar14 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  uVar11 = (ulonglong)uStack00000034;
  uVar8 = (uint)uVar10;
  uVar5 = (ulonglong)uStack0000003c;
  lVar6 = (longlong)((int)uVar9 >> 2) * (longlong)(int)(uint)*(ushort *)(param_1 + 0x4c) +
          (longlong)((int)uVar8 >> 2);
  lVar16 = lVar6 + uVar11;
  lVar6 = lVar6 + uVar5;
  lVar17 = uVar14 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 4) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 0xf) != 0)) * 0x10
     ) {
    dataCacheBlockTouch(lVar16 + 0x80);
    dataCacheBlockTouch(lVar17 + 0x80 + lVar16);
    dataCacheBlockTouch((lVar17 + 0x40) * 2 + lVar16);
    dataCacheBlockTouch(uVar14 * 6 + 0x80 + lVar16);
    dataCacheBlockTouch((lVar17 + 0x20) * 4 + lVar16);
    dataCacheBlockTouch(uVar14 * 10 + 0x80 + lVar16);
    dataCacheBlockTouch(uVar14 * 0xc + 0x80 + lVar16);
    dataCacheBlockTouch(uVar14 * 0xe + 0x80 + lVar16);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar15 = (ulonglong)uStack0000004c;
  uVar9 = uVar9 & 3;
  (**(code **)(((uVar8 & 3) * 4 + (int)uVar9 + 0x101) * 4 + param_1))
            (lVar16,lVar17,uVar15,lVar17,uVar10 & 3,uVar9,*(undefined1 *)(param_1 + 0x23),1);
  uVar14 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  lVar17 = uVar14 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 4) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 0xf) != 0)) * 0x10
     ) {
    dataCacheBlockTouch(lVar6 + 0x80);
    dataCacheBlockTouch(lVar17 + 0x80 + lVar6);
    dataCacheBlockTouch((lVar17 + 0x40) * 2 + lVar6);
    dataCacheBlockTouch(uVar14 * 6 + 0x80 + lVar6);
    dataCacheBlockTouch((lVar17 + 0x20) * 4 + lVar6);
    dataCacheBlockTouch(uVar14 * 10 + 0x80 + lVar6);
    dataCacheBlockTouch(uVar14 * 0xc + 0x80 + lVar6);
    dataCacheBlockTouch(uVar14 * 0xe + 0x80 + lVar6);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  (**(code **)(((uVar8 & 3) * 4 + (int)uVar9 + 0x101) * 4 + param_1))
            (lVar6,lVar17,(ulonglong)in_stack_00000054,lVar17,uVar10 & 3,uVar9,
             *(undefined1 *)(param_1 + 0x23),1);
  uVar9 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  uVar8 = (uint)uVar7;
  lVar6 = uVar9 + (longlong)((int)auStack_9c[0] >> 2) *
                  (longlong)(int)(uint)*(ushort *)(param_1 + 0x4c) + (longlong)((int)uVar8 >> 2);
  lVar16 = lVar6 + uVar11;
  lVar6 = lVar6 + uVar5;
  lVar17 = uVar9 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 4) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 0xf) != 0)) * 0x10
     ) {
    dataCacheBlockTouch(lVar16 + 0x80);
    dataCacheBlockTouch(lVar17 + 0x80 + lVar16);
    dataCacheBlockTouch((lVar17 + 0x40) * 2 + lVar16);
    dataCacheBlockTouch(uVar9 * 6 + 0x80 + lVar16);
    dataCacheBlockTouch((lVar17 + 0x20) * 4 + lVar16);
    dataCacheBlockTouch(uVar9 * 10 + 0x80 + lVar16);
    dataCacheBlockTouch(uVar9 * 0xc + 0x80 + lVar16);
    dataCacheBlockTouch(uVar9 * 0xe + 0x80 + lVar16);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar12 = auStack_9c[0] & 3;
  (**(code **)(((uVar8 & 3) * 4 + uVar12 + 0x101) * 4 + param_1))
            (lVar16,lVar17,uVar9 + uVar15,lVar17,uVar7 & 3,uVar12,*(undefined1 *)(param_1 + 0x23),1)
  ;
  uVar14 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  lVar17 = uVar14 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 4) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 0xf) != 0)) * 0x10
     ) {
    dataCacheBlockTouch(lVar6 + 0x80);
    dataCacheBlockTouch(lVar17 + 0x80 + lVar6);
    dataCacheBlockTouch((lVar17 + 0x40) * 2 + lVar6);
    dataCacheBlockTouch(uVar14 * 6 + 0x80 + lVar6);
    dataCacheBlockTouch((lVar17 + 0x20) * 4 + lVar6);
    dataCacheBlockTouch(uVar14 * 10 + 0x80 + lVar6);
    dataCacheBlockTouch(uVar14 * 0xc + 0x80 + lVar6);
    dataCacheBlockTouch(uVar14 * 0xe + 0x80 + lVar6);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  (**(code **)(((uVar8 & 3) * 4 + uVar12 + 0x101) * 4 + param_1))
            (lVar6,lVar17,uVar9 + in_stack_00000054,lVar17,uVar7 & 3,uVar12,
             *(undefined1 *)(param_1 + 0x23),1);
  return;
}

