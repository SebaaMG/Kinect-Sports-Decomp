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
extern int fn_82F26F98();
extern unsigned int lbl_831898B8;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;


void fn_82EC3ED8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5
                  ,undefined4 param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  uint uStack00000034;
  undefined4 uStack0000003c;
  undefined4 uStack00000044;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int *in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000007c;
  int in_stack_00000084;
  int in_stack_0000008c;
  int in_stack_00000094;
  undefined4 in_stack_0000009c;
  int in_stack_000000a4;
  uint in_stack_000000ac;
  int in_stack_000000b4;
  undefined4 *in_stack_000000bc;
  int *in_stack_000000c4;
  int *in_stack_000000cc;
  int *in_stack_000000d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  code *pcStack_c4;
  uint auStack_c0 [4];
  uint auStack_b0 [44];
  
  iVar13 = 0;
  iVar12 = 0;
  lVar11 = 4;
  pcStack_c4 = (code *)in_stack_000000bc[3];
  pcVar1 = (code *)*in_stack_000000bc;
  piVar14 = in_stack_0000006c;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  do {
    iVar6 = *piVar14;
    iVar7 = piVar14[1];
    uVar16 = iVar6 + in_stack_00000074;
    uVar15 = iVar7 + in_stack_0000007c;
    if (((int)uVar16 < *(int *)(param_1 + 0xa2c)) && (-*(int *)(param_1 + 0xa2c) <= (int)uVar16)) {
      if ((((((int)uVar15 < *(int *)(param_1 + 0xa30)) &&
            (-*(int *)(param_1 + 0xa30) <= (int)uVar15)) && ((param_8 == 0 || (-1 < iVar7)))) &&
          ((in_stack_00000054 == 0 || (iVar7 < 1)))) &&
         (((in_stack_0000005c == 0 || (-1 < iVar6)) && ((in_stack_00000064 == 0 || (iVar6 < 1))))))
      {
        if (in_stack_000000a4 == 1) {
          (**(code **)(param_1 + 0x9b8))();
        }
        else {
          (**(code **)(param_1 + 0x9c0))
                    ((longlong)((int)uVar15 >> 2) * (longlong)*(int *)(param_1 + 0x564) +
                     (longlong)((int)uVar16 >> 2) + (ulonglong)uStack00000034,
                     *(int *)(param_1 + 0x564),in_stack_0000009c,0x10,uVar16 & 3,uVar15 & 3,
                     in_stack_000000a4,*(undefined4 *)(param_1 + 0x618));
        }
        iVar6 = (*pcStack_c4)(uStack0000001c,0x10,in_stack_0000009c,0x10,0x10);
        auStack_c0[0] = uVar15;
        auStack_b0[0] = uVar16;
        fn_82EAA320(param_1,auStack_b0,auStack_c0,&uStack_c8,&uStack_cc,1);
        uVar5 = uStack_c8;
        uVar4 = uStack_cc;
        if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(param_1,uStack0000003c,*(undefined4 *)(param_1 + 0x568),
                            in_stack_0000009c,8,uStack_c8,uStack_cc,0);
          iVar7 = (*pcVar1)(uStack00000024,8,in_stack_0000009c,8);
          iVar6 = iVar7 + iVar6;
        }
        if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(param_1,uStack00000044,*(undefined4 *)(param_1 + 0x568),
                            in_stack_0000009c,8,uVar5,uVar4,0);
          iVar7 = (*pcVar1)(uStack0000002c,8,in_stack_0000009c,8);
          iVar6 = iVar7 + iVar6;
        }
        iVar7 = fn_82E9AB00(param_1,(int)(uVar16 - in_stack_0000008c) >>
                                      (in_stack_000000ac & 0x3f),
                              (int)(uVar15 - in_stack_00000094) >> (in_stack_000000ac & 0x3f),
                              in_stack_000000b4);
        if (iVar7 + iVar6 < in_stack_00000084) {
          iVar13 = *piVar14;
          iVar12 = piVar14[1];
          in_stack_00000084 = iVar7 + iVar6;
        }
      }
    }
    lVar11 = lVar11 + -1;
    piVar14 = piVar14 + 2;
  } while (lVar11 != 0);
  in_stack_0000006c = in_stack_0000006c + 8;
  iVar7 = 0;
  iVar6 = 0;
  lVar11 = 4;
  do {
    uVar16 = *in_stack_0000006c + iVar13 + in_stack_00000074;
    uVar15 = in_stack_0000006c[1] + iVar12 + in_stack_0000007c;
    if (((int)uVar16 < *(int *)(param_1 + 0xa2c)) && (-*(int *)(param_1 + 0xa2c) <= (int)uVar16)) {
      if (((int)uVar15 < *(int *)(param_1 + 0xa30)) && (-*(int *)(param_1 + 0xa30) <= (int)uVar15))
      {
        if (in_stack_000000a4 == 1) {
          (**(code **)(param_1 + 0x9b8))();
        }
        else {
          (**(code **)(param_1 + 0x9c0))
                    ((longlong)((int)uVar15 >> 2) * (longlong)*(int *)(param_1 + 0x564) +
                     (longlong)((int)uVar16 >> 2) + (ulonglong)uStack00000034,
                     *(int *)(param_1 + 0x564),in_stack_0000009c,0x10,uVar16 & 3,uVar15 & 3,
                     in_stack_000000a4,*(undefined4 *)(param_1 + 0x618));
        }
        iVar8 = (*pcStack_c4)(uStack0000001c,0x10,in_stack_0000009c,0x10,0x10);
        auStack_c0[0] = uVar15;
        auStack_b0[0] = uVar16;
        fn_82EAA320(param_1,auStack_b0,auStack_c0,&uStack_c8,&uStack_cc,1);
        uVar5 = uStack_c8;
        uVar4 = uStack_cc;
        if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(param_1,uStack0000003c,*(undefined4 *)(param_1 + 0x568),
                            in_stack_0000009c,8,uStack_c8,uStack_cc,0);
          iVar9 = (*pcVar1)(uStack00000024,8,in_stack_0000009c,8);
          iVar8 = iVar9 + iVar8;
        }
        if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(param_1,uStack00000044,*(undefined4 *)(param_1 + 0x568),
                            in_stack_0000009c,8,uVar5,uVar4,0);
          iVar9 = (*pcVar1)(uStack0000002c,8,in_stack_0000009c,8);
          iVar8 = iVar9 + iVar8;
        }
        uVar16 = (int)(uVar16 - in_stack_0000008c) >> (in_stack_000000ac & 0x3f);
        uVar2 = (int)uVar16 >> 0x1f;
        uVar15 = (int)(uVar15 - in_stack_00000094) >> (in_stack_000000ac & 0x3f);
        uVar3 = (int)uVar15 >> 0x1f;
        iVar10 = (uVar16 ^ uVar2) - uVar2;
        iVar9 = (uVar15 ^ uVar3) - uVar3;
        if ((iVar10 < 0x9f) && (iVar9 < 0x9f)) {
          iVar9 = *(int *)(*(int *)(&lbl_831898B8 + iVar9 * 4) * 4 + in_stack_000000b4) +
                  *(int *)(*(int *)(&lbl_831898B8 + iVar10 * 4) * 4 + in_stack_000000b4);
        }
        else {
          iVar9 = *(int *)(in_stack_000000b4 + 0x14) << 1;
        }
        if (iVar9 + iVar8 < in_stack_00000084) {
          iVar6 = *in_stack_0000006c;
          iVar7 = in_stack_0000006c[1];
          in_stack_00000084 = iVar9 + iVar8;
        }
      }
    }
    lVar11 = lVar11 + -1;
    in_stack_0000006c = in_stack_0000006c + 2;
  } while (lVar11 != 0);
  *in_stack_000000c4 = iVar6 + iVar13 + in_stack_00000074;
  *in_stack_000000cc = iVar7 + iVar12 + in_stack_0000007c;
  *in_stack_000000d4 = in_stack_00000084;
  return;
}

