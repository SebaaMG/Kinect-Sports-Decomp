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
extern unsigned int *auStack_450;
extern unsigned int *auStack_470;
extern unsigned int *auStack_498;
extern int fn_822315A0();
extern int fn_8225C590();
extern int fn_8225DA18();
extern int fn_8225DA70();
extern int fn_82267890();
extern int fn_82268330();
extern int fn_822686B0();
extern int fn_82269440();
extern int fn_82282468();
extern int fn_82284B08();
extern int fn_82286EA8();
extern int fn_82286F08();
extern int fn_82287590();
extern int fn_82287638();
extern int fn_822888F0();
extern int fn_82289408();
extern int fn_8228ABB8();
extern int fn_8228B270();
extern int fn_8228B330();
extern int fn_8228BF40();
extern int fn_822C5B18();
extern int fn_8234F298();
extern int fn_82359C18();
extern int fn_8265CA20();
extern int fn_8266F628();
extern unsigned int iStack_48c;
extern unsigned int iStack_49c;
extern unsigned int iStack_4a0;
extern unsigned int lbl_821A96C8;
extern unsigned int lbl_832767C8;
extern U64 storeWordConditionalIndexed();


void fn_82286FF0(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  int *piVar13;
  undefined4 *puVar14;
  char in_RESERVE;
  byte in_cr0;
  double dVar15;
  int iStack_4a0;
  int iStack_49c;
  undefined1 auStack_498 [8];
  undefined **ppuStack_490;
  int iStack_48c;
  undefined ***pppuStack_480;
  undefined1 auStack_470 [32];
  undefined1 auStack_450 [1104];
  
  uVar1 = *(uint *)(param_2 + 0x600);
  if (uVar1 == 0) {
    uVar6 = fn_8225C590();
    piVar13 = (int *)(param_2 + 0x6a8);
    bVar5 = true;
    uVar10 = 0;
    do {
      if ((piVar13[1] != -1) &&
         (((*piVar13 == 1 || (*piVar13 == 0)) && (uVar7 = fn_8225DA18(uVar6), piVar13[4] != 0)
          ))) {
        iVar8 = fn_8225DA70(uVar6,auStack_450,uVar7,0);
        if (iVar8 != 0) {
          uVar9 = uVar10;
          if (*(int *)(*(int *)(param_2 + 0x11f0) + 0x18b8) == 1) {
            uVar9 = -((ulonglong)(uVar10 < 2) - 1);
          }
          fn_8234F298(*(int *)(param_2 + 0x11f0) + 0x234,uVar9,&iStack_4a0,auStack_498);
          fn_8228ABB8(param_2,uVar10,auStack_450,&iStack_4a0,auStack_498);
          piVar13[5] = 1;
          piVar13[4] = 0;
        }
        bVar5 = false;
      }
      if (piVar13[5] != 0) {
        lVar12 = fn_82287590(param_2,uVar10);
        bVar5 = (bool)(lVar12 != 0 & bVar5);
      }
      uVar10 = uVar10 + 1;
      piVar13 = piVar13 + 0x10;
    } while ((int)uVar10 < 4);
    if (bVar5) {
      *(undefined4 *)(param_2 + 0x604) = 1;
    }
    goto LAB_82287438;
  }
  if (3 < uVar1) {
    if (uVar1 == 4) {
      if (*(int *)(param_2 + 0x7c8) == 0) {
        *(undefined4 *)(param_2 + 0x7c8) = 1;
        fn_82289408(param_2,1,0,1);
      }
      goto LAB_82287438;
    }
    if (0xd < uVar1) {
      if (uVar1 == 0xe) {
        uVar10 = (ulonglong)lbl_832767C8;
        do {
          puVar11 = (uint *)(uVar10 + 0xa0);
          uVar1 = *puVar11;
          if (in_RESERVE != '\0') {
            uVar4 = storeWordConditionalIndexed((ulonglong)uVar1,0,uVar10 + 0xa0);
            *puVar11 = uVar4;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        if (uVar1 == 0) {
          *(undefined4 *)(param_2 + 0x604) = 0xf;
        }
      }
      goto LAB_82287438;
    }
  }
  lVar12 = 0;
  piVar13 = (int *)(param_2 + 0x6bc);
  do {
    if (*piVar13 != 0) {
      fn_82287590(param_2,lVar12);
    }
    lVar12 = lVar12 + 1;
    piVar13 = piVar13 + 0x10;
  } while ((int)lVar12 < 4);
  if (*(int *)(param_2 + 0x60c) != 0) {
    fn_82267890(param_1,*(undefined4 *)(*(int *)(param_2 + 0x60c) + 0x5c0));
    iVar8 = *(int *)(*(int *)(param_2 + 0x60c) + 0x5c0);
    if (*(int *)(iVar8 + 4) == 0) {
      puVar14 = *(undefined4 **)(iVar8 + 0xc);
      for (puVar2 = (undefined4 *)*puVar14; puVar2 != puVar14; puVar2 = (undefined4 *)*puVar2) {
        if (*(int *)(puVar2[2] + 0x52c) != 8) goto LAB_82287140;
      }
      if (*(int *)(param_2 + 0x60c) != 0) {
        fn_82286EA8();
      }
      *(undefined4 *)(param_2 + 0x60c) = 0;
    }
  }
LAB_82287140:
  if (*(int *)(param_2 + 0x610) != 0) {
    fn_82267890(param_1,*(undefined4 *)(*(int *)(param_2 + 0x610) + 0x5c0));
    iVar8 = *(int *)(*(int *)(param_2 + 0x610) + 0x5c0);
    if (*(int *)(iVar8 + 4) == 0) {
      puVar14 = *(undefined4 **)(iVar8 + 0xc);
      for (puVar2 = (undefined4 *)*puVar14; puVar2 != puVar14; puVar2 = (undefined4 *)*puVar2) {
        if (*(int *)(puVar2[2] + 0x52c) != 8) goto LAB_822871a4;
      }
      if (*(int *)(param_2 + 0x610) != 0) {
        fn_82286EA8();
      }
      *(undefined4 *)(param_2 + 0x610) = 0;
    }
  }
LAB_822871a4:
  iVar8 = *(int *)(param_2 + 0x614);
  if (iVar8 != 0) {
    if ((*(int *)(param_2 + 0x7cc) == 0) &&
       (*(uint *)(iVar8 + 0x630) <
        (uint)((*(int *)(iVar8 + 0x6ec) - *(int *)(iVar8 + 0x6e8)) / 0x38))) {
      pppuStack_480 = &ppuStack_490;
      dVar15 = (double)*(float *)(param_2 + 0x1220);
      uVar3 = *(undefined4 *)(param_2 + 0x67c);
      ppuStack_490 = &lbl_821A96C8;
      iStack_48c = param_2;
      fn_822C5B18(auStack_470,&ppuStack_490);
      fn_8228BF40(dVar15,uVar3,uVar3);
      fn_82359C18(&ppuStack_490);
      *(undefined4 *)(param_2 + 0x7cc) = 1;
    }
    fn_822686B0(param_1,*(undefined4 *)(param_2 + 0x614));
    iVar8 = *(int *)(param_2 + 0x614);
    if (*(int *)(*(int *)(iVar8 + 0x5c0) + 4) == 0) {
      puVar14 = *(undefined4 **)(*(int *)(iVar8 + 0x5c0) + 0xc);
      for (puVar2 = (undefined4 *)*puVar14; puVar2 != puVar14; puVar2 = (undefined4 *)*puVar2) {
        if (*(int *)(puVar2[2] + 0x52c) != 8) goto LAB_8228729c;
      }
      if (iVar8 != 0) {
        fn_82268330(iVar8);
        fn_8265CA20(iVar8);
      }
      *(undefined4 *)(param_2 + 0x614) = 0;
    }
  }
LAB_8228729c:
  iVar8 = *(int *)(param_2 + 0x618);
  if (iVar8 != 0) {
    if ((*(int *)(iVar8 + 0x2b4) != 0) || (*(int *)(iVar8 + 0x2b8) != 0)) {
      fn_82269440(iVar8);
    }
    if (*(int *)(iVar8 + 0x380) != 0) {
      fn_82284B08(param_1);
    }
    fn_82267890(param_1,*(undefined4 *)(iVar8 + 0x2cc));
    iVar8 = *(int *)(*(int *)(param_2 + 0x618) + 0x2cc);
    if (*(int *)(iVar8 + 4) == 0) {
      puVar14 = *(undefined4 **)(iVar8 + 0xc);
      for (puVar2 = (undefined4 *)*puVar14; puVar2 != puVar14; puVar2 = (undefined4 *)*puVar2) {
        if (*(int *)(puVar2[2] + 0x52c) != 8) goto LAB_82287438;
      }
      if (*(int *)(param_2 + 0x618) != 0) {
        fn_82286F08();
      }
      *(undefined4 *)(param_2 + 0x618) = 0;
    }
  }
LAB_82287438:
  fn_82287638(param_2);
  if (*(int *)(param_2 + 0x11f4) != 0) {
    fn_82284B08(param_1);
  }
  if (*(int *)(param_2 + 0x67c) != 0) {
    fn_82267890(param_1,*(undefined4 *)(*(int *)(param_2 + 0x67c) + 0x80));
  }
  if ((*(int *)(param_2 + 0x600) != 1) && (*(int *)(param_2 + 0x600) != 10)) {
    iVar8 = *(int *)(param_2 + 0x69c);
    if ((*(int *)(iVar8 + 0x44) != 0) &&
       (((*(int *)(iVar8 + 0x44) != 2 && (*(int *)(iVar8 + 0x8c) == 0)) &&
        (*(int *)(iVar8 + 0x6c) == 0)))) {
      fn_822888F0(&iStack_4a0,param_2);
      if (iStack_4a0 != 0) {
        fn_8266F628(iStack_4a0,1);
      }
      if (iStack_49c != 0) {
        fn_822315A0();
      }
    }
  }
  lVar12 = 0;
  puVar14 = (undefined4 *)(param_2 + 0x62c);
  do {
    if (puVar14[1] != 0) {
      if (puVar14[-3] == 0) {
        fn_8228B270(param_2,lVar12);
      }
      fn_8228B330(param_2,lVar12,*puVar14);
      piVar13 = *(int **)(puVar14[-4] + 0xb4);
      iVar8 = (**(code **)(*piVar13 + 0x14))(piVar13);
      if (iVar8 == 0) {
        (**(code **)(*piVar13 + 0xc))(piVar13);
      }
      else {
        fn_82282468(puVar14[-4],puVar14[-1]);
        puVar14[1] = 0;
      }
    }
    lVar12 = lVar12 + 1;
    puVar14 = puVar14 + 6;
  } while ((int)lVar12 < 4);
  return;
}

