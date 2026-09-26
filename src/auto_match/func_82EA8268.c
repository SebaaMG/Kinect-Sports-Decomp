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


void fn_82EA8268(int param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,longlong param_7,longlong param_8)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int in_stack_00000054;
  int in_stack_0000005c;
  undefined4 in_stack_0000006c;
  uint in_stack_00000084;
  uint in_stack_0000008c;
  int in_stack_00000094;
  undefined4 *in_stack_0000009c;
  undefined4 *in_stack_000000a4;
  undefined4 *in_stack_000000ac;
  int *in_stack_000000b4;
  
  uVar17 = (ulonglong)in_stack_00000084;
  uVar8 = -(ulonglong)(param_7 != 0) & 0xfffffffffffffffd;
  pcVar1 = (code *)*in_stack_0000009c;
  uVar5 = -(uint)(param_8 != 0) & 3;
  uVar15 = 0;
  uVar13 = 0;
  uVar10 = -(ulonglong)(in_stack_00000054 != 0) & 0xfffffffffffffffd;
  uVar12 = -(uint)(in_stack_0000005c != 0) & 3;
  iVar11 = (int)uVar10;
  if ((int)uVar8 < 0) {
    do {
      uVar2 = *(uint *)(param_1 + 0x564);
      if (iVar11 < 0) {
        uVar6 = (ulonglong)((int)(uVar8 + in_stack_0000008c) >> 0x1f);
        uVar6 = (uVar8 + in_stack_0000008c ^ uVar6) - uVar6;
        uVar18 = uVar10;
        do {
          (**(code **)(param_1 + 0xa5c))
                    ((param_3 - (ulonglong)uVar2) + -1,*(undefined4 *)(param_1 + 0x564),
                     in_stack_0000006c,0x10,uVar18 & 3,uVar8 & 3,*(undefined4 *)(param_1 + 0x618));
          iVar3 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
          uVar7 = (ulonglong)((int)(uVar18 + uVar17) >> 0x1f);
          uVar7 = (uVar18 + uVar17 ^ uVar7) - uVar7;
          if (((int)uVar7 < 0x9f) && ((int)uVar6 < 0x9f)) {
            iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar6 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094);
          }
          else {
            iVar4 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar4 + iVar3 < param_6) {
            uVar13 = uVar8;
            uVar15 = uVar18;
            param_6 = iVar4 + iVar3;
          }
          uVar18 = uVar18 + 1;
        } while ((longlong)uVar18 < 0);
      }
      uVar2 = *(uint *)(param_1 + 0x564);
      uVar6 = 0;
      uVar18 = (ulonglong)((int)(uVar8 + in_stack_0000008c) >> 0x1f);
      uVar18 = (uVar8 + in_stack_0000008c ^ uVar18) - uVar18;
      do {
        (**(code **)(param_1 + 0xa5c))
                  (param_3 - (ulonglong)uVar2,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,
                   0x10,uVar6 & 3,uVar8 & 3,*(undefined4 *)(param_1 + 0x618));
        iVar3 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar7 = (ulonglong)((int)(uVar6 + uVar17) >> 0x1f);
        uVar7 = (uVar6 + uVar17 ^ uVar7) - uVar7;
        if (((int)uVar7 < 0x9f) && ((int)uVar18 < 0x9f)) {
          iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar18 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar4 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar4 + iVar3 < param_6) {
          uVar13 = uVar8;
          uVar15 = uVar6;
          param_6 = iVar4 + iVar3;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 <= (int)uVar12);
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < 0);
  }
  iVar3 = (int)in_stack_0000008c >> 0x1f;
  if (iVar11 < 0) {
    uVar18 = ((ulonglong)in_stack_0000008c ^ (longlong)iVar3) - (longlong)iVar3;
    uVar8 = uVar10;
    do {
      (**(code **)(param_1 + 0xa5c))
                (param_3 + -1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar8 & 3,0,
                 *(undefined4 *)(param_1 + 0x618));
      iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
      uVar6 = (ulonglong)((int)(uVar8 + uVar17) >> 0x1f);
      uVar6 = (uVar8 + uVar17 ^ uVar6) - uVar6;
      if (((int)uVar6 < 0x9f) && ((int)uVar18 < 0x9f)) {
        iVar9 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar18 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar6 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar9 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (iVar9 + iVar4 < param_6) {
        uVar13 = 0;
        uVar15 = uVar8;
        param_6 = iVar9 + iVar4;
      }
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < 0);
  }
  uVar8 = 1;
  if (uVar12 != 0) {
    uVar18 = ((ulonglong)in_stack_0000008c ^ (longlong)iVar3) - (longlong)iVar3;
    do {
      (**(code **)(param_1 + 0xa5c))
                (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar8 & 3,0,
                 *(undefined4 *)(param_1 + 0x618));
      iVar3 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
      uVar6 = (ulonglong)((int)(uVar8 + uVar17) >> 0x1f);
      uVar6 = (uVar8 + uVar17 ^ uVar6) - uVar6;
      if (((int)uVar6 < 0x9f) && ((int)uVar18 < 0x9f)) {
        iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar18 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar6 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar4 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (iVar4 + iVar3 < param_6) {
        uVar13 = 0;
        uVar15 = uVar8;
        param_6 = iVar4 + iVar3;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 <= (int)uVar12);
  }
  uVar14 = (undefined4)uVar13;
  uVar16 = (undefined4)uVar15;
  uVar8 = 1;
  if (uVar5 != 0) {
    do {
      if (iVar11 < 0) {
        uVar6 = (ulonglong)((int)(uVar8 + in_stack_0000008c) >> 0x1f);
        uVar6 = (uVar8 + in_stack_0000008c ^ uVar6) - uVar6;
        uVar18 = uVar10;
        do {
          (**(code **)(param_1 + 0xa5c))
                    (param_3 + -1,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar18 & 3
                     ,uVar8 & 3,*(undefined4 *)(param_1 + 0x618));
          iVar3 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
          uVar7 = (ulonglong)((int)(uVar18 + uVar17) >> 0x1f);
          uVar7 = (uVar18 + uVar17 ^ uVar7) - uVar7;
          if (((int)uVar7 < 0x9f) && ((int)uVar6 < 0x9f)) {
            iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar6 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094);
          }
          else {
            iVar4 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar4 + iVar3 < param_6) {
            uVar13 = uVar8;
            uVar15 = uVar18;
            param_6 = iVar4 + iVar3;
          }
          uVar18 = uVar18 + 1;
        } while ((longlong)uVar18 < 0);
      }
      uVar6 = 0;
      uVar18 = (ulonglong)((int)(uVar8 + in_stack_0000008c) >> 0x1f);
      uVar18 = (uVar8 + in_stack_0000008c ^ uVar18) - uVar18;
      do {
        (**(code **)(param_1 + 0xa5c))
                  (param_3,*(undefined4 *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar6 & 3,
                   uVar8 & 3,*(undefined4 *)(param_1 + 0x618));
        iVar3 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar7 = (ulonglong)((int)(uVar6 + uVar17) >> 0x1f);
        uVar7 = (uVar6 + uVar17 ^ uVar7) - uVar7;
        if (((int)uVar7 < 0x9f) && ((int)uVar18 < 0x9f)) {
          iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar18 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar4 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar4 + iVar3 < param_6) {
          uVar13 = uVar8;
          uVar15 = uVar6;
          param_6 = iVar4 + iVar3;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 <= (int)uVar12);
      uVar14 = (undefined4)uVar13;
      uVar16 = (undefined4)uVar15;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 <= (int)uVar5);
  }
  *in_stack_000000a4 = uVar16;
  *in_stack_000000ac = uVar14;
  *in_stack_000000b4 = param_6;
  return;
}

