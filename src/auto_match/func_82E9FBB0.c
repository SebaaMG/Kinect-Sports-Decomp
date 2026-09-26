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
extern int fn_82F26F98();
extern unsigned int iStack_a8;
extern unsigned int iStack_b0;
extern unsigned int iStack_b4;
extern unsigned int *iStack_b8;
extern unsigned int iStack_c0;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000034;
extern unsigned int uStack_a4;
extern unsigned int uStack_ac;
extern unsigned int uStack_bc;


void fn_82E9FBB0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 uStack0000001c;
  uint uStack00000034;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000007c;
  undefined4 in_stack_0000008c;
  int in_stack_000000a4;
  uint in_stack_000000ac;
  uint in_stack_000000b4;
  int in_stack_000000cc;
  int in_stack_000000d4;
  uint in_stack_000000dc;
  uint in_stack_000000e4;
  int *in_stack_000000ec;
  undefined4 *in_stack_000000f4;
  int *in_stack_000000fc;
  int iStack_c0;
  uint uStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  uint uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  
  uStack0000001c = (undefined4)param_2;
  uVar6 = (ulonglong)in_stack_000000e4;
  uVar5 = (ulonglong)in_stack_000000dc;
  uVar3 = -(uint)(in_stack_0000007c != 0) & 2;
  uStack00000034 = (uint)param_5;
  iStack_a8 = 0;
  uStack_a4 = 0;
  if (in_stack_00000064 != 0) {
    if (in_stack_00000074 != 0) {
      if (in_stack_000000a4 == 1) {
        (**(code **)(param_1 + 0x9b8))();
      }
      else {
        (**(code **)(param_1 + 0x9c0))
                  ((param_5 - (ulonglong)*(uint *)(param_1 + 0x564)) + -1,
                   (ulonglong)*(uint *)(param_1 + 0x564),in_stack_0000008c,0x10,0xfffffffffffffffe,
                   0xfffffffffffffffe,in_stack_000000a4,*(undefined4 *)(param_1 + 0x618));
      }
      fn_82E9AC18(param_1,param_2,0x10,in_stack_0000008c,0x10,0x10,0x10,in_stack_000000cc);
      if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                          uVar5 - 1,uVar6 - 1,0);
        fn_82E9AC18(param_1,param_3,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
        iStack_c0 = iStack_b4 + iStack_c0;
        uStack_bc = uStack_ac | uStack_bc;
        iStack_b8 = iStack_b0 + iStack_b8;
      }
      if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(param_1,param_7,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                          uVar5 - 1,uVar6 - 1,0);
        fn_82E9AC18(param_1,param_4,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
        iStack_c0 = iStack_b4 + iStack_c0;
        uStack_bc = uStack_ac | uStack_bc;
        iStack_b8 = iStack_b0 + iStack_b8;
      }
      iVar2 = fn_82E9B140(param_1,(ulonglong)in_stack_000000ac - 2,
                            (ulonglong)in_stack_000000b4 - 2,uStack_bc,1);
      iStack_b8 = iVar2 + iStack_b8;
      if (in_stack_000000d4 != 0) {
        iStack_b8 = iStack_b8 + 1;
      }
      iVar2 = *(int *)(in_stack_000000cc + 0x6c) * iStack_b8 + iStack_c0;
      if (iVar2 < in_stack_0000005c) {
        iStack_a8 = -2;
        uStack_a4 = 0xfffffffe;
        in_stack_0000005c = iVar2;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x564);
    lVar7 = 0;
    uVar4 = (ulonglong)uStack00000034;
    do {
      if (in_stack_000000a4 == 1) {
        (**(code **)(param_1 + 0x9b8))();
      }
      else {
        (**(code **)(param_1 + 0x9c0))
                  (uVar4 - uVar1,*(undefined4 *)(param_1 + 0x564),in_stack_0000008c,0x10,lVar7,
                   0xfffffffffffffffe,in_stack_000000a4,*(undefined4 *)(param_1 + 0x618));
      }
      fn_82E9AC18(param_1,uStack0000001c,0x10,in_stack_0000008c,0x10,0x10,0x10,in_stack_000000cc);
      iVar2 = (int)lVar7 >> 1;
      if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                          (longlong)iVar2 + uVar5,uVar6 - 1,0);
        fn_82E9AC18(param_1,param_3,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
        iStack_c0 = iStack_b4 + iStack_c0;
        uStack_bc = uStack_ac | uStack_bc;
        iStack_b8 = iStack_b0 + iStack_b8;
      }
      if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(param_1,param_7,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                          (longlong)iVar2 + uVar5,uVar6 - 1,0);
        fn_82E9AC18(param_1,param_4,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
        iStack_c0 = iStack_b4 + iStack_c0;
        uStack_bc = uStack_ac | uStack_bc;
        iStack_b8 = iStack_b0 + iStack_b8;
      }
      iVar2 = fn_82E9B140(param_1,lVar7 + (ulonglong)in_stack_000000ac,
                            (ulonglong)in_stack_000000b4 - 2,uStack_bc,1);
      iStack_b8 = iVar2 + iStack_b8;
      if (in_stack_000000d4 != 0) {
        iStack_b8 = iStack_b8 + 1;
      }
      iVar2 = *(int *)(in_stack_000000cc + 0x6c) * iStack_b8 + iStack_c0;
      if (iVar2 < in_stack_0000005c) {
        uStack_a4 = 0xfffffffe;
        in_stack_0000005c = iVar2;
        iStack_a8 = (int)lVar7;
      }
      lVar7 = lVar7 + 2;
    } while ((int)lVar7 <= (int)uVar3);
  }
  uVar4 = (ulonglong)in_stack_000000b4;
  if (in_stack_00000074 != 0) {
    if (in_stack_000000a4 == 1) {
      (**(code **)(param_1 + 0x9b8))();
    }
    else {
      (**(code **)(param_1 + 0x9c0))
                ((ulonglong)uStack00000034 - 1,*(undefined4 *)(param_1 + 0x564),in_stack_0000008c,
                 0x10,0xfffffffffffffffe,0,in_stack_000000a4,*(undefined4 *)(param_1 + 0x618));
    }
    fn_82E9AC18(param_1,uStack0000001c,0x10,in_stack_0000008c,0x10,0x10,0x10,in_stack_000000cc);
    if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
      fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                        uVar5 - 1,uVar6,0);
      fn_82E9AC18(param_1,param_3,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
      iStack_c0 = iStack_b4 + iStack_c0;
      uStack_bc = uStack_ac | uStack_bc;
      iStack_b8 = iStack_b0 + iStack_b8;
    }
    if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
      fn_82F26F98(param_1,param_7,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                        uVar5 - 1,uVar6,0);
      fn_82E9AC18(param_1,param_4,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
      iStack_c0 = iStack_b4 + iStack_c0;
      uStack_bc = uStack_ac | uStack_bc;
      iStack_b8 = iStack_b0 + iStack_b8;
    }
    iVar2 = fn_82E9B140(param_1,(ulonglong)in_stack_000000ac - 2,uVar4,uStack_bc,1);
    iStack_b8 = iVar2 + iStack_b8;
    if (in_stack_000000d4 != 0) {
      iStack_b8 = iStack_b8 + 1;
    }
    iVar2 = *(int *)(in_stack_000000cc + 0x6c) * iStack_b8 + iStack_c0;
    if (iVar2 < in_stack_0000005c) {
      iStack_a8 = -2;
      uStack_a4 = 0;
      in_stack_0000005c = iVar2;
    }
  }
  if (in_stack_0000007c != 0) {
    if (in_stack_000000a4 == 1) {
      (**(code **)(param_1 + 0x9b8))();
    }
    else {
      (**(code **)(param_1 + 0x9c0))
                (uStack00000034,*(undefined4 *)(param_1 + 0x564),in_stack_0000008c,0x10,2,0,
                 in_stack_000000a4,*(undefined4 *)(param_1 + 0x618));
    }
    fn_82E9AC18(param_1,uStack0000001c,0x10,in_stack_0000008c,0x10,0x10,0x10,in_stack_000000cc);
    if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
      fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                        uVar5 + 1,uVar6,0);
      fn_82E9AC18(param_1,param_3,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
      iStack_c0 = iStack_b4 + iStack_c0;
      uStack_bc = uStack_ac | uStack_bc;
      iStack_b8 = iStack_b0 + iStack_b8;
    }
    if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
      fn_82F26F98(param_1,param_7,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                        uVar5 + 1,uVar6,0);
      fn_82E9AC18(param_1,param_4,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
      iStack_c0 = iStack_b4 + iStack_c0;
      uStack_bc = uStack_ac | uStack_bc;
      iStack_b8 = iStack_b0 + iStack_b8;
    }
    iVar2 = fn_82E9B140(param_1,(ulonglong)in_stack_000000ac + 2,uVar4,uStack_bc,1);
    iStack_b8 = iVar2 + iStack_b8;
    if (in_stack_000000d4 != 0) {
      iStack_b8 = iStack_b8 + 1;
    }
    iVar2 = *(int *)(in_stack_000000cc + 0x6c) * iStack_b8 + iStack_c0;
    if (iVar2 < in_stack_0000005c) {
      iStack_a8 = 2;
      uStack_a4 = 0;
      in_stack_0000005c = iVar2;
    }
  }
  if (in_stack_0000006c != 0) {
    if (in_stack_00000074 != 0) {
      if (in_stack_000000a4 == 1) {
        (**(code **)(param_1 + 0x9b8))();
      }
      else {
        (**(code **)(param_1 + 0x9c0))
                  ((ulonglong)uStack00000034 - 1,*(undefined4 *)(param_1 + 0x564),in_stack_0000008c,
                   0x10,0xfffffffffffffffe,2,in_stack_000000a4,*(undefined4 *)(param_1 + 0x618));
      }
      fn_82E9AC18(param_1,uStack0000001c,0x10,in_stack_0000008c,0x10,0x10,0x10,in_stack_000000cc);
      if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                          uVar5 - 1,uVar6 + 1,0);
        fn_82E9AC18(param_1,param_3,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
        iStack_c0 = iStack_b4 + iStack_c0;
        uStack_bc = uStack_ac | uStack_bc;
        iStack_b8 = iStack_b0 + iStack_b8;
      }
      if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(param_1,param_7,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                          uVar5 - 1,uVar6 + 1,0);
        fn_82E9AC18(param_1,param_4,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
        iStack_c0 = iStack_b4 + iStack_c0;
        uStack_bc = uStack_ac | uStack_bc;
        iStack_b8 = iStack_b0 + iStack_b8;
      }
      iVar2 = fn_82E9B140(param_1,(ulonglong)in_stack_000000ac - 2,uVar4 + 2,uStack_bc,1);
      iStack_b8 = iVar2 + iStack_b8;
      if (in_stack_000000d4 != 0) {
        iStack_b8 = iStack_b8 + 1;
      }
      iVar2 = *(int *)(in_stack_000000cc + 0x6c) * iStack_b8 + iStack_c0;
      if (iVar2 < in_stack_0000005c) {
        iStack_a8 = -2;
        uStack_a4 = 2;
        in_stack_0000005c = iVar2;
      }
    }
    lVar7 = 0;
    if (-1 < (int)uVar3) {
      do {
        if (in_stack_000000a4 == 1) {
          (**(code **)(param_1 + 0x9b8))();
        }
        else {
          (**(code **)(param_1 + 0x9c0))
                    (uStack00000034,*(undefined4 *)(param_1 + 0x564),in_stack_0000008c,0x10,lVar7,2,
                     in_stack_000000a4,*(undefined4 *)(param_1 + 0x618));
        }
        fn_82E9AC18(param_1,uStack0000001c,0x10,in_stack_0000008c,0x10,0x10,0x10,in_stack_000000cc
                     );
        iVar2 = (int)lVar7 >> 1;
        if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                            (longlong)iVar2 + uVar5,uVar6 + 1,0);
          fn_82E9AC18(param_1,param_3,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
          iStack_c0 = iStack_b4 + iStack_c0;
          uStack_bc = uStack_ac | uStack_bc;
          iStack_b8 = iStack_b0 + iStack_b8;
        }
        if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(param_1,param_7,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                            (longlong)iVar2 + uVar5,uVar6 + 1,0);
          fn_82E9AC18(param_1,param_4,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
          iStack_c0 = iStack_b4 + iStack_c0;
          uStack_bc = uStack_ac | uStack_bc;
          iStack_b8 = iStack_b0 + iStack_b8;
        }
        iVar2 = fn_82E9B140(param_1,lVar7 + (ulonglong)in_stack_000000ac,uVar4 + 2,uStack_bc,1);
        iStack_b8 = iVar2 + iStack_b8;
        if (in_stack_000000d4 != 0) {
          iStack_b8 = iStack_b8 + 1;
        }
        iVar2 = *(int *)(in_stack_000000cc + 0x6c) * iStack_b8 + iStack_c0;
        if (iVar2 < in_stack_0000005c) {
          uStack_a4 = 2;
          in_stack_0000005c = iVar2;
          iStack_a8 = (int)lVar7;
        }
        lVar7 = lVar7 + 2;
      } while ((int)lVar7 <= (int)uVar3);
    }
  }
  *in_stack_000000ec = iStack_a8;
  *in_stack_000000f4 = uStack_a4;
  *in_stack_000000fc = in_stack_0000005c;
  return;
}

