extern unsigned int *puRam83291938;
extern unsigned int *puRam8329193c;
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
extern char cRam832766f0;
extern char cRam832766f1;
extern char cRam8328e7bc;
extern int fn_822315A0();
extern int fn_8225C590();
extern int fn_8225CF60();
extern int fn_822847A8();
extern int fn_822848B8();
extern int fn_82365BD8();
extern int fn_82475DB8();
extern int fn_82478A00();
extern int fn_8247AEC0();
extern int fn_8247B310();
extern int fn_8247B3E0();
extern int fn_8247B498();
extern int fn_8247C228();
extern int fn_8247D2D0();
extern int fn_82487A48();
extern int fn_824C04E0();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_82514888();
extern int fn_825200F0();
extern int fn_82520158();
extern int fn_8256BF18();
extern int fn_8256CC50();
extern int fn_8265BF48();
extern int fn_8265C9E0();
extern int fn_828ACCE8();
extern int iRam831c6658;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821BD414;
extern unsigned int lbl_821BD42C;
extern unsigned int lbl_821BD444;
extern unsigned int lbl_821BD45C;
extern unsigned int lbl_821BD474;
extern unsigned int lbl_821BD48C;
extern unsigned int lbl_821BDA84;
extern unsigned int lbl_821CC160;
extern int (*lbl_83276778)();
extern unsigned int lbl_8328E784;
extern unsigned int lbl_83297810;
extern unsigned int uRam832766f4;
extern unsigned int uStack_d8;


void fn_82479C00(undefined **param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *puVar9;
  undefined8 uVar5;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar14;
  ulonglong uVar8;
  int iVar15;
  char cVar16;
  int iVar17;
  char cVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuStack_e0;
  undefined **ppuStack_dc;
  undefined4 uStack_d8;
  undefined ***pppuStack_d0;
  undefined4 *puStack_c8;
  undefined4 *puStack_c4;
  undefined **appuStack_c0 [4];
  undefined ***pppuStack_b0;
  undefined1 auStack_a0 [48];

  ppuVar19 = param_1 + 0x173;
  fn_8247AEC0(param_1,param_1[0x173]);
  puVar9 = (undefined4 *)fn_8265C9E0(0x120);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9[1] = 1;
    puVar9[2] = 1;
    *puVar9 = &lbl_821AD588;
    if (puVar9 + 3 != (undefined4 *)0x0) {
      fn_82475DB8(puVar9 + 3,param_1 + 0x12,*ppuVar19);
    }
  }
  puStack_c8 = puVar9 + 3;
  puVar1 = param_1[0x822];
  ppuVar20 = param_1 + 0x822;
  puStack_c4 = puVar9;
  uVar5 = fn_82365BD8(&ppuStack_e0,&puStack_c8);
  (**(code **)(puVar1 + 4))(ppuVar20,uVar5);
  puVar1 = param_1[0x1dc];
  puVar10 = (undefined4 *)fn_8265C9E0(0xa8);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar10[1] = 1;
    puVar10[2] = 1;
    *puVar10 = &lbl_821A8D8C;
    if (puVar10 + 4 != (undefined4 *)0x0) {
      pppuStack_d0 = &ppuStack_e0;
      ppuStack_e0 = &lbl_821BD444;
      ppuStack_dc = param_1;
      fn_8247D2D0(puVar10 + 4,param_1 + 0x26,*ppuVar19,param_1 + 0x1de,&ppuStack_e0,puVar1);
    }
  }
  puStack_c8 = puVar10 + 4;
  puVar1 = *ppuVar20;
  puStack_c4 = puVar10;
  uVar5 = fn_82365BD8(&ppuStack_e0,&puStack_c8);
  (**(code **)(puVar1 + 4))(ppuVar20,uVar5);
  puVar1 = param_1[0x1dc];
  puVar2 = param_1[0x172];
  puVar3 = param_1[0x171];
  puVar11 = (undefined4 *)fn_8265C9E0(0x1d0);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar11[1] = 1;
    puVar11[2] = 1;
    *puVar11 = &lbl_821A8D8C;
    if (puVar11 + 4 != (undefined4 *)0x0) {
      pppuStack_d0 = &ppuStack_e0;
      ppuStack_e0 = &lbl_821BD45C;
      ppuStack_dc = param_1;
      fn_82478A00(puVar11 + 4,param_1 + 0x37,puVar3,puVar2,*ppuVar19,&ppuStack_e0,puVar1);
    }
  }
  puStack_c8 = puVar11 + 4;
  puVar1 = *ppuVar20;
  puStack_c4 = puVar11;
  uVar5 = fn_82365BD8(&ppuStack_e0,&puStack_c8);
  (**(code **)(puVar1 + 4))(ppuVar20,uVar5);
  puVar1 = param_1[0x1dc];
  puVar2 = param_1[0x172];
  puVar3 = param_1[0x171];
  puVar12 = (undefined4 *)fn_8265C9E0(0xc0);
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar12[1] = 1;
    puVar12[2] = 1;
    *puVar12 = &lbl_821A8D8C;
    if (puVar12 + 4 != (undefined4 *)0x0) {
      pppuStack_d0 = &ppuStack_e0;
      ppuStack_e0 = &lbl_821BD474;
      ppuStack_dc = param_1;
      fn_8247C228(puVar12 + 4,param_1 + 0x49,*ppuVar19,param_1 + 0x1de,puVar3,puVar2,
                        &ppuStack_e0,puVar1);
    }
  }
  puStack_c8 = puVar12 + 4;
  puVar1 = *ppuVar20;
  puStack_c4 = puVar12;
  uVar5 = fn_82365BD8(&ppuStack_e0,&puStack_c8);
  (**(code **)(puVar1 + 4))(ppuVar20,uVar5);
  puVar1 = param_1[0x1dc];
  puVar2 = param_1[0x172];
  puVar3 = param_1[0x171];
  puVar13 = (undefined4 *)fn_8265C9E0(0x4a8);
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)0x0;
  }
  else {
    puVar13[1] = 1;
    puVar13[2] = 1;
    *puVar13 = &lbl_821A8D8C;
    if (puVar13 + 4 != (undefined4 *)0x0) {
      pppuStack_d0 = &ppuStack_e0;
      ppuStack_e0 = &lbl_821BD48C;
      ppuStack_dc = param_1;
      fn_82487A48(puVar13 + 4,param_1 + 0x4f,*ppuVar19,param_1 + 0x1de,puVar3,puVar2,
                        &ppuStack_e0,puVar1);
    }
  }
  puStack_c8 = puVar13 + 4;
  puVar1 = *ppuVar20;
  puStack_c4 = puVar13;
  uVar5 = fn_82365BD8(&ppuStack_e0,&puStack_c8);
  (**(code **)(puVar1 + 4))(ppuVar20,uVar5);
  puVar1 = *ppuVar19;
  puVar2 = param_1[0x1dc];
  ppuStack_e0 = param_1;
  uVar6 = fn_8265C9E0(0x998);
  if ((uVar6 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_8247B310(uVar6,param_1 + 0x160,param_1 + 0x1de,&ppuStack_e0,puVar2,puVar1);
  }
  puStack_c4 = (undefined4 *)uVar6;
  puStack_c8 = (undefined4 *)((int)puStack_c4 + 0x10);
  puVar1 = *ppuVar20;
  uVar5 = fn_82365BD8(&ppuStack_e0,&puStack_c8);
  (**(code **)(puVar1 + 4))(ppuVar20,uVar5);
  uVar7 = fn_8265C9E0(0x40);
  if ((uVar7 & 0xffffffff) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = fn_8247B3E0(uVar7,param_1 + 0x16c,ppuVar19,param_1 + 0x1de);
  }
  puStack_c4 = (undefined4 *)uVar7;
  puStack_c8 = (undefined4 *)((int)puStack_c4 + 0xc);
  puVar1 = *ppuVar20;
  uVar5 = fn_82365BD8(&ppuStack_e0,&puStack_c8);
  (**(code **)(puVar1 + 4))(ppuVar20,uVar5);
  puVar14 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar14 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    puVar14[1] = 1;
    puVar14[2] = 1;
    *puVar14 = &lbl_821AD588;
    if (puVar14 + 3 != (undefined4 *)0x0) {
      puVar14[5] = 0;
      puVar14[4] = 10;
      uVar4 = lbl_821CC160;
      puVar14[3] = &lbl_821BDA84;
      puVar14[6] = uVar4;
      puVar14[7] = param_1 + 0x1de;
    }
  }
  puStack_c8 = puVar14 + 3;
  puVar1 = *ppuVar20;
  puStack_c4 = puVar14;
  uVar5 = fn_82365BD8(&ppuStack_e0,&puStack_c8);
  (**(code **)(puVar1 + 4))(ppuVar20,uVar5);
  puRam8329193c = param_1[0x4a];
  puRam83291938 = param_1[0x49];
  puVar1 = param_1[0x1dc];
  puVar2 = param_1[0x171];
  ppuStack_e0 = param_1;
  uVar8 = fn_8265C9E0(0x80);
  if ((uVar8 & 0xffffffff) == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = fn_8247B498(uVar8,0xffffffff83291938,ppuVar19,param_1 + 0x1de,puVar2,&ppuStack_e0
                               ,puVar1);
  }
  puStack_c8 = (undefined4 *)(iVar15 + 0x10);
  puVar1 = *ppuVar20;
  puStack_c4 = (undefined4 *)iVar15;
  uVar5 = fn_82365BD8(&ppuStack_e0,&puStack_c8);
  (**(code **)(puVar1 + 4))(ppuVar20,uVar5);
  if (lbl_8328E784 == 0) {
    if ((cRam832766f1 != '\0') || (cRam832766f0 != '\0')) {
      param_1[0x1da] = (undefined *)0x1;
      if (lbl_83276778 != (code *)0x0) {
        (*lbl_83276778)(0,0,0,0xffffffff821bd148,0xffffffff821bd0c8,0x164);
      }
      uVar8 = (ulonglong)lbl_83297810;
      if (uVar8 == 0) {
        uVar8 = fn_82511928();
      }
      fn_825138E0(&puStack_c8,uVar8,1);
      if ((cRam832766f0 == '\0') ||
         ((puStack_c8 != (undefined4 *)0x0 && (cVar16 = fn_828ACCE8(puStack_c8[2]), cVar16 != '\0')
          ))) {
        cVar16 = 'p';
        cVar18 = cRam8328e7bc;
        if (cRam8328e7bc == 'p') {
          cVar18 = 'p';
          iVar17 = 0;
          do {
            if (cVar18 == '\0') goto LAB_8247a26c;
            cVar16 = "partymode"[iVar17 + 1];
            cVar18 = *(char *)(iVar17 + -0x7cd71843);
            iVar17 = iVar17 + 1;
          } while (cVar18 == cVar16);
        }
        if (cVar18 == cVar16) {
LAB_8247a26c:
          uVar5 = 5;
          if (cRam832766f0 != '\0') goto LAB_8247a278;
        }
        else {
LAB_8247a278:
          uVar5 = 7;
        }
        fn_824C04E0(ppuVar20,uVar5);
      }
      else {
        ppuStack_e0 = (undefined **)0x0;
        ppuStack_dc = (undefined **)0x0;
        cRam832766f0 = 0;
        uRam832766f4 = 1;
        cRam832766f1 = '\0';
        uStack_d8 = 0;
        fn_82514888(&ppuStack_e0);
      }
      cRam832766f0 = '\0';
      if (puStack_c4 != (undefined4 *)0x0) {
        fn_822315A0();
      }
      goto LAB_8247a2ac;
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 8;
  }
  fn_824C04E0(ppuVar20,uVar5);
LAB_8247a2ac:
  uVar5 = fn_8225C590();
  if (iRam831c6658 == -1) {
    ppuStack_e0 = &lbl_821BD42C;
    pppuStack_d0 = &ppuStack_e0;
    pppuStack_b0 = appuStack_c0;
    appuStack_c0[0] = &lbl_821BD414;
    iRam831c6658 = fn_8225CF60(uVar5,appuStack_c0,&ppuStack_e0);
  }
  pppuStack_b0 = (undefined ***)0x0;
  pppuStack_d0 = (undefined ***)0x0;
  fn_822847A8(0,&ppuStack_e0,0,appuStack_c0,1,1);
  fn_822848B8();
  param_1[0x833] = (undefined *)0x1;
  ppuStack_e0 = (undefined **)fn_8265BF48(0xffffffff821bd35c,0);
  puStack_c8 = (undefined4 *)fn_8265BF48(0xffffffff821bd394,0);
  fn_825200F0(appuStack_c0,&ppuStack_e0);
  fn_825200F0(auStack_a0,&puStack_c8);
  fn_82520158(0xffffffff821bd350,&puStack_c8,0);
  uVar5 = fn_8256BF18();
  fn_8256CC50(uVar5,appuStack_c0,auStack_a0,puStack_c8);
  if (iVar15 != 0) {
    fn_822315A0(iVar15);
  }
  if (puVar14 != (undefined4 *)0x0) {
    fn_822315A0(puVar14);
  }
  if ((uVar7 & 0xffffffff) != 0) {
    fn_822315A0(uVar7);
  }
  if ((uVar6 & 0xffffffff) != 0) {
    fn_822315A0(uVar6);
  }
  if (puVar13 != (undefined4 *)0x0) {
    fn_822315A0(puVar13);
  }
  if (puVar12 != (undefined4 *)0x0) {
    fn_822315A0(puVar12);
  }
  if (puVar11 != (undefined4 *)0x0) {
    fn_822315A0(puVar11);
  }
  if (puVar10 != (undefined4 *)0x0) {
    fn_822315A0(puVar10);
  }
  if (puVar9 != (undefined4 *)0x0) {
    fn_822315A0(puVar9);
  }
  return;
}
