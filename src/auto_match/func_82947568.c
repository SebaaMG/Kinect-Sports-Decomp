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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_1d0;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_82947448();
extern int fn_82F69148();
extern unsigned int iStack0000001c;
extern unsigned int iStack0000003c;
extern unsigned int lbl_820347A8;
extern unsigned int stack0x00000000;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;


/* WARNING: Removing unreachable block (ram,0x8294779c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
fn_82947568(int *param_1,int param_2,ulonglong param_3,uint *param_4,int param_5,int param_6,
             undefined4 param_7,uint param_8)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint *puVar14;
  char *pcVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar20;
  longlong lVar19;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  longlong lVar25;
  undefined4 *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  int iStack0000001c;
  int iStack0000003c;
  undefined4 uStack00000044;
  uint uStack0000004c;
  undefined4 in_stack_00000054;
  uint in_stack_0000005c;
  undefined4 in_stack_00000064;
  uint in_stack_0000006c;
  uint in_stack_00000074;
  int aiStack_1e0 [2];
  undefined *apuStack_1d8 [2];
  uint auStack_1d0 [116];
  
  uVar8 = ZEXT48(&stack0x00000000);
  uVar21 = 0;
  bVar5 = false;
  bVar6 = false;
  uVar28 = 0;
  iStack0000001c = param_2;
  iStack0000003c = param_6;
  uStack00000044 = param_7;
  uStack0000004c = param_8;
  if ((param_3 & 0xffffffff) != 0) {
    do {
      iVar20 = (int)((uVar28 & 0x3fffffff) << 2);
      lVar25 = (uVar28 & 0x7ffffff) * 0x20 + (uVar8 - 0x180);
      fn_82947448(param_1,CONCAT44(*(undefined4 *)(iVar20 + (int)param_4),
                                     *(undefined4 *)(iVar20 + (int)param_4)) & 0xfffffffff0ffffff,
                    *(undefined4 *)(iVar20 + param_5),lVar25,0x20,
                    -(uint)(uVar28 == 1) & in_stack_00000074);
      if (((*(uint *)(iVar20 + (int)param_4) >> 0x14 & 0x700 |
           *(uint *)(iVar20 + (int)param_4) & 0x1800) == 0x200) &&
         ((*(uint *)(iVar20 + (int)param_4) & 0x2000) == 0)) {
        fn_828F6FA8(uVar8 - 0x1a0,0x20,lVar25,0,0);
        fn_82936290(lVar25,0x20,uVar8 - 0x1a0);
      }
      uVar28 = uVar28 + 1;
    } while ((uVar28 & 0xffffffff) < (param_3 & 0xffffffff));
  }
  uVar28 = param_3 - 1;
  uVar29 = 0;
  do {
    uVar22 = 1;
    if ((uVar28 & 0xffffffff) != 0) {
      iVar12 = 0;
      uVar13 = 1;
      lVar25 = uVar8 - 0x180;
      uVar24 = *(uint *)((int)apuStack_1d8 + uVar29);
      iVar20 = *(int *)((int)aiStack_1e0 + uVar29);
      uVar27 = uVar28;
      puVar23 = param_4;
      do {
        if ((((iVar20 == 0) && (*(int *)((int)puVar23 + (param_6 - (int)param_4)) != 0xe40000)) ||
            ((iVar20 == 1 && ((*puVar23 & 0xf000000) != 0)))) &&
           ((uVar13 & 0xffffffff) < (param_3 & 0xffffffff))) {
          lVar16 = param_3 - uVar13;
          lVar9 = lVar25;
          puVar14 = puVar23;
          do {
            puVar14 = puVar14 + 1;
            lVar9 = lVar9 + 0x20;
            lVar11 = lVar9;
            lVar17 = lVar25;
            if (((iVar20 == 0) &&
                (*(int *)(iVar12 + param_6) == *(int *)((param_6 - (int)param_4) + (int)puVar14)))
               || ((iVar20 == 1 &&
                   (((*(uint *)(iVar12 + (int)param_4) ^ *puVar14) & 0xf000000) == 0)))) {
              do {
                cVar1 = *(char *)lVar17;
                pcVar15 = (char *)lVar11;
                if (cVar1 == '\0') break;
                lVar11 = lVar11 + 1;
                lVar17 = lVar17 + 1;
              } while (cVar1 == *pcVar15);
              if (cVar1 == *pcVar15) {
                uVar22 = uVar22 + 1;
              }
            }
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        if (uVar24 < uVar22) {
          uVar24 = uVar22;
        }
        uVar27 = uVar27 - 1;
        uVar13 = uVar13 + 1;
        iVar12 = iVar12 + 4;
        puVar23 = puVar23 + 1;
        lVar25 = lVar25 + 0x20;
      } while (uVar27 != 0);
      *(uint *)((int)apuStack_1d8 + uVar29) = uVar24;
    }
    uVar29 = uVar29 + 4;
  } while (uVar29 < 8);
  aiStack_1e0[1] = 1;
  aiStack_1e0[0] = 0;
  apuStack_1d8[0] = &lbl_820347A8;
  uVar27 = param_3;
  puVar23 = param_4;
  if ((param_3 & 0xffffffff) != 0) {
    do {
      uVar29 = *puVar23 & 0xf000000;
      if ((uVar29 == 0x1000000) || (uVar29 == 0xc000000)) {
        bVar5 = true;
      }
      else if (uVar29 == 0xb000000) {
        bVar6 = true;
      }
      uVar27 = uVar27 - 1;
      puVar23 = puVar23 + 1;
    } while (uVar27 != 0);
    if (bVar5) {
      uVar10 = fn_82941178(param_1);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      uVar10 = fn_829410A8(param_1,0xffffffff820348a8);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      uVar10 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820348f0,0,0,0,0);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      uVar10 = fn_829410A8(param_1,0xffffffff820347a8);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
    }
    if (bVar6) {
      uVar10 = fn_82941178(param_1);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      uVar10 = fn_829410A8(param_1,0xffffffff820348d0);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      uVar10 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820348f0,1,1,1,1);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      uVar10 = fn_829410A8(param_1,0xffffffff820347a8);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
    }
  }
  auStack_1d0[4] = 0;
  lVar25 = 2;
  auStack_1d0[0] = 0;
  lVar9 = uVar8 - 0x1e0;
  auStack_1d0[1] = 1;
  auStack_1d0[2] = 2;
  auStack_1d0[6] = 0;
  do {
    auStack_1d0[8] = 0;
    auStack_1d0[10] = 0;
    if ((uVar28 & 0xffffffff) != 0) {
      iVar20 = *(int *)lVar9;
      iVar12 = 0;
      uVar13 = 1;
      lVar16 = uVar8 - 0x180;
      uVar27 = uVar28;
      puVar23 = param_4;
      do {
        if ((((iVar20 == 0) && (*(int *)((int)puVar23 + (param_6 - (int)param_4)) != 0xe40000)) ||
            ((iVar20 == 1 && ((*puVar23 & 0xf000000) != 0)))) &&
           ((uVar13 & 0xffffffff) < (param_3 & 0xffffffff))) {
          lVar17 = param_3 - uVar13;
          lVar11 = lVar16;
          puVar14 = puVar23;
          do {
            puVar14 = puVar14 + 1;
            lVar11 = lVar11 + 0x20;
            lVar19 = lVar11;
            lVar18 = lVar16;
            if (((iVar20 == 0) &&
                (*(int *)(iVar12 + param_6) == *(int *)((int)puVar14 + (param_6 - (int)param_4))))
               || ((iVar20 == 1 &&
                   (((*(uint *)(iVar12 + (int)param_4) ^ *puVar14) & 0xf000000) == 0)))) {
              do {
                cVar1 = *(char *)lVar18;
                pcVar15 = (char *)lVar19;
                if (cVar1 == '\0') break;
                lVar19 = lVar19 + 1;
                lVar18 = lVar18 + 1;
              } while (cVar1 == *pcVar15);
              if (cVar1 == *pcVar15) {
                *(undefined4 *)((int)auStack_1d0 + iVar12 + 0x20) = 1;
                *(undefined4 *)((int)auStack_1d0 + (0x20 - (int)param_4) + (int)puVar14) = 1;
              }
            }
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        uVar27 = uVar27 - 1;
        uVar13 = uVar13 + 1;
        iVar12 = iVar12 + 4;
        puVar23 = puVar23 + 1;
        lVar16 = lVar16 + 0x20;
      } while (uVar27 != 0);
    }
    if ((param_3 & 0xffffffff) != 0) {
      iVar20 = *(int *)lVar9;
      iVar12 = (int)auStack_1d0 + (0x10 - (int)param_4);
      uVar27 = param_3;
      puVar23 = param_4;
      do {
        if ((((iVar20 == 0) && (*(int *)((param_6 - (int)param_4) + (int)puVar23) != 0xe40000)) ||
            ((iVar20 == 1 && ((*puVar23 & 0xf000000) != 0)))) &&
           (*(int *)((int)auStack_1d0 + (0x20 - (int)param_4) + (int)puVar23) == 0)) {
          *(int *)(iVar12 + (int)puVar23) = *(int *)(iVar12 + (int)puVar23) + 1;
        }
        puVar23 = puVar23 + 1;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
    lVar25 = lVar25 + -1;
    lVar9 = lVar9 + 4;
  } while (lVar25 != 0);
  if ((uVar28 & 0xffffffff) != 0) {
    iVar20 = 0;
    uVar27 = 1;
    do {
      if ((uVar27 & 0xffffffff) < (param_3 & 0xffffffff)) {
        lVar25 = param_3 - uVar27;
        iVar12 = iVar20;
        do {
          uVar29 = *(uint *)((int)auStack_1d0 + iVar20 + 0x10);
          uVar22 = *(uint *)((int)auStack_1d0 + iVar12 + 0x14);
          if (uVar22 < uVar29) {
            *(uint *)((int)auStack_1d0 + iVar20 + 0x10) = uVar22;
            *(uint *)((int)auStack_1d0 + iVar12 + 0x14) = uVar29;
            uVar3 = *(undefined4 *)((int)auStack_1d0 + iVar20);
            *(undefined4 *)((int)auStack_1d0 + iVar20) =
                 *(undefined4 *)((int)auStack_1d0 + iVar12 + 4);
            *(undefined4 *)((int)auStack_1d0 + iVar12 + 4) = uVar3;
          }
          lVar25 = lVar25 + -1;
          iVar12 = iVar12 + 4;
        } while (lVar25 != 0);
      }
      uVar28 = uVar28 - 1;
      uVar27 = uVar27 + 1;
      iVar20 = iVar20 + 4;
    } while (uVar28 != 0);
  }
  if ((param_3 & 0xffffffff) != 0) {
    fn_82F69148(uVar8 - 0x1c0,uVar8 - 0x1d0,(param_3 & 0x3fffffff) << 2);
  }
  lVar25 = uVar8 - 0x1e0;
  do {
    uVar28 = 0;
    if ((param_3 & 0xffffffff) != 0) {
      iVar20 = *(int *)lVar25;
      lVar9 = uVar8 - 0x1d0;
      do {
        iVar12 = iStack0000003c;
        puVar23 = (uint *)lVar9;
        if (((iVar20 == 0) && (uVar29 = *puVar23, *(int *)(uVar29 * 4 + iStack0000003c) == 0xe40000)
            ) || ((iVar20 == 1 && (uVar29 = *puVar23, (param_4[uVar29] & 0xf000000) == 0)))) {
          lVar16 = ((ulonglong)uVar29 & 0x7ffffff) * 0x20;
          fn_82936290(lVar16 + (uVar8 - 0x120),0x20,lVar16 + (uVar8 - 0x180));
        }
        else {
          uVar27 = 0;
          if ((uVar28 & 0xffffffff) != 0) {
            lVar16 = uVar8 - 0x1d0;
            do {
              if (iVar20 == 0) {
                uVar22 = *(uint *)lVar16;
                uVar29 = *puVar23;
                if (*(int *)(uVar29 * 4 + iStack0000003c) != *(int *)(uVar22 * 4 + iStack0000003c))
                goto LAB_82947c0c;
LAB_82947c38:
                lVar11 = ((ulonglong)uVar29 & 0x7ffffff) * 0x20;
                lVar17 = ((ulonglong)uVar22 & 0x7ffffff) * 0x20 + (uVar8 - 0x180);
                lVar19 = lVar11 + (uVar8 - 0x180);
                do {
                  cVar1 = *(char *)lVar19;
                  pcVar15 = (char *)lVar17;
                  if (cVar1 == '\0') break;
                  lVar19 = lVar19 + 1;
                  lVar17 = lVar17 + 1;
                } while (cVar1 == *pcVar15);
                if (cVar1 == *pcVar15) {
                  iVar4 = (int)((uVar27 & 0x3fffffff) << 2);
                  fn_82936290(lVar11 + (uVar8 - 0x120),0x20,
                               ((ulonglong)*(uint *)((int)auStack_1d0 + iVar4) & 0x7ffffff) * 0x20 +
                               (uVar8 - 0x120));
                  iVar7 = (int)((param_3 & 0xffffffff) << 2);
                  uVar3 = *(undefined4 *)((int)auStack_1d0 + iVar7 + 0xc);
                  *(undefined4 *)((int)auStack_1d0 + iVar7 + 0xc) =
                       *(undefined4 *)((int)auStack_1d0 + iVar4 + 0x10);
                  *(undefined4 *)((int)auStack_1d0 + iVar4 + 0x10) = uVar3;
                  break;
                }
              }
              else {
LAB_82947c0c:
                if (iVar20 == 1) {
                  uVar22 = *(uint *)lVar16;
                  uVar29 = *puVar23;
                  if (((param_4[uVar29] ^ param_4[uVar22]) & 0xf000000) == 0) goto LAB_82947c38;
                }
              }
              uVar27 = uVar27 + 1;
              lVar16 = lVar16 + 4;
            } while ((uVar27 & 0xffffffff) < (uVar28 & 0xffffffff));
            if ((uVar27 & 0xffffffff) < (uVar28 & 0xffffffff)) goto LAB_82947f1c;
          }
          if (((uVar21 == 1) || ((iVar20 == 1 && (*(int *)(*puVar23 * 4 + iVar12) == 0xe40000)))) ||
             ((iVar20 == 0 && ((param_4[*puVar23] & 0xf000000) == 0)))) {
            bVar5 = true;
            bVar6 = true;
            if (iStack0000001c == 0) goto LAB_82947d2c;
            uVar29 = *puVar23;
            lVar11 = ((ulonglong)uVar29 & 0x7ffffff) * 0x20;
            lVar16 = lVar11 + (uVar8 - 0x120);
            fn_82936290(lVar16,0x20);
          }
          else {
            bVar6 = false;
LAB_82947d2c:
            bVar5 = bVar6;
            uVar29 = *puVar23;
            if (((param_4[uVar29] >> 0x14 & 0x700 | param_4[uVar29] & 0x1800) != 0x200) ||
               (uVar10 = 0xffffffff820357f8, (param_4[uVar29] & 0x2000) != 0)) {
              uVar10 = 0xffffffff82035804;
            }
            lVar11 = ((ulonglong)uVar29 & 0x7ffffff) * 0x20;
            lVar16 = lVar11 + (uVar8 - 0x120);
            fn_828F6FA8(lVar16,0x20,uVar10,uVar29);
          }
          if ((((param_4[uVar29] >> 0x14 & 0x700 | param_4[uVar29] & 0x1800) != 0x200) ||
              ((param_4[uVar29] & 0x2000) != 0)) || ((iStack0000001c != 0 && (bVar5)))) {
            uVar22 = param_1[0x1c6];
          }
          else {
            uVar22 = 1;
          }
          uVar27 = 0;
          if (uVar22 != 0) {
            do {
              uVar10 = fn_82941178(param_1);
              if ((int)uVar10 < 0) {
                return uVar10;
              }
              fn_828F6FA8(uVar8 - 0x1a0,0x20,lVar11 + (uVar8 - 0x180),uVar27,uVar27);
              fn_828F6FA8(uVar8 - 0xc0,0x20,lVar16,uVar27,uVar27);
              uVar10 = fn_829410A8(param_1,0xffffffff820347f4,uVar8 - 0xc0);
              if ((int)uVar10 < 0) {
                return uVar10;
              }
              if (iVar20 == 0) {
                uVar24 = *(uint *)(uVar29 * 4 + iStack0000003c);
                uVar10 = (**(code **)(*param_1 + 0x184))
                                   (param_1,uVar8 - 0x1a0,uVar24 >> 0x10 & 3,uVar24 >> 0x12 & 3,
                                    uVar24 >> 0x14 & 3,uVar24 >> 0x16 & 3);
                iVar12 = (int)uVar10;
              }
              else {
                uVar10 = 0xffffffff820348a0;
                if ((param_4[uVar29] & 0xf000000) == 0x1000000) {
                  pcVar2 = *(code **)(*param_1 + 0x1d4);
                }
                else if ((param_4[uVar29] & 0xf000000) == 0xb000000) {
                  pcVar2 = *(code **)(*param_1 + 0x1c8);
                  uVar10 = 0xffffffff820348c8;
                }
                else {
                  pcVar2 = *(code **)(*param_1 + 0x1d0);
                }
                uVar10 = (*pcVar2)(param_1,uVar8 - 0x1a0,uVar10);
                iVar12 = (int)uVar10;
              }
              if (iVar12 < 0) {
                return uVar10;
              }
              uVar10 = fn_829410A8(param_1,apuStack_1d8[0]);
              if ((int)uVar10 < 0) {
                return uVar10;
              }
              uVar27 = uVar27 + 1;
            } while ((uVar27 & 0xffffffff) < (ulonglong)uVar22);
          }
        }
LAB_82947f1c:
        uVar28 = uVar28 + 1;
        lVar9 = lVar9 + 4;
      } while ((uVar28 & 0xffffffff) < (param_3 & 0xffffffff));
      iVar20 = 0;
      uVar28 = param_3;
      do {
        puVar26 = (undefined4 *)((int)auStack_1d0 + iVar20);
        lVar9 = ((ulonglong)*(uint *)((int)auStack_1d0 + iVar20) & 0x7ffffff) * 0x20;
        fn_82936290(lVar9 + (uVar8 - 0x180),0x20,lVar9 + (uVar8 - 0x120));
        uVar28 = uVar28 - 1;
        iVar12 = iVar20 + 0x10;
        iVar20 = iVar20 + 4;
        *puVar26 = *(undefined4 *)((int)auStack_1d0 + iVar12);
      } while (uVar28 != 0);
    }
    uVar21 = uVar21 + 1;
    lVar25 = lVar25 + 4;
    if (1 < uVar21) {
      if (uStack0000004c < 0x80000000) {
        fn_82936290(uStack00000044,uStack0000004c,uVar8 - 0x180);
      }
      if ((1 < (param_3 & 0xffffffff)) && (in_stack_0000005c < 0x80000000)) {
        fn_82936290(in_stack_00000054,in_stack_0000005c,uVar8 - 0x160);
      }
      if ((2 < (param_3 & 0xffffffff)) && (in_stack_0000006c < 0x80000000)) {
        fn_82936290(in_stack_00000064,in_stack_0000006c,uVar8 - 0x140);
      }
      return 0;
    }
  } while( true );
}

