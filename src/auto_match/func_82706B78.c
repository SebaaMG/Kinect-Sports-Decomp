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
extern unsigned int *auStack_a4;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b4;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_82687270();
extern int fn_8268ACE8();
extern int fn_8268B330();
extern int fn_8268BA10();
extern int fn_8268C750();
extern int fn_8268C928();
extern int fn_8268CAB0();
extern int fn_82696958();
extern int fn_8269A6A0();
extern int fn_8269AD40();
extern int fn_8269F500();
extern int fn_826CBFF0();
extern int fn_826CC448();
extern int fn_826CDDC0();
extern int fn_826D4148();
extern int fn_826D7220();
extern int fn_826DCF88();
extern int fn_826E4CA8();
extern int fn_826E5600();
extern int fn_826E5AE8();
extern int fn_826F6CC0();
extern int fn_826F6DD0();
extern int fn_826F6FA8();
extern int fn_826F6FF8();
extern int fn_82703090();
extern int fn_82703C40();
extern int fn_827043C0();
extern int fn_82705900();
extern unsigned int iStack_c4;
extern unsigned int iStack_c8;
extern unsigned int uStack_a8;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern U64 storeWordConditionalIndexed();


void fn_82706B78(int param_1,int param_2,int param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int *piVar9;
  int *piVar10;
  undefined8 uVar7;
  int iVar11;
  uint *puVar12;
  ulonglong uVar8;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  undefined8 uVar17;
  char *pcVar18;
  longlong lVar19;
  char *pcVar20;
  undefined4 uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  bool bVar25;
  char in_RESERVE;
  byte in_cr0;
  byte bVar26;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  int iStack_c8;
  int iStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b4 [4];
  undefined1 auStack_b0 [8];
  undefined4 uStack_a8;
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [160];
  
  fn_8268C750(&uStack_e0,param_2 + 0xc);
  fn_8268B330(&uStack_dc);
  piVar9 = (int *)0x0;
  piVar15 = (int *)0x0;
  iVar13 = 0;
  piVar14 = (int *)0x0;
  uVar24 = 0;
  uVar22 = (ulonglong)*(uint *)(param_3 + 0xc);
  uVar4 = *(uint *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x1c) + 0x14);
  if (*(int *)(param_2 + 0x14) == 0) {
    if (*(int *)(param_2 + 0x10) == -1) {
      lVar19 = ((ulonglong)uStack_dc & 0xfffffffc) + 4;
      do {
        puVar12 = (uint *)lVar19;
        uVar22 = (ulonglong)*puVar12;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(uVar22 - 1,0,lVar19);
          *puVar12 = uVar4;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      bVar26 = (uVar22 == 1) << 1;
      if (uVar22 == 1) {
        fn_8267BE38();
      }
      lVar19 = ((ulonglong)uStack_e0 & 0xfffffffc) + 4;
      do {
        puVar12 = (uint *)lVar19;
        uVar22 = (ulonglong)*puVar12;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(uVar22 - 1,0,lVar19);
          *puVar12 = uVar4;
          bVar26 = 2;
        }
      } while (!(bool)(bVar26 >> 1 & 1));
      goto LAB_82707670;
    }
    iVar16 = fn_826F6FA8(param_1);
    if ((iVar16 != 0) || (iVar16 = fn_826F6FA8(param_1,0), iVar16 != 0)) {
      piVar10 = (int *)fn_826F6FA8(param_1);
      piVar10 = (int *)(**(code **)(*piVar10 + 0x48))();
      uVar24 = (**(code **)(*piVar10 + 0x2c))();
      uVar24 = (uVar24 & 0xffffffff) >> 4 & 1;
    }
    fn_827043C0(param_1,*(undefined4 *)(param_2 + 0x10));
    iVar16 = 0x40000;
  }
  else {
    piVar9 = (int *)fn_8269A6A0(*(int *)(param_2 + 0x14),param_1);
    bVar26 = (piVar9 == (int *)0x0) << 1;
    if (piVar9 == (int *)0x0) {
      lVar19 = ((ulonglong)uStack_dc & 0xfffffffc) + 4;
      puVar12 = (uint *)lVar19;
      uVar22 = (ulonglong)*puVar12;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(uVar22 - 1,0,lVar19);
        *puVar12 = uVar4;
      }
      bVar26 = (uVar22 == 1) << 1;
      if (uVar22 == 1) {
        fn_8267BE38();
      }
      lVar19 = ((ulonglong)uStack_e0 & 0xfffffffc) + 4;
      do {
        puVar12 = (uint *)lVar19;
        uVar22 = (ulonglong)*puVar12;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(uVar22 - 1,0,lVar19);
          *puVar12 = uVar4;
          bVar26 = 2;
        }
      } while (!(bool)(bVar26 >> 1 & 1));
      goto LAB_82707670;
    }
    piVar9[1] = piVar9[1] + 1;
    piVar15 = (int *)piVar9[8];
    if (piVar15 == (int *)0x0) {
      fn_8267C498();
      lVar19 = ((ulonglong)uStack_dc & 0xfffffffc) + 4;
      do {
        puVar12 = (uint *)lVar19;
        uVar22 = (ulonglong)*puVar12;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(uVar22 - 1,0,lVar19);
          *puVar12 = uVar4;
          bVar26 = 2;
        }
      } while (!(bool)(bVar26 >> 1 & 1));
      bVar26 = (uVar22 == 1) << 1;
      if (uVar22 == 1) {
        fn_8267BE38();
      }
      lVar19 = ((ulonglong)uStack_e0 & 0xfffffffc) + 4;
      do {
        puVar12 = (uint *)lVar19;
        uVar22 = (ulonglong)*puVar12;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(uVar22 - 1,0,lVar19);
          *puVar12 = uVar4;
          bVar26 = 2;
        }
      } while (!(bool)(bVar26 >> 1 & 1));
      goto LAB_82707670;
    }
    piVar10 = (int *)(**(code **)(*piVar9 + 0x48))(piVar9);
    uVar24 = (**(code **)(*piVar10 + 0x2c))();
    iVar16 = piVar9[4];
    uVar24 = (uVar24 & 0xffffffff) >> 4 & 1;
  }
  bVar26 = (uVar24 == 0) << 1;
  uVar21 = 0;
  if (uVar24 != 0) {
    uVar7 = fn_826F6CC0(&uStack_d4,&uStack_e0);
    fn_8268BA10(&uStack_dc,uVar7);
    lVar19 = ((ulonglong)uStack_d4 & 0xfffffffc) + 4;
    do {
      puVar12 = (uint *)lVar19;
      uVar24 = (ulonglong)*puVar12;
      if (in_RESERVE != '\0') {
        uVar23 = storeWordConditionalIndexed(uVar24 - 1,0,lVar19);
        *puVar12 = uVar23;
        bVar26 = 2;
      }
    } while (!(bool)(bVar26 >> 1 & 1));
    if (uVar24 == 1) {
      fn_8267BE38();
    }
  }
  iVar11 = fn_8268ACE8(&uStack_e0);
  if (iVar11 == 0) {
    iVar11 = *(int *)(param_1 + 0xb28);
    bVar26 = 2;
    if (iVar11 != 0) {
      do {
        iVar5 = *(int *)(iVar11 + 0x10);
        if (*(uint *)(iVar5 + 0x40) < *(uint *)(param_2 + 0x40)) {
          if ((*(int *)(param_2 + 0x10) == -1) || (*(int *)(iVar5 + 0x10) == -1)) {
            if ((*(int *)(param_2 + 0x14) == 0) || (*(int *)(iVar5 + 0x14) == 0)) goto LAB_827071c8;
            bVar25 = *(int *)(param_2 + 0x14) == *(int *)(iVar5 + 0x14);
          }
          else {
            bVar25 = *(int *)(param_2 + 0x10) == *(int *)(iVar5 + 0x10);
          }
          if (bVar25) {
            *(undefined1 *)(iVar5 + 0x78) = 1;
          }
        }
LAB_827071c8:
        iVar11 = *(int *)(iVar11 + 4);
      } while (iVar11 != 0);
      goto LAB_827071d4;
    }
  }
  else {
    uVar7 = 0;
    bVar25 = false;
    cVar2 = *(char *)((uStack_e0 & 0xfffffffc) + 8);
    if ((cVar2 == 'i') || (cVar2 == 'I')) {
      fn_8268CAB0(&uStack_d8,&uStack_e0);
      puVar12 = (uint *)fn_8268C928(&uStack_d0,&uStack_d8,0,6);
      pcVar18 = "img://";
      pcVar20 = (char *)((*puVar12 & 0xfffffffc) + 8);
      do {
        cVar2 = *pcVar20;
        cVar3 = *pcVar18;
        bVar1 = cVar2 == '\0';
        if (bVar1) break;
        pcVar20 = pcVar20 + 1;
        pcVar18 = pcVar18 + 1;
      } while (cVar2 == cVar3);
      lVar19 = ((ulonglong)uStack_d0 & 0xfffffffc) + 4;
      do {
        puVar12 = (uint *)lVar19;
        uVar24 = (ulonglong)*puVar12;
        if (in_RESERVE != '\0') {
          uVar23 = storeWordConditionalIndexed(uVar24 - 1,0,lVar19);
          *puVar12 = uVar23;
          bVar1 = true;
        }
      } while (!bVar1);
      if (uVar24 == 1) {
        fn_8267BE38();
      }
      if (cVar2 == cVar3) {
        uVar7 = 1;
        bVar25 = true;
        bVar6 = false;
      }
      else {
        puVar12 = (uint *)fn_8268C928(&uStack_cc,&uStack_d8,0,8);
        pcVar18 = "imgps://";
        pcVar20 = (char *)((*puVar12 & 0xfffffffc) + 8);
        do {
          cVar2 = *pcVar20;
          cVar3 = *pcVar18;
          bVar1 = cVar2 == '\0';
          if (bVar1) break;
          pcVar20 = pcVar20 + 1;
          pcVar18 = pcVar18 + 1;
        } while (cVar2 == cVar3);
        bVar6 = cVar2 != cVar3;
        lVar19 = ((ulonglong)uStack_cc & 0xfffffffc) + 4;
        do {
          puVar12 = (uint *)lVar19;
          uVar24 = (ulonglong)*puVar12;
          if (in_RESERVE != '\0') {
            uVar23 = storeWordConditionalIndexed(uVar24 - 1,0,lVar19);
            *puVar12 = uVar23;
            bVar1 = true;
          }
        } while (!bVar1);
        if (uVar24 == 1) {
          fn_8267BE38();
        }
        if (!bVar6) {
          bVar25 = true;
        }
      }
      lVar19 = ((ulonglong)uStack_d8 & 0xfffffffc) + 4;
      do {
        puVar12 = (uint *)lVar19;
        uVar24 = (ulonglong)*puVar12;
        if (in_RESERVE != '\0') {
          uVar23 = storeWordConditionalIndexed(uVar24 - 1,0,lVar19);
          *puVar12 = uVar23;
          bVar6 = true;
        }
      } while (!bVar6);
      if (uVar24 == 1) {
        fn_8267BE38();
      }
    }
    if (bVar25) {
      uVar24 = (**(code **)(*(int *)(*(int *)(param_1 + 0x100) + 8) + 0xc))
                         (*(int *)(param_1 + 0x100) + 8,5);
      uVar8 = fn_826E5600(((ulonglong)uStack_e0 & 0xfffffffc) + 8,uVar24,uVar22,
                                *(undefined4 *)(param_1 + 0x14));
      bVar26 = (uVar8 == 0) << 1;
      if (uVar8 == 0) {
        if (uVar22 != 0) {
          fn_826E4CA8(uVar22 + 0xc,0xffffffff8200dfc0,((ulonglong)uStack_e0 & 0xfffffffc) + 8);
          goto LAB_82707030;
        }
      }
      else {
        iVar13 = fn_826F6FF8(param_1,uVar8,uVar7,((ulonglong)uStack_e0 & 0xfffffffc) + 8,param_3
                                );
LAB_82707030:
        if ((uVar8 & 0xffffffff) != 0) {
          fn_82687270(uVar8);
        }
      }
      if ((uVar24 & 0xffffffff) != 0) {
        fn_8267C4F0(uVar24);
      }
    }
    else {
      uVar23 = uVar4 | 0x10001;
      if (*(char *)(param_2 + 0x18) != '\0') {
        uVar23 = uVar4 | 0x210001;
      }
      iVar13 = fn_8268ACE8(&uStack_dc);
      bVar26 = (iVar13 == 0) << 1;
      if (iVar13 == 0) {
LAB_827070c8:
        uStack_a8 = 3;
        fn_8268C750(auStack_a4,&uStack_e0);
        fn_8268C750(auStack_a0,param_4);
        iVar13 = fn_826E5AE8(param_3,&uStack_a8,uVar23,0,0);
        fn_826D7220(&uStack_a8);
        if (iVar13 == 0) {
          if ((uVar22 != 0) &&
             (bVar25 = *(char *)(param_2 + 0x18) == '\0', bVar26 = bVar25 << 1, bVar25)) {
            fn_826E4CA8(uVar22 + 0xc,0xffffffff8200dfa8,((ulonglong)uStack_e0 & 0xfffffffc) + 8)
            ;
          }
          goto LAB_827071d4;
        }
      }
      else {
        uStack_b8 = 3;
        fn_8268C750(auStack_b4,&uStack_dc);
        fn_8268C750(auStack_b0,param_4);
        iVar13 = fn_826E5AE8(param_3,&uStack_b8,uVar23,0,0);
        fn_826D7220(&uStack_b8);
        if (iVar13 == 0) goto LAB_827070c8;
      }
      uVar21 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar13 + 0x1c) + 0xc) + 0x20) + 0x28);
    }
LAB_827071d4:
    if (iVar13 != 0) {
      uVar24 = fn_8267B890(*(undefined4 *)(param_1 + 0x14),0x1d8,0);
      bVar25 = (uVar24 & 0xffffffff) == 0;
      bVar26 = bVar25 << 1;
      if (bVar25) {
        piVar14 = (int *)0x0;
      }
      else {
        iStack_c8 = iVar16;
        piVar14 = (int *)fn_826D4148(uVar24,*(undefined4 *)(*(int *)(iVar13 + 0x1c) + 0xc),
                                           iVar13,param_1,piVar15,&iStack_c8,1);
      }
    }
  }
  bVar25 = piVar14 == (int *)0x0;
  if (*(int *)(param_2 + 0x10) == -1) {
    if (piVar14 == (int *)0x0) {
      iStack_c4 = 0x10001;
      uVar7 = (**(code **)(*piVar15 + 0x48))(piVar15);
      fn_826DCF88(&piStack_c0,uVar7,&iStack_c4);
      iStack_c4 = iVar16;
      piVar14 = (int *)(**(code **)(*piStack_c0 + 0x24))(piStack_c0,piVar15,&iStack_c4,uStack_bc);
      if (piVar14 == (int *)0x0) goto LAB_82707344;
    }
    fn_8269AD40(piVar14,param_1);
    piVar14[6] = piVar9[6];
    piVar14[5] = piVar9[5];
    if (((uint)piVar9[0x23] >> 0xe & 1) == 0) {
      uVar22 = (ulonglong)(uint)piVar9[0x20];
      if (piVar9[0x20] == 0) {
        uVar22 = fn_8269F500(piVar9);
      }
      if ((uVar22 & 0xffffffff) == 0) {
        iVar16 = (**(code **)(*piVar9 + 0x58))(piVar9);
        uVar22 = (ulonglong)*(uint *)(iVar16 + 0x78);
      }
      (**(code **)(*piVar14 + 0x20))(piVar14,uVar22 + 8);
    }
    (**(code **)(*piVar15 + 0x114))(piVar15,piVar9,piVar14);
    fn_82705900(param_1,piVar14);
    fn_826CBFF0(piVar14,param_1);
  }
  else {
    if (piVar14 != (int *)0x0) {
      fn_826CDDC0(piVar14);
      fn_82703090(param_1,*(undefined4 *)(param_2 + 0x10),piVar14);
      *(uint *)(param_1 + 0xb00) = *(uint *)(param_1 + 0xb00) & 0xfffffeff;
      fn_82705900(param_1,piVar14);
    }
    if ((*(int *)(param_1 + 0x68) == 0) && (uVar22 != 0)) {
      fn_826E4CA8(uVar22 + 0xc,0xffffffff8200df74);
      if (piVar14 != (int *)0x0) {
        fn_8267C498(piVar14);
      }
      if (iVar13 != 0) {
        fn_82687270(iVar13);
      }
      if (piVar9 != (int *)0x0) {
        fn_8267C498(piVar9);
      }
      lVar19 = ((ulonglong)uStack_dc & 0xfffffffc) + 4;
      do {
        puVar12 = (uint *)lVar19;
        uVar22 = (ulonglong)*puVar12;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(uVar22 - 1,0,lVar19);
          *puVar12 = uVar4;
          bVar26 = 2;
        }
      } while (!(bool)(bVar26 >> 1 & 1));
      bVar26 = (uVar22 == 1) << 1;
      if (uVar22 == 1) {
        fn_8267BE38();
      }
      lVar19 = ((ulonglong)uStack_e0 & 0xfffffffc) + 4;
      do {
        puVar12 = (uint *)lVar19;
        uVar22 = (ulonglong)*puVar12;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(uVar22 - 1,0,lVar19);
          *puVar12 = uVar4;
          bVar26 = 2;
        }
      } while (!(bool)(bVar26 >> 1 & 1));
      goto LAB_82707670;
    }
  }
LAB_82707344:
  uVar7 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
  piVar15 = (int *)fn_82696958(param_2 + 0x20,uVar7);
  if (bVar25) {
    if (piVar15 != (int *)0x0) {
      iVar16 = fn_8268ACE8(&uStack_e0);
      if (iVar16 == 0) {
        uVar17 = 0xffffffff8200df64;
      }
      else {
        uVar17 = 0xffffffff8200de4c;
      }
      (**(code **)(*piVar15 + 0x30))(piVar15,uVar7,piVar14,uVar17,0);
    }
  }
  else {
    if (piVar15 != (int *)0x0) {
      (**(code **)(*piVar15 + 0x24))(piVar15,uVar7,piVar14);
      (**(code **)(*piVar15 + 0x34))(piVar15,uVar7,piVar14,uVar21,uVar21);
      (**(code **)(*piVar15 + 0x28))(piVar15,uVar7,piVar14,0);
    }
    fn_826CC448(piVar14);
    fn_82703C40(param_1);
    if (piVar15 != (int *)0x0) {
      (**(code **)(*piVar15 + 0x2c))(piVar15,uVar7,piVar14);
    }
  }
  iVar16 = fn_8268ACE8(&uStack_e0);
  bVar26 = (iVar16 == 0) << 1;
  if (iVar16 == 0) {
    if (piVar9 != (int *)0x0) {
      fn_8267C498(piVar9);
    }
    piVar9 = (int *)0x0;
    fn_826F6DD0(param_1 + 0xb08,*(undefined4 *)(param_1 + 0x14));
  }
  if (piVar14 != (int *)0x0) {
    fn_8267C498(piVar14);
  }
  if (iVar13 != 0) {
    fn_82687270(iVar13);
  }
  if (piVar9 != (int *)0x0) {
    fn_8267C498(piVar9);
  }
  lVar19 = ((ulonglong)uStack_dc & 0xfffffffc) + 4;
  do {
    puVar12 = (uint *)lVar19;
    uVar22 = (ulonglong)*puVar12;
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(uVar22 - 1,0,lVar19);
      *puVar12 = uVar4;
      bVar26 = 2;
    }
  } while (!(bool)(bVar26 >> 1 & 1));
  bVar26 = (uVar22 == 1) << 1;
  if (uVar22 == 1) {
    fn_8267BE38();
  }
  lVar19 = ((ulonglong)uStack_e0 & 0xfffffffc) + 4;
  do {
    puVar12 = (uint *)lVar19;
    uVar22 = (ulonglong)*puVar12;
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(uVar22 - 1,0,lVar19);
      *puVar12 = uVar4;
      bVar26 = 2;
    }
  } while (!(bool)(bVar26 >> 1 & 1));
LAB_82707670:
  if (uVar22 == 1) {
    fn_8267BE38();
  }
  return;
}

