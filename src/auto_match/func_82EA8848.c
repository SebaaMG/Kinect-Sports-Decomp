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
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_82EA8848(int param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,longlong param_7,longlong param_8)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int in_stack_00000054;
  int in_stack_0000005c;
  undefined4 in_stack_0000006c;
  uint in_stack_00000084;
  uint in_stack_0000008c;
  int in_stack_000000a4;
  int in_stack_000000ac;
  undefined4 *in_stack_000000b4;
  undefined4 *in_stack_000000bc;
  int *in_stack_000000c4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  uVar2 = -(ulonglong)(in_stack_00000054 != 0);
  uVar6 = (ulonglong)in_stack_0000008c;
  uVar11 = (ulonglong)in_stack_00000084;
  uVar5 = -(ulonglong)(param_7 != 0) & 0xfffffffffffffffd;
  uVar13 = uVar2 & 0xfffffffffffffffd;
  uVar3 = -(uint)(param_8 != 0) & 3;
  uVar12 = -(uint)(in_stack_0000005c != 0) & 3;
  uVar9 = 0;
  uVar7 = 0;
  if ((int)uVar5 < 0) {
    do {
      uVar1 = *(uint *)(param_1 + 0x564);
      if ((int)uVar13 < 0) {
        do {
          (**(code **)(param_1 + 0xa5c))
                    ((param_3 - (ulonglong)uVar1) + -1,*(undefined4 *)(param_1 + 0x564),
                     in_stack_0000006c,0x10,uVar13 & 3,uVar5 & 3,*(undefined4 *)(param_1 + 0x618));
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,8,8,in_stack_000000a4);
          iVar4 = fn_82E9B140(param_1,uVar13 + uVar11,uVar5 + uVar6,uStack_ac,0);
          uStack_b0 = iVar4 + uStack_b0;
          if (in_stack_000000ac != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar4 = uStack_b0 * *(int *)(in_stack_000000a4 + 0x6c) + uStack_a8;
          if (iVar4 < param_6) {
            uVar7 = uVar5;
            uVar9 = uVar13;
            param_6 = iVar4;
          }
          uVar13 = uVar13 + 1;
        } while ((longlong)uVar13 < 0);
        uVar13 = uVar2 & 0xfffffffd;
      }
      uVar1 = *(uint *)(param_1 + 0x564);
      uVar14 = 0;
      if (-1 < (int)uVar12) {
        do {
          (**(code **)(param_1 + 0xa5c))
                    (param_3 - (ulonglong)uVar1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,
                     0x10,uVar14 & 3,uVar5 & 3,*(undefined4 *)(param_1 + 0x618));
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,8,8,in_stack_000000a4);
          iVar4 = fn_82E9B140(param_1,uVar14 + uVar11,uVar5 + uVar6,uStack_ac,0);
          uStack_b0 = iVar4 + uStack_b0;
          if (in_stack_000000ac != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar4 = uStack_b0 * *(int *)(in_stack_000000a4 + 0x6c) + uStack_a8;
          if (iVar4 < param_6) {
            uVar7 = uVar5;
            uVar9 = uVar14;
            param_6 = iVar4;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 <= (int)uVar12);
        uVar13 = uVar2 & 0xfffffffd;
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < 0);
  }
  uVar5 = uVar13;
  if ((int)uVar13 < 0) {
    do {
      (**(code **)(param_1 + 0xa5c))
                (param_3 + -1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar5 & 3,0,
                 *(undefined4 *)(param_1 + 0x618));
      fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,8,8,in_stack_000000a4);
      iVar4 = fn_82E9B140(param_1,uVar5 + uVar11,uVar6,uStack_ac,0);
      uStack_b0 = iVar4 + uStack_b0;
      if (in_stack_000000ac != 0) {
        uStack_b0 = uStack_b0 + 1;
      }
      iVar4 = uStack_b0 * *(int *)(in_stack_000000a4 + 0x6c) + uStack_a8;
      if (iVar4 < param_6) {
        uVar7 = 0;
        uVar9 = uVar5;
        param_6 = iVar4;
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < 0);
  }
  uVar5 = 1;
  if (uVar12 != 0) {
    do {
      (**(code **)(param_1 + 0xa5c))
                (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar5 & 3,0,
                 *(undefined4 *)(param_1 + 0x618));
      fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,8,8,in_stack_000000a4);
      iVar4 = fn_82E9B140(param_1,uVar5 + uVar11,uVar6,uStack_ac,0);
      uStack_b0 = iVar4 + uStack_b0;
      if (in_stack_000000ac != 0) {
        uStack_b0 = uStack_b0 + 1;
      }
      iVar4 = uStack_b0 * *(int *)(in_stack_000000a4 + 0x6c) + uStack_a8;
      if (iVar4 < param_6) {
        uVar7 = 0;
        uVar9 = uVar5;
        param_6 = iVar4;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 <= (int)uVar12);
  }
  uVar8 = (undefined4)uVar7;
  uVar10 = (undefined4)uVar9;
  uVar5 = 1;
  if (uVar3 != 0) {
    do {
      if ((int)uVar13 < 0) {
        do {
          (**(code **)(param_1 + 0xa5c))
                    (param_3 + -1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar13 & 3
                     ,uVar5 & 3,*(undefined4 *)(param_1 + 0x618));
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,8,8,in_stack_000000a4);
          iVar4 = fn_82E9B140(param_1,uVar13 + uVar11,uVar5 + uVar6,uStack_ac,0);
          uStack_b0 = iVar4 + uStack_b0;
          if (in_stack_000000ac != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar4 = uStack_b0 * *(int *)(in_stack_000000a4 + 0x6c) + uStack_a8;
          if (iVar4 < param_6) {
            uVar7 = uVar5;
            uVar9 = uVar13;
            param_6 = iVar4;
          }
          uVar13 = uVar13 + 1;
        } while ((longlong)uVar13 < 0);
        uVar13 = uVar2 & 0xfffffffd;
      }
      uVar14 = 0;
      if (-1 < (int)uVar12) {
        do {
          (**(code **)(param_1 + 0xa5c))
                    (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar14 & 3,
                     uVar5 & 3,*(undefined4 *)(param_1 + 0x618));
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,8,8,in_stack_000000a4);
          iVar4 = fn_82E9B140(param_1,uVar14 + uVar11,uVar5 + uVar6,uStack_ac,0);
          uStack_b0 = iVar4 + uStack_b0;
          if (in_stack_000000ac != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar4 = uStack_b0 * *(int *)(in_stack_000000a4 + 0x6c) + uStack_a8;
          if (iVar4 < param_6) {
            uVar7 = uVar5;
            uVar9 = uVar14;
            param_6 = iVar4;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 <= (int)uVar12);
        uVar13 = uVar2 & 0xfffffffd;
      }
      uVar8 = (undefined4)uVar7;
      uVar10 = (undefined4)uVar9;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 <= (int)uVar3);
  }
  *in_stack_000000b4 = uVar10;
  *in_stack_000000bc = uVar8;
  *in_stack_000000c4 = param_6;
  return;
}

