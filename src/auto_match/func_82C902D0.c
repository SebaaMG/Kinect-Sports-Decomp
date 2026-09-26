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
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_2a0;
extern unsigned int *auStack_3a0;
extern unsigned int *auStack_3e0;
extern unsigned int *auStack_420;
extern unsigned int *auStack_460;
extern unsigned int *auStack_4a0;
extern unsigned int *auStack_4e0;
extern unsigned int *auStack_520;
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C7AA08();
extern int fn_82CB9388();
extern int fn_82CB9450();
extern int fn_82CBA280();
extern int fn_82CBA440();
extern int fn_82CBB580();
extern int fn_82CBBA18();
extern int fn_82CBBB90();
extern int fn_82F691F0();
extern unsigned int iStack_534;
extern unsigned int lbl_820FDB98;
extern unsigned int uStack_52c;
extern unsigned int uStack_53c;
extern unsigned int uStack_540;


/* WARNING: Removing unreachable block (ram,0x82c91288) */
/* WARNING: Removing unreachable block (ram,0x82c91298) */

undefined8
fn_82C902D0(int param_1,undefined8 param_2,undefined8 param_3,uint *param_4,int param_5,
             int param_6,int param_7,longlong param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  short sVar17;
  uint uVar18;
  int *piVar19;
  ulonglong *puVar20;
  byte *pbVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 *puVar24;
  int iVar26;
  undefined8 uVar25;
  undefined1 *puVar27;
  short *psVar28;
  longlong lVar29;
  int iVar30;
  undefined2 *puVar31;
  longlong lVar32;
  ulonglong uVar33;
  undefined4 *puVar34;
  int iVar35;
  int iVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined1 *puVar39;
  longlong lVar40;
  int iVar41;
  longlong lVar42;
  ulonglong uVar43;
  longlong lVar44;
  undefined1 *puVar45;
  bool bVar46;
  int in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined1 *in_stack_0000006c;
  undefined4 in_stack_00000074;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined1 *puStack_538;
  int iStack_534;
  undefined1 *puStack_530;
  undefined4 uStack_52c;
  undefined *puStack_528;
  undefined1 auStack_520 [64];
  undefined1 auStack_4e0 [64];
  undefined1 auStack_4a0 [64];
  undefined1 auStack_460 [64];
  undefined1 auStack_420 [64];
  undefined1 auStack_3e0 [64];
  undefined1 auStack_3a0 [256];
  undefined1 auStack_2a0 [256];
  undefined1 auStack_1a0 [416];
  
  bVar46 = *(int *)(param_1 + 0x14c) != 0;
  uVar18 = *param_4;
  lVar29 = (longlong)(int)(*(uint *)(param_1 + 0x4fb0) + in_stack_00000054) *
           (longlong)*(int *)(param_1 + 0xcc) + (ulonglong)*(uint *)(param_1 + 0x4fb0);
  puStack_528 = *(undefined **)(param_1 + 0x154);
  puStack_530 = (undefined1 *)((uint)*(byte *)(param_4 + 1) * 0x14 + *(int *)(param_1 + 0x19d0));
  iVar30 = *(int *)(param_1 + 0x6ec);
  lVar32 = (longlong)(int)((in_stack_00000054 >> 1) + *(uint *)(param_1 + 0x4fb4)) *
           (longlong)*(int *)(param_1 + 0xd0) + (longlong)((int)param_8 >> 1) +
           (ulonglong)*(uint *)(param_1 + 0x4fb4);
  lVar44 = (ulonglong)*(uint *)(param_1 + 0xecc) + lVar29 + param_8;
  param_8 = (ulonglong)*(uint *)(param_1 + 0xee8) + lVar29 + param_8;
  lVar42 = (ulonglong)*(uint *)(param_1 + 0xed0) + lVar32;
  lVar40 = (ulonglong)*(uint *)(param_1 + 0xed4) + lVar32;
  lVar29 = (ulonglong)*(uint *)(param_1 + 0xeec) + lVar32;
  lVar32 = (ulonglong)*(uint *)(param_1 + 0xef0) + lVar32;
  if (*(int *)(param_1 + 0x14c) != 0) {
    puStack_528 = (undefined *)(uVar18 >> 0x18 & 7);
  }
  if (*(int *)(param_1 + 0x18c) == 0) {
    iStack_534 = param_1 + 0xb64;
  }
  else {
    iStack_534 = ((uVar18 >> 0x16 & 3) + 0x2df) * 4 + param_1;
  }
  uVar18 = uVar18 >> 5 & 7;
  if (uVar18 == 1) {
    fn_82CBBA18(param_1,in_stack_0000005c,in_stack_00000064,*(int *)(param_1 + 0xfb0) == 3,
                      param_2,param_3,&uStack_540,&uStack_53c);
  }
  else {
    if (uVar18 != 2) {
      if ((uVar18 == 4) || (puVar37 = puStack_528, uVar18 == 3)) {
        uStack_53c = in_stack_0000005c;
        uStack_540 = in_stack_00000064;
        if (*(int *)(param_1 + 0x3cb0) == 7) {
          fn_82CB9450();
        }
        else {
          fn_82CB9388(param_1,&uStack_53c,&uStack_540,param_2,param_3);
        }
        if ((*param_4 & 0xe0) == 0x80) {
          param_8 = lVar44;
          lVar32 = lVar40;
          lVar29 = lVar42;
        }
        fn_82CBB580(param_1,param_8,*(undefined4 *)(param_1 + 0xcc),auStack_3a0,0x10,uStack_53c,
                        uStack_540,*(undefined4 *)(param_1 + 0x1cc));
        if (*(int *)(param_1 + 0x56a8) != 0) {
          uStack_53c = in_stack_0000005c;
          uStack_540 = in_stack_00000064;
        }
        fn_82CBBB90(param_1,&uStack_53c,&uStack_540);
        if (*(int *)(param_1 + 0x56a8) != 0) {
          fn_82CBA280(param_1,param_2,param_3,&uStack_53c,&uStack_540);
        }
        fn_82CBA440(param_1,lVar29,*(undefined4 *)(param_1 + 0xd0),auStack_4a0,8,uStack_53c,
                          uStack_540,0);
        fn_82CBA440(param_1,lVar32,*(undefined4 *)(param_1 + 0xd0),auStack_460,8,uStack_53c,
                          uStack_540,0);
        puVar37 = puStack_528;
      }
      goto LAB_82c907d8;
    }
    puStack_538 = in_stack_0000006c;
    uStack_540 = in_stack_0000005c;
    uStack_53c = in_stack_00000064;
    uStack_52c = in_stack_00000074;
  }
  uVar23 = uStack_53c;
  uVar22 = uStack_540;
  if (*(int *)(param_1 + 0x3cb0) == 7) {
    fn_82CB9450();
    fn_82CB9450(param_1,&puStack_538,&uStack_52c,param_2,param_3);
  }
  else {
    fn_82CB9388(param_1,&uStack_540,&uStack_53c,param_2,param_3);
    fn_82CB9388(param_1,&puStack_538,&uStack_52c,param_2,param_3);
  }
  fn_82CBB580(param_1,lVar44,*(undefined4 *)(param_1 + 0xcc),auStack_3a0,0x10,uStack_540,
                  uStack_53c,*(undefined4 *)(param_1 + 0x1cc));
  fn_82CBB580(param_1,param_8,*(undefined4 *)(param_1 + 0xcc),auStack_1a0,0x10,puStack_538,
                  uStack_52c,*(undefined4 *)(param_1 + 0x1cc));
  (**(code **)(param_1 + 0xcac))(auStack_3a0,0x10,auStack_1a0,0x10,auStack_3a0,0x10,0x10,0x10);
  if (*(int *)(param_1 + 0x56a8) != 0) {
    uStack_540 = uVar22;
    uStack_53c = uVar23;
  }
  fn_82CBBB90(param_1,&uStack_540,&uStack_53c);
  fn_82CBBB90(param_1,&puStack_538,&uStack_52c);
  if (*(int *)(param_1 + 0x56a8) != 0) {
    fn_82CBA280(param_1,param_2,param_3,&uStack_540,&uStack_53c);
  }
  fn_82CBA440(param_1,lVar42,*(undefined4 *)(param_1 + 0xd0),auStack_4a0,8,uStack_540,
                    uStack_53c,0);
  fn_82CBA440(param_1,lVar29,*(undefined4 *)(param_1 + 0xd0),auStack_420,8,puStack_538,
                    uStack_52c,0);
  (**(code **)(param_1 + 0xcac))(auStack_4a0,8,auStack_420,8,auStack_4a0,8,8,8);
  fn_82CBA440(param_1,lVar40,*(undefined4 *)(param_1 + 0xd0),auStack_460,8,uStack_540,
                    uStack_53c,0);
  fn_82CBA440(param_1,lVar32,*(undefined4 *)(param_1 + 0xd0),auStack_3e0,8,puStack_538,
                    uStack_52c,0);
  (**(code **)(param_1 + 0xcac))(auStack_460,8,auStack_3e0,8,auStack_460,8,8,8);
  puVar37 = puStack_528;
LAB_82c907d8:
  puVar24 = puStack_530;
  puStack_538 = auStack_3a0;
  puVar38 = &lbl_820FDB98;
  puVar39 = auStack_2a0;
  iVar41 = 0;
  puStack_528 = &lbl_820FDB98;
  do {
    if (*(char *)((int)param_4 + iVar41 + 0xe) == '\0') {
      *(undefined1 *)((int)param_4 + iVar41 + 8) = 0;
      if (iVar41 < 4) {
        iVar26 = 0x10;
        puVar27 = puVar39;
        puVar45 = puStack_538;
      }
      else {
        if (iVar41 == 4) {
          puVar45 = auStack_4a0;
          puVar27 = auStack_520;
        }
        else {
          puVar45 = auStack_460;
          puVar27 = auStack_4e0;
        }
        iVar26 = 8;
      }
      iVar36 = 0;
      lVar32 = 8;
      do {
        iVar35 = 0;
        lVar29 = 8;
        do {
          puVar27[iVar35 + iVar36] = puVar45[iVar35 + iVar36];
          iVar35 = iVar35 + 1;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar32 = lVar32 + -1;
        iVar36 = iVar36 + iVar26;
      } while (lVar32 != 0);
    }
    else {
      if (((*param_4 & 0x10000000) != 0) && (!bVar46)) {
        piVar19 = *(int **)(param_1 + 0xa00);
        puVar20 = *(ulonglong **)(param_1 + 0x54);
        if (piVar19 == (int *)0x0) {
          uVar43 = 0;
          *(undefined4 *)((int)puVar20 + 0x14) = 3;
        }
        else {
          iVar26 = *piVar19;
          sVar17 = *(short *)((int)((*puVar20 >> (0x40 - (ulonglong)*(byte *)(piVar19 + 2) & 0x7f) &
                                    0xffffffff) << 1) + iVar26);
          uVar43 = (ulonglong)sVar17;
          if (sVar17 < 0) {
            fn_82C4E470(puVar20);
            do {
              uVar33 = *puVar20;
              fn_82C4E470(puVar20,1);
              sVar17 = *(short *)((int)(((uVar43 - ((longlong)uVar33 >> 0x3f)) + 0x8000 & 0xffffffff
                                        ) << 1) + iVar26);
              uVar43 = (ulonglong)sVar17;
            } while (sVar17 < 0);
          }
          else {
            iVar26 = *(int *)(puVar20 + 1);
            iVar36 = (int)(uVar43 & 0xf);
            *puVar20 = *puVar20 << (uVar43 & 0xf);
            *(int *)(puVar20 + 1) = iVar26 - iVar36;
            if (iVar26 < iVar36) {
              do {
                pbVar21 = *(byte **)((int)puVar20 + 0xc);
                if (pbVar21 < (byte *)(*(int *)(puVar20 + 2) - 4U)) {
                  bVar6 = *pbVar21;
                  bVar1 = pbVar21[1];
                  bVar2 = pbVar21[2];
                  bVar3 = pbVar21[3];
                  bVar4 = pbVar21[4];
                  bVar5 = pbVar21[5];
                  iVar26 = *(int *)(puVar20 + 1);
                  *(byte **)((int)puVar20 + 0xc) = pbVar21 + 6;
                  *(int *)(puVar20 + 1) = iVar26 + 0x30;
                  *puVar20 = ((((((ulonglong)bVar6 * 0x100 + (ulonglong)bVar1) * 0x100 +
                                (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3) * 0x100 +
                              (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5 <<
                             ((longlong)-iVar26 & 0x7fU)) + *puVar20;
                  goto LAB_82c9092c;
                }
                iVar26 = fn_82C4E3B0(puVar20);
              } while (iVar26 == 1);
              uVar43 = (ulonglong)((int)sVar17 >> 4);
            }
            else {
LAB_82c9092c:
              uVar43 = (ulonglong)((int)sVar17 >> 4);
            }
          }
        }
        if ((*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) || (7 < (uVar43 & 0xffffffff))) {
          return 1;
        }
        puVar37 = *(undefined **)(puVar38 + (int)((uVar43 & 0xffffffff) << 2) + -0x20);
      }
      *(char *)((int)param_4 + iVar41 + 8) = (char)puVar37;
      if (puVar37 == (undefined *)0x0) {
        iVar30 = *(int *)(param_1 + 0x6ec);
        uVar25 = (**(code **)(param_1 + 0xc78))
                           (param_1,iStack_534,*(undefined4 *)(param_1 + 0x72c),0,puVar24);
        if ((int)uVar25 != 0) {
          return uVar25;
        }
        (**(code **)(param_1 + 0xc80))(iVar30,iVar30,8,*(undefined4 *)(param_1 + 0x798));
      }
      else {
        if (puVar37 == (undefined *)0x1) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
        }
        if (puVar37 == (undefined *)0x2) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
        }
        if (puVar37 == (undefined *)0x4) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
        }
      }
      if (*(code **)(param_1 + 0xc80) == fn_82C7AA08) {
        puVar31 = (undefined2 *)(iVar30 + -2);
        puVar34 = (undefined4 *)(iVar30 + -4);
        lVar32 = 0x40;
        do {
          puVar34 = puVar34 + 1;
          puVar31 = puVar31 + 1;
          *puVar31 = (short)*puVar34;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
      }
      bVar46 = false;
      if (iVar41 < 4) {
        iVar26 = 0x10;
        puVar27 = puVar39;
        puVar45 = puStack_538;
      }
      else {
        if (iVar41 == 4) {
          puVar45 = auStack_4a0;
          puVar27 = auStack_520;
        }
        else {
          puVar45 = auStack_460;
          puVar27 = auStack_4e0;
        }
        iVar26 = 8;
      }
      iVar36 = 0;
      lVar32 = 0;
      do {
        lVar29 = 0;
        lVar40 = 2;
        do {
          psVar28 = (short *)((int)((lVar29 + lVar32 & 0xffffffffU) << 1) + iVar30);
          iVar35 = (int)lVar29;
          lVar42 = (ulonglong)(byte)puVar45[iVar35 + iVar36] + (longlong)*psVar28;
          if (lVar42 < 0) {
            lVar42 = 0;
          }
          else if (0xff < (int)lVar42) {
            lVar42 = 0xff;
          }
          sVar17 = psVar28[1];
          puVar27[iVar35] = (char)lVar42;
          lVar42 = (ulonglong)(byte)puVar45[iVar35 + iVar36 + 1] + (longlong)sVar17;
          if (lVar42 < 0) {
            lVar42 = 0;
          }
          else if (0xff < (int)lVar42) {
            lVar42 = 0xff;
          }
          bVar6 = puVar45[iVar35 + iVar36 + 2];
          sVar17 = *(short *)((int)((lVar29 + lVar32 + 2U & 0xffffffff) << 1) + iVar30);
          puVar27[iVar35 + 1] = (char)lVar42;
          lVar42 = (longlong)sVar17 + (ulonglong)bVar6;
          if (lVar42 < 0) {
            lVar42 = 0;
          }
          else if (0xff < (int)lVar42) {
            lVar42 = 0xff;
          }
          puStack_530 = puVar27 + iVar35;
          lVar44 = (longlong)*(short *)((int)((lVar29 + lVar32 + 3 & 0xffffffffU) << 1) + iVar30) +
                   (ulonglong)(byte)puVar45[iVar35 + iVar36 + 3];
          puStack_530[2] = (char)lVar42;
          if (lVar44 < 0) {
            lVar44 = 0;
          }
          else if (0xff < (int)lVar44) {
            lVar44 = 0xff;
          }
          puVar27[iVar35 + 3] = (char)lVar44;
          lVar29 = lVar29 + 4;
          lVar40 = lVar40 + -1;
        } while (lVar40 != 0);
        lVar32 = lVar32 + 8;
        iVar36 = iVar26 + iVar36;
        puVar27 = puVar27 + iVar26;
        puVar38 = puStack_528;
      } while ((int)lVar32 < 0x40);
    }
    if (iVar41 < 4) {
      if (iVar41 == 1) {
        puVar39 = puVar39 + 0x78;
        puStack_538 = puStack_538 + 0x78;
      }
      else {
        puVar39 = puVar39 + 8;
        puStack_538 = puStack_538 + 8;
      }
    }
    iVar41 = iVar41 + 1;
    if (5 < iVar41) {
      iVar30 = 0;
      iVar41 = 0;
      do {
        iVar36 = 0;
        lVar32 = 4;
        iVar26 = iVar41;
        do {
          uVar7 = auStack_2a0[iVar36 + iVar41 + 3];
          uVar8 = auStack_2a0[iVar26 + 1];
          *(undefined1 *)(*(int *)(param_1 + 0xcc) * iVar30 + iVar36 + param_5) =
               auStack_2a0[iVar26];
          uVar9 = auStack_2a0[iVar41 + iVar36 + 2];
          *(undefined1 *)(*(int *)(param_1 + 0xcc) * iVar30 + iVar36 + param_5 + 1) = uVar8;
          *(undefined1 *)(*(int *)(param_1 + 0xcc) * iVar30 + iVar36 + param_5 + 2) = uVar9;
          iVar35 = *(int *)(param_1 + 0xcc) * iVar30 + iVar36;
          iVar36 = iVar36 + 4;
          iVar26 = iVar41 + iVar36;
          *(undefined1 *)(iVar35 + param_5 + 3) = uVar7;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        iVar41 = iVar41 + 0x10;
        iVar30 = iVar30 + 1;
      } while (iVar41 < 0x100);
      iVar30 = 0;
      iVar41 = 0;
      lVar32 = 8;
      do {
        uVar7 = auStack_4e0[iVar41];
        uVar8 = auStack_520[iVar41 + 1];
        uVar9 = auStack_4e0[iVar41 + 1];
        *(undefined1 *)(*(int *)(param_1 + 0xd0) * iVar30 + param_6) = auStack_520[iVar41];
        *(undefined1 *)(*(int *)(param_1 + 0xd0) * iVar30 + param_7) = uVar7;
        uVar7 = auStack_520[iVar41 + 2];
        uVar10 = auStack_4e0[iVar41 + 3];
        uVar11 = auStack_520[iVar41 + 4];
        uVar12 = auStack_4e0[iVar41 + 5];
        uVar13 = auStack_520[iVar41 + 6];
        uVar14 = auStack_4e0[iVar41 + 6];
        *(undefined1 *)(*(int *)(param_1 + 0xd0) * iVar30 + param_6 + 1) = uVar8;
        uVar8 = auStack_4e0[iVar41 + 2];
        uVar15 = auStack_520[iVar41 + 3];
        uVar16 = auStack_4e0[iVar41 + 4];
        *(undefined1 *)(*(int *)(param_1 + 0xd0) * iVar30 + param_7 + 1) = uVar9;
        uVar9 = auStack_520[iVar41 + 5];
        *(undefined1 *)(*(int *)(param_1 + 0xd0) * iVar30 + param_6 + 2) = uVar7;
        *(undefined1 *)(*(int *)(param_1 + 0xd0) * iVar30 + param_7 + 2) = uVar8;
        *(undefined1 *)(*(int *)(param_1 + 0xd0) * iVar30 + param_6 + 3) = uVar15;
        *(undefined1 *)(*(int *)(param_1 + 0xd0) * iVar30 + param_7 + 3) = uVar10;
        *(undefined1 *)(*(int *)(param_1 + 0xd0) * iVar30 + param_6 + 4) = uVar11;
        *(undefined1 *)(*(int *)(param_1 + 0xd0) * iVar30 + param_7 + 4) = uVar16;
        *(undefined1 *)(*(int *)(param_1 + 0xd0) * iVar30 + param_6 + 5) = uVar9;
        *(undefined1 *)(*(int *)(param_1 + 0xd0) * iVar30 + param_7 + 5) = uVar12;
        *(undefined1 *)(*(int *)(param_1 + 0xd0) * iVar30 + param_6 + 6) = uVar13;
        *(undefined1 *)(*(int *)(param_1 + 0xd0) * iVar30 + param_7 + 6) = uVar14;
        iVar26 = iVar41 + 7;
        uVar7 = auStack_4e0[iVar41 + 7];
        iVar41 = iVar41 + 8;
        *(undefined1 *)(*(int *)(param_1 + 0xd0) * iVar30 + param_6 + 7) = auStack_520[iVar26];
        iVar26 = *(int *)(param_1 + 0xd0) * iVar30;
        iVar30 = iVar30 + 1;
        *(undefined1 *)(iVar26 + param_7 + 7) = uVar7;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      return 0;
    }
  } while( true );
}

