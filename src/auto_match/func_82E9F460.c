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
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern unsigned int uStack00000024;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int *uStack_b0;


void fn_82E9F460(int param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,longlong param_7,longlong param_8)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uStack00000024;
  int in_stack_00000054;
  int in_stack_0000005c;
  undefined4 in_stack_0000006c;
  int in_stack_00000084;
  uint in_stack_0000008c;
  uint in_stack_00000094;
  int in_stack_000000ac;
  int in_stack_000000b4;
  undefined4 *in_stack_000000bc;
  undefined4 *in_stack_000000c4;
  int *in_stack_000000cc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  uStack00000024 = (uint)param_3;
  uVar2 = -(ulonglong)(in_stack_00000054 != 0);
  uVar11 = (ulonglong)in_stack_0000008c;
  uVar13 = 2;
  uVar4 = -(uint)(param_8 != 0) & 2;
  uVar6 = -(ulonglong)(param_7 != 0) & 0xfffffffffffffffe;
  uVar14 = uVar2 & 0xfffffffffffffffe;
  uVar5 = -(uint)(in_stack_0000005c != 0) & 2;
  iVar15 = (int)uVar14;
  uVar9 = 0;
  uVar7 = 0;
  if ((int)uVar6 < 0) {
    do {
      uVar1 = *(uint *)(param_1 + 0x564);
      if ((int)uVar14 < 0) {
        do {
          if (in_stack_00000084 == 1) {
            (**(code **)(param_1 + 0x9b8))();
          }
          else {
            (**(code **)(param_1 + 0x9c0))
                      ((param_3 - uVar1) + -1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,
                       0x10,uVar14,uVar6,in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
          }
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,0x10,0x10,in_stack_000000ac);
          iVar3 = fn_82E9B140(param_1,uVar14 + uVar11,uVar6 + in_stack_00000094,uStack_ac,1);
          uStack_b0 = iVar3 + uStack_b0;
          if (in_stack_000000b4 != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar3 = *(int *)(in_stack_000000ac + 0x6c) * uStack_b0 + uStack_a8;
          if (iVar3 < param_6) {
            uVar7 = uVar6;
            uVar9 = uVar14;
            param_6 = iVar3;
          }
          uVar14 = uVar14 + 2;
        } while ((longlong)uVar14 < 0);
        param_3 = (ulonglong)uStack00000024;
      }
      uVar1 = *(uint *)(param_1 + 0x564);
      uVar14 = 0;
      if (-1 < (int)uVar5) {
        do {
          if (in_stack_00000084 == 1) {
            (**(code **)(param_1 + 0x9b8))();
          }
          else {
            (**(code **)(param_1 + 0x9c0))
                      (param_3 - uVar1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,
                       uVar14,uVar6,in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
          }
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,0x10,0x10,in_stack_000000ac);
          iVar3 = fn_82E9B140(param_1,uVar14 + uVar11,uVar6 + in_stack_00000094,uStack_ac,1);
          uStack_b0 = iVar3 + uStack_b0;
          if (in_stack_000000b4 != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar3 = *(int *)(in_stack_000000ac + 0x6c) * uStack_b0 + uStack_a8;
          if (iVar3 < param_6) {
            uVar7 = uVar6;
            uVar9 = uVar14;
            param_6 = iVar3;
          }
          uVar14 = uVar14 + 2;
        } while ((int)uVar14 <= (int)uVar5);
        param_3 = (ulonglong)uStack00000024;
      }
      uVar14 = uVar2 & 0xfffffffe;
      uVar6 = uVar6 + 2;
    } while ((longlong)uVar6 < 0);
  }
  lVar12 = param_3 - 1;
  if ((int)uVar14 < 0) {
    do {
      if (in_stack_00000084 == 1) {
        (**(code **)(param_1 + 0x9b8))();
      }
      else {
        (**(code **)(param_1 + 0x9c0))
                  (lVar12,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar14,0,
                   in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
      }
      fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,0x10,0x10,in_stack_000000ac);
      iVar3 = fn_82E9B140(param_1,uVar14 + uVar11,in_stack_00000094,uStack_ac,1);
      uStack_b0 = iVar3 + uStack_b0;
      if (in_stack_000000b4 != 0) {
        uStack_b0 = uStack_b0 + 1;
      }
      iVar3 = *(int *)(in_stack_000000ac + 0x6c) * uStack_b0 + uStack_a8;
      if (iVar3 < param_6) {
        uVar7 = 0;
        uVar9 = uVar14;
        param_6 = iVar3;
      }
      uVar14 = uVar14 + 2;
    } while ((longlong)uVar14 < 0);
    param_3 = (ulonglong)uStack00000024;
  }
  uVar6 = 2;
  if (1 < uVar5) {
    do {
      if (in_stack_00000084 == 1) {
        (**(code **)(param_1 + 0x9b8))();
      }
      else {
        (**(code **)(param_1 + 0x9c0))
                  (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar6,0,
                   in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
      }
      fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,0x10,0x10,in_stack_000000ac);
      iVar3 = fn_82E9B140(param_1,uVar6 + uVar11,in_stack_00000094,uStack_ac,1);
      uStack_b0 = iVar3 + uStack_b0;
      if (in_stack_000000b4 != 0) {
        uStack_b0 = uStack_b0 + 1;
      }
      iVar3 = *(int *)(in_stack_000000ac + 0x6c) * uStack_b0 + uStack_a8;
      if (iVar3 < param_6) {
        uVar7 = 0;
        uVar9 = uVar6;
        param_6 = iVar3;
      }
      uVar6 = uVar6 + 2;
      param_3 = (ulonglong)uStack00000024;
    } while ((int)uVar6 <= (int)uVar5);
  }
  uVar8 = (undefined4)uVar7;
  uVar10 = (undefined4)uVar9;
  if (1 < uVar4) {
    do {
      uVar6 = uVar2 & 0xfffffffe;
      if (iVar15 < 0) {
        do {
          if (in_stack_00000084 == 1) {
            (**(code **)(param_1 + 0x9b8))();
          }
          else {
            (**(code **)(param_1 + 0x9c0))
                      (lVar12,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar6,uVar13,
                       in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
          }
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,0x10,0x10,in_stack_000000ac);
          iVar3 = fn_82E9B140(param_1,uVar6 + uVar11,uVar13 + in_stack_00000094,uStack_ac,1);
          uStack_b0 = iVar3 + uStack_b0;
          if (in_stack_000000b4 != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar3 = *(int *)(in_stack_000000ac + 0x6c) * uStack_b0 + uStack_a8;
          if (iVar3 < param_6) {
            uVar7 = uVar13;
            uVar9 = uVar6;
            param_6 = iVar3;
          }
          uVar6 = uVar6 + 2;
        } while ((longlong)uVar6 < 0);
        param_3 = (ulonglong)uStack00000024;
      }
      uVar6 = 0;
      if (-1 < (int)uVar5) {
        do {
          if (in_stack_00000084 == 1) {
            (**(code **)(param_1 + 0x9b8))();
          }
          else {
            (**(code **)(param_1 + 0x9c0))
                      (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar6,uVar13,
                       in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
          }
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,0x10,0x10,in_stack_000000ac);
          iVar3 = fn_82E9B140(param_1,uVar6 + uVar11,uVar13 + in_stack_00000094,uStack_ac,1);
          uStack_b0 = iVar3 + uStack_b0;
          if (in_stack_000000b4 != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar3 = *(int *)(in_stack_000000ac + 0x6c) * uStack_b0 + uStack_a8;
          if (iVar3 < param_6) {
            uVar7 = uVar13;
            uVar9 = uVar6;
            param_6 = iVar3;
          }
          uVar6 = uVar6 + 2;
          param_3 = (ulonglong)uStack00000024;
        } while ((int)uVar6 <= (int)uVar5);
      }
      uVar8 = (undefined4)uVar7;
      uVar10 = (undefined4)uVar9;
      uVar13 = uVar13 + 2;
    } while ((int)uVar13 <= (int)uVar4);
  }
  *in_stack_000000bc = uVar10;
  *in_stack_000000c4 = uVar8;
  *in_stack_000000cc = param_6;
  return;
}

