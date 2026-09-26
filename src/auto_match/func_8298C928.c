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
extern unsigned int *auStack_108;
extern int fn_828F0170();
extern int fn_82930318();
extern int fn_82930458();
extern int fn_829304E0();
extern int fn_82930FC0();
extern int fn_82931B90();
extern int fn_82931D88();
extern int fn_82932548();
extern int fn_82933088();
extern int fn_829334D8();
extern int fn_8297FD50();
extern int fn_82980440();
extern int fn_82980C18();
extern int fn_82981050();
extern int fn_829814B0();
extern int fn_82981598();
extern int fn_82981668();
extern int fn_82981738();
extern int fn_82983380();
extern int fn_829846B0();
extern int fn_82984B00();
extern int fn_829855C8();
extern int fn_82986C50();
extern int fn_82986DF0();
extern int fn_82988378();
extern int fn_829885C0();
extern int fn_829891B8();
extern unsigned int iStack_110;
extern unsigned int lbl_82196582;


int fn_8298C928(int param_1,int param_2,int param_3,ulonglong param_4,int param_5)

{
  char *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar4;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char **ppcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int *piVar17;
  uint uVar18;
  longlong lVar19;
  int *piVar20;
  int iStack_110;
  undefined1 auStack_108 [24];
  char *apcStack_f0 [4];
  char *pcStack_e0;
  char *pcStack_dc;
  undefined1 *puStack_d8;
  undefined1 *puStack_d4;
  char *pcStack_d0;
  char *apcStack_c0 [4];
  char *pcStack_b0;
  char *pcStack_ac;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  char *pcStack_a0;
  
  apcStack_f0[1] = "structure members";
  apcStack_f0[3] = "local variables";
  uVar16 = 0xffffffff8204f4b0;
  apcStack_f0[2] = "function parameters";
  puStack_d8 = &lbl_82196582;
  puStack_d4 = &lbl_82196582;
  apcStack_f0[0] = "global variables";
  pcStack_e0 = "loop control variables";
  uVar15 = 0xffffffff8204f444;
  pcStack_dc = "annotation members";
  pcStack_d0 = "global variables";
  apcStack_c0[0] = "initial value";
  apcStack_c0[1] = "initializer";
  apcStack_c0[2] = "default value";
  apcStack_c0[3] = "initial value";
  pcStack_b0 = "initial value";
  pcStack_ac = "value";
  puStack_a8 = &lbl_82196582;
  puStack_a4 = &lbl_82196582;
  pcStack_a0 = "initial value";
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  iVar11 = *(int *)(*(int *)(param_1 + 0x18) + 8);
  if (iVar11 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar10 = *(int *)(iVar11 + 0x18);
  uVar3 = fn_82930318(0x14);
  if ((uVar3 & 0xffffffff) == 0) {
    iStack_110 = 0;
  }
  else {
    iStack_110 = fn_829304E0(uVar3,0,0,0xffffffff8204f42c);
  }
  if (iStack_110 == 0) {
    return 0;
  }
  uVar3 = fn_82930318(0x34);
  if ((uVar3 & 0xffffffff) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = fn_82930FC0(uVar3,1,0,0,0,0);
  }
  if (iVar5 == 0) {
    return 0;
  }
  *(int *)(iStack_110 + 8) = iVar5;
  iVar6 = fn_82930318(0x58);
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = fn_82932548();
  }
  if (iVar6 == 0) {
    return 0;
  }
  *(int *)(iVar5 + 0x18) = iVar6;
  if ((param_4 & 0xffffffff) != 0) {
    iVar7 = fn_82930458(param_4);
    *(int *)(iVar5 + 0x1c) = iVar7;
    if (iVar7 == 0) {
      return 0;
    }
  }
  if (param_3 != 0) {
    iVar7 = fn_82930458(param_3);
    *(int *)(iVar6 + 0x40) = iVar7;
    if (iVar7 == 0) {
      return 0;
    }
    do {
      if ((*(int *)(param_3 + 8) != 0) && (*(int *)(*(int *)(param_3 + 8) + 4) == 3)) {
        iVar7 = fn_82930458();
        *(int *)(iVar6 + 0x3c) = iVar7;
        if (iVar7 == 0) {
          return 0;
        }
      }
      param_3 = *(int *)(param_3 + 0xc);
    } while (param_3 != 0);
  }
  if ((param_5 != 0) && (*(int *)(param_5 + 4) != 0xe)) {
    uVar8 = fn_829855C8(param_1,param_2,param_5);
    *(undefined4 *)(iVar6 + 0x34) = uVar8;
  }
  piVar17 = (int *)0x0;
  uVar18 = 1;
  lVar19 = 0;
  if (iVar10 != 0) {
    iVar7 = fn_82930458(iVar10);
    *(int *)(iVar6 + 0x30) = iVar7;
    if (iVar7 == 0) {
      return 0;
    }
  }
  for (; *(int *)(param_2 + 4) != 3; param_2 = *(int *)(param_2 + 8)) {
    iVar7 = fn_82930318(0x18);
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = fn_82931B90();
    }
    if (iVar7 == 0) {
      return 0;
    }
    if (piVar17 != (int *)0x0) {
      lVar19 = 0xc01;
    }
    piVar20 = (int *)(iVar7 + 0x14);
    *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar6 + 0x30);
    if (*(int *)(param_2 + 0xc) == 0) {
      *(undefined4 *)(iVar7 + 0x14) = 1;
      piVar17 = piVar20;
    }
    else {
      iVar9 = fn_82986DF0(param_1,*(int *)(param_2 + 0xc),piVar20);
      if (iVar9 < 0) {
        lVar19 = 0xbf2;
        *piVar20 = 1;
      }
    }
    iVar9 = *piVar20;
    *(int *)(iVar6 + 0x30) = iVar7;
    uVar18 = iVar9 * uVar18;
  }
  iVar7 = fn_82930458(param_2);
  *(int *)(iVar5 + 0x14) = iVar7;
  if (iVar7 == 0) {
    return 0;
  }
  iVar9 = param_2 + 0x10;
  iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
  if (lVar19 == 0xbf2) {
    uVar16 = 0xbf2;
    uVar15 = 0xffffffff8204e5b8;
    goto LAB_8298d6ec;
  }
  if (lVar19 == 0xc01) {
    uVar16 = 0xc01;
    uVar15 = 0xffffffff8204f054;
    goto LAB_8298d6ec;
  }
  if (piVar17 != (int *)0x0) {
    if ((((iVar7 != 9) && (iVar7 != 0)) && (iVar7 != 3)) && ((iVar7 != 4 && (iVar7 != 5)))) {
      ppcVar14 = apcStack_f0;
      uVar16 = 0xc00;
      uVar15 = 0xffffffff8204f3fc;
      goto LAB_8298ccec;
    }
    iVar10 = fn_82981738(param_1,iVar10);
    uVar3 = (longlong)iVar10 * (longlong)(int)uVar18;
    if (uVar3 != 0) {
      iVar10 = *(int *)(iVar6 + 0x34);
      if ((iVar10 == 0) || (*(int *)(iVar10 + 4) != 0xe)) {
        uVar16 = 0xc02;
        uVar15 = 0xffffffff8204f3b0;
      }
      else {
        uVar4 = fn_82981738(param_1,*(undefined4 *)(iVar10 + 0x10));
        trapWord(6,uVar3,0);
        if (uVar4 == (longlong)(int)((uVar4 & 0xffffffff) / (uVar3 & 0xffffffff)) *
                     (longlong)(int)uVar3) {
          trapWord(6,uVar3,0);
          iVar10 = (int)((uVar4 & 0xffffffff) / (uVar3 & 0xffffffff));
          *piVar17 = iVar10;
          uVar18 = iVar10 * uVar18;
          goto LAB_8298cd34;
        }
        uVar16 = 0xc03;
        uVar15 = 0xffffffff8204f3d0;
      }
      ppcVar14 = apcStack_c0;
LAB_8298ccec:
      fn_82980C18(param_1,iVar9,uVar16,uVar15,*(undefined4 *)(param_2 + 0x18),ppcVar14[iVar7]);
      return 0;
    }
    uVar18 = 0;
    *piVar17 = 0;
  }
LAB_8298cd34:
  if ((uVar18 == 0) || (0x10000 < uVar18)) {
    uVar16 = 0xbf3;
    uVar15 = 0xffffffff8204e624;
LAB_8298d6ec:
    fn_82980C18(param_1,iVar9,uVar16,uVar15,*(undefined4 *)(param_2 + 0x18));
    return 0;
  }
  iVar10 = fn_82981738(param_1,*(undefined4 *)(iVar6 + 0x30));
  *(int *)(iVar6 + 0x14) = iVar10;
  *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10);
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x10) == 1) {
    *(undefined4 *)(iVar6 + 0x10) = 0xffffffff;
  }
  else {
    *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(param_1 + 0x68);
    iVar10 = iVar10 + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x68) = iVar10;
    *(int *)(iVar6 + 0x18) = iVar10;
    iVar10 = *(int *)(param_1 + 0x68) + 1;
    *(int *)(param_1 + 0x68) = iVar10;
    *(int *)(iVar6 + 0x1c) = iVar10;
    iVar10 = *(int *)(param_1 + 0x68) + 1;
    *(int *)(param_1 + 0x68) = iVar10;
    if ((*(uint *)(iVar11 + 0x10) & 0x20) != 0) {
      *(int *)(iVar6 + 0x20) = iVar10;
      iVar10 = *(int *)(param_1 + 0x68) + 1;
      *(int *)(param_1 + 0x68) = iVar10;
      *(int *)(iVar6 + 0x24) = iVar10;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    }
  }
  uVar18 = *(uint *)(iVar11 + 0x10);
  if (*(int *)(iVar11 + 0x14) != 0) {
    iVar10 = fn_828F0170(*(undefined4 *)(*(int *)(iVar11 + 0x14) + 0x18),2,auStack_108);
    if (iVar10 < 0) {
      uVar12 = 0xc11;
      uVar13 = 0xffffffff8204f38c;
      uVar8 = *(undefined4 *)(*(int *)(iVar11 + 0x14) + 0x18);
      pcVar1 = apcStack_f0[iVar7];
    }
    else {
      uVar8 = *(undefined4 *)(param_2 + 0x18);
      uVar12 = 0xbdf;
      uVar13 = 0xffffffff8204f368;
      pcVar1 = apcStack_f0[iVar7];
    }
    fn_82980C18(param_1,iVar9,uVar12,uVar13,uVar8,pcVar1);
  }
  if ((uVar18 & 0x100) != 0) {
    fn_82980C18(param_1,iVar9,0xbef,0xffffffff8204f340,*(undefined4 *)(param_2 + 0x18),
                  apcStack_f0[iVar7]);
  }
  if (iVar7 == 1) {
    iVar10 = fn_82981598(param_1,*(undefined4 *)(iVar6 + 0x30));
    if (iVar10 != 0) {
      fn_82980C18(param_1,iVar9,0xbdb,0xffffffff8204f31c,*(undefined4 *)(param_2 + 0x18),
                    0xffffffff8204f4d4);
      goto LAB_8298cec0;
    }
LAB_8298cf5c:
    if ((((uVar18 & 2) != 0) && (iVar7 != 3)) && (iVar7 != 4)) {
      fn_82980C18(param_1,iVar9,0xbbf,0xffffffff8204f2a4,*(undefined4 *)(param_2 + 0x18),
                    apcStack_f0[iVar7]);
      uVar18 = uVar18 & 0xfffffffd;
    }
    if (((uVar18 & 0x40) != 0) && (iVar7 != 2)) {
      fn_82980C18(param_1,iVar9,0xbe7,0xffffffff8204f27c,*(undefined4 *)(param_2 + 0x18),
                    apcStack_f0[iVar7]);
      uVar18 = uVar18 & 0xffffffbf;
    }
    if (((uVar18 & 0x40) != 0) && ((uVar18 & 0x20) != 0)) {
      fn_82980C18(param_1,iVar9,0xbf6,0xffffffff8204f250,*(undefined4 *)(param_2 + 0x18),
                    apcStack_f0[iVar7]);
      uVar18 = uVar18 & 0xffffffbf;
    }
    if ((uVar18 & 1) != 0) {
      fn_82980C18(param_1,iVar9,0xbbe,0xffffffff8204f228,*(undefined4 *)(param_2 + 0x18),
                    apcStack_f0[iVar7]);
      uVar18 = uVar18 & 0xfffffffe;
    }
    if ((uVar18 & 8) != 0) {
      fn_82980C18(param_1,iVar9,0xbee,0xffffffff8204f200,*(undefined4 *)(param_2 + 0x18),
                    apcStack_f0[iVar7]);
      uVar18 = uVar18 & 0xfffffff7;
    }
  }
  else {
LAB_8298cec0:
    if (iVar7 == 2) {
      if (((uVar18 & 0x10) != 0) ||
         (iVar10 = fn_82981598(param_1,*(undefined4 *)(iVar6 + 0x30)), iVar10 == 0))
      goto LAB_8298cf5c;
      fn_82980C18(param_1,iVar9,0xbe6,0xffffffff8204f2e8,*(undefined4 *)(param_2 + 0x18));
    }
    if (((iVar7 == 3) || (iVar7 == 4)) &&
       (iVar10 = fn_82981668(param_1,*(undefined4 *)(iVar6 + 0x30)), iVar10 == 0)) {
      fn_82980C18(param_1,iVar9,0xbde,0xffffffff8204f2cc,*(undefined4 *)(param_2 + 0x18),
                    apcStack_f0[iVar7]);
    }
    if ((iVar7 != 0) && (iVar7 != 9)) goto LAB_8298cf5c;
    if (((uVar18 & 2) != 0) && ((uVar18 & 1) != 0)) {
      fn_82980C18(param_1,iVar9,0xbbf,0xffffffff8204f1d4,*(undefined4 *)(param_2 + 0x18),
                    apcStack_f0[iVar7]);
      uVar18 = uVar18 & 0xfffffffd;
    }
    if (((uVar18 & 2) != 0) && ((uVar18 & 0x40) != 0)) {
      fn_82980C18(param_1,iVar9,0xbbf,0xffffffff8204f1a4,*(undefined4 *)(param_2 + 0x18),
                    apcStack_f0[iVar7]);
      uVar18 = uVar18 & 0xfffffffd;
    }
    if ((uVar18 & 2) == 0) {
      uVar18 = uVar18 | 0x41;
    }
  }
  if (((((uVar18 & 4) != 0) && (iVar7 != 3)) && (iVar7 != 4)) && (iVar7 != 2)) {
    fn_82980C18(param_1,iVar9,0xbc0,0xffffffff8204f17c,*(undefined4 *)(param_2 + 0x18),
                  apcStack_f0[iVar7]);
    uVar18 = uVar18 & 0xfffffffb;
  }
  if (iVar7 == 5) {
    fn_829814B0(param_1,*(undefined4 *)(iVar6 + 0x30),1);
    uVar18 = uVar18 | 0x40;
  }
  *(uint *)(iVar6 + 0x2c) = uVar18;
  uVar8 = fn_82930458(*(undefined4 *)(iVar11 + 0x1c));
  uVar2 = uVar18 & 0x40;
  *(undefined4 *)(iVar6 + 0x48) = uVar8;
  if ((uVar2 == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    *(undefined4 *)(iVar6 + 0x44) = 0;
  }
  else {
    *(undefined4 *)(iVar6 + 0x44) = *(undefined4 *)(*(int *)(param_1 + 0x10) + 8);
  }
  uVar3 = 0;
  if (param_5 == 0) {
    if ((((iVar7 == 9) || (iVar7 == 0)) || ((iVar7 == 3 || (iVar7 == 4)))) && ((uVar18 & 2) != 0)) {
      uVar4 = fn_82930318(0x50);
      if ((uVar4 & 0xffffffff) == 0) {
        param_5 = 0;
      }
      else {
        param_5 = fn_82933088(uVar4,0,0,0,0,1,iVar9);
      }
      if (param_5 == 0) {
LAB_8298d290:
        param_5 = 0;
      }
      else {
        uVar4 = fn_82930318(0x28);
        if ((uVar4 & 0xffffffff) == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = fn_82931D88(uVar4,0,6,0,1,1,0x200);
        }
        *(int *)(param_5 + 0x10) = iVar11;
        if (iVar11 == 0) goto LAB_8298d290;
        uVar4 = fn_82930318(0x40);
        if ((uVar4 & 0xffffffff) == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = fn_829334D8(uVar4,2,0,iVar9);
        }
        *(int *)(param_5 + 0x20) = iVar11;
        if (iVar11 == 0) goto LAB_8298d290;
        uVar4 = fn_82930318(0x14);
        if ((uVar4 & 0xffffffff) == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = fn_829304E0(uVar4,*(undefined4 *)(param_5 + 0x20),0,0xffffffff8204e390);
        }
        if (iVar11 == 0) goto LAB_8298d290;
        *(int *)(param_5 + 0x20) = iVar11;
        fn_82983380(param_1,param_5);
      }
      uVar12 = 1;
      goto LAB_8298d35c;
    }
  }
  else {
    if (*(int *)(param_5 + 4) == 0xe) {
      uVar12 = 0;
    }
    else {
      param_5 = *(int *)(iVar6 + 0x34);
      if (param_5 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(param_5 + 0x10);
      }
      iVar11 = fn_82981738(param_1,uVar8);
      if (*(int *)(iVar6 + 0x14) != iVar11) {
        fn_82984B00(param_1,iVar9,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(iVar6 + 0x30),
                      uVar8,1);
        *(undefined4 *)(iVar6 + 0x34) = 0;
        goto LAB_8298d36c;
      }
      uVar12 = 1;
    }
LAB_8298d35c:
    uVar8 = fn_829885C0(param_1,*(undefined4 *)(iVar6 + 0x30),param_5,0,uVar12);
    *(undefined4 *)(iVar6 + 0x34) = uVar8;
  }
LAB_8298d36c:
  if (*(int *)(iVar6 + 0x34) == 0) {
    if ((((((iVar7 == 0) || (iVar7 == 9)) &&
          (iVar11 = fn_82981598(param_1,*(undefined4 *)(iVar6 + 0x30)), iVar11 != 0)) &&
         ((uVar18 & 2) != 0)) ||
        (((iVar7 == 3 || (iVar7 == 4)) &&
         (iVar11 = fn_82981598(param_1,*(undefined4 *)(iVar6 + 0x30)), iVar11 != 0)))) ||
       (iVar7 == 5)) {
      fn_82980C18(param_1,iVar9,0xbc4,0xffffffff8204f0cc,*(undefined4 *)(param_2 + 0x18),
                    apcStack_c0[iVar7]);
    }
    goto LAB_8298d5d0;
  }
  if (iVar7 == 1) {
    uVar12 = 0xffffffff8204f160;
    uVar16 = 0xffffffff8204f4d4;
    uVar15 = 0xffffffff8204f454;
LAB_8298d390:
    fn_82980C18(param_1,iVar9,0xbc1,uVar12,*(undefined4 *)(param_2 + 0x18),uVar16,uVar15);
  }
  else {
    if ((iVar7 == 2) && (iVar11 = fn_82981668(param_1,*(undefined4 *)(iVar6 + 0x30)), iVar11 == 0)
       ) {
      uVar12 = 0xffffffff8204f130;
      goto LAB_8298d390;
    }
    if (((uVar18 & 0x10) == 0) && ((uVar18 & 0x20) != 0)) {
      fn_82980C18(param_1,iVar9,0xbe5,0xffffffff8204f108,*(undefined4 *)(param_2 + 0x18),
                    apcStack_f0[iVar7],apcStack_c0[iVar7]);
LAB_8298d4ac:
      *(undefined4 *)(iVar6 + 0x34) = 0;
    }
    else {
      if (((uVar18 & 0x50) != 0) &&
         (iVar11 = fn_8297FD50(param_1,*(undefined4 *)(iVar6 + 0x34),1), iVar11 == 0)) {
        fn_82980C18(param_1,iVar9,0xbc3,0xffffffff8204f0e0,*(undefined4 *)(param_2 + 0x18),
                      apcStack_c0[iVar7]);
        goto LAB_8298d4ac;
      }
      iVar11 = fn_829846B0(param_1,*(undefined4 *)(iVar6 + 0x30),
                             *(undefined4 *)(*(int *)(iVar6 + 0x34) + 0x10),0);
      if (iVar11 == 0) {
        fn_82984B00(param_1,iVar9,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(iVar6 + 0x30),
                      *(undefined4 *)(*(int *)(iVar6 + 0x34) + 0x10),0);
        goto LAB_8298d4ac;
      }
      if (uVar2 != 0) {
        uVar8 = fn_82986C50(param_1,*(undefined4 *)(iVar6 + 0x34));
        *(undefined4 *)(iVar6 + 0x38) = uVar8;
      }
      if ((((uVar18 & 0x50) == 0) &&
          (iVar11 = fn_82981598(param_1,*(undefined4 *)(iVar6 + 0x30)), iVar11 != 0)) &&
         (iVar11 = fn_82986C50(param_1,*(undefined4 *)(iVar6 + 0x34)), iVar11 != 0)) {
        *(int *)(iVar6 + 0x34) = iVar11;
      }
      else {
        if (((uVar18 & 0x10) == 0) && (uVar2 != 0)) goto LAB_8298d4ac;
        uVar8 = *(undefined4 *)(iVar6 + 0x34);
        *(undefined4 *)(iVar6 + 0x34) = 0;
        uVar16 = fn_82988378(param_1,param_2,iVar6);
        uVar3 = fn_829891B8(param_1,0x1a,uVar16,uVar8,1,0);
      }
    }
LAB_8298d5d0:
    if (((iVar7 == 0) || (iVar7 == 9)) ||
       ((iVar7 == 1 || ((iVar7 == 2 || (*(int *)(iVar6 + 0x3c) == 0)))))) goto LAB_8298d628;
    fn_82980C18(param_1,iVar9,0xbe3,0xffffffff8204f0ac,*(undefined4 *)(param_2 + 0x18),
                  apcStack_f0[iVar7]);
  }
  *(undefined4 *)(iVar6 + 0x34) = 0;
LAB_8298d628:
  if ((((*(int *)(iVar5 + 0x1c) != 0) && (iVar7 != 0)) && (iVar7 != 9)) && (iVar7 != 2)) {
    fn_82980C18(param_1,iVar9,0xbe0,0xffffffff8204f088,*(undefined4 *)(param_2 + 0x18),
                  apcStack_f0[iVar7]);
    *(undefined4 *)(iVar5 + 0x1c) = 0;
  }
  iVar11 = fn_82981050(param_1,iVar5,0);
  if (iVar11 < 0) {
    return 0;
  }
  if ((uVar3 & 0xffffffff) == 0) {
    return iStack_110;
  }
  lVar19 = fn_82980440(param_1,uVar3);
  *(int *)(iStack_110 + 0xc) = (int)lVar19;
  if (lVar19 == 0) {
    return 0;
  }
  return iStack_110;
}

