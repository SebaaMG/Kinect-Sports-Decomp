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
extern int fn_82AA66A8();
extern int fn_82ABE250();
extern int fn_82ABE9F0();
extern int fn_82AC6808();
extern int fn_82AD6090();
extern int fn_82AF5350();
extern int fn_82AF53F0();


undefined8
fn_82AFF398(undefined8 param_1,uint *param_2,int *param_3,ulonglong param_4,longlong param_5,
             uint *param_6,uint *param_7)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint *puVar13;
  ulonglong uVar12;
  longlong lVar14;
  uint uVar16;
  ulonglong uVar15;
  undefined4 *puVar17;
  int *piVar19;
  ulonglong uVar18;
  uint *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  longlong lVar27;
  
  iVar8 = param_3[1];
  if (iVar8 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(iVar8 + 0xc);
  uVar23 = 4;
  if (1 < (param_4 & 0xffffffff)) {
    lVar14 = param_4 - 1;
    piVar19 = param_3 + 3;
    do {
      uVar16 = *(uint *)(*(int *)(*piVar19 + 0xc) + 8) >> 0xe & 7;
      if (uVar16 < uVar23) {
        uVar23 = uVar16;
      }
      piVar19 = piVar19 + 2;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  uVar21 = (ulonglong)(iVar8 != *param_3);
  if ((param_4 & 0xffffffff) < 2) {
    return 0;
  }
  lVar27 = param_4 - 1;
  param_3 = param_3 + 3;
  lVar14 = lVar27;
  piVar19 = param_3;
  uVar16 = uVar1;
  do {
    uVar2 = *(uint *)(*piVar19 + 0xc);
    if ((uVar2 == uVar16) ||
       ((4 < (*(uint *)(uVar2 + 8) >> 0xe & 7) + uVar23 && (param_6 != (uint *)0x0)))) {
      param_4 = param_4 - 1;
    }
    else if (piVar19[-1] != *piVar19) {
      uVar21 = uVar21 + 1;
    }
    piVar19 = piVar19 + 2;
    lVar14 = lVar14 + -1;
    uVar16 = uVar2;
  } while (lVar14 != 0);
  if ((param_4 & 0xffffffff) < 2) {
    return 0;
  }
  if (param_6 == (uint *)0x0) {
    return 1;
  }
  lVar22 = (param_4 + 6 & 0x3fffffff) << 2;
  puVar6 = (uint *)fn_82ABE9F0(param_1,lVar22,0);
  uVar15 = (param_4 - uVar21) * 10;
  uVar16 = *puVar6;
  uVar2 = (uint)param_4 & 0x1fff;
  *puVar6 = uVar2 | uVar16 & 0xffffe000;
  lVar14 = uVar15 - 10;
  if ((uVar15 & 0xffffffff) < 0xb) {
    lVar14 = 1;
  }
  puVar25 = puVar6 + 6;
  puVar6[6] = uVar1;
  *puVar6 = (uint)((lVar14 + param_5 & 0xffffffffU) << 0xd) & 0x1fffe000 |
            uVar2 | uVar16 & 0xe0000000;
  puVar26 = puVar6 + 6;
  uVar16 = uVar1;
  do {
    uVar2 = *(uint *)(*param_3 + 0xc);
    if ((uVar2 != uVar16) && (uVar16 = uVar2, (*(uint *)(uVar2 + 8) >> 0xe & 7) + uVar23 < 5)) {
      puVar26 = puVar26 + 1;
      *puVar26 = uVar2;
    }
    param_3 = param_3 + 2;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  bVar5 = false;
  uVar15 = 0;
  puVar26 = puVar25;
  if ((param_4 & 0xffffffff) != 0) {
    do {
      puVar9 = (undefined4 *)(*puVar26 + 0x20);
      puVar7 = *(undefined4 **)(*puVar26 + 0x20);
      while (puVar7 != (undefined4 *)0x0) {
        puVar24 = (uint *)*puVar7;
        uVar11 = 0;
        uVar23 = *puVar24;
        uVar12 = (ulonglong)uVar23 & 0x1fff;
        if (uVar12 < (param_4 & 0xffffffff)) {
          puVar10 = puVar24 + 6;
          uVar18 = 0;
          puVar13 = puVar10;
          puVar20 = puVar25;
          do {
            if (*puVar20 == *puVar13) {
              uVar18 = uVar18 + 1;
              puVar13 = puVar13 + 1;
              if ((uVar18 & 0xffffffff) == uVar12) goto LAB_82aff5bc;
            }
            uVar11 = uVar11 + 1;
            puVar20 = puVar20 + 1;
          } while ((uVar11 & 0xffffffff) < (param_4 & 0xffffffff));
          if ((uVar18 & 0xffffffff) != uVar12) goto LAB_82aff690;
LAB_82aff5bc:
          uVar16 = 0;
          puVar13 = puVar10;
          if ((uVar23 & 0x1fff) != 0) {
            do {
              if (*puVar13 != uVar1) {
                puVar17 = (undefined4 *)(*puVar13 + 0x20);
                while( true ) {
                  puVar3 = (undefined4 *)*puVar17;
                  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    fn_82AA66A8(param_1,0x12c0);
                  }
                  if ((uint *)*puVar3 == puVar24) break;
                  puVar17 = puVar3 + 1;
                }
                *puVar17 = puVar3[1];
              }
              uVar16 = uVar16 + 1;
              puVar13 = puVar13 + 1;
            } while (uVar16 < (*puVar24 & 0x1fff));
          }
          bVar5 = true;
          *puVar10 = (uint)puVar6;
          *puVar24 = *puVar24 & 0xe0001fff;
          *puVar9 = puVar7[1];
        }
        else {
          uVar12 = 0;
          if ((uVar23 & 0x1fff) != 0) {
            puVar20 = puVar24 + 6;
            puVar13 = puVar25;
            do {
              if (*puVar13 == *puVar20) {
                uVar12 = uVar12 + 1;
                puVar13 = puVar13 + 1;
                if ((uVar12 & 0xffffffff) == (param_4 & 0xffffffff)) goto LAB_82aff6a4;
              }
              uVar11 = uVar11 + 1;
              puVar20 = puVar20 + 1;
            } while ((uVar11 & 0xffffffff) < ((ulonglong)*puVar24 & 0x1fff));
          }
          if ((uVar12 & 0xffffffff) == (param_4 & 0xffffffff)) goto LAB_82aff6a4;
LAB_82aff690:
          puVar9 = puVar7 + 1;
        }
        puVar7 = (undefined4 *)*puVar9;
      }
      puVar24 = (uint *)0x0;
LAB_82aff6a4:
      if (puVar24 != (uint *)0x0) {
        if (bVar5) {
          *puVar25 = (uint)puVar24;
          *puVar6 = *puVar6 & 0xe0001fff;
          puVar6[3] = *param_7;
          *param_7 = (uint)puVar6;
        }
        else {
          fn_82AC6808(param_1,puVar6,lVar22,0);
        }
        if (param_2 == (uint *)0x0) {
          return 1;
        }
        if (param_2 == puVar24) {
          return 0;
        }
        for (puVar7 = (undefined4 *)param_2[5]; puVar7 != (undefined4 *)0x0;
            puVar7 = (undefined4 *)puVar7[1]) {
          if ((uint *)*puVar7 == puVar24) {
            return 0;
          }
        }
        uVar15 = fn_82AF5350(param_1,puVar24,param_2);
        fn_82AF53F0(param_1,puVar24);
        if ((uVar15 & 0xff) != 0) {
          return 0;
        }
        goto LAB_82aff758;
      }
      uVar15 = uVar15 + 1;
      puVar26 = puVar26 + 1;
    } while ((uVar15 & 0xffffffff) < (param_4 & 0xffffffff));
  }
  puVar6[3] = *param_7;
  *param_7 = (uint)puVar6;
  if ((param_4 & 0xffffffff) != 0) {
    puVar26 = puVar6 + 5;
    uVar15 = param_4;
    do {
      puVar26 = puVar26 + 1;
      uVar1 = *puVar26;
      puVar7 = (undefined4 *)fn_82ABE250(param_1,8,0x31);
      *puVar7 = puVar6;
      uVar15 = uVar15 - 1;
      puVar7[1] = *(undefined4 *)(uVar1 + 0x20);
      *(undefined4 **)(uVar1 + 0x20) = puVar7;
    } while (uVar15 != 0);
  }
  if ((param_6[1] & 1) == 0) {
    uVar1 = *param_6 & 0xfffffffe;
    iVar8 = uVar1 - 4;
    if ((iVar8 != 0) && (*(int *)(uVar1 + 4) + 1U <= *(uint *)(uVar1 + 8))) goto LAB_82aff740;
  }
  iVar8 = fn_82AD6090(param_6,1);
LAB_82aff740:
  iVar4 = *(int *)(iVar8 + 8);
  *(int *)(iVar8 + 8) = iVar4 + 1;
  *(uint **)((iVar4 + 4) * 4 + iVar8) = puVar6;
  puVar24 = puVar6;
LAB_82aff758:
  if ((param_2 != (uint *)0x0) && ((uVar21 & 0xffffffff) <= (param_4 - 2 & 0xffffffff))) {
    puVar7 = (undefined4 *)fn_82ABE250(param_1,8,0x31);
    *puVar7 = puVar24;
    puVar7[1] = param_2[5];
    param_2[5] = (uint)puVar7;
  }
  return 1;
}

