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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_82E9AB00();
extern int fn_82EAA320();
extern int fn_82EC4410();
extern int fn_82F26F98();
extern unsigned int iStack_e0;
extern unsigned int lbl_831898B8;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;


void fn_82EC49C8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5
                  ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar8;
  ulonglong uVar7;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  uint uStack00000034;
  undefined4 uStack0000003c;
  undefined4 uStack00000044;
  undefined4 uStack0000004c;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  int *in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000084;
  int in_stack_0000008c;
  int in_stack_00000094;
  int in_stack_0000009c;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000bc;
  undefined4 in_stack_000000c4;
  int in_stack_000000d4;
  int in_stack_000000dc;
  int *in_stack_000000e4;
  int *in_stack_000000ec;
  int *in_stack_000000f4;
  undefined4 *in_stack_000000fc;
  undefined4 *in_stack_00000104;
  int *in_stack_0000010c;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int *piStack_c4;
  uint auStack_c0 [4];
  uint auStack_b0 [44];
  
  iVar12 = 0;
  iVar11 = 0;
  lVar9 = 4;
  piVar13 = in_stack_00000064;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  uStack0000004c = param_8;
  do {
    uVar15 = *piVar13 + in_stack_0000006c;
    uVar14 = piVar13[1] + in_stack_00000074;
    if (((int)uVar15 < *(int *)(param_1 + 0xa2c)) && (-*(int *)(param_1 + 0xa2c) <= (int)uVar15)) {
      if (((int)uVar14 < *(int *)(param_1 + 0xa30)) && (-*(int *)(param_1 + 0xa30) <= (int)uVar14))
      {
        if (in_stack_000000d4 == 1) {
          (**(code **)(param_1 + 0x9b8))();
        }
        else {
          (**(code **)(param_1 + 0x9c0))
                    ((longlong)((int)uVar14 >> 2) * (longlong)*(int *)(param_1 + 0x564) +
                     (longlong)((int)uVar15 >> 2) + (ulonglong)uStack00000034,
                     *(int *)(param_1 + 0x564),in_stack_000000b4,0x10,uVar15 & 3,uVar14 & 3,
                     in_stack_000000d4,*(undefined4 *)(param_1 + 0x618));
        }
        auStack_c0[0] = uVar14;
        auStack_b0[0] = uVar15;
        fn_82EAA320(param_1,auStack_b0,auStack_c0,&uStack_d8,&uStack_dc,1);
        uVar4 = uStack_d8;
        uVar3 = uStack_dc;
        if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(param_1,uStack0000003c,*(undefined4 *)(param_1 + 0x568),
                            in_stack_000000bc,8,uStack_d8,uStack_dc,0);
        }
        if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(param_1,uStack00000044,*(undefined4 *)(param_1 + 0x568),
                            in_stack_000000c4,8,uVar4,uVar3,0);
        }
        uStack_d4 = in_stack_000000ac;
        uStack_d0 = in_stack_000000a4;
        piStack_c4 = in_stack_00000064;
        uStack_cc = in_stack_00000084;
        uStack_c8 = in_stack_0000007c;
        fn_82EC4410(param_1,uStack0000001c,uStack00000024,uStack0000002c,uStack0000004c,
                      in_stack_00000054,in_stack_0000005c,in_stack_000000b4);
        iVar5 = fn_82E9AB00(param_1,uVar15 - in_stack_00000094,uVar14 - in_stack_0000009c,
                              in_stack_000000dc);
        iStack_e0 = iVar5 + iStack_e0;
        if (iStack_e0 < in_stack_0000008c) {
          iVar12 = *piVar13;
          iVar11 = piVar13[1];
          in_stack_0000008c = iStack_e0;
        }
      }
    }
    lVar9 = lVar9 + -1;
    piVar13 = piVar13 + 2;
  } while (lVar9 != 0);
  in_stack_00000064 = in_stack_00000064 + 8;
  uStack_d4 = 4;
  iVar10 = 0;
  iVar5 = 0;
  do {
    uVar15 = *in_stack_00000064 + iVar12 + in_stack_0000006c;
    uVar14 = in_stack_00000064[1] + iVar11 + in_stack_00000074;
    if (((int)uVar15 < *(int *)(param_1 + 0xa2c)) && (-*(int *)(param_1 + 0xa2c) <= (int)uVar15)) {
      if (((int)uVar14 < *(int *)(param_1 + 0xa30)) && (-*(int *)(param_1 + 0xa30) <= (int)uVar14))
      {
        if (in_stack_000000d4 == 1) {
          (**(code **)(param_1 + 0x9b8))();
        }
        else {
          (**(code **)(param_1 + 0x9c0))
                    ((longlong)((int)uVar14 >> 2) * (longlong)*(int *)(param_1 + 0x564) +
                     (longlong)((int)uVar15 >> 2) + (ulonglong)uStack00000034,
                     *(int *)(param_1 + 0x564),in_stack_000000b4,0x10,uVar15 & 3,uVar14 & 3,
                     in_stack_000000d4,*(undefined4 *)(param_1 + 0x618));
        }
        auStack_c0[0] = uVar14;
        auStack_b0[0] = uVar15;
        fn_82EAA320(param_1,auStack_b0,auStack_c0,&uStack_d8,&uStack_dc,1);
        uVar4 = uStack_d8;
        uVar3 = uStack_dc;
        if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(param_1,uStack0000003c,*(undefined4 *)(param_1 + 0x568),
                            in_stack_000000bc,8,uStack_d8,uStack_dc,0);
        }
        if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(param_1,uStack00000044,*(undefined4 *)(param_1 + 0x568),
                            in_stack_000000c4,8,uVar4,uVar3,0);
        }
        piStack_c4 = in_stack_000000e4;
        fn_82EC4410(param_1,uStack0000001c,uStack00000024,uStack0000002c,uStack0000004c,
                      in_stack_00000054,in_stack_0000005c,in_stack_000000b4);
        uVar1 = (int)(uVar15 - in_stack_00000094) >> 0x1f;
        uVar2 = (int)(uVar14 - in_stack_0000009c) >> 0x1f;
        iVar8 = (uVar15 - in_stack_00000094 ^ uVar1) - uVar1;
        iVar6 = (uVar14 - in_stack_0000009c ^ uVar2) - uVar2;
        if ((iVar8 < 0x9f) && (iVar6 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + iVar6 * 4) * 4 + in_stack_000000dc) +
                  *(int *)(*(int *)(&lbl_831898B8 + iVar8 * 4) * 4 + in_stack_000000dc);
        }
        else {
          iVar6 = *(int *)(in_stack_000000dc + 0x14) << 1;
        }
        iStack_e0 = iVar6 + iStack_e0;
        if (iStack_e0 < in_stack_0000008c) {
          iVar5 = *in_stack_00000064;
          iVar10 = in_stack_00000064[1];
          in_stack_0000008c = iStack_e0;
        }
      }
    }
    uVar7 = (ulonglong)uStack_d4;
    in_stack_00000064 = in_stack_00000064 + 2;
    uStack_d4 = (uint)(uVar7 - 1);
  } while (uVar7 - 1 != 0);
  *in_stack_000000ec = iVar5 + iVar12 + in_stack_0000006c;
  *in_stack_000000f4 = iVar10 + iVar11 + in_stack_00000074;
  *in_stack_000000fc = in_stack_0000007c;
  *in_stack_00000104 = in_stack_00000084;
  *in_stack_0000010c = in_stack_0000008c;
  return;
}

