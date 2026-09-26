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
extern int fn_82F68CC0();


void fn_82EDB820(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  uint param_5,ulonglong param_6,uint param_7,ulonglong param_8)

{
  int iVar2;
  longlong lVar1;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar7;
  longlong lVar6;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar14;
  longlong lVar13;
  uint uVar15;
  uint uVar17;
  longlong lVar16;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  uint in_stack_0000006c;
  uint in_stack_00000074;
  uint in_stack_0000007c;
  int in_stack_00000084;
  int in_stack_0000008c;
  int in_stack_00000094;
  
  if ((in_stack_0000008c != 0) || ((in_stack_0000007c != 0 && (in_stack_0000007c != 3)))) {
    param_5 = (param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f);
  }
  if ((in_stack_00000094 != 0) || ((in_stack_0000007c != 0 && (in_stack_0000007c != 3)))) {
    param_7 = (param_7 ^ (int)param_7 >> 0x1f) - ((int)param_7 >> 0x1f);
  }
  iVar2 = 0;
  iVar8 = 0;
  uVar15 = (uint)param_4;
  uVar11 = (uint)param_6;
  iVar5 = (int)param_8;
  if (in_stack_0000007c < 0x5031345a) {
    if (in_stack_0000007c == 0x50313459) goto LAB_82edbc08;
    if (0x32315659 < in_stack_0000007c) {
      if (in_stack_0000007c == 0x32595559) goto LAB_82edbc08;
      if (in_stack_0000007c != 0x39555659) {
        uVar18 = 0x41595556;
        goto LAB_82edbab0;
      }
      iVar8 = 0x11;
      lVar21 = (longlong)((int)uVar15 >> 2) + (ulonglong)((int)uVar15 < 0 && (param_4 & 3) != 0);
      lVar20 = (longlong)((int)uVar11 >> 2) + (ulonglong)((int)uVar11 < 0 && (param_6 & 3) != 0);
      lVar10 = (longlong)((int)in_stack_0000006c >> 2) +
               (ulonglong)((int)in_stack_0000006c < 0 && (in_stack_0000006c & 3) != 0);
      uVar9 = (longlong)((int)in_stack_00000074 >> 2) +
              (ulonglong)((int)in_stack_00000074 < 0 && (in_stack_00000074 & 3) != 0);
      lVar3 = (longlong)(iVar5 >> 2) + (ulonglong)(iVar5 < 0 && (param_8 & 3) != 0);
      lVar1 = (longlong)((int)in_stack_0000005c >> 2) +
              (ulonglong)((int)in_stack_0000005c < 0 && (in_stack_0000005c & 3) != 0);
      uVar18 = ((int)in_stack_00000054 >> 2) +
               (uint)((int)in_stack_00000054 < 0 && (in_stack_00000054 & 3) != 0);
      bVar22 = (int)in_stack_00000064 < 0 && (in_stack_00000064 & 3) != 0;
      iVar2 = (int)in_stack_00000064 >> 2;
LAB_82edb92c:
      uVar17 = iVar2 + (uint)bVar22;
LAB_82edb930:
      uVar12 = (ulonglong)in_stack_00000074;
      uVar14 = iVar8 * (int)((longlong)(int)uVar15 * (longlong)(int)param_5);
      uVar7 = iVar8 * (int)((longlong)(int)uVar11 * (longlong)(int)param_7);
      lVar4 = (longlong)(int)uVar18 * (longlong)(int)lVar21;
      lVar6 = (longlong)(int)uVar17 * (longlong)(int)lVar20;
      lVar16 = (longlong)(int)uVar15 * (longlong)(int)in_stack_00000054 + param_3 + param_8;
      lVar13 = (longlong)(int)uVar11 * (longlong)(int)in_stack_00000064 + param_2 +
               (ulonglong)in_stack_0000005c;
      lVar19 = lVar4 + (longlong)(int)uVar15 * (longlong)(int)param_5 + lVar3 + param_3;
      param_3 = (longlong)((int)uVar14 >> 4) + (ulonglong)((int)uVar14 < 0 && (uVar14 & 0xf) != 0) +
                lVar4 + lVar3 + param_3;
      lVar4 = lVar6 + (longlong)(int)uVar11 * (longlong)(int)param_7 + lVar1 + param_2;
      param_2 = (longlong)((int)uVar7 >> 4) + (ulonglong)((int)uVar7 < 0 && (uVar7 & 0xf) != 0) +
                lVar6 + lVar1 + param_2;
      lVar1 = param_2;
      lVar3 = param_3;
      if (in_stack_0000007c == 0x32315659) {
        lVar1 = lVar4;
        lVar3 = lVar19;
        lVar19 = param_3;
        lVar4 = param_2;
      }
      if (0 < (int)in_stack_00000074) {
        do {
          fn_82F68CC0(lVar13,lVar16,in_stack_0000006c);
          uVar12 = uVar12 - 1;
          lVar16 = lVar16 + param_4;
          lVar13 = lVar13 + param_6;
        } while (uVar12 != 0);
      }
      if (0 < (int)uVar9) {
        do {
          fn_82F68CC0(lVar4,lVar19,lVar10);
          lVar19 = lVar21 + lVar19;
          lVar4 = lVar20 + lVar4;
          fn_82F68CC0(lVar1,lVar3,lVar10);
          uVar9 = uVar9 - 1;
          lVar3 = lVar21 + lVar3;
          lVar1 = lVar20 + lVar1;
        } while (uVar9 != 0);
      }
      return;
    }
    if (in_stack_0000007c == 0x32315659) {
LAB_82edb8d8:
      iVar8 = 0x14;
      lVar21 = (longlong)((int)uVar15 >> 1) + (ulonglong)((int)uVar15 < 0 && (param_4 & 1) != 0);
      lVar20 = (longlong)((int)uVar11 >> 1) + (ulonglong)((int)uVar11 < 0 && (param_6 & 1) != 0);
      lVar10 = (longlong)((int)in_stack_0000006c >> 1) +
               (ulonglong)((int)in_stack_0000006c < 0 && (in_stack_0000006c & 1) != 0);
      uVar9 = (longlong)((int)in_stack_00000074 >> 1) +
              (ulonglong)((int)in_stack_00000074 < 0 && (in_stack_00000074 & 1) != 0);
      lVar3 = (longlong)(iVar5 >> 1) + (ulonglong)(iVar5 < 0 && (param_8 & 1) != 0);
      lVar1 = (longlong)((int)in_stack_0000005c >> 1) +
              (ulonglong)((int)in_stack_0000005c < 0 && (in_stack_0000005c & 1) != 0);
      uVar18 = ((int)in_stack_00000054 >> 1) +
               (uint)((int)in_stack_00000054 < 0 && (in_stack_00000054 & 1) != 0);
      bVar22 = (int)in_stack_00000064 < 0 && (in_stack_00000064 & 1) != 0;
      iVar2 = (int)in_stack_00000064 >> 1;
      goto LAB_82edb92c;
    }
    if ((in_stack_0000007c != 0) && (in_stack_0000007c != 3)) {
      if (in_stack_0000007c != 0x30323449) goto LAB_82edbab8;
      goto LAB_82edb8d8;
    }
    if (in_stack_0000008c == 0) {
      iVar2 = -1;
      if ((int)param_5 < 1) goto LAB_82edba5c;
    }
    else if ((int)uVar15 < 1) {
      iVar2 = -1;
    }
    else {
LAB_82edba5c:
      iVar2 = 1;
    }
    if (in_stack_00000094 != 0) {
      if (0 < (int)uVar11) goto LAB_82edba70;
      goto LAB_82edba80;
    }
    if (0 < (int)param_7) goto LAB_82edba80;
  }
  else {
    if (in_stack_0000007c < 0x5559565a) {
      if (in_stack_0000007c != 0x55595659) {
        if (in_stack_0000007c == 0x50343232) {
          iVar8 = 0x18;
          lVar21 = (longlong)((int)uVar15 >> 1) + (ulonglong)((int)uVar15 < 0 && (param_4 & 1) != 0)
          ;
          uVar9 = (ulonglong)in_stack_00000074;
          lVar20 = (longlong)((int)uVar11 >> 1) + (ulonglong)((int)uVar11 < 0 && (param_6 & 1) != 0)
          ;
          lVar10 = (longlong)((int)in_stack_0000006c >> 1) +
                   (ulonglong)((int)in_stack_0000006c < 0 && (in_stack_0000006c & 1) != 0);
          lVar3 = (longlong)(iVar5 >> 1) + (ulonglong)(iVar5 < 0 && (param_8 & 1) != 0);
          lVar1 = (longlong)((int)in_stack_0000005c >> 1) +
                  (ulonglong)((int)in_stack_0000005c < 0 && (in_stack_0000005c & 1) != 0);
          uVar18 = in_stack_00000054;
          uVar17 = in_stack_00000064;
          goto LAB_82edb930;
        }
        if (in_stack_0000007c != 0x54313459) {
          uVar18 = 0x54323459;
          goto LAB_82edbab0;
        }
      }
    }
    else if (in_stack_0000007c != 0x56323136) {
      if (in_stack_0000007c == 0x56555949) goto LAB_82edb8d8;
      uVar18 = 0x59565955;
LAB_82edbab0:
      if (in_stack_0000007c != uVar18) goto LAB_82edbab8;
    }
LAB_82edbc08:
    if ((in_stack_0000008c == 0) || (iVar2 = -1, 0 < (int)uVar15)) {
      iVar2 = 1;
    }
    if (in_stack_00000094 != 0) {
      if (0 < (int)uVar11) {
        iVar8 = 1;
        goto LAB_82edbab8;
      }
LAB_82edba80:
      iVar8 = -1;
      goto LAB_82edbab8;
    }
  }
LAB_82edba70:
  iVar8 = 1;
LAB_82edbab8:
  lVar1 = (longlong)
          ((int)(((uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f)) * in_stack_00000084 + 0x1f
                & 0xffffffe0) >> 3) * (longlong)iVar2;
  uVar15 = (uint)lVar1;
  if (in_stack_0000008c == 0) {
    if (iVar2 == 1) {
      lVar3 = (longlong)(int)uVar15 * (longlong)(int)in_stack_00000054;
    }
    else {
      lVar3 = (longlong)
              (int)(((param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f)) +
                   (-1 - in_stack_00000054)) *
              (longlong)(int)((uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f));
    }
  }
  else {
    lVar3 = (longlong)(int)uVar15 * (longlong)(int)in_stack_00000054;
  }
  lVar10 = (longlong)
           ((int)(((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f)) * in_stack_00000084 +
                  0x1f & 0xffffffe0) >> 3) * (longlong)iVar8;
  uVar11 = (uint)lVar10;
  if (in_stack_00000094 == 0) {
    if (iVar8 == 1) {
      lVar20 = (longlong)(int)uVar11 * (longlong)(int)in_stack_00000064;
    }
    else {
      lVar20 = (longlong)
               (int)(((param_7 ^ (int)param_7 >> 0x1f) - ((int)param_7 >> 0x1f)) +
                    (-1 - in_stack_00000064)) *
               (longlong)(int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f));
    }
  }
  else {
    lVar20 = (longlong)(int)uVar11 * (longlong)(int)in_stack_00000064;
  }
  param_3 = (iVar5 * in_stack_00000084 >> 3) + lVar3 + param_3;
  uVar9 = (ulonglong)in_stack_00000074;
  param_2 = ((int)(in_stack_0000005c * in_stack_00000084) >> 3) + lVar20 + param_2;
  if ((int)in_stack_00000074 < 1) {
    return;
  }
  do {
    fn_82F68CC0(param_2,param_3,
                  (int)(in_stack_0000006c * in_stack_00000084 + 0x1f & 0xffffffe0) >> 3);
    uVar9 = uVar9 - 1;
    param_3 = lVar1 + param_3;
    param_2 = lVar10 + param_2;
  } while (uVar9 != 0);
  return;
}

