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
extern int fn_82F07F08();
extern int fn_82F07F68();
extern int fn_82F0A9F0();
extern int fn_82F0AB90();
extern int fn_82F1C568();


void fn_82ED6F50(int param_1,int param_2,longlong param_3,undefined8 param_4,undefined8 param_5,
                  int param_6,int param_7,int param_8)

{
  short sVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  longlong lVar7;
  undefined1 *puVar8;
  byte bVar10;
  int iVar9;
  ulonglong uVar11;
  uint uVar12;
  short *psVar13;
  short *psVar14;
  short *in_stack_00000054;
  int in_stack_0000006c;
  uint in_stack_00000074;
  short asStack_180 [5];
  short sStack_176;
  short sStack_174;
  short asStack_170 [64];
  short asStack_f0 [120];
  
  uVar12 = 1;
  uVar2 = (ulonglong)in_stack_00000074;
  psVar14 = (short *)(in_stack_0000006c + 0x80);
  do {
    psVar13 = psVar14;
    uVar11 = uVar2;
    fn_82F0AB90(param_3,0x10,asStack_f0);
    sVar4 = (short)((ulonglong)((longlong)(int)asStack_f0[0] * (longlong)*(int *)(param_1 + 0x5c0))
                   >> 0x10) >> 2;
    *psVar13 = sVar4;
    asStack_180[uVar12] = sVar4;
    uVar3 = fn_82F07F68(param_1,psVar13,uVar11,asStack_f0);
    psVar14 = psVar13 + 0x80;
    lVar7 = 8;
    *(undefined4 *)(uVar12 * 4 + param_2 + 4 + -4) = uVar3;
    if (uVar12 == 2) {
      lVar7 = 0x78;
    }
    uVar12 = uVar12 + 1;
    param_3 = lVar7 + param_3;
    uVar2 = uVar11 + 2;
  } while (uVar12 < 5);
  fn_82F0AB90(param_4,8,asStack_170);
  sVar4 = (short)((ulonglong)((longlong)(int)asStack_170[0] * (longlong)*(int *)(param_1 + 0x5c4))
                 >> 0x10) >> 2;
  *psVar14 = sVar4;
  sStack_176 = sVar4;
  uVar3 = fn_82F07F68(param_1,psVar14,uVar11 + 2,asStack_170);
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  fn_82F0AB90(param_5,8,asStack_170);
  sVar5 = (short)((ulonglong)((longlong)(int)asStack_170[0] * (longlong)*(int *)(param_1 + 0x5c4))
                 >> 0x10) >> 2;
  psVar13[0x100] = sVar5;
  sStack_174 = sVar5;
  uVar3 = fn_82F07F68(param_1,psVar13 + 0x100,uVar11 + 4,asStack_170);
  *(undefined4 *)(param_2 + 0x18) = uVar3;
  uVar12 = 1;
  psVar14 = (short *)(in_stack_0000006c + 0x80);
  do {
    psVar13 = psVar14;
    if ((*(int *)(uVar12 * 4 + param_2 + 4 + -4) == 0) && (*(int *)(param_1 + 0x628) == 0)) {
      iVar9 = *(int *)(param_1 + 0x5ac);
      bVar10 = 0;
      sVar1 = asStack_180[uVar12];
      iVar6 = param_6;
      do {
        puVar8 = (undefined1 *)(iVar6 + -1);
        lVar7 = 8;
        do {
          puVar8 = puVar8 + 1;
          *puVar8 = (char)(sVar1 * iVar9 + 4 >> 3);
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        bVar10 = bVar10 + 1;
        iVar6 = *(int *)(param_1 + 0x564) + iVar6;
      } while (bVar10 < 8);
    }
    else {
      *in_stack_00000054 = asStack_180[uVar12] * (short)*(undefined4 *)(param_1 + 0x5ac);
      fn_82F07F08(param_1,psVar13,in_stack_00000054);
      if (*(code **)(param_1 + 0x1f7c) == fn_82F0A9F0) {
        fn_82F1C568(in_stack_00000054);
      }
      (**(code **)(param_1 + 0x1f94))(param_6,*(undefined4 *)(param_1 + 0x564),in_stack_00000054);
    }
    iVar9 = 8;
    if (uVar12 == 2) {
      iVar9 = *(int *)(param_1 + 0x4a90);
    }
    uVar12 = uVar12 + 1;
    param_6 = iVar9 + param_6;
    psVar14 = psVar13 + 0x80;
  } while (uVar12 < 5);
  if ((*(int *)(param_2 + 0x14) == 0) && (*(int *)(param_1 + 0x628) == 0)) {
    iVar9 = *(int *)(param_1 + 0x5b0);
    bVar10 = 0;
    do {
      puVar8 = (undefined1 *)(param_7 + -1);
      lVar7 = 8;
      do {
        puVar8 = puVar8 + 1;
        *puVar8 = (char)(sVar4 * iVar9 + 4 >> 3);
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      bVar10 = bVar10 + 1;
      param_7 = *(int *)(param_1 + 0x568) + param_7;
    } while (bVar10 < 8);
  }
  else {
    *in_stack_00000054 = sVar4 * (short)*(undefined4 *)(param_1 + 0x5b0);
    fn_82F07F08(param_1,psVar13 + 0x80,in_stack_00000054);
    if (*(code **)(param_1 + 0x1f7c) == fn_82F0A9F0) {
      fn_82F1C568(in_stack_00000054);
    }
    (**(code **)(param_1 + 0x1f94))(param_7,*(undefined4 *)(param_1 + 0x568),in_stack_00000054);
  }
  if ((*(int *)(param_2 + 0x18) == 0) && (*(int *)(param_1 + 0x628) == 0)) {
    iVar9 = *(int *)(param_1 + 0x5b0);
    bVar10 = 0;
    do {
      puVar8 = (undefined1 *)(param_8 + -1);
      lVar7 = 8;
      do {
        puVar8 = puVar8 + 1;
        *puVar8 = (char)(sVar5 * iVar9 + 4 >> 3);
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      bVar10 = bVar10 + 1;
      param_8 = *(int *)(param_1 + 0x568) + param_8;
    } while (bVar10 < 8);
  }
  else {
    *in_stack_00000054 = sVar5 * (short)*(undefined4 *)(param_1 + 0x5b0);
    fn_82F07F08(param_1,psVar13 + 0x100,in_stack_00000054);
    if (*(code **)(param_1 + 0x1f7c) == fn_82F0A9F0) {
      fn_82F1C568(in_stack_00000054);
    }
    (**(code **)(param_1 + 0x1f94))(param_8,*(undefined4 *)(param_1 + 0x568),in_stack_00000054);
  }
  return;
}

