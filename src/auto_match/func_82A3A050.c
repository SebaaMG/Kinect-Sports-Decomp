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
extern unsigned int *auStack_a0;
extern int fn_82A39ED8();
extern int fn_82A39F40();
extern int fn_82A3AAB8();
extern int fn_82A3AD78();
extern int fn_82A3B0B8();
extern int fn_82A3B218();
extern int fn_82A3B5D8();
extern int fn_82A3B768();
extern int fn_82A3CED8();
extern int fn_82A3CF30();
extern int fn_82F63CA0();
extern unsigned int lbl_8208949C;


void fn_82A3A050(uint *param_1,longlong param_2)

{
  bool bVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  longlong lVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar17;
  uint uVar18;
  longlong lVar14;
  longlong lVar15;
  uint uVar19;
  uint *puVar20;
  ulonglong uVar16;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong uVar27;
  int iVar29;
  ulonglong uVar28;
  uint auStack_a0 [40];
  
  auStack_a0[0] = param_1[0x114];
  uVar27 = (ulonglong)auStack_a0[0];
  uVar21 = uVar27 + param_2;
  if (*(char *)(param_1 + 0x25d) == '\0') {
    lVar13 = 0x32;
    do {
      fn_82A3B0B8(param_1,uVar27 - lVar13,(uVar27 - param_1[1]) + 4);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  else {
    *(undefined1 *)(param_1 + 0x25d) = 0;
    uVar6 = 1;
    param_1[0x948] = 10000;
    if (param_1[0x21b] == 0) {
      uVar7 = 0;
    }
    else {
      fn_82A3AAB8(param_1,1,1);
      fn_82A3AAB8(param_1,0x10,*(undefined2 *)(param_1 + 0x21b));
      uVar7 = *(undefined2 *)((int)param_1 + 0x86e);
      uVar6 = 0x10;
    }
    fn_82A3AAB8(param_1,uVar6,uVar7);
  }
LAB_82a3a114:
  do {
    if ((uVar21 & 0xffffffff) <= (uVar27 & 0xffffffff)) {
      uVar18 = param_1[1];
      param_1[0x25f] = (uint)(uVar27 - uVar18);
      if ((int)param_2 < 0x8000) {
        if (*(char *)((int)param_1 + 0x972) != '\0') goto code_r0x82a3a948;
      }
      else {
        uVar16 = 1;
        do {
          fn_82A3B218(param_1,uVar27 - uVar16,(uVar27 - uVar18) + 0x36);
          uVar16 = uVar16 + 1;
        } while ((uVar16 & 0xffffffff) < 0x33);
        if (((ulonglong)param_1[0x25e] + (ulonglong)param_1[1] & 0xffffffff) <=
            (((ulonglong)*param_1 - (ulonglong)param_1[0x10c8]) + uVar27 & 0xffffffff)) {
          if (*(char *)((int)param_1 + 0x972) != '\0') {
            cVar5 = fn_82A39F40(param_1,auStack_a0);
            if (cVar5 == '\0') {
              uVar27 = (ulonglong)auStack_a0[0];
              goto LAB_82a3a9d0;
            }
            goto LAB_82a3a110;
          }
LAB_82a3a9d0:
          fn_82F63CA0((ulonglong)param_1[0x10c8],
                       (ulonglong)param_1[0x10c8] + (ulonglong)param_1[0x25e],param_1[1]);
          fn_82F63CA0((ulonglong)param_1[0x10c9],
                       ((ulonglong)param_1[0x25e] & 0x3fffffff) * 4 + (ulonglong)param_1[0x10c9],
                       param_1[1] << 2);
          fn_82F63CA0((ulonglong)param_1[0x10ca],
                       ((ulonglong)param_1[0x25e] & 0x3fffffff) * 4 + (ulonglong)param_1[0x10ca],
                       param_1[1] << 2);
          uVar18 = param_1[0x25e];
          *param_1 = *param_1 - uVar18;
          param_1[3] = param_1[3] + uVar18 * -4;
          param_1[4] = param_1[4] + uVar18 * -4;
          param_1[0x25f] = (int)uVar27 - param_1[1];
        }
      }
      goto LAB_82a3aa54;
    }
    uVar16 = uVar27 + 0x8000 & 0xffff8000;
    if ((uVar21 & 0xffffffff) < uVar16) {
      uVar16 = uVar21;
    }
    uVar3 = fn_82A3AD78(param_1,uVar27);
    iVar29 = (int)uVar27;
    if ((1 < (int)uVar3) &&
       (((uVar3 + uVar27 & 0xffffffff) <= (uVar16 & 0xffffffff) ||
        (uVar3 = uVar16 - uVar27, 1 < (int)uVar3)))) {
      if ((int)uVar3 < 0x32) {
        uVar23 = uVar3 + uVar27;
        uVar18 = 2;
        *(uint *)(param_1[0x94b] + 0x2c) =
             (uint)*(byte *)((int)param_1 + *(byte *)(*param_1 + iVar29) + 0x2530);
        *(int *)(param_1[0x94b] + 0x1c) = iVar29;
        if (1 < (uVar3 & 0xffffffff)) {
          lVar13 = uVar3 - 1;
          iVar26 = 0x30;
          puVar20 = param_1 + 0x13;
          do {
            uVar17 = puVar20[1];
            if (uVar17 < 0x400) {
              uVar17 = (uint)*(byte *)((int)param_1 + uVar17 + 0x454);
            }
            else if (uVar17 < 0x80000) {
              uVar17 = *(byte *)((int)param_1 + (uVar17 >> 9) + 0x454) + 0x12;
            }
            else {
              uVar17 = (uVar17 >> 0x11 & 0xff) + 0x22;
            }
            iVar10 = (uVar17 & 0xff) * 8;
            if (uVar18 < 9) {
              *(uint *)(iVar26 + param_1[0x94b] + 0x14) =
                   (uint)*(byte *)((int)param_1 + iVar10 + uVar18 + 0x262e) +
                   (uint)(byte)(&lbl_8208949C)[uVar17 & 0xff];
            }
            else {
              *(uint *)(iVar26 + param_1[0x94b] + 0x14) =
                   (uint)*(byte *)((int)param_1 + iVar10 + 0x2637) +
                   (uint)*(byte *)((int)param_1 + uVar18 + 0x27e4) +
                   (uint)(byte)(&lbl_8208949C)[uVar17 & 0xff];
            }
            uVar18 = uVar18 + 1;
            *(int *)(iVar26 + param_1[0x94b] + 4) = iVar29;
            puVar20 = puVar20 + 1;
            *(uint *)(iVar26 + param_1[0x94b]) = *puVar20;
            iVar26 = iVar26 + 0x18;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        *(undefined4 *)(param_1[0x94b] + 0x14) = 0;
        *(uint *)(param_1[0x94b] + 8) = param_1[0xf];
        *(uint *)(param_1[0x94b] + 0xc) = param_1[0x10];
        *(uint *)(param_1[0x94b] + 0x10) = param_1[0x11];
        lVar22 = (ulonglong)param_1[0x94b] + uVar27 * -0x18;
        uVar3 = uVar16 - uVar27;
        lVar13 = uVar27 * 0x18 + lVar22 + 4;
        uVar12 = uVar27;
        do {
          lVar8 = lVar13;
          uVar28 = uVar12 + 1;
          lVar13 = lVar8 + 0x18;
          puVar20 = (uint *)lVar13;
          uVar25 = uVar3 - 1;
          iVar29 = (int)lVar22;
          if ((ulonglong)*puVar20 != (uVar12 & 0xffffffff)) {
            uVar18 = puVar20[-1];
            iVar26 = *puVar20 * 0x18 + iVar29;
            if (uVar18 < 3) {
              if (uVar18 == 0) {
                param_1[0xf] = *(uint *)(iVar26 + 8);
                uVar18 = *(uint *)(iVar26 + 0xc);
              }
              else {
                if (uVar18 != 1) {
                  param_1[0xf] = *(uint *)(iVar26 + 0x10);
                  param_1[0x10] = *(uint *)(iVar26 + 0xc);
                  uVar18 = *(uint *)(iVar26 + 8);
                  goto LAB_82a3a374;
                }
                param_1[0xf] = *(uint *)(iVar26 + 0xc);
                uVar18 = *(uint *)(iVar26 + 8);
              }
              param_1[0x10] = uVar18;
              uVar18 = *(uint *)(iVar26 + 0x10);
            }
            else {
              param_1[0xf] = uVar18 - 2;
              param_1[0x10] = *(uint *)(iVar26 + 8);
              uVar18 = *(uint *)(iVar26 + 0xc);
            }
LAB_82a3a374:
            param_1[0x11] = uVar18;
          }
          puVar20[1] = param_1[0xf];
          puVar20[2] = param_1[0x10];
          puVar20[3] = param_1[0x11];
          uVar24 = uVar28;
          if ((uVar23 & 0xffffffff) == (uVar28 & 0xffffffff)) goto LAB_82a3a618;
          uVar4 = fn_82A3AD78(param_1,uVar28);
          if ((uVar16 & 0xffffffff) < (uVar4 + uVar28 & 0xffffffff)) {
            uVar4 = -(ulonglong)(uVar3 - 3 < 0xffffffff7ffffffe) & uVar25;
          }
          iVar26 = (int)uVar4;
          uVar18 = (uint)uVar28;
          if ((0x32 < iVar26) ||
             (uVar3 = uVar4 + uVar28, (uVar27 + 0xefd & 0xffffffff) <= (uVar3 & 0xffffffff)))
          goto LAB_82a3a550;
          if (((2 < iVar26) || ((iVar26 == 2 && (param_1[0x14] < 0x800)))) &&
             ((uVar23 & 0xffffffff) < (uVar3 & 0xffffffff))) {
            uVar12 = (uVar4 - uVar27) + uVar28;
            if (0xefb < (uVar12 & 0xffffffff)) {
              uVar12 = 0xefc;
            }
            lVar14 = (uVar23 - uVar27) + 1;
            uVar23 = uVar3;
            if ((int)lVar14 <= (int)uVar12) {
              lVar15 = lVar14 * 0x18;
              lVar14 = (uVar12 - lVar14) + 1;
              do {
                iVar29 = (int)lVar15;
                lVar15 = lVar15 + 0x18;
                *(undefined4 *)(param_1[0x94b] + iVar29 + 0x14) = 0xffffffff;
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
            }
          }
          uVar17 = puVar20[4];
          uVar11 = *(byte *)((int)param_1 + *(byte *)(*param_1 + uVar18) + 0x2530) + uVar17;
          if (uVar11 < puVar20[10]) {
            puVar20[10] = uVar11;
            puVar20[6] = uVar18;
          }
          uVar11 = 2;
          uVar3 = uVar25;
          uVar12 = uVar28;
          if (1 < (uVar4 & 0xffffffff)) {
            lVar14 = uVar4 - 1;
            puVar20 = param_1 + 0x14;
            lVar8 = lVar8 + 0x58;
            do {
              uVar19 = *puVar20;
              if (uVar19 < 0x400) {
                uVar19 = (uint)*(byte *)((int)param_1 + uVar19 + 0x454);
              }
              else if (uVar19 < 0x80000) {
                uVar19 = *(byte *)((int)param_1 + (uVar19 >> 9) + 0x454) + 0x12;
              }
              else {
                uVar19 = (uVar19 >> 0x11 & 0xff) + 0x22;
              }
              iVar29 = (uVar19 & 0xff) * 8;
              if (uVar11 < 9) {
                bVar2 = (&lbl_8208949C)[uVar19 & 0xff];
                uVar19 = (uint)*(byte *)((int)param_1 + iVar29 + uVar11 + 0x262e);
              }
              else {
                bVar2 = (&lbl_8208949C)[uVar19 & 0xff];
                uVar19 = (uint)*(byte *)((int)param_1 + iVar29 + 0x2637) +
                         (uint)*(byte *)((int)param_1 + uVar11 + 0x27e4);
              }
              puVar9 = (uint *)lVar8;
              uVar19 = uVar19 + bVar2 + uVar17;
              if (uVar19 < *puVar9) {
                *puVar9 = uVar19;
                puVar9[-4] = uVar18;
                puVar9[-5] = *puVar20;
              }
              uVar11 = uVar11 + 1;
              puVar20 = puVar20 + 1;
              lVar8 = lVar8 + 0x18;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
        } while( true );
      }
      uVar18 = *(uint *)((int)((uVar3 + 0x12 & 0xffffffff) << 2) + (int)param_1);
      if ((uVar18 == 3) && (0x10 < (int)uVar3)) {
        fn_82A3B0B8(param_1,uVar27 + 1,(uVar27 - param_1[1]) + 5);
      }
      else {
        uVar16 = 1;
        if (1 < (uVar3 & 0xffffffff)) {
          do {
            fn_82A3B0B8(param_1,uVar16 + uVar27,(uVar16 - param_1[1]) + uVar27 + 4);
            uVar16 = uVar16 + 1;
          } while ((uVar16 & 0xffffffff) < (uVar3 & 0xffffffff));
        }
      }
      uVar27 = uVar3 + uVar27;
      uVar17 = param_1[7] >> 3;
      auStack_a0[0] = (uint)uVar27;
      *(byte *)(uVar17 + param_1[0xb]) =
           (byte)(1 << (param_1[7] & 7)) | *(byte *)(uVar17 + param_1[0xb]);
      *(char *)(param_1[10] + param_1[7]) = (char)uVar3 + -2;
      param_1[7] = param_1[7] + 1;
      *(uint *)(param_1[8] * 4 + param_1[9]) = uVar18;
      param_1[8] = param_1[8] + 1;
      if (uVar18 < 3) {
        if (uVar18 != 0) {
          uVar17 = param_1[0xf];
          param_1[0xf] = param_1[uVar18 + 0xf];
          param_1[uVar18 + 0xf] = uVar17;
        }
      }
      else {
        uVar17 = param_1[0xf];
        param_1[0xf] = uVar18 - 2;
        param_1[0x11] = param_1[0x10];
        param_1[0x10] = uVar17;
      }
      if (param_1[7] < 0xfff8) {
        bVar1 = param_1[8] < 0x7ff8;
        goto LAB_82a3a914;
      }
      break;
    }
    uVar27 = uVar27 + 1;
    auStack_a0[0] = (uint)uVar27;
    *(undefined1 *)(param_1[10] + param_1[7]) = *(undefined1 *)(*param_1 + iVar29);
    uVar18 = param_1[7];
    param_1[7] = uVar18 + 1;
    bVar1 = uVar18 + 1 < 0xfff8;
LAB_82a3a914:;} while (bVar1);
LAB_82a3a918:
  fn_82A39ED8(param_1,uVar27);
  goto LAB_82a3a114;
code_r0x82a3a948:
  cVar5 = fn_82A39F40(param_1,auStack_a0);
  uVar27 = (ulonglong)auStack_a0[0];
  if (cVar5 == '\0') {
LAB_82a3aa54:
    param_1[0x114] = (uint)uVar27;
    return;
  }
  goto LAB_82a3a114;
LAB_82a3a550:
  uVar24 = uVar4 + uVar28;
  uVar17 = *(uint *)((int)((uVar4 + 0x12 & 0xffffffff) << 2) + (int)param_1);
  puVar20 = (uint *)((int)uVar24 * 0x18 + iVar29);
  *puVar20 = uVar17;
  puVar20[1] = uVar18;
  if ((uVar17 == 3) && (0x10 < iVar26)) {
    fn_82A3B0B8(param_1,uVar12 + 2,(uVar28 - param_1[1]) + 5);
  }
  else {
    uVar16 = 1;
    if (1 < (uVar4 & 0xffffffff)) {
      do {
        fn_82A3B0B8(param_1,uVar16 + uVar28,(uVar16 - param_1[1]) + uVar28 + 4);
        uVar16 = uVar16 + 1;
      } while ((uVar16 & 0xffffffff) < (uVar4 & 0xffffffff));
    }
  }
  if (uVar17 < 3) {
    if (uVar17 != 0) {
      uVar18 = param_1[0xf];
      param_1[0xf] = param_1[uVar17 + 0xf];
      param_1[uVar17 + 0xf] = uVar18;
    }
  }
  else {
    uVar18 = param_1[0xf];
    param_1[0xf] = uVar17 - 2;
    param_1[0x11] = param_1[0x10];
    param_1[0x10] = uVar18;
  }
LAB_82a3a618:
  lVar13 = 0;
  uVar18 = *(uint *)((int)uVar24 * 0x18 + iVar29 + 4);
  do {
    uVar16 = (ulonglong)uVar18;
    iVar26 = uVar18 * 0x18;
    lVar13 = lVar13 + 1;
    uVar18 = *(uint *)(iVar26 + iVar29 + 4);
    *(int *)(iVar26 + iVar29 + 4) = (int)uVar24;
    uVar24 = uVar16;
  } while (uVar16 != (uVar27 & 0xffffffff));
  while ((0xfff7 < ((ulonglong)param_1[7] + lVar13 & 0xffffffff) ||
         (0x7ff7 < ((ulonglong)param_1[8] + lVar13 & 0xffffffff)))) {
    fn_82A39ED8(param_1,uVar16);
  }
  do {
    iVar26 = (int)uVar16 * 0x18 + iVar29;
    uVar27 = uVar16 + 1;
    if ((uVar27 & 0xffffffff) < (ulonglong)*(uint *)(iVar26 + 4)) {
      uVar18 = param_1[7] >> 3;
      *(byte *)(uVar18 + param_1[0xb]) =
           (byte)(1 << (param_1[7] & 7)) | *(byte *)(uVar18 + param_1[0xb]);
      *(char *)(param_1[7] + param_1[10]) = ((char)*(undefined4 *)(iVar26 + 4) - (char)uVar16) + -2;
      param_1[7] = param_1[7] + 1;
      *(undefined4 *)(param_1[8] * 4 + param_1[9]) =
           *(undefined4 *)(*(int *)(iVar26 + 4) * 0x18 + iVar29);
      param_1[8] = param_1[8] + 1;
      uVar27 = (ulonglong)*(uint *)(iVar26 + 4);
    }
    else {
      *(undefined1 *)(param_1[7] + param_1[10]) = *(undefined1 *)(*param_1 + (int)uVar16);
      param_1[7] = param_1[7] + 1;
    }
    lVar13 = lVar13 + -1;
    uVar16 = uVar27;
  } while (lVar13 != 0);
  uVar18 = param_1[7];
  auStack_a0[0] = (uint)uVar27;
  if (param_1[0x948] <= uVar18) {
    if (uVar18 != 0) {
      if (*(char *)((int)param_1 + 0x973) == '\0') {
        fn_82A3CF30(param_1,param_1[0x949],param_1[0x94a]);
      }
      else {
        fn_82A3CED8(param_1,0,0);
        *(undefined1 *)((int)param_1 + 0x973) = 0;
      }
      fn_82A3B5D8(param_1,0);
      fn_82A3B768(param_1);
      uVar18 = param_1[7];
      param_1[0x949] = uVar18;
      param_1[0x94a] = param_1[8];
    }
    param_1[0x948] = param_1[0x948] + 0x1000;
  }
  if ((*(char *)((int)param_1 + 0x972) == '\0') || ((uVar18 < 0xfe00 && (param_1[8] < 0x7e00))))
  goto LAB_82a3a114;
  cVar5 = fn_82A39F40(param_1,auStack_a0);
  if (cVar5 != '\0') {
LAB_82a3a110:
    uVar27 = (ulonglong)auStack_a0[0];
    goto LAB_82a3a114;
  }
  uVar27 = (ulonglong)auStack_a0[0];
  goto LAB_82a3a918;
}

