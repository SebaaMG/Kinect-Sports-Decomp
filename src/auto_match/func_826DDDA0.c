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
extern unsigned int *auStack_c4;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_e4;
extern int fn_8267BE38();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_8267C8D8();
extern int fn_8267CB10();
extern int fn_8267CF60();
extern int fn_8267D9C0();
extern int fn_82687270();
extern int fn_82687F98();
extern int fn_8268B610();
extern int fn_8268BEA8();
extern int fn_8268C750();
extern int fn_826D6310();
extern int fn_826D6370();
extern int fn_826D65B8();
extern int fn_826D6630();
extern int fn_826D7220();
extern int fn_826D72C8();
extern int fn_826D94A8();
extern int fn_826DD3D0();
extern int fn_826DD6F8();
extern int fn_826E5AE8();
extern int fn_826F30F0();
extern int fn_826F3210();
extern int fn_826F5758();
extern int fn_8273D588();
extern int fn_82770FE8();
extern unsigned int iStack_104;
extern unsigned int iStack_d4;
extern unsigned int iStack_ec;
extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_8200C584;
extern unsigned int uStack_100;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_e8;
extern unsigned int uStack_fc;
extern U64 storeWordConditionalIndexed();


uint fn_826DDDA0(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  bool bVar10;
  int iVar12;
  ulonglong uVar11;
  char cVar16;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  uint *puVar17;
  char *pcVar18;
  char *pcVar20;
  undefined8 uVar19;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  char in_RESERVE;
  byte bVar27;
  int aiStack_110 [2];
  int *piStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int aiStack_f8 [2];
  undefined **ppuStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  undefined1 auStack_e4 [4];
  undefined1 auStack_e0 [8];
  undefined4 uStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c4 [4];
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  
  iVar21 = *(int *)(param_1 + 0x20);
  if (iVar21 == 0) {
    return 3;
  }
  uVar24 = *(uint *)(iVar21 + 0x7c) & 0xf;
  if (uVar24 != 1) {
    if (uVar24 != 0) {
      return uVar24;
    }
    uVar24 = *(uint *)(iVar21 + 0x7c);
    lVar25 = (ulonglong)*(uint *)(iVar21 + 0x80) + 8;
    fn_8267C8D8(lVar25);
    *(uint *)(iVar21 + 0x7c) = uVar24 & 0xfffffff0 | 1;
    fn_8267CB10((ulonglong)*(uint *)(iVar21 + 0x80) + 0x1c);
    fn_8267D9C0(lVar25);
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar21 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x20) + 0x88);
  }
  else {
    iVar21 = *(int *)(*(int *)(param_1 + 0x14) + 0x20);
  }
  sync(1);
  if (iVar21 == 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 0x20);
    lVar25 = (ulonglong)*(uint *)(iVar3 + 0x84) + 8;
    fn_8267C8D8(lVar25);
    while( true ) {
      if (*(int *)(param_1 + 0x14) == 0) {
        iVar21 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x20) + 0x88);
      }
      else {
        iVar21 = *(int *)(*(int *)(param_1 + 0x14) + 0x20);
      }
      sync(1);
      if (((iVar21 != 0) || (*(int *)(iVar3 + 0x74) != 1)) ||
         (*(char *)(*(int *)(param_1 + 0x20) + 0x8c) != '\0')) break;
      fn_8267CF60((ulonglong)*(uint *)(iVar3 + 0x84) + 0x1c,(ulonglong)*(uint *)(iVar3 + 0x84) + 8,
                   0xffffffffffffffff);
    }
    if (*(int *)(iVar3 + 0x74) == 3) {
      *(undefined1 *)(*(int *)(param_1 + 0x20) + 0x8c) = 1;
    }
    fn_8267D9C0(lVar25);
    if (iVar21 == 0) goto LAB_826de7f8;
  }
  if (*(char *)(*(int *)(param_1 + 0x20) + 0x8c) == '\0') {
    *(int *)(param_1 + 0x14) = iVar21;
    uVar24 = *(uint *)(*(int *)(param_1 + 0x20) + 0x14);
    bVar1 = (uVar24 & 0x100000) == 0;
    bVar27 = bVar1 << 1;
    iVar3 = *(int *)(param_1 + 0x10);
    if (bVar1) {
      uVar23 = 0;
      puVar4 = *(undefined4 **)(iVar21 + 0x14);
      if (*(int *)(iVar21 + 0xc) != 0) {
        do {
          puVar17 = puVar4 + 3;
          uVar11 = (ulonglong)*(uint *)(puVar4[3] & 0xfffffffc) & 0x7fffffff;
          if ((uVar11 < 0xe) ||
             (iVar12 = thunk_FUN_82f65ac0(((ulonglong)(uint)puVar4[3] & 0xfffffffc) + uVar11 + -6,
                                          0xffffffff8200c730), iVar12 != 0)) {
LAB_826ddffc:
            uVar11 = fn_826F5758(iVar3);
            iVar12 = *(int *)(param_1 + 0x2c);
            uVar26 = uVar24 | 1;
            uStack_100 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10);
            uStack_fc = 0;
            if (iVar12 == 0) {
              *(undefined4 **)(param_1 + 0x2c) = &uStack_100;
            }
            else {
              while (piVar14 = (int *)(iVar12 + 4), *piVar14 != 0) {
                iVar12 = *piVar14;
              }
              *piVar14 = (int)&uStack_100;
            }
            if (*(char *)(param_1 + 0x28) == '\0') {
LAB_826de138:
              uStack_c8 = 1;
              fn_8268C750(auStack_c4,puVar17);
              fn_8268C750(auStack_c0,iVar3 + 0x40);
              iVar12 = fn_826E5AE8(uVar11,&uStack_c8,uVar26,*(undefined4 *)(param_1 + 0x2c),0)
              ;
              fn_826D7220(&uStack_c8);
            }
            else {
              uVar9 = (ulonglong)*(uint *)(*puVar17 & 0xfffffffc) & 0x7fffffff;
              if ((uVar9 < 5) ||
                 (iVar12 = thunk_FUN_82f65ac0(((ulonglong)*puVar17 & 0xfffffffc) + uVar9 + 4,
                                              0xffffffff8200c740), iVar12 != 0)) goto LAB_826de138;
              uStack_e8 = 1;
              fn_8268C750(auStack_e4,puVar17);
              fn_8268C750(auStack_e0,iVar3 + 0x40);
              fn_8268BEA8(auStack_e4);
              fn_8268B610(auStack_e4,(uint *)(*puVar17 & 0xfffffffc) + 2,
                                ((ulonglong)*(uint *)(*puVar17 & 0xfffffffc) & 0x7fffffff) - 4);
              fn_8268B610(auStack_e4,0xffffffff8200c748,0xffffffffffffffff);
              iVar12 = fn_826E5AE8(uVar11,&uStack_e8,uVar26,*(undefined4 *)(param_1 + 0x2c),0)
              ;
              fn_826D7220(&uStack_e8);
              if (iVar12 == 0) goto LAB_826de138;
            }
            if (*(undefined4 **)(param_1 + 0x2c) == &uStack_100) {
              *(undefined4 *)(param_1 + 0x2c) = 0;
            }
            else {
              piVar14 = *(undefined4 **)(param_1 + 0x2c) + 1;
              iVar22 = *piVar14;
              while (iVar22 != 0) {
                puVar5 = (undefined4 *)*piVar14;
                if (puVar5 == &uStack_100) {
                  *piVar14 = puVar5[1];
                  break;
                }
                piVar14 = puVar5 + 1;
                iVar22 = puVar5[1];
              }
            }
            if (iVar12 == 0) {
              fn_826D72C8(param_1);
              iVar21 = *(int *)(param_1 + 0x20);
              uVar24 = *(uint *)(iVar21 + 0x7c);
              if (iVar21 != 0) {
                lVar25 = (ulonglong)*(uint *)(iVar21 + 0x80) + 8;
                fn_8267C8D8(lVar25);
                *(uint *)(iVar21 + 0x7c) = uVar24 & 0xfffffff0 | 4;
                fn_8267CB10((ulonglong)*(uint *)(iVar21 + 0x80) + 0x1c);
                fn_8267D9C0(lVar25);
              }
              if ((uVar11 & 0xffffffff) != 0) {
                fn_8267C4F0(uVar11);
              }
              return 4;
            }
            bVar10 = *(int *)(param_1 + 0x20) == *(int *)(iVar12 + 0x1c);
            bVar1 = !bVar10;
            bVar27 = bVar1 << 1;
            if ((!bVar1) && (*(uint *)(iVar3 + 0xc) != 0)) {
              fn_826D6630((ulonglong)*(uint *)(iVar3 + 0xc) + 0xc,0xffffffff8200c750,
                                ((ulonglong)*puVar17 & 0xfffffffc) + 8);
            }
            fn_826DD3D0(*(undefined4 *)(param_1 + 0x20),puVar4,iVar12,iVar3,bVar10);
            iVar22 = *(int *)(*(int *)(iVar3 + 8) + 0x14);
            if (iVar22 != 0) {
              lVar25 = fn_826D65B8(*(undefined4 *)(param_1 + 0x20));
              bVar27 = (lVar25 == 0) << 1;
              if (lVar25 != 0) {
                (**(code **)(*(int *)(iVar22 + 0xc) + 4))
                          (iVar22 + 0xc,lVar25,iVar12,((ulonglong)*puVar17 & 0xfffffffc) + 8);
                fn_82687270(lVar25);
              }
            }
            fn_82687270(iVar12);
            if ((uVar11 & 0xffffffff) != 0) {
              fn_8267C4F0(uVar11);
            }
          }
          else {
            iVar12 = fn_826D65B8(*(undefined4 *)(param_1 + 0x20));
            bVar27 = (iVar12 == 0) << 1;
            if (iVar12 != 0) {
              uVar11 = (**(code **)(*(int *)(iVar12 + 0xc) + 0xc))(iVar12 + 0xc,0x13);
              bVar27 = (uVar11 == 0) << 1;
              if (uVar11 == 0) {
                if (puVar4[1] != 0) {
                  pcVar20 = (char *)((*(uint *)*puVar4 & 0xfffffffc) + 8);
                  pcVar18 = "$IMECandidateListFont";
                  do {
                    cVar16 = *pcVar20;
                    cVar2 = *pcVar18;
                    if (cVar16 == '\0') break;
                    pcVar20 = pcVar20 + 1;
                    pcVar18 = pcVar18 + 1;
                  } while (cVar16 == cVar2);
                  bVar27 = (cVar16 == cVar2) << 1;
                  if (cVar16 == cVar2) goto LAB_826de034;
                }
                fn_82687270(iVar12);
                goto LAB_826ddffc;
              }
LAB_826de034:
              fn_826DD6F8(*(undefined4 *)(param_1 + 0x20),puVar4);
              if ((uVar11 & 0xffffffff) != 0) {
                fn_8267C4F0(uVar11);
              }
              fn_82687270(iVar12);
            }
          }
          puVar4 = (undefined4 *)puVar4[6];
          uVar23 = uVar23 + 1;
          sync(1);
        } while (uVar23 < *(uint *)(iVar21 + 0xc));
      }
    }
    iVar12 = *(int *)(param_1 + 0x20);
    uVar24 = 0;
    piVar14 = *(int **)(iVar21 + 0x1c);
    iVar22 = iVar12 + 0x18;
    uVar6 = *(undefined4 *)(iVar12 + 8);
    if (*(int *)(iVar21 + 0x10) != 0) {
      do {
        if (*piVar14 != 0) {
          piStack_108 = (int *)0x0;
          iStack_104 = iVar22;
          cVar16 = fn_826D6310(piVar14,&piStack_108,iVar3,uVar6);
          bVar27 = (cVar16 == '\0') << 1;
          if (cVar16 == '\0') {
            bVar1 = *(char *)(*(int *)(param_1 + 0x20) + 0x8c) == '\0';
            bVar27 = bVar1 << 1;
            if (!bVar1) {
              fn_826D72C8(param_1);
              iVar21 = *(int *)(param_1 + 0x20);
              uVar24 = *(uint *)(iVar21 + 0x7c);
              if (iVar21 != 0) {
                lVar25 = (ulonglong)*(uint *)(iVar21 + 0x80) + 8;
                fn_8267C8D8(lVar25);
                *(uint *)(iVar21 + 0x7c) = uVar24 & 0xfffffff0 | 3;
                fn_8267CB10((ulonglong)*(uint *)(iVar21 + 0x80) + 0x1c);
                fn_8267D9C0(lVar25);
              }
              iVar21 = *(int *)(*(int *)(param_1 + 0x20) + 0x80);
              if (iVar21 != 0) {
                fn_8267C4C8(iVar21);
              }
              if (*(int *)(param_1 + 0x20) != 0) {
                fn_8267C4F0();
              }
              *(undefined4 *)(param_1 + 0x20) = 0;
              fn_826D6370(iVar21);
              if (iVar21 != 0) {
                fn_8267C4F0(iVar21);
              }
              if (piStack_108 == (int *)0x0) {
                return 3;
              }
              fn_82687270();
              return 3;
            }
          }
          else if ((*(int *)(param_1 + 0x1c) != 0) &&
                  (uVar11 = (**(code **)(*piStack_108 + 8))(), (uVar11 & 0xff00) == 0x100)) {
            iVar13 = fn_826D94A8(*(undefined4 *)(param_1 + 0x30),piVar14 + 2);
            bVar27 = (iVar13 == 0) << 1;
            if ((iVar13 == 0) && (cVar16 = (**(code **)(*piStack_108 + 8))(), cVar16 == '\x01')) {
              uVar11 = fn_826D65B8(*(undefined4 *)(param_1 + 0x20));
              (**(code **)(**(int **)(param_1 + 0x1c) + 0xc))
                        (*(int **)(param_1 + 0x1c),piVar14,piStack_108);
              if ((uVar11 & 0xffffffff) != 0) {
                fn_82687270(uVar11);
              }
            }
          }
          fn_826F3210(iVar22,piVar14[2],&piStack_108);
          if (piStack_108 != (int *)0x0) {
            fn_82687270();
          }
        }
        piVar14 = (int *)piVar14[3];
        uVar24 = uVar24 + 1;
        sync(1);
      } while (uVar24 < *(uint *)(iVar21 + 0x10));
    }
    if (*(int *)(iVar21 + 8) != 0) {
      uStack_d0 = 0;
      uVar24 = 0;
      uStack_d8 = 0;
      iStack_d4 = 0;
      iVar13 = *(int *)(iVar21 + 0x18);
      if (*(int *)(iVar21 + 8) != 0) {
        do {
          aiStack_f8[0] = 0;
          aiStack_f8[1] = 0;
          bVar1 = *(char *)(iVar12 + 0x40) == '\0';
          bVar27 = bVar1 << 1;
          if ((bVar1) || (*(uint *)(iVar12 + 0x1c) <= *(uint *)(iVar13 + 8))) {
            fn_826F30F0(iVar22,aiStack_f8);
          }
          else {
            fn_82687F98(aiStack_f8,
                              (ulonglong)*(uint *)(iVar12 + 0x20) +
                              ((ulonglong)*(uint *)(iVar13 + 8) & 0x1fffffff) * 8);
          }
          if (aiStack_f8[0] != 0) {
            aiStack_110[0] = aiStack_f8[0];
            fn_8273D588(&uStack_d8,aiStack_110);
            if (aiStack_f8[0] != 0) {
              fn_82687270();
            }
          }
          iVar13 = *(int *)(iVar13 + 0xc);
          uVar24 = uVar24 + 1;
          sync(1);
        } while (uVar24 < *(uint *)(iVar21 + 8));
        if ((iStack_d4 != 0) && (*(int *)(*(int *)(iVar3 + 8) + 0x1c) != 0)) {
          bVar1 = *(char *)(iVar3 + 0x44) == '\0';
          bVar27 = bVar1 << 1;
          if ((!bVar1) || (uVar19 = 0, *(int *)(iVar3 + 0x18) != 0)) {
            uVar19 = 1;
          }
          fn_82770FE8(*(undefined4 *)(*(int *)(iVar3 + 8) + 0x1c),&uStack_d8,
                          *(undefined4 *)(*(int *)(iVar3 + 8) + 0x10),*(undefined4 *)(iVar3 + 0x20),
                          *(undefined4 *)(iVar3 + 0xc),param_1 + 0x18,uVar6,uVar19);
        }
      }
      fn_8267BE38(uStack_d8);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x88) = *(undefined4 *)(iVar21 + 4);
    sync(1);
    *(int *)(*(int *)(param_1 + 0x20) + 0x84) = *(int *)(*(int *)(param_1 + 0x20) + 0x84) + 1;
    iVar21 = *(int *)(param_1 + 0x20);
    if ((*(int *)(iVar21 + 0x84) == 1) && (uVar24 = *(uint *)(iVar21 + 0x7c), iVar21 != 0)) {
      lVar25 = (ulonglong)*(uint *)(iVar21 + 0x80) + 8;
      fn_8267C8D8(lVar25);
      *(uint *)(iVar21 + 0x7c) = uVar24 | 0x100;
      fn_8267CB10((ulonglong)*(uint *)(iVar21 + 0x80) + 0x1c);
      fn_8267D9C0(lVar25);
    }
    iVar21 = *(int *)(param_1 + 0x20);
    iVar12 = (**(code **)(**(int **)(param_1 + 0x24) + 0x28))();
    if (*(int *)(iVar21 + 0x84) == iVar12) {
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x88) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x20) + 0x28);
      if (*(int *)(param_1 + 0x1c) != 0) {
        ppuStack_f0 = &lbl_8200C584;
        iStack_ec = *(int *)(param_1 + 0x1c);
        piVar14 = (int *)fn_826D65B8(*(undefined4 *)(param_1 + 0x20));
        (**(code **)(*piVar14 + 0x5c))(piVar14,&ppuStack_f0,2);
        fn_82687270(piVar14);
        ppuStack_f0 = &lbl_8200C4D4;
      }
      fn_826D72C8(param_1);
      iVar21 = *(int *)(param_1 + 0x20);
      uVar24 = *(uint *)(iVar21 + 0x7c);
      if (iVar21 != 0) {
        lVar25 = (ulonglong)*(uint *)(iVar21 + 0x80) + 8;
        fn_8267C8D8(lVar25);
        *(uint *)(iVar21 + 0x7c) = uVar24 & 0xfffffff2 | 0x202;
        fn_8267CB10((ulonglong)*(uint *)(iVar21 + 0x80) + 0x1c);
        fn_8267D9C0(lVar25);
      }
    }
    piVar14 = *(int **)(iVar3 + 0x14);
    if (piVar14 != (int *)0x0) {
      iVar21 = *(int *)(param_1 + 0x20);
      iVar3 = (*(int **)(iVar21 + 0xc))[8];
      uVar6 = *(undefined4 *)(iVar3 + 0x28);
      uVar15 = (**(code **)(**(int **)(iVar21 + 0xc) + 0x28))();
      uVar7 = *(undefined4 *)(iVar21 + 0x84);
      uVar8 = *(undefined4 *)(iVar21 + 0x88);
      fn_8268C750(&uStack_b0,iVar3 + 0x24);
      uStack_ac = uVar8;
      uStack_a8 = uVar6;
      uStack_a4 = uVar7;
      uStack_a0 = uVar15;
      (**(code **)(*piVar14 + 4))(piVar14,&uStack_b0);
      lVar25 = ((ulonglong)uStack_b0 & 0xfffffffc) + 4;
      do {
        puVar17 = (uint *)lVar25;
        uVar11 = (ulonglong)*puVar17;
        if (in_RESERVE != '\0') {
          uVar24 = storeWordConditionalIndexed(uVar11 - 1,0,lVar25);
          *puVar17 = uVar24;
          bVar27 = 2;
        }
      } while (!(bool)(bVar27 >> 1 & 1));
      if (uVar11 == 1) {
        fn_8267BE38();
      }
    }
    return *(uint *)(*(int *)(param_1 + 0x20) + 0x7c) & 0xf;
  }
LAB_826de7f8:
  fn_826D72C8(param_1);
  iVar21 = *(int *)(param_1 + 0x20);
  uVar24 = *(uint *)(iVar21 + 0x7c);
  uVar23 = (*(char *)(iVar21 + 0x8c) == '\0') + 3;
  if (iVar21 != 0) {
    lVar25 = (ulonglong)*(uint *)(iVar21 + 0x80) + 8;
    fn_8267C8D8(lVar25);
    *(uint *)(iVar21 + 0x7c) = uVar24 & 0xfffffff0 | uVar23;
    fn_8267CB10((ulonglong)*(uint *)(iVar21 + 0x80) + 0x1c);
    fn_8267D9C0(lVar25);
  }
  iVar21 = *(int *)(*(int *)(param_1 + 0x20) + 0x80);
  if (iVar21 != 0) {
    fn_8267C4C8(iVar21);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    fn_8267C4F0();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  fn_826D6370(iVar21);
  if (iVar21 != 0) {
    fn_8267C4F0(iVar21);
  }
  return uVar23;
}

