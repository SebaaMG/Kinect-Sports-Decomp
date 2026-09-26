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
extern int fn_82E9AB00();
extern int fn_82F26F98();
extern unsigned int iStack_b0;
extern unsigned int lbl_831898B8;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000034;
extern unsigned int uStack00000044;
extern unsigned int uStack_ac;


void fn_82E9E9B0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,undefined4 param_7)

{
  code *pcVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 uStack0000001c;
  uint uStack00000034;
  undefined4 uStack00000044;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000007c;
  undefined4 in_stack_0000008c;
  int in_stack_000000a4;
  uint in_stack_000000ac;
  uint in_stack_000000b4;
  uint in_stack_000000bc;
  uint in_stack_000000c4;
  int in_stack_000000cc;
  undefined4 *in_stack_000000d4;
  int *in_stack_000000dc;
  undefined4 *in_stack_000000e4;
  int *in_stack_000000ec;
  int iStack_b0;
  undefined4 uStack_ac;
  
  uStack0000001c = (undefined4)param_2;
  pcVar1 = (code *)in_stack_000000d4[3];
  pcVar2 = (code *)*in_stack_000000d4;
  uVar14 = (ulonglong)in_stack_000000c4;
  uVar5 = -(uint)(in_stack_0000007c != 0) & 2;
  uVar13 = (ulonglong)in_stack_000000bc;
  uVar12 = (ulonglong)in_stack_000000b4;
  uStack00000034 = (uint)param_5;
  iStack_b0 = 0;
  uStack_ac = 0;
  uStack00000044 = param_7;
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
      iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000008c,0x10,0x10);
      if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                          uVar13 - 1,uVar14 - 1,0);
        iVar7 = (*pcVar2)(param_3,8,in_stack_0000008c,8);
        iVar6 = iVar7 + iVar6;
      }
      if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(param_1,uStack00000044,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,
                          8,uVar13 - 1,uVar14 - 1,0);
        iVar7 = (*pcVar2)(param_4,8,in_stack_0000008c,8);
        iVar6 = iVar7 + iVar6;
      }
      iVar7 = fn_82E9AB00(param_1,(ulonglong)in_stack_000000ac - 1,uVar12 - 1,in_stack_000000cc);
      if (iVar7 + iVar6 < in_stack_0000005c) {
        iStack_b0 = -2;
        uStack_ac = 0xfffffffe;
        in_stack_0000005c = iVar7 + iVar6;
      }
    }
    uVar3 = *(uint *)(param_1 + 0x564);
    lVar15 = 0;
    uVar9 = (ulonglong)uStack00000034;
    uVar10 = (ulonglong)((int)(uVar12 - 1) >> 0x1f);
    uVar10 = (uVar12 - 1 ^ uVar10) - uVar10;
    do {
      if (in_stack_000000a4 == 1) {
        (**(code **)(param_1 + 0x9b8))();
      }
      else {
        (**(code **)(param_1 + 0x9c0))
                  (uVar9 - uVar3,*(undefined4 *)(param_1 + 0x564),in_stack_0000008c,0x10,lVar15,
                   0xfffffffffffffffe,in_stack_000000a4,*(undefined4 *)(param_1 + 0x618));
      }
      iVar7 = (*pcVar1)(uStack0000001c,0x10,in_stack_0000008c,0x10,0x10);
      iVar6 = (int)lVar15 >> 1;
      if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                          (longlong)iVar6 + uVar13,uVar14 - 1,0);
        iVar8 = (*pcVar2)(param_3,8,in_stack_0000008c,8);
        iVar7 = iVar8 + iVar7;
      }
      if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(param_1,uStack00000044,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,
                          8,(longlong)iVar6 + uVar13,uVar14 - 1,0);
        iVar8 = (*pcVar2)(param_4,8,in_stack_0000008c,8);
        iVar7 = iVar8 + iVar7;
      }
      uVar4 = (int)(iVar6 + in_stack_000000ac) >> 0x1f;
      iVar6 = (iVar6 + in_stack_000000ac ^ uVar4) - uVar4;
      if ((iVar6 < 0x9f) && ((int)uVar10 < 0x9f)) {
        iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                        in_stack_000000cc) +
                *(int *)(*(int *)(&lbl_831898B8 + iVar6 * 4) * 4 + in_stack_000000cc);
      }
      else {
        iVar6 = *(int *)(in_stack_000000cc + 0x14) << 1;
      }
      if (iVar6 + iVar7 < in_stack_0000005c) {
        uStack_ac = 0xfffffffe;
        iStack_b0 = (int)lVar15;
        in_stack_0000005c = iVar6 + iVar7;
      }
      lVar15 = lVar15 + 2;
    } while ((int)lVar15 <= (int)uVar5);
  }
  iVar6 = (int)in_stack_000000b4 >> 0x1f;
  if (in_stack_00000074 != 0) {
    if (in_stack_000000a4 == 1) {
      (**(code **)(param_1 + 0x9b8))();
    }
    else {
      (**(code **)(param_1 + 0x9c0))
                ((ulonglong)uStack00000034 - 1,*(undefined4 *)(param_1 + 0x564),in_stack_0000008c,
                 0x10,0xfffffffffffffffe,0,in_stack_000000a4,*(undefined4 *)(param_1 + 0x618));
    }
    iVar7 = (*pcVar1)(uStack0000001c,0x10,in_stack_0000008c,0x10,0x10);
    if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
      fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                        uVar13 - 1,uVar14,0);
      iVar8 = (*pcVar2)(param_3,8,in_stack_0000008c,8);
      iVar7 = iVar8 + iVar7;
    }
    if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
      fn_82F26F98(param_1,uStack00000044,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                        uVar13 - 1,uVar14,0);
      iVar8 = (*pcVar2)(param_4,8,in_stack_0000008c,8);
      iVar7 = iVar8 + iVar7;
    }
    uVar3 = (int)(in_stack_000000ac - 1) >> 0x1f;
    iVar8 = (in_stack_000000ac - 1 ^ uVar3) - uVar3;
    uVar9 = (uVar12 ^ (longlong)iVar6) - (longlong)iVar6;
    if ((iVar8 < 0x9f) && ((int)uVar9 < 0x9f)) {
      iVar8 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                      in_stack_000000cc) +
              *(int *)(*(int *)(&lbl_831898B8 + iVar8 * 4) * 4 + in_stack_000000cc);
    }
    else {
      iVar8 = *(int *)(in_stack_000000cc + 0x14) << 1;
    }
    if (iVar8 + iVar7 < in_stack_0000005c) {
      iStack_b0 = -2;
      uStack_ac = 0;
      in_stack_0000005c = iVar8 + iVar7;
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
    iVar7 = (*pcVar1)(uStack0000001c,0x10,in_stack_0000008c,0x10,0x10);
    if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
      fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                        uVar13 + 1,uVar14,0);
      iVar8 = (*pcVar2)(param_3,8,in_stack_0000008c,8);
      iVar7 = iVar8 + iVar7;
    }
    if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
      fn_82F26F98(param_1,uStack00000044,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                        uVar13 + 1,uVar14,0);
      iVar8 = (*pcVar2)(param_4,8,in_stack_0000008c,8);
      iVar7 = iVar8 + iVar7;
    }
    uVar10 = (ulonglong)in_stack_000000ac + 1;
    uVar9 = (ulonglong)((int)uVar10 >> 0x1f);
    uVar9 = (uVar10 ^ uVar9) - uVar9;
    uVar10 = (uVar12 ^ (longlong)iVar6) - (longlong)iVar6;
    if (((int)uVar9 < 0x9f) && ((int)uVar10 < 0x9f)) {
      iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                      in_stack_000000cc) +
              *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                      in_stack_000000cc);
    }
    else {
      iVar6 = *(int *)(in_stack_000000cc + 0x14) << 1;
    }
    if (iVar6 + iVar7 < in_stack_0000005c) {
      iStack_b0 = 2;
      uStack_ac = 0;
      in_stack_0000005c = iVar6 + iVar7;
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
      iVar6 = (*pcVar1)(uStack0000001c,0x10,in_stack_0000008c,0x10,0x10);
      if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                          uVar13 - 1,uVar14 + 1,0);
        iVar7 = (*pcVar2)(param_3,8,in_stack_0000008c,8);
        iVar6 = iVar7 + iVar6;
      }
      if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(param_1,uStack00000044,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,
                          8,uVar13 - 1,uVar14 + 1,0);
        iVar7 = (*pcVar2)(param_4,8,in_stack_0000008c,8);
        iVar6 = iVar7 + iVar6;
      }
      uVar11 = (ulonglong)in_stack_000000ac - 1;
      uVar10 = (ulonglong)((int)uVar11 >> 0x1f);
      uVar9 = (ulonglong)((int)(uVar12 + 1) >> 0x1f);
      uVar10 = (uVar11 ^ uVar10) - uVar10;
      uVar9 = (uVar12 + 1 ^ uVar9) - uVar9;
      if (((int)uVar10 < 0x9f) && ((int)uVar9 < 0x9f)) {
        iVar7 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                        in_stack_000000cc) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                        in_stack_000000cc);
      }
      else {
        iVar7 = *(int *)(in_stack_000000cc + 0x14) << 1;
      }
      if (iVar7 + iVar6 < in_stack_0000005c) {
        iStack_b0 = -2;
        uStack_ac = 2;
        in_stack_0000005c = iVar7 + iVar6;
      }
    }
    lVar15 = 0;
    if (-1 < (int)uVar5) {
      uVar9 = (ulonglong)((int)(uVar12 + 1) >> 0x1f);
      uVar9 = (uVar12 + 1 ^ uVar9) - uVar9;
      do {
        if (in_stack_000000a4 == 1) {
          (**(code **)(param_1 + 0x9b8))();
        }
        else {
          (**(code **)(param_1 + 0x9c0))
                    (uStack00000034,*(undefined4 *)(param_1 + 0x564),in_stack_0000008c,0x10,lVar15,2
                     ,in_stack_000000a4,*(undefined4 *)(param_1 + 0x618));
        }
        iVar7 = (*pcVar1)(uStack0000001c,0x10,in_stack_0000008c,0x10,0x10);
        iVar6 = (int)lVar15 >> 1;
        if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                            (longlong)iVar6 + uVar13,uVar14 + 1,0);
          iVar8 = (*pcVar2)(param_3,8,in_stack_0000008c,8);
          iVar7 = iVar8 + iVar7;
        }
        if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(param_1,uStack00000044,*(undefined4 *)(param_1 + 0x568),
                            in_stack_0000008c,8,(longlong)iVar6 + uVar13,uVar14 + 1,0);
          iVar8 = (*pcVar2)(param_4,8,in_stack_0000008c,8);
          iVar7 = iVar8 + iVar7;
        }
        uVar3 = (int)(iVar6 + in_stack_000000ac) >> 0x1f;
        iVar6 = (iVar6 + in_stack_000000ac ^ uVar3) - uVar3;
        if ((iVar6 < 0x9f) && ((int)uVar9 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                          in_stack_000000cc) +
                  *(int *)(*(int *)(&lbl_831898B8 + iVar6 * 4) * 4 + in_stack_000000cc);
        }
        else {
          iVar6 = *(int *)(in_stack_000000cc + 0x14) << 1;
        }
        if (iVar6 + iVar7 < in_stack_0000005c) {
          uStack_ac = 2;
          iStack_b0 = (int)lVar15;
          in_stack_0000005c = iVar6 + iVar7;
        }
        lVar15 = lVar15 + 2;
      } while ((int)lVar15 <= (int)uVar5);
    }
  }
  *in_stack_000000dc = iStack_b0;
  *in_stack_000000e4 = uStack_ac;
  *in_stack_000000ec = in_stack_0000005c;
  return;
}

