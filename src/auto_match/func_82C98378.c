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
extern unsigned int *auStack_c0;
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C7AA08();
extern int fn_82C93B58();
extern int fn_82C94500();
extern int fn_82C948D8();
extern int fn_82CB2190();
extern int fn_82F691F0();
extern unsigned int iStack_dc;
extern unsigned int lbl_820FDC70;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;


undefined8
fn_82C98378(int param_1,uint *param_2,longlong param_3,undefined8 param_4,undefined8 param_5,
             uint param_6,ulonglong param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  int *piVar8;
  ulonglong *puVar9;
  byte *pbVar10;
  uint *puVar11;
  int iVar13;
  undefined8 uVar12;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  int iVar22;
  ulonglong uVar20;
  undefined4 *puVar23;
  ulonglong uVar21;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  undefined1 *puVar28;
  int iVar30;
  ulonglong uVar29;
  bool bVar31;
  uint *puStack0000001c;
  undefined4 uStack0000002c;
  undefined4 uStack00000034;
  uint uStack0000003c;
  uint uStack00000044;
  int iStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined *puStack_c8;
  undefined1 auStack_c0 [192];
  
  uStack00000044 = (uint)param_7;
  uStack0000002c = (undefined4)param_4;
  uStack00000034 = (undefined4)param_5;
  bVar31 = *(int *)(param_1 + 0x14c) != 0;
  iVar22 = (uint)*(byte *)(param_2 + 1) * 0x14 + *(int *)(param_1 + 0x19d0);
  uVar24 = *(uint *)(param_1 + 0x154);
  iVar15 = *(int *)(param_1 + 0x6ec);
  if (*(int *)(param_1 + 0x14c) != 0) {
    uVar24 = *param_2 >> 0x18 & 7;
  }
  if (*(int *)(param_1 + 0x18c) == 0) {
    iStack_dc = param_1 + 0xb64;
    iVar16 = param_1 + 0xb70;
  }
  else {
    uVar27 = *param_2 >> 0x16 & 3;
    iStack_dc = (uVar27 + 0x2df) * 4 + param_1;
    iVar16 = (uVar27 + 0x2e2) * 4 + param_1;
  }
  uStack_cc = **(uint **)(param_1 + 0x164) >> 2 & 1;
  if (((param_6 == 0) && (uStack00000044 == 0)) && (uStack_cc == 0)) {
    uStack_d8 = 1;
  }
  else {
    uStack_d8 = 0;
  }
  puStack0000001c = param_2;
  uStack0000003c = param_6;
  fn_82C93B58(param_1,param_3,param_4,param_5,param_6,param_7);
  iVar25 = param_6 * 2;
  uVar29 = param_7 & 0x7fffffff;
  puStack_c8 = &lbl_820FDC70;
  uVar27 = 0;
  do {
    uVar26 = uVar27;
    bVar6 = *(byte *)((int)param_2 + uVar26 + 0xe);
    iVar14 = iVar25 + (uVar26 & 1);
    uStack_d8 = (uint)LZCOUNT((uint)bVar6) >> 5 & uStack_d8;
    lVar17 = ((ulonglong)(uint)((int)uVar26 >> 1) & 1) + uVar29 * 2;
    if (uStack_cc == 0) {
      if (bVar6 == 0) {
        *(undefined1 *)((int)puStack0000001c + uVar26 + 8) = 0;
      }
      else {
        if (((*puStack0000001c & 0x10000000) != 0) && (!bVar31)) {
          piVar8 = *(int **)(param_1 + 0xa00);
          puVar9 = *(ulonglong **)(param_1 + 0x54);
          if (piVar8 == (int *)0x0) {
            uVar21 = 0;
            *(undefined4 *)((int)puVar9 + 0x14) = 3;
          }
          else {
            iVar14 = *piVar8;
            sVar7 = *(short *)((int)((*puVar9 >> (0x40 - (ulonglong)*(byte *)(piVar8 + 2) & 0x7f) &
                                     0xffffffff) << 1) + iVar14);
            uVar21 = (ulonglong)sVar7;
            if (sVar7 < 0) {
              fn_82C4E470(puVar9);
              do {
                uVar20 = *puVar9;
                fn_82C4E470(puVar9,1);
                sVar7 = *(short *)((int)(((uVar21 - ((longlong)uVar20 >> 0x3f)) + 0x8000 &
                                         0xffffffff) << 1) + iVar14);
                uVar21 = (ulonglong)sVar7;
              } while (sVar7 < 0);
            }
            else {
              iVar14 = *(int *)(puVar9 + 1);
              iVar13 = (int)(uVar21 & 0xf);
              *puVar9 = *puVar9 << (uVar21 & 0xf);
              *(int *)(puVar9 + 1) = iVar14 - iVar13;
              if (iVar14 < iVar13) {
                do {
                  pbVar10 = *(byte **)((int)puVar9 + 0xc);
                  if (pbVar10 < (byte *)(*(int *)(puVar9 + 2) - 4U)) {
                    bVar6 = *pbVar10;
                    bVar1 = pbVar10[1];
                    bVar2 = pbVar10[2];
                    bVar3 = pbVar10[3];
                    bVar4 = pbVar10[4];
                    bVar5 = pbVar10[5];
                    iVar14 = *(int *)(puVar9 + 1);
                    *(byte **)((int)puVar9 + 0xc) = pbVar10 + 6;
                    *(int *)(puVar9 + 1) = iVar14 + 0x30;
                    *puVar9 = ((((((ulonglong)bVar6 * 0x100 + (ulonglong)bVar1) * 0x100 +
                                 (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3) * 0x100 +
                               (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5 <<
                              ((longlong)-iVar14 & 0x7fU)) + *puVar9;
                    goto LAB_82c9888c;
                  }
                  iVar14 = fn_82C4E3B0(puVar9);
                } while (iVar14 == 1);
                uVar21 = (ulonglong)((int)sVar7 >> 4);
              }
              else {
LAB_82c9888c:
                uVar21 = (ulonglong)((int)sVar7 >> 4);
              }
            }
          }
          if ((*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) || (7 < (uVar21 & 0xffffffff)))
          goto LAB_82c992e0;
          uVar24 = *(uint *)(puStack_c8 + (int)((uVar21 & 0xffffffff) << 2) + -0x20);
        }
        *(char *)((int)puStack0000001c + uVar26 + 8) = (char)uVar24;
        if (uVar24 == 0) {
          iVar15 = *(int *)(param_1 + 0x6ec);
          uVar12 = (**(code **)(param_1 + 0xc78))
                             (param_1,iStack_dc,*(undefined4 *)(param_1 + 0x72c),0,iVar22);
          if ((int)uVar12 != 0) {
            return uVar12;
          }
          (**(code **)(param_1 + 0xc80))(iVar15,iVar15,8,*(undefined4 *)(param_1 + 0x798));
        }
        else {
          if (uVar24 == 1) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
          }
          if (uVar24 == 2) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
          }
          if (uVar24 == 4) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
          }
        }
        if (*(code **)(param_1 + 0xc80) == fn_82C7AA08) {
          puVar19 = (undefined2 *)(iVar15 + -2);
          puVar23 = (undefined4 *)(iVar15 + -4);
          lVar17 = 0x40;
          do {
            puVar23 = puVar23 + 1;
            puVar19 = puVar19 + 1;
            *puVar19 = (short)*puVar23;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        (**(code **)(param_1 + 0xc70))
                  (param_3,param_3,iVar15,*(undefined4 *)(param_1 + 0xcc),
                   *(undefined4 *)(param_1 + 0x108));
        bVar31 = false;
        param_7 = (ulonglong)uStack00000044;
        param_6 = uStack0000003c;
      }
    }
    else {
      iVar15 = *(int *)(param_1 + 0x6ec);
      iVar30 = (*(int *)(param_1 + 0x88) * (int)lVar17 * 2 + iVar14) * 0x20 +
               *(int *)(param_1 + 0x1d0);
      puVar28 = (undefined1 *)0x0;
      iVar13 = fn_82C94500(param_1,puStack0000001c,iVar30,uVar26,iVar14,lVar17,&uStack_d4,
                             &uStack_d0);
      if (iVar13 != 0) {
        puVar28 = auStack_c0;
      }
      uVar12 = fn_82CB2190(param_1,iVar16,uVar26,bVar6,puVar28,uStack_d0,uStack_d4,iVar30);
      if ((int)uVar12 != 0) {
        return uVar12;
      }
      if ((*(uint *)(param_1 + 0xbbc) & 1) != 0) {
        uVar27 = *(uint *)(param_1 + 0x88);
        lVar17 = 8;
        iVar30 = ((uVar26 & 2) + 0x2f2) * 4;
        iVar13 = iVar14 * 8;
        puVar19 = (undefined2 *)(iVar15 + -2);
        puVar18 = (undefined2 *)(iVar14 * 0x10 + *(int *)(iVar30 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (undefined2 *)(iVar15 + 0xe);
        puVar18 = (undefined2 *)((iVar13 + uVar27 * 0x10) * 2 + *(int *)(iVar30 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (undefined2 *)(iVar15 + 0x1e);
        puVar18 = (undefined2 *)((uVar27 * 0x20 + iVar13) * 2 + *(int *)(iVar30 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (undefined2 *)(iVar15 + 0x2e);
        puVar18 = (undefined2 *)((uVar27 * 0x30 + iVar13) * 2 + *(int *)(iVar30 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (undefined2 *)(iVar15 + 0x3e);
        puVar18 = (undefined2 *)((uVar27 * 0x40 + iVar13) * 2 + *(int *)(iVar30 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (undefined2 *)(iVar15 + 0x4e);
        puVar18 = (undefined2 *)((uVar27 * 0x50 + iVar13) * 2 + *(int *)(iVar30 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (undefined2 *)(iVar15 + 0x5e);
        puVar18 = (undefined2 *)((uVar27 * 0x60 + iVar13) * 2 + *(int *)(iVar30 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (undefined2 *)(iVar15 + 0x6e);
        puVar18 = (undefined2 *)
                  ((uVar27 * 0x80 + (uVar27 & 0xfffffff) * -0x10 + iVar13) * 2 +
                   *(int *)(iVar30 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      (**(code **)(param_1 + 0xc70))
                (param_3,param_3,iVar15,*(undefined4 *)(param_1 + 0xcc),
                 *(undefined4 *)(param_1 + 0x108));
      param_7 = (ulonglong)uStack00000044;
      *(undefined1 *)((int)puStack0000001c + uVar26 + 8) = 0;
      param_6 = uStack0000003c;
    }
    puVar11 = puStack0000001c;
    if ((uVar26 & 1) == 0) {
      uVar21 = 8;
    }
    else {
      uVar21 = (ulonglong)*(uint *)(param_1 + 0xec);
    }
    uVar27 = uVar26 + 1;
    param_3 = uVar21 + param_3;
  } while ((int)uVar27 < 4);
  if (uStack_cc == 0) {
    if (*(char *)((int)param_2 + 0x12) == '\0') {
      *(undefined1 *)(puStack0000001c + 3) = 0;
      goto LAB_82c99bcc;
    }
    uVar29 = 0;
    uStack_d8 = 0;
    if (((*puStack0000001c & 0x10000000) == 0) || (bVar31)) {
LAB_82c9948c:
      *(char *)(puStack0000001c + 3) = (char)uVar24;
      if (uVar24 == 0) {
        iVar15 = *(int *)(param_1 + 0x6ec);
        uVar12 = (**(code **)(param_1 + 0xc78))
                           (param_1,iStack_dc,*(undefined4 *)(param_1 + 0x72c),0,iVar22);
        if ((int)uVar12 != 0) {
          return uVar12;
        }
        (**(code **)(param_1 + 0xc80))(iVar15,iVar15,8,*(undefined4 *)(param_1 + 0x798));
      }
      else {
        if (uVar24 == 1) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
        }
        if (uVar24 == 2) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
        }
        if (uVar24 == 4) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
        }
      }
      if (*(code **)(param_1 + 0xc80) == fn_82C7AA08) {
        puVar19 = (undefined2 *)(iVar15 + -2);
        puVar23 = (undefined4 *)(iVar15 + -4);
        lVar17 = 0x40;
        do {
          puVar23 = puVar23 + 1;
          puVar19 = puVar19 + 1;
          *puVar19 = (short)*puVar23;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      (**(code **)(param_1 + 0xc70))
                (uStack0000002c,uStack0000002c,iVar15,*(undefined4 *)(param_1 + 0xd0),
                 *(undefined4 *)(param_1 + 0x108));
      bVar31 = false;
      goto LAB_82c99bcc;
    }
    piVar8 = *(int **)(param_1 + 0xa00);
    puVar9 = *(ulonglong **)(param_1 + 0x54);
    if (piVar8 == (int *)0x0) {
      *(undefined4 *)((int)puVar9 + 0x14) = 3;
    }
    else {
      iVar16 = *piVar8;
      sVar7 = *(short *)((int)((*puVar9 >> (0x40 - (ulonglong)*(byte *)(piVar8 + 2) & 0x7f) &
                               0xffffffff) << 1) + iVar16);
      uVar29 = (ulonglong)sVar7;
      if (sVar7 < 0) {
        fn_82C4E470(puVar9);
        do {
          uVar21 = *puVar9;
          fn_82C4E470(puVar9,1);
          sVar7 = *(short *)((int)(((uVar29 - ((longlong)uVar21 >> 0x3f)) + 0x8000 & 0xffffffff) <<
                                  1) + iVar16);
          uVar29 = (ulonglong)sVar7;
        } while (sVar7 < 0);
      }
      else {
        iVar16 = *(int *)(puVar9 + 1);
        iVar25 = (int)(uVar29 & 0xf);
        *puVar9 = *puVar9 << (uVar29 & 0xf);
        *(int *)(puVar9 + 1) = iVar16 - iVar25;
        if (iVar16 < iVar25) {
          do {
            pbVar10 = *(byte **)((int)puVar9 + 0xc);
            if (pbVar10 < (byte *)(*(int *)(puVar9 + 2) - 4U)) {
              bVar6 = *pbVar10;
              bVar1 = pbVar10[1];
              bVar2 = pbVar10[2];
              bVar3 = pbVar10[3];
              bVar4 = pbVar10[4];
              bVar5 = pbVar10[5];
              iVar16 = *(int *)(puVar9 + 1);
              *(byte **)((int)puVar9 + 0xc) = pbVar10 + 6;
              *(int *)(puVar9 + 1) = iVar16 + 0x30;
              *puVar9 = ((((((ulonglong)bVar1 + (ulonglong)bVar6 * 0x100) * 0x100 + (ulonglong)bVar2
                           ) * 0x100 + (ulonglong)bVar3) * 0x100 + (ulonglong)bVar4) * 0x100 +
                         (ulonglong)bVar5 << ((longlong)-iVar16 & 0x7fU)) + *puVar9;
              goto LAB_82c9941c;
            }
            iVar16 = fn_82C4E3B0(puVar9);
          } while (iVar16 == 1);
          uVar29 = (ulonglong)((int)sVar7 >> 4);
        }
        else {
LAB_82c9941c:
          uVar29 = (ulonglong)((int)sVar7 >> 4);
        }
      }
    }
    if ((*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) && ((uVar29 & 0xffffffff) < 8)) {
      uVar24 = *(uint *)(puStack_c8 + (int)((uVar29 & 0xffffffff) << 2) + -0x20);
      goto LAB_82c9948c;
    }
LAB_82c992e0:
    uVar12 = 1;
  }
  else {
    iVar16 = (*(int *)(param_1 + 0x88) * (int)param_7 + param_6) * 0x20 + *(int *)(param_1 + 0x1d4);
    puVar28 = (undefined1 *)0x0;
    iVar15 = fn_82C948D8(param_1,puStack0000001c,iVar16,param_6,param_7,&uStack_d4,&uStack_d0,
                           auStack_c0);
    if (iVar15 != 0) {
      puVar28 = auStack_c0;
    }
    iVar15 = *(int *)(param_1 + 0x6ec);
    uStack_d8 = 0;
    uVar12 = fn_82CB2190(param_1,iStack_dc,uVar27,*(undefined1 *)((int)param_2 + 0x12),puVar28
                               ,uStack_d0,uStack_d4,iVar16);
    if ((int)uVar12 != 0) {
      return uVar12;
    }
    if ((*(uint *)(param_1 + 0xbbc) & 1) != 0) {
      uVar27 = *(uint *)(param_1 + 0x88);
      lVar17 = 8;
      puVar19 = (undefined2 *)(iVar15 + -2);
      iVar16 = param_6 * 8;
      puVar18 = (undefined2 *)(param_6 * 0x10 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 8;
      puVar19 = (undefined2 *)(iVar15 + 0xe);
      puVar18 = (undefined2 *)((iVar16 + uVar27 * 8) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 8;
      puVar19 = (undefined2 *)(iVar15 + 0x1e);
      puVar18 = (undefined2 *)((uVar27 * 0x10 + iVar16) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 8;
      puVar19 = (undefined2 *)(iVar15 + 0x2e);
      puVar18 = (undefined2 *)((uVar27 * 0x18 + iVar16) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 8;
      puVar19 = (undefined2 *)(iVar15 + 0x3e);
      puVar18 = (undefined2 *)((uVar27 * 0x20 + iVar16) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 8;
      puVar19 = (undefined2 *)(iVar15 + 0x4e);
      puVar18 = (undefined2 *)((uVar27 * 0x28 + iVar16) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 8;
      puVar19 = (undefined2 *)(iVar15 + 0x5e);
      puVar18 = (undefined2 *)((uVar27 * 0x30 + iVar16) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 8;
      puVar19 = (undefined2 *)(iVar15 + 0x6e);
      puVar18 = (undefined2 *)
                ((uVar27 * 0x40 + (uVar27 & 0x1fffffff) * -8 + iVar16) * 2 +
                 *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    (**(code **)(param_1 + 0xc70))
              (uStack0000002c,uStack0000002c,iVar15,*(undefined4 *)(param_1 + 0xd0),
               *(undefined4 *)(param_1 + 0x108));
    *(undefined1 *)(puVar11 + 3) = 0;
LAB_82c99bcc:
    uVar27 = uStack0000003c;
    puVar11 = puStack0000001c;
    if (uStack_cc == 0) {
      if (*(char *)((int)param_2 + 0x13) == '\0') {
        *(undefined1 *)((int)puStack0000001c + 0xd) = 0;
      }
      else {
        uVar29 = 0;
        uStack_d8 = 0;
        if (((*puStack0000001c & 0x10000000) != 0) && (!bVar31)) {
          piVar8 = *(int **)(param_1 + 0xa00);
          puVar9 = *(ulonglong **)(param_1 + 0x54);
          if (piVar8 == (int *)0x0) {
            *(undefined4 *)((int)puVar9 + 0x14) = 3;
          }
          else {
            iVar16 = *piVar8;
            sVar7 = *(short *)((int)((*puVar9 >> (0x40 - (ulonglong)*(byte *)(piVar8 + 2) & 0x7f) &
                                     0xffffffff) << 1) + iVar16);
            uVar29 = (ulonglong)sVar7;
            if (sVar7 < 0) {
              fn_82C4E470(puVar9);
              do {
                uVar21 = *puVar9;
                fn_82C4E470(puVar9,1);
                sVar7 = *(short *)((int)(((uVar29 - ((longlong)uVar21 >> 0x3f)) + 0x8000 &
                                         0xffffffff) << 1) + iVar16);
                uVar29 = (ulonglong)sVar7;
              } while (sVar7 < 0);
            }
            else {
              iVar16 = *(int *)(puVar9 + 1);
              iVar25 = (int)(uVar29 & 0xf);
              *puVar9 = *puVar9 << (uVar29 & 0xf);
              *(int *)(puVar9 + 1) = iVar16 - iVar25;
              if (iVar16 < iVar25) {
                do {
                  pbVar10 = *(byte **)((int)puVar9 + 0xc);
                  if (pbVar10 < (byte *)(*(int *)(puVar9 + 2) - 4U)) {
                    bVar6 = *pbVar10;
                    bVar1 = pbVar10[1];
                    bVar2 = pbVar10[2];
                    bVar3 = pbVar10[3];
                    bVar4 = pbVar10[4];
                    bVar5 = pbVar10[5];
                    iVar16 = *(int *)(puVar9 + 1);
                    *(byte **)((int)puVar9 + 0xc) = pbVar10 + 6;
                    *(int *)(puVar9 + 1) = iVar16 + 0x30;
                    *puVar9 = ((((((ulonglong)bVar1 + (ulonglong)bVar6 * 0x100) * 0x100 +
                                 (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3) * 0x100 +
                               (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5 <<
                              ((longlong)-iVar16 & 0x7fU)) + *puVar9;
                    goto LAB_82c99f78;
                  }
                  iVar16 = fn_82C4E3B0(puVar9);
                } while (iVar16 == 1);
                uVar29 = (ulonglong)((int)sVar7 >> 4);
              }
              else {
LAB_82c99f78:
                uVar29 = (ulonglong)((int)sVar7 >> 4);
              }
            }
          }
          if ((*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) || (7 < (uVar29 & 0xffffffff)))
          goto LAB_82c992e0;
          uVar24 = *(uint *)(puStack_c8 + (int)((uVar29 & 0xffffffff) << 2) + -0x20);
        }
        *(char *)((int)puStack0000001c + 0xd) = (char)uVar24;
        if (uVar24 == 0) {
          iVar15 = *(int *)(param_1 + 0x6ec);
          uVar12 = (**(code **)(param_1 + 0xc78))
                             (param_1,iStack_dc,*(undefined4 *)(param_1 + 0x72c),0,iVar22);
          if ((int)uVar12 != 0) {
            return uVar12;
          }
          (**(code **)(param_1 + 0xc80))(iVar15,iVar15,8,*(undefined4 *)(param_1 + 0x798));
        }
        else {
          if (uVar24 == 1) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
          }
          if (uVar24 == 2) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
          }
          if (uVar24 == 4) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
          }
        }
        if (*(code **)(param_1 + 0xc80) == fn_82C7AA08) {
          puVar19 = (undefined2 *)(iVar15 + -2);
          puVar23 = (undefined4 *)(iVar15 + -4);
          lVar17 = 0x40;
          do {
            puVar23 = puVar23 + 1;
            puVar19 = puVar19 + 1;
            *puVar19 = (short)*puVar23;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        (**(code **)(param_1 + 0xc70))
                  (uStack00000034,uStack00000034,iVar15,*(undefined4 *)(param_1 + 0xd0),
                   *(undefined4 *)(param_1 + 0x108));
      }
    }
    else {
      lVar17 = ((longlong)*(int *)(param_1 + 0x88) * (longlong)(int)uStack00000044 +
                (ulonglong)uStack0000003c & 0x7ffffff) * 0x20 +
               (ulonglong)*(uint *)(param_1 + 0x1d8);
      puVar28 = (undefined1 *)0x0;
      iVar15 = fn_82C948D8(param_1,puStack0000001c,lVar17,(ulonglong)uStack0000003c,uStack00000044
                             ,&uStack_d4,&uStack_d0,auStack_c0);
      if (iVar15 != 0) {
        puVar28 = auStack_c0;
      }
      iVar15 = *(int *)(param_1 + 0x6ec);
      uStack_d8 = 0;
      uVar12 = fn_82CB2190(param_1,iStack_dc,uVar26 + 2,*(undefined1 *)((int)param_2 + 0x13),
                                 puVar28,uStack_d0,uStack_d4,lVar17);
      if ((int)uVar12 != 0) {
        return uVar12;
      }
      if ((*(uint *)(param_1 + 0xbbc) & 1) != 0) {
        uVar24 = *(uint *)(param_1 + 0x88);
        lVar17 = 8;
        puVar19 = (undefined2 *)(iVar15 + -2);
        iVar22 = uVar27 * 8;
        puVar18 = (undefined2 *)(uVar27 * 0x10 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (undefined2 *)(iVar15 + 0xe);
        puVar18 = (undefined2 *)((iVar22 + uVar24 * 8) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (undefined2 *)(iVar15 + 0x1e);
        puVar18 = (undefined2 *)((uVar24 * 0x10 + iVar22) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (undefined2 *)(iVar15 + 0x2e);
        puVar18 = (undefined2 *)((uVar24 * 0x18 + iVar22) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (undefined2 *)(iVar15 + 0x3e);
        puVar18 = (undefined2 *)((uVar24 * 0x20 + iVar22) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (undefined2 *)(iVar15 + 0x4e);
        puVar18 = (undefined2 *)((uVar24 * 0x28 + iVar22) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (undefined2 *)(iVar15 + 0x5e);
        puVar18 = (undefined2 *)((uVar24 * 0x30 + iVar22) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (undefined2 *)(iVar15 + 0x6e);
        puVar18 = (undefined2 *)
                  ((uVar24 * 0x40 + (uVar24 & 0x1fffffff) * -8 + iVar22) * 2 +
                   *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      (**(code **)(param_1 + 0xc70))
                (uStack00000034,uStack00000034,iVar15,*(undefined4 *)(param_1 + 0xd0),
                 *(undefined4 *)(param_1 + 0x108));
      *(undefined1 *)((int)puVar11 + 0xd) = 0;
    }
    uVar12 = 0;
    *puStack0000001c = uStack_d8 << 0x1f | *puStack0000001c & 0x7fffffff;
  }
  return uVar12;
}

