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


void fn_82EA1A40(int param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,int param_6,int param_7,int param_8)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  int in_stack_00000064;
  undefined4 in_stack_0000006c;
  uint in_stack_00000084;
  uint in_stack_0000008c;
  int in_stack_00000094;
  int in_stack_0000009c;
  undefined4 *in_stack_000000a4;
  undefined4 *in_stack_000000ac;
  int *in_stack_000000b4;
  
  uVar17 = (ulonglong)in_stack_00000054;
  pcVar1 = *(code **)(in_stack_0000009c + 0xc);
  lVar18 = 0;
  iVar5 = 0xfffffff;
  iVar6 = 0;
  lVar13 = 0;
  lVar11 = 0;
  lVar4 = -uVar17;
  if ((param_7 != 0) && ((int)lVar4 <= (int)in_stack_0000005c)) {
    lVar8 = in_stack_0000005c + uVar17 + 1;
    lVar7 = lVar4;
    do {
      iVar19 = *(int *)((int)((((param_5 & 0x1fffffff) * 8 - param_5) + param_4 + -7 + lVar7 &
                              0xffffffff) << 2) + in_stack_00000064);
      if (iVar19 < iVar5) {
        iVar6 = -1;
        lVar18 = lVar7;
        iVar5 = iVar19;
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if ((in_stack_00000054 != 0) &&
     (iVar19 = *(int *)((int)((((param_5 & 0x1fffffff) * 8 - param_5) + param_4 & 0xffffffff) << 2)
                        + in_stack_00000064 + -4), iVar19 < iVar5)) {
    lVar18 = -1;
    iVar6 = 0;
    iVar5 = iVar19;
  }
  if ((in_stack_0000005c != 0) &&
     (iVar19 = *(int *)((int)((((param_5 & 0x1fffffff) * 8 - param_5) + param_4 + 1 & 0xffffffff) <<
                             2) + in_stack_00000064), iVar19 < iVar5)) {
    lVar18 = 1;
    iVar6 = 0;
    iVar5 = iVar19;
  }
  iVar19 = (int)lVar18;
  if ((param_8 != 0) && ((int)lVar4 <= (int)in_stack_0000005c)) {
    lVar7 = in_stack_0000005c + uVar17 + 1;
    do {
      iVar19 = *(int *)((int)((((param_5 + 1 & 0x1fffffff) * 8 - (param_5 + 1)) + param_4 + lVar4 &
                              0xffffffff) << 2) + in_stack_00000064);
      if (iVar19 < iVar5) {
        iVar6 = 1;
        lVar18 = lVar4;
        iVar5 = iVar19;
      }
      iVar19 = (int)lVar18;
      lVar4 = lVar4 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  iVar5 = (int)in_stack_00000084 >> 0x1f;
  iVar3 = (int)in_stack_0000008c >> 0x1f;
  if (iVar19 == 0) {
    if (iVar6 == -1) {
      uVar15 = (ulonglong)in_stack_0000008c;
      uVar17 = (ulonglong)in_stack_00000084;
      if (in_stack_00000054 != 0) {
        lVar4 = -2;
        uVar16 = (ulonglong)((int)(uVar17 - 1) >> 0x1f);
        lVar18 = (param_3 - (ulonglong)*(uint *)(param_1 + 0x564)) + -1;
        uVar16 = (uVar17 - 1 ^ uVar16) - uVar16;
        do {
          (**(code **)(param_1 + 0x9b8))
                    (lVar18,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,
                     0xffffffffffffffff,lVar4,*(undefined4 *)(param_1 + 0x904),
                     *(undefined4 *)(param_1 + 0x618));
          iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar10 = (ulonglong)((int)(lVar4 + uVar15) >> 0x1f);
          uVar10 = (lVar4 + uVar15 ^ uVar10) - uVar10;
          if (((int)uVar16 < 0x9f) && ((int)uVar10 < 0x9f)) {
            iVar19 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                             in_stack_00000094) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                             in_stack_00000094);
          }
          else {
            iVar19 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar19 + iVar6 < param_6) {
            lVar13 = -1;
            lVar11 = lVar4;
            param_6 = iVar19 + iVar6;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < 0);
        (**(code **)(param_1 + 0x9b8))
                  ((ulonglong)*(uint *)(param_1 + 0x564) + lVar18,
                   (ulonglong)*(uint *)(param_1 + 0x564),in_stack_0000006c,0x10,0xffffffffffffffff,0
                   ,*(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
        iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar10 = (uVar15 ^ (longlong)iVar3) - (longlong)iVar3;
        if (((int)uVar16 < 0x9f) && ((int)uVar10 < 0x9f)) {
          iVar19 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094);
        }
        else {
          iVar19 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar19 + iVar6 < param_6) {
          lVar13 = -1;
          lVar11 = 0;
          param_6 = iVar19 + iVar6;
        }
      }
      lVar18 = -2;
      param_3 = param_3 - (ulonglong)*(uint *)(param_1 + 0x564);
      uVar16 = (uVar17 ^ (longlong)iVar5) - (longlong)iVar5;
      do {
        (**(code **)(param_1 + 0x9b8))
                  (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,0,lVar18,
                   *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar10 = (ulonglong)((int)(lVar18 + uVar15) >> 0x1f);
        uVar10 = (lVar18 + uVar15 ^ uVar10) - uVar10;
        if (((int)uVar16 < 0x9f) && ((int)uVar10 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          lVar13 = 0;
          lVar11 = lVar18;
          param_6 = iVar6 + iVar5;
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < 0);
      lVar18 = -2;
      uVar16 = (ulonglong)((int)(uVar17 + 1) >> 0x1f);
      uVar16 = (uVar17 + 1 ^ uVar16) - uVar16;
      do {
        (**(code **)(param_1 + 0x9b8))
                  (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,1,lVar18,
                   *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar17 = (ulonglong)((int)(lVar18 + uVar15) >> 0x1f);
        uVar17 = (lVar18 + uVar15 ^ uVar17) - uVar17;
        if (((int)uVar16 < 0x9f) && ((int)uVar17 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          lVar13 = 1;
          lVar11 = lVar18;
          param_6 = iVar6 + iVar5;
        }
        uVar12 = (undefined4)lVar11;
        uVar14 = (undefined4)lVar13;
        lVar18 = lVar18 + 1;
      } while (lVar18 < 0);
      (**(code **)(param_1 + 0x9b8))
                ((ulonglong)*(uint *)(param_1 + 0x564) + param_3,
                 (ulonglong)*(uint *)(param_1 + 0x564),in_stack_0000006c,0x10,1,0,
                 *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
      iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar17 = (uVar15 ^ (longlong)iVar3) - (longlong)iVar3;
      if (((int)uVar16 < 0x9f) && ((int)uVar17 < 0x9f)) {
        iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (iVar6 + iVar5 < param_6) {
        uVar14 = 1;
        uVar12 = 0;
        param_6 = iVar6 + iVar5;
      }
    }
    else {
      uVar15 = (ulonglong)in_stack_0000008c;
      uVar17 = (ulonglong)in_stack_00000084;
      if (in_stack_00000054 != 0) {
        uVar16 = (ulonglong)((int)(uVar17 - 1) >> 0x1f);
        lVar18 = 0;
        uVar16 = (uVar17 - 1 ^ uVar16) - uVar16;
        do {
          (**(code **)(param_1 + 0x9b8))
                    (param_3 + -1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,
                     0xffffffffffffffff,lVar18,*(undefined4 *)(param_1 + 0x904),
                     *(undefined4 *)(param_1 + 0x618));
          iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar10 = (ulonglong)((int)(lVar18 + uVar15) >> 0x1f);
          uVar10 = (lVar18 + uVar15 ^ uVar10) - uVar10;
          if (((int)uVar16 < 0x9f) && ((int)uVar10 < 0x9f)) {
            iVar19 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                             in_stack_00000094) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                             in_stack_00000094);
          }
          else {
            iVar19 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar19 + iVar6 < param_6) {
            lVar13 = -1;
            lVar11 = lVar18;
            param_6 = iVar19 + iVar6;
          }
          lVar18 = lVar18 + 1;
        } while ((int)lVar18 < 3);
      }
      lVar18 = 1;
      uVar16 = (uVar17 ^ (longlong)iVar5) - (longlong)iVar5;
      do {
        (**(code **)(param_1 + 0x9b8))
                  (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,0,lVar18,
                   *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar10 = (ulonglong)((int)(lVar18 + uVar15) >> 0x1f);
        uVar10 = (lVar18 + uVar15 ^ uVar10) - uVar10;
        if (((int)uVar16 < 0x9f) && ((int)uVar10 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          lVar13 = 0;
          lVar11 = lVar18;
          param_6 = iVar6 + iVar5;
        }
        lVar18 = lVar18 + 1;
      } while ((int)lVar18 < 3);
      lVar18 = 0;
      uVar16 = (ulonglong)((int)(uVar17 + 1) >> 0x1f);
      uVar16 = (uVar17 + 1 ^ uVar16) - uVar16;
      do {
        (**(code **)(param_1 + 0x9b8))
                  (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,1,lVar18,
                   *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar17 = (ulonglong)((int)(lVar18 + uVar15) >> 0x1f);
        uVar17 = (lVar18 + uVar15 ^ uVar17) - uVar17;
        if (((int)uVar16 < 0x9f) && ((int)uVar17 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          lVar13 = 1;
          lVar11 = lVar18;
          param_6 = iVar6 + iVar5;
        }
        uVar12 = (undefined4)lVar11;
        uVar14 = (undefined4)lVar13;
        lVar18 = lVar18 + 1;
      } while ((int)lVar18 < 3);
    }
  }
  else if (iVar6 == 0) {
    uVar17 = (ulonglong)in_stack_0000008c;
    if (iVar19 == -1) {
      uVar15 = (ulonglong)in_stack_00000084;
      if (param_7 != 0) {
        lVar4 = -2;
        uVar16 = (ulonglong)((int)(uVar17 - 1) >> 0x1f);
        lVar18 = param_3 - (ulonglong)*(uint *)(param_1 + 0x564);
        uVar16 = (uVar17 - 1 ^ uVar16) - uVar16;
        do {
          (**(code **)(param_1 + 0x9b8))
                    (lVar18 + -1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,lVar4,
                     0xffffffffffffffff,*(undefined4 *)(param_1 + 0x904),
                     *(undefined4 *)(param_1 + 0x618));
          iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar10 = (ulonglong)((int)(lVar4 + uVar15) >> 0x1f);
          uVar10 = (lVar4 + uVar15 ^ uVar10) - uVar10;
          if (((int)uVar10 < 0x9f) && ((int)uVar16 < 0x9f)) {
            iVar19 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                             in_stack_00000094) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                             in_stack_00000094);
          }
          else {
            iVar19 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar19 + iVar6 < param_6) {
            lVar11 = -1;
            lVar13 = lVar4;
            param_6 = iVar19 + iVar6;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < 0);
        (**(code **)(param_1 + 0x9b8))
                  (lVar18,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,0,
                   0xffffffffffffffff,*(undefined4 *)(param_1 + 0x904),
                   *(undefined4 *)(param_1 + 0x618));
        iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar10 = (uVar15 ^ (longlong)iVar5) - (longlong)iVar5;
        if (((int)uVar10 < 0x9f) && ((int)uVar16 < 0x9f)) {
          iVar19 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094);
        }
        else {
          iVar19 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar19 + iVar6 < param_6) {
          lVar13 = 0;
          lVar11 = -1;
          param_6 = iVar19 + iVar6;
        }
      }
      lVar18 = -2;
      uVar16 = (uVar17 ^ (longlong)iVar3) - (longlong)iVar3;
      do {
        (**(code **)(param_1 + 0x9b8))
                  (param_3 + -1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,lVar18,0,
                   *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
        iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar10 = (ulonglong)((int)(lVar18 + uVar15) >> 0x1f);
        uVar10 = (lVar18 + uVar15 ^ uVar10) - uVar10;
        if (((int)uVar10 < 0x9f) && ((int)uVar16 < 0x9f)) {
          iVar19 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094);
        }
        else {
          iVar19 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar19 + iVar6 < param_6) {
          lVar11 = 0;
          lVar13 = lVar18;
          param_6 = iVar19 + iVar6;
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < 0);
      lVar18 = -2;
      uVar16 = (ulonglong)((int)(uVar17 + 1) >> 0x1f);
      uVar16 = (uVar17 + 1 ^ uVar16) - uVar16;
      do {
        (**(code **)(param_1 + 0x9b8))
                  (param_3 + -1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,lVar18,1,
                   *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
        iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar17 = (ulonglong)((int)(lVar18 + uVar15) >> 0x1f);
        uVar17 = (lVar18 + uVar15 ^ uVar17) - uVar17;
        if (((int)uVar17 < 0x9f) && ((int)uVar16 < 0x9f)) {
          iVar19 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094);
        }
        else {
          iVar19 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar19 + iVar6 < param_6) {
          lVar11 = 1;
          lVar13 = lVar18;
          param_6 = iVar19 + iVar6;
        }
        uVar12 = (undefined4)lVar11;
        uVar14 = (undefined4)lVar13;
        lVar18 = lVar18 + 1;
      } while (lVar18 < 0);
      (**(code **)(param_1 + 0x9b8))
                (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,0,1,
                 *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
      iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar17 = (uVar15 ^ (longlong)iVar5) - (longlong)iVar5;
      if (((int)uVar17 < 0x9f) && ((int)uVar16 < 0x9f)) {
        iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (iVar5 + iVar6 < param_6) {
        uVar14 = 0;
        uVar12 = 1;
        param_6 = iVar5 + iVar6;
      }
    }
    else {
      uVar15 = (ulonglong)in_stack_00000084;
      if (param_7 != 0) {
        uVar2 = *(uint *)(param_1 + 0x564);
        lVar18 = 0;
        uVar16 = (ulonglong)((int)(uVar17 - 1) >> 0x1f);
        uVar16 = (uVar17 - 1 ^ uVar16) - uVar16;
        do {
          (**(code **)(param_1 + 0x9b8))
                    (param_3 - (ulonglong)uVar2,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,
                     0x10,lVar18,0xffffffffffffffff,*(undefined4 *)(param_1 + 0x904),
                     *(undefined4 *)(param_1 + 0x618));
          iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar10 = (ulonglong)((int)(lVar18 + uVar15) >> 0x1f);
          uVar10 = (lVar18 + uVar15 ^ uVar10) - uVar10;
          if (((int)uVar10 < 0x9f) && ((int)uVar16 < 0x9f)) {
            iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094);
          }
          else {
            iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar6 + iVar5 < param_6) {
            lVar11 = -1;
            lVar13 = lVar18;
            param_6 = iVar6 + iVar5;
          }
          lVar18 = lVar18 + 1;
        } while ((int)lVar18 < 3);
      }
      lVar18 = 1;
      uVar16 = (uVar17 ^ (longlong)iVar3) - (longlong)iVar3;
      do {
        (**(code **)(param_1 + 0x9b8))
                  (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,lVar18,0,
                   *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar10 = (ulonglong)((int)(lVar18 + uVar15) >> 0x1f);
        uVar10 = (lVar18 + uVar15 ^ uVar10) - uVar10;
        if (((int)uVar10 < 0x9f) && ((int)uVar16 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          lVar11 = 0;
          lVar13 = lVar18;
          param_6 = iVar6 + iVar5;
        }
        lVar18 = lVar18 + 1;
      } while ((int)lVar18 < 3);
      lVar18 = 0;
      uVar16 = (ulonglong)((int)(uVar17 + 1) >> 0x1f);
      uVar16 = (uVar17 + 1 ^ uVar16) - uVar16;
      do {
        (**(code **)(param_1 + 0x9b8))
                  (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,lVar18,1,
                   *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar17 = (ulonglong)((int)(lVar18 + uVar15) >> 0x1f);
        uVar17 = (lVar18 + uVar15 ^ uVar17) - uVar17;
        if (((int)uVar17 < 0x9f) && ((int)uVar16 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          lVar11 = 1;
          lVar13 = lVar18;
          param_6 = iVar6 + iVar5;
        }
        uVar12 = (undefined4)lVar11;
        uVar14 = (undefined4)lVar13;
        lVar18 = lVar18 + 1;
      } while ((int)lVar18 < 3);
    }
  }
  else if (iVar19 == -1) {
    uVar17 = (ulonglong)in_stack_0000008c;
    if (iVar6 == -1) {
      lVar4 = -2;
      uVar16 = (ulonglong)in_stack_00000084;
      param_3 = param_3 - (ulonglong)*(uint *)(param_1 + 0x564);
      lVar18 = param_3 + -1;
      uVar15 = (uVar16 ^ (longlong)iVar5) - (longlong)iVar5;
      do {
        lVar7 = -2;
        uVar10 = (ulonglong)((int)(lVar4 + uVar17) >> 0x1f);
        uVar10 = (lVar4 + uVar17 ^ uVar10) - uVar10;
        do {
          (**(code **)(param_1 + 0x9b8))
                    (lVar18,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,lVar7,lVar4,
                     *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
          iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar9 = (ulonglong)((int)(lVar7 + uVar16) >> 0x1f);
          uVar9 = (lVar7 + uVar16 ^ uVar9) - uVar9;
          if (((int)uVar9 < 0x9f) && ((int)uVar10 < 0x9f)) {
            iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094);
          }
          else {
            iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar6 + iVar5 < param_6) {
            lVar11 = lVar4;
            lVar13 = lVar7;
            param_6 = iVar6 + iVar5;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < 0);
        (**(code **)(param_1 + 0x9b8))
                  (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,0,lVar4,
                   *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        if (((int)uVar15 < 0x9f) && ((int)uVar10 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          lVar13 = 0;
          lVar11 = lVar4;
          param_6 = iVar6 + iVar5;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < 0);
      uVar2 = *(uint *)(param_1 + 0x564);
      lVar4 = -2;
      uVar17 = (uVar17 ^ (longlong)iVar3) - (longlong)iVar3;
      do {
        (**(code **)(param_1 + 0x9b8))
                  ((ulonglong)uVar2 + lVar18,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10
                   ,lVar4,0,*(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar15 = (ulonglong)((int)(lVar4 + uVar16) >> 0x1f);
        uVar15 = (lVar4 + uVar16 ^ uVar15) - uVar15;
        if (((int)uVar15 < 0x9f) && ((int)uVar17 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          lVar11 = 0;
          lVar13 = lVar4;
          param_6 = iVar6 + iVar5;
        }
        uVar12 = (undefined4)lVar11;
        uVar14 = (undefined4)lVar13;
        lVar4 = lVar4 + 1;
      } while (lVar4 < 0);
    }
    else {
      uVar16 = (ulonglong)in_stack_00000084;
      lVar18 = 1;
      uVar15 = (uVar16 ^ (longlong)iVar5) - (longlong)iVar5;
      do {
        lVar4 = -2;
        uVar10 = (ulonglong)((int)(lVar18 + uVar17) >> 0x1f);
        uVar10 = (lVar18 + uVar17 ^ uVar10) - uVar10;
        do {
          (**(code **)(param_1 + 0x9b8))
                    (param_3 + -1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,lVar4,
                     lVar18,*(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
          iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar9 = (ulonglong)((int)(lVar4 + uVar16) >> 0x1f);
          uVar9 = (lVar4 + uVar16 ^ uVar9) - uVar9;
          if (((int)uVar9 < 0x9f) && ((int)uVar10 < 0x9f)) {
            iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094);
          }
          else {
            iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar6 + iVar5 < param_6) {
            lVar11 = lVar18;
            lVar13 = lVar4;
            param_6 = iVar6 + iVar5;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < 0);
        (**(code **)(param_1 + 0x9b8))
                  (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,0,lVar18,
                   *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        if (((int)uVar15 < 0x9f) && ((int)uVar10 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          lVar13 = 0;
          lVar11 = lVar18;
          param_6 = iVar6 + iVar5;
        }
        lVar18 = lVar18 + 1;
      } while ((int)lVar18 < 3);
      lVar18 = -2;
      uVar17 = (uVar17 ^ (longlong)iVar3) - (longlong)iVar3;
      do {
        (**(code **)(param_1 + 0x9b8))
                  (param_3 + -1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,lVar18,0,
                   *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar15 = (ulonglong)((int)(lVar18 + uVar16) >> 0x1f);
        uVar15 = (lVar18 + uVar16 ^ uVar15) - uVar15;
        if (((int)uVar15 < 0x9f) && ((int)uVar17 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          lVar11 = 0;
          lVar13 = lVar18;
          param_6 = iVar6 + iVar5;
        }
        uVar12 = (undefined4)lVar11;
        uVar14 = (undefined4)lVar13;
        lVar18 = lVar18 + 1;
      } while (lVar18 < 0);
    }
  }
  else if (iVar6 == -1) {
    uVar2 = *(uint *)(param_1 + 0x564);
    lVar18 = -2;
    do {
      uVar15 = lVar18 + (ulonglong)in_stack_0000008c;
      lVar4 = 0;
      uVar17 = (ulonglong)((int)uVar15 >> 0x1f);
      uVar17 = (uVar15 ^ uVar17) - uVar17;
      do {
        (**(code **)(param_1 + 0x9b8))
                  (param_3 - (ulonglong)uVar2,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,
                   0x10,lVar4,lVar18,*(undefined4 *)(param_1 + 0x904),
                   *(undefined4 *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar16 = lVar4 + (ulonglong)in_stack_00000084;
        uVar15 = (ulonglong)((int)uVar16 >> 0x1f);
        uVar15 = (uVar16 ^ uVar15) - uVar15;
        if (((int)uVar15 < 0x9f) && ((int)uVar17 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          lVar11 = lVar18;
          lVar13 = lVar4;
          param_6 = iVar6 + iVar5;
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < 3);
      lVar18 = lVar18 + 1;
    } while (lVar18 < 0);
    lVar18 = 1;
    uVar17 = ((ulonglong)in_stack_0000008c ^ (longlong)iVar3) - (longlong)iVar3;
    do {
      (**(code **)(param_1 + 0x9b8))
                (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,lVar18,0,
                 *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
      iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar16 = lVar18 + (ulonglong)in_stack_00000084;
      uVar15 = (ulonglong)((int)uVar16 >> 0x1f);
      uVar15 = (uVar16 ^ uVar15) - uVar15;
      if (((int)uVar15 < 0x9f) && ((int)uVar17 < 0x9f)) {
        iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (iVar6 + iVar5 < param_6) {
        lVar11 = 0;
        lVar13 = lVar18;
        param_6 = iVar6 + iVar5;
      }
      uVar12 = (undefined4)lVar11;
      uVar14 = (undefined4)lVar13;
      lVar18 = lVar18 + 1;
    } while ((int)lVar18 < 3);
  }
  else {
    lVar18 = 1;
    do {
      uVar15 = lVar18 + (ulonglong)in_stack_0000008c;
      lVar4 = 0;
      uVar17 = (ulonglong)((int)uVar15 >> 0x1f);
      uVar17 = (uVar15 ^ uVar17) - uVar17;
      do {
        (**(code **)(param_1 + 0x9b8))
                  (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,lVar4,lVar18,
                   *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar16 = lVar4 + (ulonglong)in_stack_00000084;
        uVar15 = (ulonglong)((int)uVar16 >> 0x1f);
        uVar15 = (uVar16 ^ uVar15) - uVar15;
        if (((int)uVar15 < 0x9f) && ((int)uVar17 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          lVar11 = lVar18;
          lVar13 = lVar4;
          param_6 = iVar6 + iVar5;
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < 3);
      lVar18 = lVar18 + 1;
    } while ((int)lVar18 < 3);
    lVar18 = 1;
    uVar17 = ((ulonglong)in_stack_0000008c ^ (longlong)iVar3) - (longlong)iVar3;
    do {
      (**(code **)(param_1 + 0x9b8))
                (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,lVar18,0,
                 *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
      iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar16 = lVar18 + (ulonglong)in_stack_00000084;
      uVar15 = (ulonglong)((int)uVar16 >> 0x1f);
      uVar15 = (uVar16 ^ uVar15) - uVar15;
      if (((int)uVar15 < 0x9f) && ((int)uVar17 < 0x9f)) {
        iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (iVar6 + iVar5 < param_6) {
        lVar11 = 0;
        lVar13 = lVar18;
        param_6 = iVar6 + iVar5;
      }
      uVar12 = (undefined4)lVar11;
      uVar14 = (undefined4)lVar13;
      lVar18 = lVar18 + 1;
    } while ((int)lVar18 < 3);
  }
  *in_stack_000000a4 = uVar14;
  *in_stack_000000ac = uVar12;
  *in_stack_000000b4 = param_6;
  return;
}

