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
extern unsigned int lbl_831898B8;


void fn_82E9DB40(int param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,longlong param_7,longlong param_8)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar15;
  ulonglong uVar14;
  ulonglong uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  int in_stack_00000054;
  int in_stack_0000005c;
  undefined4 in_stack_0000006c;
  int in_stack_00000084;
  int in_stack_0000008c;
  int in_stack_00000094;
  uint in_stack_0000009c;
  uint in_stack_000000a4;
  undefined4 *in_stack_000000ac;
  undefined4 *in_stack_000000b4;
  int *in_stack_000000bc;
  
  uVar20 = (ulonglong)in_stack_0000009c;
  uVar4 = -(ulonglong)(in_stack_00000054 != 0);
  uVar12 = -(ulonglong)(param_7 != 0) & 0xfffffffffffffffe;
  pcVar1 = *(code **)(in_stack_00000094 + 0xc);
  uVar21 = 2;
  uVar22 = uVar4 & 0xfffffffffffffffe;
  uVar9 = -(uint)(param_8 != 0) & 2;
  iVar23 = (int)uVar22;
  uVar8 = -(uint)(in_stack_0000005c != 0) & 2;
  uVar18 = 0;
  uVar16 = 0;
  if ((int)uVar12 < 0) {
    do {
      uVar2 = *(uint *)(param_1 + 0x564);
      iVar7 = (int)uVar12 >> 1;
      if ((int)uVar22 < 0) {
        uVar10 = iVar7 + in_stack_000000a4;
        uVar3 = (int)uVar10 >> 0x1f;
        iVar6 = (uVar10 ^ uVar3) - uVar3;
        do {
          if (in_stack_00000084 == 1) {
            (**(code **)(param_1 + 0x9b8))();
          }
          else {
            (**(code **)(param_1 + 0x9c0))
                      ((param_3 - (ulonglong)uVar2) + -1,*(undefined4 *)(param_1 + 0x564),
                       in_stack_0000006c,0x10,uVar22,uVar12,in_stack_00000084,
                       *(undefined4 *)(param_1 + 0x618));
          }
          iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar13 = (longlong)((int)uVar22 >> 1) + uVar20;
          uVar11 = (ulonglong)((int)uVar13 >> 0x1f);
          uVar11 = (uVar13 ^ uVar11) - uVar11;
          if (((int)uVar11 < 0x9f) && (iVar6 < 0x9f)) {
            iVar15 = *(int *)(*(int *)(&lbl_831898B8 + iVar6 * 4) * 4 + in_stack_0000008c) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar11 & 0xffffffff) << 2)) * 4 +
                             in_stack_0000008c);
          }
          else {
            iVar15 = *(int *)(in_stack_0000008c + 0x14) << 1;
          }
          if (iVar15 + iVar5 < param_6) {
            uVar16 = uVar12;
            uVar18 = uVar22;
            param_6 = iVar15 + iVar5;
          }
          uVar22 = uVar22 + 2;
        } while ((longlong)uVar22 < 0);
      }
      uVar2 = *(uint *)(param_1 + 0x564);
      uVar22 = 0;
      if (-1 < (int)uVar8) {
        uVar10 = iVar7 + in_stack_000000a4;
        uVar3 = (int)uVar10 >> 0x1f;
        iVar7 = (uVar10 ^ uVar3) - uVar3;
        do {
          if (in_stack_00000084 == 1) {
            (**(code **)(param_1 + 0x9b8))();
          }
          else {
            (**(code **)(param_1 + 0x9c0))
                      (param_3 - (ulonglong)uVar2,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c
                       ,0x10,uVar22,uVar12,in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
          }
          iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar13 = (longlong)((int)uVar22 >> 1) + uVar20;
          uVar11 = (ulonglong)((int)uVar13 >> 0x1f);
          uVar11 = (uVar13 ^ uVar11) - uVar11;
          if (((int)uVar11 < 0x9f) && (iVar7 < 0x9f)) {
            iVar5 = *(int *)(*(int *)(&lbl_831898B8 + iVar7 * 4) * 4 + in_stack_0000008c) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar11 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c);
          }
          else {
            iVar5 = *(int *)(in_stack_0000008c + 0x14) << 1;
          }
          if (iVar5 + iVar6 < param_6) {
            uVar16 = uVar12;
            uVar18 = uVar22;
            param_6 = iVar5 + iVar6;
          }
          uVar22 = uVar22 + 2;
        } while ((int)uVar22 <= (int)uVar8);
      }
      uVar22 = uVar4 & 0xfffffffe;
      uVar12 = uVar12 + 2;
    } while ((longlong)uVar12 < 0);
  }
  uVar12 = (ulonglong)in_stack_000000a4;
  iVar7 = (int)in_stack_000000a4 >> 0x1f;
  if ((int)uVar22 < 0) {
    uVar11 = (uVar12 ^ (longlong)iVar7) - (longlong)iVar7;
    do {
      if (in_stack_00000084 == 1) {
        (**(code **)(param_1 + 0x9b8))();
      }
      else {
        (**(code **)(param_1 + 0x9c0))
                  (param_3 + -1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar22,0,
                   in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
      }
      iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar14 = (longlong)((int)uVar22 >> 1) + uVar20;
      uVar13 = (ulonglong)((int)uVar14 >> 0x1f);
      uVar13 = (uVar14 ^ uVar13) - uVar13;
      if (((int)uVar13 < 0x9f) && ((int)uVar11 < 0x9f)) {
        iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar11 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000008c) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar13 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000008c);
      }
      else {
        iVar5 = *(int *)(in_stack_0000008c + 0x14) << 1;
      }
      if (iVar5 + iVar6 < param_6) {
        uVar16 = 0;
        uVar18 = uVar22;
        param_6 = iVar5 + iVar6;
      }
      uVar22 = uVar22 + 2;
    } while ((longlong)uVar22 < 0);
  }
  uVar22 = 2;
  if (1 < uVar8) {
    uVar11 = (uVar12 ^ (longlong)iVar7) - (longlong)iVar7;
    do {
      if (in_stack_00000084 == 1) {
        (**(code **)(param_1 + 0x9b8))();
      }
      else {
        (**(code **)(param_1 + 0x9c0))
                  (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar22,0,
                   in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
      }
      iVar7 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar14 = (longlong)((int)uVar22 >> 1) + uVar20;
      uVar13 = (ulonglong)((int)uVar14 >> 0x1f);
      uVar13 = (uVar14 ^ uVar13) - uVar13;
      if (((int)uVar13 < 0x9f) && ((int)uVar11 < 0x9f)) {
        iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar11 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000008c) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar13 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000008c);
      }
      else {
        iVar6 = *(int *)(in_stack_0000008c + 0x14) << 1;
      }
      if (iVar6 + iVar7 < param_6) {
        uVar16 = 0;
        uVar18 = uVar22;
        param_6 = iVar6 + iVar7;
      }
      uVar22 = uVar22 + 2;
    } while ((int)uVar22 <= (int)uVar8);
  }
  uVar17 = (undefined4)uVar16;
  uVar19 = (undefined4)uVar18;
  if (1 < uVar9) {
    do {
      uVar22 = uVar4 & 0xfffffffe;
      iVar7 = (int)uVar21 >> 1;
      if (iVar23 < 0) {
        uVar13 = (longlong)iVar7 + uVar12;
        uVar11 = (ulonglong)((int)uVar13 >> 0x1f);
        uVar11 = (uVar13 ^ uVar11) - uVar11;
        do {
          if (in_stack_00000084 == 1) {
            (**(code **)(param_1 + 0x9b8))();
          }
          else {
            (**(code **)(param_1 + 0x9c0))
                      (param_3 + -1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar22,
                       uVar21,in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
          }
          iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar14 = (longlong)((int)uVar22 >> 1) + uVar20;
          uVar13 = (ulonglong)((int)uVar14 >> 0x1f);
          uVar13 = (uVar14 ^ uVar13) - uVar13;
          if (((int)uVar13 < 0x9f) && ((int)uVar11 < 0x9f)) {
            iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar11 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar13 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c);
          }
          else {
            iVar5 = *(int *)(in_stack_0000008c + 0x14) << 1;
          }
          if (iVar5 + iVar6 < param_6) {
            uVar16 = uVar21;
            uVar18 = uVar22;
            param_6 = iVar5 + iVar6;
          }
          uVar22 = uVar22 + 2;
        } while ((longlong)uVar22 < 0);
      }
      uVar22 = 0;
      if (-1 < (int)uVar8) {
        uVar13 = (longlong)iVar7 + uVar12;
        uVar11 = (ulonglong)((int)uVar13 >> 0x1f);
        uVar11 = (uVar13 ^ uVar11) - uVar11;
        do {
          if (in_stack_00000084 == 1) {
            (**(code **)(param_1 + 0x9b8))();
          }
          else {
            (**(code **)(param_1 + 0x9c0))
                      (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar22,uVar21
                       ,in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
          }
          iVar7 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar14 = (longlong)((int)uVar22 >> 1) + uVar20;
          uVar13 = (ulonglong)((int)uVar14 >> 0x1f);
          uVar13 = (uVar14 ^ uVar13) - uVar13;
          if (((int)uVar13 < 0x9f) && ((int)uVar11 < 0x9f)) {
            iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar11 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar13 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c);
          }
          else {
            iVar6 = *(int *)(in_stack_0000008c + 0x14) << 1;
          }
          if (iVar6 + iVar7 < param_6) {
            uVar16 = uVar21;
            uVar18 = uVar22;
            param_6 = iVar6 + iVar7;
          }
          uVar22 = uVar22 + 2;
        } while ((int)uVar22 <= (int)uVar8);
      }
      uVar17 = (undefined4)uVar16;
      uVar19 = (undefined4)uVar18;
      uVar21 = uVar21 + 2;
    } while ((int)uVar21 <= (int)uVar9);
  }
  *in_stack_000000ac = uVar19;
  *in_stack_000000b4 = uVar17;
  *in_stack_000000bc = param_6;
  return;
}

