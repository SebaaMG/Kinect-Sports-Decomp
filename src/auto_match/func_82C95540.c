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
extern int fn_82C93890();
extern int fn_82C93DE0();
extern int fn_82C94500();
extern int fn_82C948D8();
extern int fn_82CB2190();
extern int fn_82F691F0();
extern unsigned int *iStack00000044;
extern unsigned int iStack_d4;
extern unsigned int iStack_dc;
extern unsigned int lbl_820FDC70;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


undefined8
fn_82C95540(int param_1,uint *param_2,longlong param_3,undefined4 param_4,undefined4 param_5,
             uint param_6,int param_7,int param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  short sVar8;
  int *piVar9;
  ulonglong *puVar10;
  byte *pbVar11;
  uint uVar12;
  uint *puVar13;
  int iVar15;
  undefined8 uVar14;
  int iVar16;
  int iVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  uint uVar22;
  uint uVar23;
  undefined4 *puVar24;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  undefined1 *puVar31;
  int iVar32;
  int iVar33;
  bool bVar34;
  longlong lVar35;
  longlong lVar36;
  uint *puStack0000001c;
  undefined4 uStack0000002c;
  undefined4 uStack00000034;
  uint uStack0000003c;
  int iStack00000044;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int iStack_dc;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined *puStack_c8;
  undefined1 auStack_c0 [192];
  
  bVar34 = *(int *)(param_1 + 0x14c) != 0;
  uVar25 = *(uint *)(param_1 + 0x154);
  iVar17 = (uint)*(byte *)(param_2 + 1) * 0x14 + *(int *)(param_1 + 0x19d0);
  iStack_d4 = 1;
  if (*(int *)(param_1 + 0x14c) != 0) {
    uVar25 = *param_2 >> 0x18 & 7;
  }
  if (*(int *)(param_1 + 0x18c) == 0) {
    iStack_dc = param_1 + 0xb64;
    iVar16 = param_1 + 0xb70;
  }
  else {
    uVar22 = *param_2 >> 0x16 & 3;
    iStack_dc = (uVar22 + 0x2df) * 4 + param_1;
    iVar16 = (uVar22 + 0x2e2) * 4 + param_1;
  }
  iVar29 = *(int *)(param_1 + 0x6ec);
  lVar28 = (longlong)(int)((in_stack_00000054 >> 1) + *(uint *)(param_1 + 0x4fb0)) *
           (longlong)*(int *)(param_1 + 0xcc) + (ulonglong)*(uint *)(param_1 + 0xecc) +
           (longlong)(param_8 >> 1) + (ulonglong)*(uint *)(param_1 + 0x4fb0);
  puStack_c8 = &lbl_820FDC70;
  puStack0000001c = param_2;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  iStack00000044 = param_7;
  uVar22 = 0;
  do {
    uVar26 = uVar22;
    uVar22 = uVar26 & 1;
    iVar33 = param_6 * 2 + uVar22;
    iVar30 = ((int)uVar26 >> 1 & 1U) + param_7 * 2;
    cVar7 = *(char *)((int)param_2 + uVar26 + 0xe);
    uVar23 = *(uint *)(uVar26 * 4 + *(int *)(param_1 + 0x164)) >> 2 & 1;
    if (((((iVar33 == 0) && (iVar30 == 0)) && (uVar23 == 0)) && (cVar7 == '\0')) ||
       (iStack_d4 = 0, uVar23 == 0)) {
      if (cVar7 == '\0') {
        fn_82C93890(param_1,param_3,0,iVar33,iVar30,lVar28);
        *(undefined1 *)((int)puStack0000001c + uVar26 + 8) = 0;
      }
      else {
        if (((*puStack0000001c & 0x10000000) != 0) && (!bVar34)) {
          piVar9 = *(int **)(param_1 + 0xa00);
          puVar10 = *(ulonglong **)(param_1 + 0x54);
          if (piVar9 == (int *)0x0) {
            uVar20 = 0;
            *(undefined4 *)((int)puVar10 + 0x14) = 3;
          }
          else {
            iVar15 = *piVar9;
            sVar8 = *(short *)((int)((*puVar10 >> (0x40 - (ulonglong)*(byte *)(piVar9 + 2) & 0x7f) &
                                     0xffffffff) << 1) + iVar15);
            uVar20 = (ulonglong)sVar8;
            if (sVar8 < 0) {
              fn_82C4E470(puVar10);
              do {
                uVar21 = *puVar10;
                fn_82C4E470(puVar10,1);
                sVar8 = *(short *)((int)(((uVar20 - ((longlong)uVar21 >> 0x3f)) + 0x8000 &
                                         0xffffffff) << 1) + iVar15);
                uVar20 = (ulonglong)sVar8;
              } while (sVar8 < 0);
            }
            else {
              iVar15 = *(int *)(puVar10 + 1);
              iVar32 = (int)(uVar20 & 0xf);
              *puVar10 = *puVar10 << (uVar20 & 0xf);
              *(int *)(puVar10 + 1) = iVar15 - iVar32;
              if (iVar15 < iVar32) {
                do {
                  pbVar11 = *(byte **)((int)puVar10 + 0xc);
                  if (pbVar11 < (byte *)(*(int *)(puVar10 + 2) - 4U)) {
                    bVar1 = *pbVar11;
                    bVar2 = pbVar11[1];
                    bVar3 = pbVar11[2];
                    bVar4 = pbVar11[3];
                    bVar5 = pbVar11[4];
                    bVar6 = pbVar11[5];
                    iVar15 = *(int *)(puVar10 + 1);
                    *(byte **)((int)puVar10 + 0xc) = pbVar11 + 6;
                    *(int *)(puVar10 + 1) = iVar15 + 0x30;
                    *puVar10 = ((((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 +
                                  (ulonglong)bVar3) * 0x100 + (ulonglong)bVar4) * 0x100 +
                                (ulonglong)bVar5) * 0x100 + (ulonglong)bVar6 <<
                               ((longlong)-iVar15 & 0x7fU)) + *puVar10;
                    goto LAB_82c95a4c;
                  }
                  iVar15 = fn_82C4E3B0(puVar10);
                } while (iVar15 == 1);
                uVar20 = (ulonglong)((int)sVar8 >> 4);
              }
              else {
LAB_82c95a4c:
                uVar20 = (ulonglong)((int)sVar8 >> 4);
              }
            }
          }
          if ((*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) || (7 < (uVar20 & 0xffffffff)))
          goto LAB_82c96550;
          uVar25 = *(uint *)(puStack_c8 + (int)((uVar20 & 0xffffffff) << 2) + -0x20);
        }
        *(char *)((int)puStack0000001c + uVar26 + 8) = (char)uVar25;
        if (uVar25 == 0) {
          iVar29 = *(int *)(param_1 + 0x6ec);
          uVar14 = (**(code **)(param_1 + 0xc78))
                             (param_1,iStack_dc,*(undefined4 *)(param_1 + 0x72c),0,iVar17);
          if ((int)uVar14 != 0) {
            return uVar14;
          }
          (**(code **)(param_1 + 0xc80))(iVar29,iVar29,8,*(undefined4 *)(param_1 + 0x798));
        }
        else {
          if (uVar25 == 1) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
          }
          if (uVar25 == 2) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
          }
          if (uVar25 == 4) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
          }
        }
        if (*(code **)(param_1 + 0xc80) == fn_82C7AA08) {
          puVar19 = (undefined2 *)(iVar29 + -2);
          puVar24 = (undefined4 *)(iVar29 + -4);
          lVar35 = 0x40;
          do {
            puVar24 = puVar24 + 1;
            puVar19 = puVar19 + 1;
            *puVar19 = (short)*puVar24;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
        }
        fn_82C93890(param_1,param_3,iVar29,iVar33,iVar30,lVar28);
        bVar34 = false;
      }
    }
    else {
      iVar29 = *(int *)(param_1 + 0x6ec);
      iVar32 = (*(int *)(param_1 + 0x88) * iVar30 * 2 + iVar33) * 0x20 + *(int *)(param_1 + 0x1d0);
      puVar31 = (undefined1 *)0x0;
      iVar15 = fn_82C94500(param_1,puStack0000001c,iVar32,uVar26,iVar33,iVar30,&uStack_d0,
                             &uStack_cc);
      puVar27 = puStack0000001c;
      if (iVar15 != 0) {
        puVar31 = auStack_c0;
      }
      uVar14 = fn_82CB2190(param_1,iVar16,uVar26,cVar7,puVar31,uStack_cc,uStack_d0,iVar32);
      if ((int)uVar14 != 0) {
        return uVar14;
      }
      fn_82C93890(param_1,param_3,iVar29,iVar33,iVar30,lVar28);
      *(undefined1 *)((int)puVar27 + uVar26 + 8) = 0;
      if ((*(uint *)(param_1 + 0xbbc) & 1) != 0) {
        uVar23 = *(uint *)(param_1 + 0x88);
        lVar35 = 8;
        iVar15 = ((uVar26 & 2) + 0x2f2) * 4;
        iVar30 = iVar33 * 8;
        puVar19 = (undefined2 *)(iVar29 + -2);
        puVar18 = (undefined2 *)(iVar33 * 0x10 + *(int *)(iVar15 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
        lVar35 = 8;
        puVar19 = (undefined2 *)(iVar29 + 0xe);
        puVar18 = (undefined2 *)((iVar30 + uVar23 * 0x10) * 2 + *(int *)(iVar15 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
        lVar35 = 8;
        puVar19 = (undefined2 *)(iVar29 + 0x1e);
        puVar18 = (undefined2 *)((uVar23 * 0x20 + iVar30) * 2 + *(int *)(iVar15 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
        lVar35 = 8;
        puVar19 = (undefined2 *)(iVar29 + 0x2e);
        puVar18 = (undefined2 *)((uVar23 * 0x30 + iVar30) * 2 + *(int *)(iVar15 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
        lVar35 = 8;
        puVar19 = (undefined2 *)(iVar29 + 0x3e);
        puVar18 = (undefined2 *)((uVar23 * 0x40 + iVar30) * 2 + *(int *)(iVar15 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
        lVar35 = 8;
        puVar19 = (undefined2 *)(iVar29 + 0x4e);
        puVar18 = (undefined2 *)((uVar23 * 0x50 + iVar30) * 2 + *(int *)(iVar15 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
        lVar35 = 8;
        puVar19 = (undefined2 *)(iVar29 + 0x5e);
        puVar18 = (undefined2 *)((uVar23 * 0x60 + iVar30) * 2 + *(int *)(iVar15 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
        lVar35 = 8;
        puVar19 = (undefined2 *)(iVar29 + 0x6e);
        puVar18 = (undefined2 *)
                  ((uVar23 * 0x80 + (uVar23 & 0xfffffff) * -0x10 + iVar30) * 2 +
                   *(int *)(iVar15 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
      }
    }
    iVar30 = iStack00000044;
    uVar23 = uStack0000003c;
    puVar27 = puStack0000001c;
    if (uVar22 == 0) {
      uVar20 = 8;
    }
    else {
      uVar20 = (ulonglong)*(uint *)(param_1 + 0xec);
    }
    param_3 = uVar20 + param_3;
    if (uVar22 == 0) {
      uVar20 = 8;
    }
    else {
      uVar20 = (ulonglong)*(uint *)(param_1 + 0xec);
    }
    uVar22 = uVar26 + 1;
    lVar28 = uVar20 + lVar28;
  } while ((int)uVar22 < 4);
  iVar16 = *(int *)(param_1 + 0x88) * iStack00000044 + uStack0000003c;
  lVar28 = (longlong)(int)((in_stack_00000064 >> 1) + *(uint *)(param_1 + 0x4fb4)) *
           (longlong)*(int *)(param_1 + 0xd0) + (longlong)(in_stack_0000005c >> 1) +
           (ulonglong)*(uint *)(param_1 + 0x4fb4);
  lVar35 = (ulonglong)*(uint *)(param_1 + 0xed0) + lVar28;
  lVar28 = (ulonglong)*(uint *)(param_1 + 0xed4) + lVar28;
  uVar12 = (uint)LZCOUNT(*(ushort *)(iVar16 * 2 + *(int *)(param_1 + 0x6f8)) - 0x4000) >> 5;
  if (uVar12 == 0) {
    if (*(char *)((int)param_2 + 0x12) == '\0') {
      fn_82C93DE0(param_1,uStack0000002c,0,uStack0000003c,iStack00000044,lVar35);
      *(undefined1 *)(puStack0000001c + 3) = 0;
      puVar27 = puStack0000001c;
      goto LAB_82c96ea0;
    }
    uVar20 = 0;
    iStack_d4 = 0;
    if (((*puStack0000001c & 0x10000000) == 0) || (bVar34)) {
LAB_82c96708:
      *(char *)(puStack0000001c + 3) = (char)uVar25;
      if (uVar25 == 0) {
        iVar29 = *(int *)(param_1 + 0x6ec);
        uVar14 = (**(code **)(param_1 + 0xc78))
                           (param_1,iStack_dc,*(undefined4 *)(param_1 + 0x72c),0,iVar17);
        if ((int)uVar14 != 0) {
          return uVar14;
        }
        (**(code **)(param_1 + 0xc80))(iVar29,iVar29,8,*(undefined4 *)(param_1 + 0x798));
      }
      else {
        if (uVar25 == 1) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
        }
        if (uVar25 == 2) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
        }
        if (uVar25 == 4) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
        }
      }
      iVar30 = iStack00000044;
      uVar23 = uStack0000003c;
      if (*(code **)(param_1 + 0xc80) == fn_82C7AA08) {
        puVar19 = (undefined2 *)(iVar29 + -2);
        puVar24 = (undefined4 *)(iVar29 + -4);
        lVar36 = 0x40;
        do {
          puVar24 = puVar24 + 1;
          puVar19 = puVar19 + 1;
          *puVar19 = (short)*puVar24;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
      }
      fn_82C93DE0(param_1,uStack0000002c,iVar29,uStack0000003c,iStack00000044,lVar35);
      bVar34 = false;
      puVar27 = puStack0000001c;
      goto LAB_82c96ea0;
    }
    piVar9 = *(int **)(param_1 + 0xa00);
    puVar10 = *(ulonglong **)(param_1 + 0x54);
    if (piVar9 == (int *)0x0) {
      *(undefined4 *)((int)puVar10 + 0x14) = 3;
    }
    else {
      iVar16 = *piVar9;
      sVar8 = *(short *)((int)((*puVar10 >> (0x40 - (ulonglong)*(byte *)(piVar9 + 2) & 0x7f) &
                               0xffffffff) << 1) + iVar16);
      uVar20 = (ulonglong)sVar8;
      if (sVar8 < 0) {
        fn_82C4E470(puVar10);
        do {
          uVar21 = *puVar10;
          fn_82C4E470(puVar10,1);
          sVar8 = *(short *)((int)(((uVar20 - ((longlong)uVar21 >> 0x3f)) + 0x8000 & 0xffffffff) <<
                                  1) + iVar16);
          uVar20 = (ulonglong)sVar8;
        } while (sVar8 < 0);
      }
      else {
        iVar16 = *(int *)(puVar10 + 1);
        iVar30 = (int)(uVar20 & 0xf);
        *puVar10 = *puVar10 << (uVar20 & 0xf);
        *(int *)(puVar10 + 1) = iVar16 - iVar30;
        if (iVar16 < iVar30) {
          do {
            pbVar11 = *(byte **)((int)puVar10 + 0xc);
            if (pbVar11 < (byte *)(*(int *)(puVar10 + 2) - 4U)) {
              bVar1 = *pbVar11;
              bVar2 = pbVar11[1];
              bVar3 = pbVar11[2];
              bVar4 = pbVar11[3];
              bVar5 = pbVar11[4];
              bVar6 = pbVar11[5];
              iVar16 = *(int *)(puVar10 + 1);
              *(byte **)((int)puVar10 + 0xc) = pbVar11 + 6;
              *(int *)(puVar10 + 1) = iVar16 + 0x30;
              *puVar10 = ((((((ulonglong)bVar2 + (ulonglong)bVar1 * 0x100) * 0x100 +
                            (ulonglong)bVar3) * 0x100 + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5
                          ) * 0x100 + (ulonglong)bVar6 << ((longlong)-iVar16 & 0x7fU)) + *puVar10;
              goto LAB_82c96690;
            }
            iVar16 = fn_82C4E3B0(puVar10);
          } while (iVar16 == 1);
          uVar20 = (ulonglong)((int)sVar8 >> 4);
        }
        else {
LAB_82c96690:
          uVar20 = (ulonglong)((int)sVar8 >> 4);
        }
      }
    }
    if ((*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) && ((uVar20 & 0xffffffff) < 8)) {
      uVar25 = *(uint *)(puStack_c8 + (int)((uVar20 & 0xffffffff) << 2) + -0x20);
      goto LAB_82c96708;
    }
LAB_82c96550:
    uVar14 = 1;
  }
  else {
    iVar33 = iVar16 * 0x20 + *(int *)(param_1 + 0x1d4);
    puVar31 = (undefined1 *)0x0;
    iVar16 = fn_82C948D8(param_1,puStack0000001c,iVar33,uStack0000003c,iStack00000044,&uStack_d0,
                           &uStack_cc,auStack_c0);
    if (iVar16 != 0) {
      puVar31 = auStack_c0;
    }
    iVar29 = *(int *)(param_1 + 0x6ec);
    iStack_d4 = 0;
    uVar14 = fn_82CB2190(param_1,iStack_dc,uVar22,*(undefined1 *)((int)param_2 + 0x12),puVar31
                               ,uStack_cc,uStack_d0,iVar33);
    if ((int)uVar14 != 0) {
      return uVar14;
    }
    fn_82C93DE0(param_1,uStack0000002c,iVar29,uVar23,iVar30,lVar35);
    *(undefined1 *)(puVar27 + 3) = 0;
    if ((*(uint *)(param_1 + 0xbbc) & 1) != 0) {
      uVar22 = *(uint *)(param_1 + 0x88);
      lVar35 = 8;
      puVar19 = (undefined2 *)(iVar29 + -2);
      iVar16 = uVar23 * 8;
      puVar18 = (undefined2 *)(uVar23 * 0x10 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
      lVar35 = 8;
      puVar19 = (undefined2 *)(iVar29 + 0xe);
      puVar18 = (undefined2 *)((iVar16 + uVar22 * 8) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
      lVar35 = 8;
      puVar19 = (undefined2 *)(iVar29 + 0x1e);
      puVar18 = (undefined2 *)((uVar22 * 0x10 + iVar16) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
      lVar35 = 8;
      puVar19 = (undefined2 *)(iVar29 + 0x2e);
      puVar18 = (undefined2 *)((uVar22 * 0x18 + iVar16) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
      lVar35 = 8;
      puVar19 = (undefined2 *)(iVar29 + 0x3e);
      puVar18 = (undefined2 *)((uVar22 * 0x20 + iVar16) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
      lVar35 = 8;
      puVar19 = (undefined2 *)(iVar29 + 0x4e);
      puVar18 = (undefined2 *)((uVar22 * 0x28 + iVar16) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
      lVar35 = 8;
      puVar19 = (undefined2 *)(iVar29 + 0x5e);
      puVar18 = (undefined2 *)((uVar22 * 0x30 + iVar16) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
      lVar35 = 8;
      puVar19 = (undefined2 *)(iVar29 + 0x6e);
      puVar18 = (undefined2 *)
                ((uVar22 * 0x40 + (uVar22 & 0x1fffffff) * -8 + iVar16) * 2 +
                 *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
    }
LAB_82c96ea0:
    iVar16 = iStack00000044;
    puVar13 = puStack0000001c;
    if (uVar12 == 0) {
      if (*(char *)((int)param_2 + 0x13) == '\0') {
        fn_82C93DE0(param_1,uStack00000034,0,uVar23,iVar30,lVar28);
        *(undefined1 *)((int)puVar27 + 0xd) = 0;
      }
      else {
        iStack_d4 = 0;
        if (((*puVar27 & 0x10000000) != 0) && (!bVar34)) {
          piVar9 = *(int **)(param_1 + 0xa00);
          puVar10 = *(ulonglong **)(param_1 + 0x54);
          if (piVar9 == (int *)0x0) {
            uVar20 = 0;
            *(undefined4 *)((int)puVar10 + 0x14) = 3;
          }
          else {
            iVar16 = *piVar9;
            sVar8 = *(short *)((int)((*puVar10 >> (0x40 - (ulonglong)*(byte *)(piVar9 + 2) & 0x7f) &
                                     0xffffffff) << 1) + iVar16);
            uVar20 = (ulonglong)sVar8;
            if (sVar8 < 0) {
              fn_82C4E470(puVar10);
              do {
                uVar21 = *puVar10;
                fn_82C4E470(puVar10,1);
                sVar8 = *(short *)((int)(((uVar20 - ((longlong)uVar21 >> 0x3f)) + 0x8000 &
                                         0xffffffff) << 1) + iVar16);
                uVar20 = (ulonglong)sVar8;
                puVar27 = puStack0000001c;
              } while (sVar8 < 0);
            }
            else {
              iVar16 = *(int *)(puVar10 + 1);
              iVar30 = (int)(uVar20 & 0xf);
              *puVar10 = *puVar10 << (uVar20 & 0xf);
              *(int *)(puVar10 + 1) = iVar16 - iVar30;
              if (iVar16 < iVar30) {
                do {
                  pbVar11 = *(byte **)((int)puVar10 + 0xc);
                  if (pbVar11 < (byte *)(*(int *)(puVar10 + 2) - 4U)) {
                    bVar1 = *pbVar11;
                    bVar2 = pbVar11[1];
                    bVar3 = pbVar11[2];
                    bVar4 = pbVar11[3];
                    bVar5 = pbVar11[4];
                    bVar6 = pbVar11[5];
                    iVar16 = *(int *)(puVar10 + 1);
                    *(byte **)((int)puVar10 + 0xc) = pbVar11 + 6;
                    *(int *)(puVar10 + 1) = iVar16 + 0x30;
                    *puVar10 = ((((((ulonglong)bVar2 + (ulonglong)bVar1 * 0x100) * 0x100 +
                                  (ulonglong)bVar3) * 0x100 + (ulonglong)bVar4) * 0x100 +
                                (ulonglong)bVar5) * 0x100 + (ulonglong)bVar6 <<
                               ((longlong)-iVar16 & 0x7fU)) + *puVar10;
                    goto LAB_82c9724c;
                  }
                  iVar16 = fn_82C4E3B0(puVar10);
                } while (iVar16 == 1);
                uVar20 = (ulonglong)((int)sVar8 >> 4);
                puVar27 = puStack0000001c;
              }
              else {
LAB_82c9724c:
                uVar20 = (ulonglong)((int)sVar8 >> 4);
                puVar27 = puStack0000001c;
              }
            }
          }
          if ((*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) || (7 < (uVar20 & 0xffffffff)))
          goto LAB_82c96550;
          uVar25 = *(uint *)(puStack_c8 + (int)((uVar20 & 0xffffffff) << 2) + -0x20);
        }
        *(char *)((int)puVar27 + 0xd) = (char)uVar25;
        if (uVar25 == 0) {
          iVar29 = *(int *)(param_1 + 0x6ec);
          uVar14 = (**(code **)(param_1 + 0xc78))
                             (param_1,iStack_dc,*(undefined4 *)(param_1 + 0x72c),0,iVar17);
          if ((int)uVar14 != 0) {
            return uVar14;
          }
          (**(code **)(param_1 + 0xc80))(iVar29,iVar29,8,*(undefined4 *)(param_1 + 0x798));
        }
        else {
          if (uVar25 == 1) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
          }
          if (uVar25 == 2) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
          }
          if (uVar25 == 4) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
          }
        }
        if (*(code **)(param_1 + 0xc80) == fn_82C7AA08) {
          puVar19 = (undefined2 *)(iVar29 + -2);
          puVar24 = (undefined4 *)(iVar29 + -4);
          lVar35 = 0x40;
          do {
            puVar24 = puVar24 + 1;
            puVar19 = puVar19 + 1;
            *puVar19 = (short)*puVar24;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
        }
        fn_82C93DE0(param_1,uStack00000034,iVar29,uStack0000003c,iStack00000044,lVar28);
      }
    }
    else {
      uVar20 = (ulonglong)uStack0000003c;
      lVar35 = ((longlong)*(int *)(param_1 + 0x88) * (longlong)iStack00000044 + uVar20 & 0x7ffffff)
               * 0x20 + (ulonglong)*(uint *)(param_1 + 0x1d8);
      puVar31 = (undefined1 *)0x0;
      iVar17 = fn_82C948D8(param_1,puStack0000001c,lVar35,uVar20,iStack00000044,&uStack_d0,
                             &uStack_cc,auStack_c0);
      if (iVar17 != 0) {
        puVar31 = auStack_c0;
      }
      iVar17 = *(int *)(param_1 + 0x6ec);
      iStack_d4 = 0;
      uVar14 = fn_82CB2190(param_1,iStack_dc,uVar26 + 2,*(undefined1 *)((int)param_2 + 0x13),
                                 puVar31,uStack_cc,uStack_d0,lVar35);
      if ((int)uVar14 != 0) {
        return uVar14;
      }
      fn_82C93DE0(param_1,uStack00000034,iVar17,uVar20,iVar16,lVar28);
      *(undefined1 *)((int)puVar13 + 0xd) = 0;
      if ((*(uint *)(param_1 + 0xbbc) & 1) != 0) {
        lVar28 = 8;
        uVar25 = *(uint *)(param_1 + 0x88);
        iVar16 = uStack0000003c * 8;
        puVar19 = (undefined2 *)(iVar17 + -2);
        puVar18 = (undefined2 *)(uStack0000003c * 0x10 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 8;
        puVar19 = (undefined2 *)(iVar17 + 0xe);
        puVar18 = (undefined2 *)((iVar16 + uVar25 * 8) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 8;
        puVar19 = (undefined2 *)(iVar17 + 0x1e);
        puVar18 = (undefined2 *)((uVar25 * 0x10 + iVar16) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 8;
        puVar19 = (undefined2 *)(iVar17 + 0x2e);
        puVar18 = (undefined2 *)((uVar25 * 0x18 + iVar16) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 8;
        puVar19 = (undefined2 *)(iVar17 + 0x3e);
        puVar18 = (undefined2 *)((uVar25 * 0x20 + iVar16) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 8;
        puVar19 = (undefined2 *)(iVar17 + 0x4e);
        puVar18 = (undefined2 *)((uVar25 * 0x28 + iVar16) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 8;
        puVar19 = (undefined2 *)(iVar17 + 0x5e);
        puVar18 = (undefined2 *)((uVar25 * 0x30 + iVar16) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 8;
        puVar19 = (undefined2 *)(iVar17 + 0x6e);
        puVar18 = (undefined2 *)
                  ((uVar25 * 0x40 + (uVar25 & 0x1fffffff) * -8 + iVar16) * 2 +
                   *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
      }
    }
    uVar14 = 0;
    *puStack0000001c = iStack_d4 << 0x1f | *puStack0000001c & 0x7fffffff;
  }
  return uVar14;
}

