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


void fn_82E9C450(int param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,int param_6,int param_7,int param_8)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  int in_stack_00000064;
  undefined4 in_stack_0000006c;
  int in_stack_00000084;
  int in_stack_0000008c;
  int in_stack_00000094;
  uint in_stack_0000009c;
  uint in_stack_000000a4;
  undefined4 *in_stack_000000ac;
  undefined4 *in_stack_000000b4;
  int *in_stack_000000bc;
  
  uVar14 = (ulonglong)in_stack_00000054;
  pcVar1 = *(code **)(in_stack_00000094 + 0xc);
  lVar15 = 0;
  iVar5 = 0xfffffff;
  iVar4 = 0;
  uVar13 = 0;
  uVar12 = 0;
  lVar3 = -uVar14;
  if ((param_7 != 0) && ((int)lVar3 <= (int)in_stack_0000005c)) {
    lVar8 = in_stack_0000005c + uVar14 + 1;
    lVar6 = lVar3;
    do {
      iVar16 = *(int *)((int)((((param_5 & 0x1fffffff) * 8 - param_5) + param_4 + -7 + lVar6 &
                              0xffffffff) << 2) + in_stack_00000064);
      if (iVar16 < iVar5) {
        iVar4 = -1;
        lVar15 = lVar6;
        iVar5 = iVar16;
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if ((in_stack_00000054 != 0) &&
     (iVar16 = *(int *)((int)((((param_5 & 0x1fffffff) * 8 - param_5) + param_4 & 0xffffffff) << 2)
                        + in_stack_00000064 + -4), iVar16 < iVar5)) {
    lVar15 = -1;
    iVar4 = 0;
    iVar5 = iVar16;
  }
  if ((in_stack_0000005c != 0) &&
     (iVar16 = *(int *)((int)((((param_5 & 0x1fffffff) * 8 - param_5) + param_4 + 1 & 0xffffffff) <<
                             2) + in_stack_00000064), iVar16 < iVar5)) {
    lVar15 = 1;
    iVar4 = 0;
    iVar5 = iVar16;
  }
  iVar16 = (int)lVar15;
  if ((param_8 != 0) && ((int)lVar3 <= (int)in_stack_0000005c)) {
    lVar6 = in_stack_0000005c + uVar14 + 1;
    do {
      iVar16 = *(int *)((int)((lVar3 + ((param_5 + 1 & 0x1fffffff) * 8 - (param_5 + 1)) + param_4 &
                              0xffffffff) << 2) + in_stack_00000064);
      if (iVar16 < iVar5) {
        iVar4 = 1;
        lVar15 = lVar3;
        iVar5 = iVar16;
      }
      iVar16 = (int)lVar15;
      lVar3 = lVar3 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  iVar5 = (int)in_stack_0000009c >> 0x1f;
  if (iVar16 == 0) {
    uVar14 = (ulonglong)in_stack_0000009c;
    uVar7 = (ulonglong)in_stack_000000a4;
    if (iVar4 != -1) {
      if (in_stack_00000054 != 0) {
        if (in_stack_00000084 == 1) {
          (**(code **)(param_1 + 0x9b8))();
        }
        else {
          (**(code **)(param_1 + 0x9c0))
                    (param_3 + -1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,
                     0xfffffffffffffffe,2,in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
        }
        iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar10 = (ulonglong)((int)(uVar14 - 1) >> 0x1f);
        uVar9 = (ulonglong)((int)(uVar7 + 1) >> 0x1f);
        uVar10 = (uVar14 - 1 ^ uVar10) - uVar10;
        uVar9 = (uVar7 + 1 ^ uVar9) - uVar9;
        if (((int)uVar10 < 0x9f) && ((int)uVar9 < 0x9f)) {
          iVar16 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000008c) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000008c);
        }
        else {
          iVar16 = *(int *)(in_stack_0000008c + 0x14) << 1;
        }
        if (iVar16 + iVar4 < param_6) {
          uVar13 = 0xfffffffe;
          uVar12 = 2;
          param_6 = iVar16 + iVar4;
        }
      }
      if (in_stack_00000084 == 1) {
        (**(code **)(param_1 + 0x9b8))();
      }
      else {
        (**(code **)(param_1 + 0x9c0))
                  (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,0,2,
                   in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
      }
      iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar9 = (ulonglong)((int)(uVar7 + 1) >> 0x1f);
      uVar10 = (uVar14 ^ (longlong)iVar5) - (longlong)iVar5;
      uVar9 = (uVar7 + 1 ^ uVar9) - uVar9;
      if (((int)uVar10 < 0x9f) && ((int)uVar9 < 0x9f)) {
        iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000008c) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000008c);
      }
      else {
        iVar5 = *(int *)(in_stack_0000008c + 0x14) << 1;
      }
      if (iVar5 + iVar4 < param_6) {
        uVar13 = 0;
        uVar12 = 2;
        param_6 = iVar5 + iVar4;
      }
      if (in_stack_00000084 == 1) {
        (**(code **)(param_1 + 0x9b8))();
      }
      else {
        (**(code **)(param_1 + 0x9c0))
                  (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,2,2,
                   in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
      }
      iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar7 = (ulonglong)((int)(uVar14 + 1) >> 0x1f);
      uVar7 = (uVar14 + 1 ^ uVar7) - uVar7;
      if (((int)uVar7 < 0x9f) && ((int)uVar9 < 0x9f)) {
        iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000008c) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000008c);
      }
      else {
LAB_82e9db00:
        iVar4 = *(int *)(in_stack_0000008c + 0x14) << 1;
      }
      goto LAB_82e9db08;
    }
    if (in_stack_00000054 != 0) {
      lVar15 = param_3 - (ulonglong)*(uint *)(param_1 + 0x564);
      if (in_stack_00000084 == 1) {
        (**(code **)(param_1 + 0x9b8))(lVar15 + -1);
      }
      else {
        (**(code **)(param_1 + 0x9c0))
                  (lVar15 + -1,(ulonglong)*(uint *)(param_1 + 0x564),in_stack_0000006c,0x10,
                   0xfffffffffffffffe,0xfffffffffffffffe,in_stack_00000084,
                   *(undefined4 *)(param_1 + 0x618));
      }
      iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar10 = (ulonglong)((int)(uVar14 - 1) >> 0x1f);
      uVar9 = (ulonglong)((int)(uVar7 - 1) >> 0x1f);
      uVar10 = (uVar14 - 1 ^ uVar10) - uVar10;
      uVar9 = (uVar7 - 1 ^ uVar9) - uVar9;
      if (((int)uVar10 < 0x9f) && ((int)uVar9 < 0x9f)) {
        iVar16 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000008c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000008c);
      }
      else {
        iVar16 = *(int *)(in_stack_0000008c + 0x14) << 1;
      }
      if (iVar16 + iVar4 < param_6) {
        uVar13 = 0xfffffffe;
        uVar12 = 0xfffffffe;
        param_6 = iVar16 + iVar4;
      }
    }
    if (in_stack_00000084 == 1) {
      (**(code **)(param_1 + 0x9b8))();
    }
    else {
      (**(code **)(param_1 + 0x9c0))
                (param_3 - (ulonglong)*(uint *)(param_1 + 0x564),
                 (ulonglong)*(uint *)(param_1 + 0x564),in_stack_0000006c,0x10,0,0xfffffffffffffffe,
                 in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
    }
    iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
    uVar9 = (ulonglong)((int)(uVar7 - 1) >> 0x1f);
    uVar10 = (uVar14 ^ (longlong)iVar5) - (longlong)iVar5;
    uVar9 = (uVar7 - 1 ^ uVar9) - uVar9;
    if (((int)uVar10 < 0x9f) && ((int)uVar9 < 0x9f)) {
      iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                      in_stack_0000008c) +
              *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                      in_stack_0000008c);
    }
    else {
      iVar5 = *(int *)(in_stack_0000008c + 0x14) << 1;
    }
    if (iVar5 + iVar4 < param_6) {
      uVar13 = 0;
      uVar12 = 0xfffffffe;
      param_6 = iVar5 + iVar4;
    }
    if (in_stack_00000084 == 1) {
      (**(code **)(param_1 + 0x9b8))();
    }
    else {
      (**(code **)(param_1 + 0x9c0))
                (param_3 - (ulonglong)*(uint *)(param_1 + 0x564),
                 (ulonglong)*(uint *)(param_1 + 0x564),in_stack_0000006c,0x10,2,0xfffffffffffffffe,
                 in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
    }
    iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
    uVar7 = (ulonglong)((int)(uVar14 + 1) >> 0x1f);
    uVar7 = (uVar14 + 1 ^ uVar7) - uVar7;
    if (((int)uVar7 < 0x9f) && ((int)uVar9 < 0x9f)) {
      iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                      in_stack_0000008c) +
              *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                      in_stack_0000008c);
    }
    else {
      iVar4 = *(int *)(in_stack_0000008c + 0x14) << 1;
    }
    iVar4 = iVar4 + iVar5;
    if (param_6 <= iVar4) goto LAB_82e9db20;
    uVar12 = 0xfffffffe;
  }
  else {
    iVar2 = (int)in_stack_000000a4 >> 0x1f;
    if (iVar4 == 0) {
      uVar14 = (ulonglong)in_stack_0000009c;
      if (iVar16 == -1) {
        uVar7 = (ulonglong)in_stack_000000a4;
        if (param_7 != 0) {
          lVar15 = param_3 - (ulonglong)*(uint *)(param_1 + 0x564);
          if (in_stack_00000084 == 1) {
            (**(code **)(param_1 + 0x9b8))(lVar15 + -1);
          }
          else {
            (**(code **)(param_1 + 0x9c0))
                      (lVar15 + -1,(ulonglong)*(uint *)(param_1 + 0x564),in_stack_0000006c,0x10,
                       0xfffffffffffffffe,0xfffffffffffffffe,in_stack_00000084,
                       *(undefined4 *)(param_1 + 0x618));
          }
          iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar10 = (ulonglong)((int)(uVar14 - 1) >> 0x1f);
          uVar9 = (ulonglong)((int)(uVar7 - 1) >> 0x1f);
          uVar10 = (uVar14 - 1 ^ uVar10) - uVar10;
          uVar9 = (uVar7 - 1 ^ uVar9) - uVar9;
          if (((int)uVar10 < 0x9f) && ((int)uVar9 < 0x9f)) {
            iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c);
          }
          else {
            iVar4 = *(int *)(in_stack_0000008c + 0x14) << 1;
          }
          if (iVar4 + iVar5 < param_6) {
            uVar13 = 0xfffffffe;
            uVar12 = 0xfffffffe;
            param_6 = iVar4 + iVar5;
          }
        }
        if (in_stack_00000084 == 1) {
          (**(code **)(param_1 + 0x9b8))();
        }
        else {
          (**(code **)(param_1 + 0x9c0))
                    (param_3 + -1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,
                     0xfffffffffffffffe,0,in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
        }
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar9 = (ulonglong)((int)(uVar14 - 1) >> 0x1f);
        uVar9 = (uVar14 - 1 ^ uVar9) - uVar9;
        uVar14 = (uVar7 ^ (longlong)iVar2) - (longlong)iVar2;
        if (((int)uVar9 < 0x9f) && ((int)uVar14 < 0x9f)) {
          iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                          in_stack_0000008c) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                          in_stack_0000008c);
        }
        else {
          iVar4 = *(int *)(in_stack_0000008c + 0x14) << 1;
        }
        if (iVar4 + iVar5 < param_6) {
          uVar13 = 0xfffffffe;
          uVar12 = 0;
          param_6 = iVar4 + iVar5;
        }
        if (in_stack_00000084 == 1) {
          (**(code **)(param_1 + 0x9b8))();
        }
        else {
          (**(code **)(param_1 + 0x9c0))
                    (param_3 + -1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,
                     0xfffffffffffffffe,2,in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
        }
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar14 = (ulonglong)((int)(uVar7 + 1) >> 0x1f);
        uVar14 = (uVar7 + 1 ^ uVar14) - uVar14;
        if (((int)uVar9 < 0x9f) && ((int)uVar14 < 0x9f)) {
          iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                          in_stack_0000008c) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                          in_stack_0000008c);
        }
        else {
          iVar4 = *(int *)(in_stack_0000008c + 0x14) << 1;
        }
        if (iVar4 + iVar5 < param_6) {
          uVar13 = 0xfffffffe;
          uVar12 = 2;
          param_6 = iVar4 + iVar5;
        }
        goto LAB_82e9db20;
      }
      uVar7 = (ulonglong)in_stack_000000a4;
      if (param_7 != 0) {
        if (in_stack_00000084 == 1) {
          (**(code **)(param_1 + 0x9b8))();
        }
        else {
          (**(code **)(param_1 + 0x9c0))
                    (param_3 - (ulonglong)*(uint *)(param_1 + 0x564),
                     (ulonglong)*(uint *)(param_1 + 0x564),in_stack_0000006c,0x10,2,
                     0xfffffffffffffffe,in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
        }
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar10 = (ulonglong)((int)(uVar14 + 1) >> 0x1f);
        uVar9 = (ulonglong)((int)(uVar7 - 1) >> 0x1f);
        uVar10 = (uVar14 + 1 ^ uVar10) - uVar10;
        uVar9 = (uVar7 - 1 ^ uVar9) - uVar9;
        if (((int)uVar10 < 0x9f) && ((int)uVar9 < 0x9f)) {
          iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                          in_stack_0000008c) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                          in_stack_0000008c);
        }
        else {
          iVar4 = *(int *)(in_stack_0000008c + 0x14) << 1;
        }
        if (iVar4 + iVar5 < param_6) {
          uVar13 = 2;
          uVar12 = 0xfffffffe;
          param_6 = iVar4 + iVar5;
        }
      }
      if (in_stack_00000084 == 1) {
        (**(code **)(param_1 + 0x9b8))();
      }
      else {
        (**(code **)(param_1 + 0x9c0))
                  (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,2,0,
                   in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
      }
      iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar9 = (ulonglong)((int)(uVar14 + 1) >> 0x1f);
      uVar9 = (uVar14 + 1 ^ uVar9) - uVar9;
      uVar14 = (uVar7 ^ (longlong)iVar2) - (longlong)iVar2;
      if (((int)uVar9 < 0x9f) && ((int)uVar14 < 0x9f)) {
        iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000008c) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000008c);
      }
      else {
        iVar4 = *(int *)(in_stack_0000008c + 0x14) << 1;
      }
      if (iVar4 + iVar5 < param_6) {
        uVar13 = 2;
        uVar12 = 0;
        param_6 = iVar4 + iVar5;
      }
      if (in_stack_00000084 == 1) {
        (**(code **)(param_1 + 0x9b8))();
      }
      else {
        (**(code **)(param_1 + 0x9c0))
                  (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,2,2,
                   in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
      }
      iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar14 = (ulonglong)((int)(uVar7 + 1) >> 0x1f);
      uVar14 = (uVar7 + 1 ^ uVar14) - uVar14;
      if ((0x9e < (int)uVar9) || (0x9e < (int)uVar14)) goto LAB_82e9db00;
      iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                      in_stack_0000008c) +
              *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                      in_stack_0000008c);
LAB_82e9db08:
      iVar4 = iVar4 + iVar5;
      if (param_6 <= iVar4) goto LAB_82e9db20;
      uVar12 = 2;
    }
    else {
      uVar14 = (ulonglong)*(uint *)(param_1 + 0x564);
      if (iVar16 == -1) {
        if (iVar4 == -1) {
          lVar15 = (param_3 - uVar14) + -1;
          if (in_stack_00000084 == 1) {
            (**(code **)(param_1 + 0x9b8))();
          }
          else {
            (**(code **)(param_1 + 0x9c0))(lVar15);
          }
          iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar11 = (ulonglong)in_stack_0000009c - 1;
          uVar10 = (ulonglong)in_stack_000000a4 - 1;
          uVar9 = (ulonglong)((int)uVar11 >> 0x1f);
          uVar7 = (ulonglong)((int)uVar10 >> 0x1f);
          uVar9 = (uVar11 ^ uVar9) - uVar9;
          uVar7 = (uVar10 ^ uVar7) - uVar7;
          if (((int)uVar9 < 0x9f) && ((int)uVar7 < 0x9f)) {
            iVar16 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                             in_stack_0000008c) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                             in_stack_0000008c);
          }
          else {
            iVar16 = *(int *)(in_stack_0000008c + 0x14) << 1;
          }
          if (iVar16 + iVar4 < param_6) {
            uVar13 = 0xfffffffe;
            uVar12 = 0xfffffffe;
            param_6 = iVar16 + iVar4;
          }
          if (in_stack_00000084 == 1) {
            (**(code **)(param_1 + 0x9b8))();
          }
          else {
            (**(code **)(param_1 + 0x9c0))
                      (param_3 - uVar14,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,0,
                       0xfffffffffffffffe,in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
          }
          iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar14 = ((ulonglong)in_stack_0000009c ^ (longlong)iVar5) - (longlong)iVar5;
          if (((int)uVar14 < 0x9f) && ((int)uVar7 < 0x9f)) {
            iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c);
          }
          else {
            iVar5 = *(int *)(in_stack_0000008c + 0x14) << 1;
          }
          if (iVar5 + iVar4 < param_6) {
            uVar13 = 0;
            uVar12 = 0xfffffffe;
            param_6 = iVar5 + iVar4;
          }
          lVar15 = (ulonglong)*(uint *)(param_1 + 0x564) + lVar15;
          if (in_stack_00000084 == 1) {
            (**(code **)(param_1 + 0x9b8))(lVar15 + 1);
          }
          else {
            (**(code **)(param_1 + 0x9c0))
                      (lVar15 + 1,(ulonglong)*(uint *)(param_1 + 0x564),in_stack_0000006c,0x10,
                       0xfffffffffffffffe,0,in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
          }
          iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar14 = ((ulonglong)in_stack_000000a4 ^ (longlong)iVar2) - (longlong)iVar2;
          if (((int)uVar9 < 0x9f) && ((int)uVar14 < 0x9f)) {
            iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c);
          }
          else {
            iVar4 = *(int *)(in_stack_0000008c + 0x14) << 1;
          }
          if (iVar4 + iVar5 < param_6) {
            uVar13 = 0xfffffffe;
            uVar12 = 0;
            param_6 = iVar4 + iVar5;
          }
        }
        else {
          if (in_stack_00000084 == 1) {
            (**(code **)(param_1 + 0x9b8))();
          }
          else {
            (**(code **)(param_1 + 0x9c0))
                      (param_3 + -1,uVar14,in_stack_0000006c,0x10,0xfffffffffffffffe,2,
                       in_stack_00000084);
          }
          iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar10 = (ulonglong)in_stack_0000009c - 1;
          uVar9 = (ulonglong)in_stack_000000a4 + 1;
          uVar7 = (ulonglong)((int)uVar10 >> 0x1f);
          uVar14 = (ulonglong)((int)uVar9 >> 0x1f);
          uVar7 = (uVar10 ^ uVar7) - uVar7;
          uVar14 = (uVar9 ^ uVar14) - uVar14;
          if (((int)uVar7 < 0x9f) && ((int)uVar14 < 0x9f)) {
            iVar16 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                             in_stack_0000008c) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                             in_stack_0000008c);
          }
          else {
            iVar16 = *(int *)(in_stack_0000008c + 0x14) << 1;
          }
          if (iVar16 + iVar4 < param_6) {
            uVar13 = 0xfffffffe;
            uVar12 = 2;
            param_6 = iVar16 + iVar4;
          }
          if (in_stack_00000084 == 1) {
            (**(code **)(param_1 + 0x9b8))();
          }
          else {
            (**(code **)(param_1 + 0x9c0))
                      (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,0,2,
                       in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
          }
          iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar9 = ((ulonglong)in_stack_0000009c ^ (longlong)iVar5) - (longlong)iVar5;
          if (((int)uVar9 < 0x9f) && ((int)uVar14 < 0x9f)) {
            iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c);
          }
          else {
            iVar5 = *(int *)(in_stack_0000008c + 0x14) << 1;
          }
          if (iVar5 + iVar4 < param_6) {
            uVar13 = 0;
            uVar12 = 2;
            param_6 = iVar5 + iVar4;
          }
          if (in_stack_00000084 == 1) {
            (**(code **)(param_1 + 0x9b8))();
          }
          else {
            (**(code **)(param_1 + 0x9c0))
                      (param_3 + -1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,
                       0xfffffffffffffffe,0,in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
          }
          iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar14 = ((ulonglong)in_stack_000000a4 ^ (longlong)iVar2) - (longlong)iVar2;
          if (((int)uVar7 < 0x9f) && ((int)uVar14 < 0x9f)) {
            iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c);
          }
          else {
            iVar4 = *(int *)(in_stack_0000008c + 0x14) << 1;
          }
          if (iVar4 + iVar5 < param_6) {
            uVar13 = 0xfffffffe;
            uVar12 = 0;
            param_6 = iVar4 + iVar5;
          }
        }
        goto LAB_82e9db20;
      }
      if (iVar4 != -1) {
        if (in_stack_00000084 == 1) {
          (**(code **)(param_1 + 0x9b8))();
        }
        else {
          (**(code **)(param_1 + 0x9c0))
                    (param_3,uVar14,in_stack_0000006c,0x10,2,2,in_stack_00000084,
                     *(undefined4 *)(param_1 + 0x618));
        }
        iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar10 = (ulonglong)in_stack_0000009c + 1;
        uVar9 = (ulonglong)in_stack_000000a4 + 1;
        uVar7 = (ulonglong)((int)uVar10 >> 0x1f);
        uVar14 = (ulonglong)((int)uVar9 >> 0x1f);
        uVar7 = (uVar10 ^ uVar7) - uVar7;
        uVar14 = (uVar9 ^ uVar14) - uVar14;
        if (((int)uVar7 < 0x9f) && ((int)uVar14 < 0x9f)) {
          iVar16 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000008c) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000008c);
        }
        else {
          iVar16 = *(int *)(in_stack_0000008c + 0x14) << 1;
        }
        if (iVar16 + iVar4 < param_6) {
          uVar13 = 2;
          uVar12 = 2;
          param_6 = iVar16 + iVar4;
        }
        if (in_stack_00000084 == 1) {
          (**(code **)(param_1 + 0x9b8))();
        }
        else {
          (**(code **)(param_1 + 0x9c0))
                    (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,2,0,
                     in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
        }
        iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar9 = ((ulonglong)in_stack_000000a4 ^ (longlong)iVar2) - (longlong)iVar2;
        if (((int)uVar7 < 0x9f) && ((int)uVar9 < 0x9f)) {
          iVar16 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000008c) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000008c);
        }
        else {
          iVar16 = *(int *)(in_stack_0000008c + 0x14) << 1;
        }
        if (iVar16 + iVar4 < param_6) {
          uVar13 = 2;
          uVar12 = 0;
          param_6 = iVar16 + iVar4;
        }
        if (in_stack_00000084 == 1) {
          (**(code **)(param_1 + 0x9b8))();
        }
        else {
          (**(code **)(param_1 + 0x9c0))
                    (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,0,2,
                     in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
        }
        iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar7 = ((ulonglong)in_stack_0000009c ^ (longlong)iVar5) - (longlong)iVar5;
        if (((int)uVar7 < 0x9f) && ((int)uVar14 < 0x9f)) {
          iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                          in_stack_0000008c) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                          in_stack_0000008c);
        }
        else {
          iVar5 = *(int *)(in_stack_0000008c + 0x14) << 1;
        }
        if (iVar5 + iVar4 < param_6) {
          uVar13 = 0;
          uVar12 = 2;
          param_6 = iVar5 + iVar4;
        }
        goto LAB_82e9db20;
      }
      param_3 = param_3 - uVar14;
      if (in_stack_00000084 == 1) {
        (**(code **)(param_1 + 0x9b8))();
      }
      else {
        (**(code **)(param_1 + 0x9c0))
                  (param_3,uVar14,in_stack_0000006c,0x10,2,0xfffffffffffffffe,in_stack_00000084);
      }
      iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar10 = (ulonglong)in_stack_0000009c + 1;
      uVar9 = (ulonglong)in_stack_000000a4 - 1;
      uVar7 = (ulonglong)((int)uVar10 >> 0x1f);
      uVar14 = (ulonglong)((int)uVar9 >> 0x1f);
      uVar7 = (uVar10 ^ uVar7) - uVar7;
      uVar14 = (uVar9 ^ uVar14) - uVar14;
      if (((int)uVar7 < 0x9f) && ((int)uVar14 < 0x9f)) {
        iVar16 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000008c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000008c);
      }
      else {
        iVar16 = *(int *)(in_stack_0000008c + 0x14) << 1;
      }
      if (iVar16 + iVar4 < param_6) {
        uVar13 = 2;
        uVar12 = 0xfffffffe;
        param_6 = iVar16 + iVar4;
      }
      if (in_stack_00000084 == 1) {
        (**(code **)(param_1 + 0x9b8))();
      }
      else {
        (**(code **)(param_1 + 0x9c0))
                  (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,0,
                   0xfffffffffffffffe,in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
      }
      iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar9 = ((ulonglong)in_stack_0000009c ^ (longlong)iVar5) - (longlong)iVar5;
      if (((int)uVar9 < 0x9f) && ((int)uVar14 < 0x9f)) {
        iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000008c) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000008c);
      }
      else {
        iVar5 = *(int *)(in_stack_0000008c + 0x14) << 1;
      }
      if (iVar5 + iVar4 < param_6) {
        uVar13 = 0;
        uVar12 = 0xfffffffe;
        param_6 = iVar5 + iVar4;
      }
      if (in_stack_00000084 == 1) {
        (**(code **)(param_1 + 0x9b8))();
      }
      else {
        (**(code **)(param_1 + 0x9c0))
                  ((ulonglong)*(uint *)(param_1 + 0x564) + param_3,
                   (ulonglong)*(uint *)(param_1 + 0x564),in_stack_0000006c,0x10,2,0,
                   in_stack_00000084,*(undefined4 *)(param_1 + 0x618));
      }
      iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar14 = ((ulonglong)in_stack_000000a4 ^ (longlong)iVar2) - (longlong)iVar2;
      if (((int)uVar7 < 0x9f) && ((int)uVar14 < 0x9f)) {
        iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000008c) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000008c);
      }
      else {
        iVar4 = *(int *)(in_stack_0000008c + 0x14) << 1;
      }
      iVar4 = iVar4 + iVar5;
      if (param_6 <= iVar4) goto LAB_82e9db20;
      uVar12 = 0;
    }
  }
  uVar13 = 2;
  param_6 = iVar4;
LAB_82e9db20:
  *in_stack_000000ac = uVar13;
  *in_stack_000000b4 = uVar12;
  *in_stack_000000bc = param_6;
  return;
}

