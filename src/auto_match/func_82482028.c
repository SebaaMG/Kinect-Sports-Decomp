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
extern unsigned int *auStack_490;
extern unsigned int *auStack_6c0;
extern unsigned int *auStack_8c0;
extern unsigned int *auStack_8e0;
extern unsigned int *auStack_900;
extern unsigned int *auStack_920;
extern unsigned int *auStack_940;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822311F0();
extern int fn_822315A0();
extern int fn_822489C8();
extern int fn_82248B90();
extern int fn_82250A18();
extern int fn_8225F160();
extern int fn_82279438();
extern int fn_82279D28();
extern int fn_822817E0();
extern int fn_8229E090();
extern int fn_823AB158();
extern int fn_8247E4D8();
extern int fn_8247F240();
extern int fn_82483590();
extern int fn_82484618();
extern int fn_82485850();
extern int fn_82485BD8();
extern int fn_824C1BF8();
extern int fn_824C1C58();
extern int fn_824C2330();
extern int fn_824C24B0();
extern int fn_824C25E8();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_82522588();
extern int fn_8288B760();
extern int fn_8288F948();
extern int fn_828A12E8();
extern int fn_828AD740();
extern int fn_82F68CC0();
extern unsigned int iStack_944;
extern unsigned int iStack_948;
extern unsigned int iStack_94c;
extern unsigned int iStack_950;
extern unsigned int iStack_954;
extern unsigned int iStack_958;
extern unsigned int iStack_95c;
extern unsigned int iStack_960;
extern unsigned int lbl_821BD7A8;
extern unsigned int lbl_832975B0;
extern unsigned int lbl_83297810;
extern unsigned int uStack_49c;
extern unsigned int uStack_4a0;
extern unsigned int uStack_4a4;
extern unsigned int uStack_4a8;
extern unsigned int uStack_4ac;
extern unsigned int uStack_4b0;
extern unsigned int uStack_4b4;


void fn_82482028(undefined8 param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar9;
  undefined4 *puVar6;
  longlong lVar5;
  int iVar7;
  int iVar8;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  char *pcVar14;
  byte *pbVar15;
  char *pcVar16;
  uint uVar17;
  int iStack_960;
  int iStack_95c;
  int iStack_958;
  int iStack_954;
  int iStack_950;
  int iStack_94c;
  int iStack_948;
  int iStack_944;
  undefined1 auStack_940 [32];
  undefined1 auStack_920 [32];
  undefined1 auStack_900 [32];
  undefined1 auStack_8e0 [31];
  char cStack_8c1;
  undefined1 auStack_8c0 [255];
  char acStack_7c1 [257];
  undefined1 auStack_6c0 [255];
  char acStack_5c1 [269];
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined1 auStack_490 [1168];
  
  if (*(int *)(param_2 + 0xa4) == 0) {
    return;
  }
  uVar10 = (ulonglong)lbl_83297810;
  if (uVar10 == 0) {
    uVar10 = fn_82511928();
  }
  fn_825138E0(&iStack_958,uVar10,1);
  fn_82522588(&iStack_948,&iStack_958);
  fn_824C24B0(param_1,*(undefined4 *)(param_2 + 0xa4));
  iVar8 = *(int *)(*(int *)(param_2 + 0xa4) + 0x44);
  if (iVar8 != 0) {
    if ((iVar8 == 6) && (*(int *)(param_2 + 0xb8) != 0)) {
      fn_8229E090(*(int *)(param_2 + 0xb8),0,0);
      *(undefined4 *)(param_2 + 0xb8) = 0;
    }
    uVar10 = (ulonglong)lbl_832975B0;
    uVar2 = *(undefined4 *)(*(int *)(param_2 + 0xa4) + 0x44);
    if (uVar10 == 0) {
      uVar10 = fn_82250A18();
    }
    fn_822311F0(uVar10,uVar2);
    *(undefined4 *)(*(int *)(param_2 + 0xa4) + 0x44) = 0;
  }
  fn_822817E0(&iStack_950,*(undefined4 *)(param_2 + 0x14));
  if (iStack_950 == 0) goto LAB_82482244;
  iVar8 = *(int *)(*(int *)(param_2 + 0xa4) + 0x14);
  if (iVar8 == 5) {
LAB_82482120:
    fn_82279D28(iStack_950,0x2d,1);
    fn_82279D28(iStack_950,0x2f,1);
    fn_82279D28(iStack_950,0x31,1);
    uVar12 = 1;
LAB_82482238:
    uVar11 = 0x30;
  }
  else {
    iVar7 = *(int *)(*(int *)(param_2 + 0xa4) + 0x14);
    if ((iVar7 != 2) && (iVar7 != 3)) {
      if ((iVar8 == 6) &&
         ((iStack_948 != 0 &&
          (cVar9 = fn_828AD740(*(undefined4 *)(iStack_948 + 8)), cVar9 == '\0'))))
      goto LAB_82482120;
      if ((*(int *)(*(int *)(param_2 + 0xa4) + 0x14) == 6) && (iStack_948 != 0)) {
        if (*(int *)(*(int *)(param_2 + 0xa4) + 0x48) == 0) {
          cVar9 = '\x01';
        }
        else {
          cVar9 = fn_822489C8();
        }
        if (cVar9 == '\0') goto LAB_82482120;
      }
      fn_82279D28(iStack_950,0x2d,0);
      fn_82279D28(iStack_950,0x2f,0);
      fn_82279D28(iStack_950,0x31,0);
      uVar12 = 0;
      goto LAB_82482238;
    }
    fn_82279D28(iStack_950,0x2d,1);
    fn_82279D28(iStack_950,0x2f,1);
    fn_82279D28(iStack_950,0x30,1);
    uVar12 = 1;
    uVar11 = 0x31;
  }
  fn_82279D28(iStack_950,uVar11,uVar12);
LAB_82482244:
  if (iStack_948 != 0) {
    cVar9 = fn_828AD740(*(undefined4 *)(iStack_948 + 8));
    if (cVar9 == '\0') {
      fn_824C1BF8(auStack_8c0);
      if ((*(int *)(*(int *)(param_2 + 0xa4) + 0x14) == 6) &&
         (*(int **)(iStack_948 + 0x38) != (int *)0x0)) {
        lVar5 = (**(code **)(**(int **)(iStack_948 + 0x38) + 8))();
        uVar12 = fn_8247E4D8(auStack_490,lVar5 + 0xf0);
        fn_82F68CC0(auStack_8c0,uVar12,0x428);
        cVar9 = fn_824C2330(param_2 + 0x114,auStack_8c0);
        if (cVar9 != '\0') {
          fn_82485850(*(undefined4 *)(param_2 + 0x48),auStack_6c0);
          pcVar14 = &cStack_8c1;
          iVar8 = *(int *)(param_2 + 0x48);
          pcVar16 = (char *)(iVar8 + 0x34);
          do {
            bVar1 = pcVar16 == (char *)(iVar8 + 0x134U);
            if ((char *)(iVar8 + 0x134U) <= pcVar16) goto LAB_82482494;
            pcVar14 = pcVar14 + 1;
            cVar9 = *pcVar14;
            *pcVar16 = cVar9;
            pcVar16 = pcVar16 + 1;
          } while (cVar9 != '\0');
          bVar1 = pcVar16 == (char *)(iVar8 + 0x134);
LAB_82482494:
          if (bVar1) {
            pcVar16[-1] = '\0';
          }
          iVar8 = *(int *)(param_2 + 0x48);
          pcVar14 = acStack_7c1;
          pcVar16 = (char *)(iVar8 + 0x134);
          do {
            bVar1 = pcVar16 == (char *)(iVar8 + 0x234U);
            if ((char *)(iVar8 + 0x234U) <= pcVar16) goto LAB_824824cc;
            pcVar14 = pcVar14 + 1;
            cVar9 = *pcVar14;
            *pcVar16 = cVar9;
            pcVar16 = pcVar16 + 1;
          } while (cVar9 != '\0');
          bVar1 = pcVar16 == (char *)(iVar8 + 0x234);
LAB_824824cc:
          if (bVar1) {
            pcVar16[-1] = '\0';
          }
          iVar8 = *(int *)(param_2 + 0x48);
          pcVar14 = acStack_5c1;
          pcVar16 = (char *)(iVar8 + 0x334);
          do {
            bVar1 = pcVar16 == (char *)(iVar8 + 0x434U);
            if ((char *)(iVar8 + 0x434U) <= pcVar16) goto LAB_82482504;
            pcVar14 = pcVar14 + 1;
            cVar9 = *pcVar14;
            *pcVar16 = cVar9;
            pcVar16 = pcVar16 + 1;
          } while (cVar9 != '\0');
          bVar1 = pcVar16 == (char *)(iVar8 + 0x434);
LAB_82482504:
          if (bVar1) {
            pcVar16[-1] = '\0';
          }
          *(undefined4 *)(*(int *)(param_2 + 0x48) + 0x18b8) = uStack_4b0;
          *(undefined4 *)(*(int *)(param_2 + 0x48) + 0x18c0) = uStack_4ac;
          *(undefined4 *)(*(int *)(param_2 + 0x48) + 0x18c4) = uStack_4a8;
          *(undefined4 *)(*(int *)(param_2 + 0x48) + 0x18c8) = uStack_4a4;
          *(undefined4 *)(*(int *)(param_2 + 0x48) + 0x14) = uStack_4a0;
          *(undefined4 *)(*(int *)(param_2 + 0x48) + 0xc) = uStack_49c;
          if (*(char *)(iStack_948 + 0x51) != '\0') {
            fn_82483590(param_2);
            fn_82485BD8(*(undefined4 *)(param_2 + 0x48),1);
            puVar6 = (undefined4 *)fn_8225F160();
            *puVar6 = 0;
            puVar6[7] = 0;
            puVar6[8] = 0;
            puVar6[9] = 0;
            puVar6[10] = 4;
            fn_8247F240(param_2,1);
          }
          fn_822817E0(&iStack_960,*(undefined4 *)(param_2 + 0x14));
          iVar8 = iStack_960;
          if (iStack_960 != 0) {
            for (puVar6 = (undefined4 *)**(undefined4 **)(iStack_960 + 0x10);
                puVar6 != *(undefined4 **)(iStack_960 + 0x10); puVar6 = (undefined4 *)*puVar6) {
              iVar7 = puVar6[2];
              if (*(int *)(iVar7 + 0x10) == 0x2d) goto LAB_824825e0;
            }
            iVar7 = 0;
LAB_824825e0:
            if (iVar7 != 0) {
              fn_82279438(iVar7,(ulonglong)*(uint *)(param_2 + 0x48) + 0xc);
            }
            for (puVar6 = (undefined4 *)**(undefined4 **)(iVar8 + 0x10);
                puVar6 != *(undefined4 **)(iVar8 + 0x10); puVar6 = (undefined4 *)*puVar6) {
              iVar7 = puVar6[2];
              if (*(int *)(iVar7 + 0x10) == 0x31) goto LAB_82482620;
            }
            iVar7 = 0;
LAB_82482620:
            if (iVar7 != 0) {
              fn_82279438(iVar7,(ulonglong)*(uint *)(param_2 + 0x48) + 0x14);
            }
          }
          fn_82F68CC0(param_2 + 0x114,auStack_8c0,0x428);
          if (iStack_95c != 0) {
            fn_822315A0();
          }
        }
      }
    }
    else if (*(int *)(*(int *)(param_2 + 0xa4) + 0x14) == 6) {
      fn_82230110(auStack_920,(ulonglong)*(uint *)(param_2 + 0x48) + 0x334);
      fn_82230110(auStack_8e0,(ulonglong)*(uint *)(param_2 + 0x48) + 0x234);
      fn_82230110(auStack_900,(ulonglong)*(uint *)(param_2 + 0x48) + 0x134);
      fn_82230110(auStack_940,(ulonglong)*(uint *)(param_2 + 0x48) + 0x34);
      uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x48) + 0x18c0);
      uVar3 = *(undefined4 *)(*(int *)(param_2 + 0x48) + 0x18b8);
      uVar12 = fn_82484618();
      fn_824C1C58(auStack_8c0,auStack_940,auStack_900,auStack_8e0,auStack_920,uVar12,uVar3,
                        uVar2);
      fn_82230300(auStack_940,1,0);
      fn_82230300(auStack_900,1,0);
      fn_82230300(auStack_8e0,1,0);
      fn_82230300(auStack_920,1,0);
      puVar6 = (undefined4 *)fn_82484618(*(undefined4 *)(param_2 + 0x48));
      iVar8 = *(int *)(param_2 + 0xa4);
      uStack_4b4 = *puVar6;
      piVar4 = *(int **)(*(int *)(iVar8 + 0x48) + 0x38);
      if (piVar4 != (int *)0x0) {
        uVar2 = *(undefined4 *)(iVar8 + 0x5c);
        lVar5 = (**(code **)(*piVar4 + 8))();
        uVar12 = fn_8247E4D8(auStack_490,lVar5 + 0xf0);
        fn_82F68CC0(uVar2,uVar12,0x428);
        cVar9 = fn_824C2330(*(undefined4 *)(iVar8 + 0x5c),auStack_8c0);
        if (cVar9 != '\0') {
          lVar5 = (**(code **)(**(int **)(*(int *)(iVar8 + 0x48) + 0x38) + 8))();
          fn_824C25E8(lVar5 + 0xf0,auStack_8c0);
          fn_82F68CC0(*(undefined4 *)(iVar8 + 0x5c),auStack_8c0,0x428);
        }
      }
    }
    iVar8 = *(int *)(*(int *)(param_2 + 0xa4) + 0x14);
    if ((iVar8 == 6) || (iVar8 == 5)) {
      bVar1 = false;
      pbVar15 = &lbl_821BD7A8;
      uVar13 = 0x6c;
      uVar10 = (ulonglong)*(byte *)(*(int *)(param_2 + 0x48) + 0x334);
      if (uVar10 == 0x6c) {
        uVar10 = 0x6c;
        do {
          pbVar15 = pbVar15 + 1;
          if (uVar10 == 0) {
            lVar5 = 0;
            goto LAB_824826bc;
          }
          uVar13 = (ulonglong)*pbVar15;
          uVar10 = (ulonglong)pbVar15[*(int *)(param_2 + 0x48) + 0x7de42b8c];
        } while (uVar10 == uVar13);
      }
      lVar5 = uVar10 - uVar13;
LAB_824826bc:
      iVar8 = *(int *)(iStack_958 + 8);
      iStack_960 = iVar8;
      uVar12 = fn_828A12E8(iVar8);
      iVar7 = fn_8288F948(uVar12,1);
      iStack_95c = **(int **)(iVar7 + 4);
      while( true ) {
        iVar7 = iStack_95c;
        uVar12 = fn_828A12E8(iVar8);
        iVar8 = fn_8288F948(uVar12,1);
        if (iVar7 == *(int *)(iVar8 + 4)) break;
        iVar8 = *(int *)(iVar7 + 0x14);
        cVar9 = fn_8288B760(iVar8);
        if (cVar9 == '\0') {
          if ((*(int *)(iVar8 + 0x470) != 0) && ((lVar5 == 0 || (*(int *)(iVar8 + 0x860) != 0)))) {
            bVar1 = true;
          }
          iVar8 = fn_823AB158(iVar8);
          uVar17 = *(byte *)(*(int *)(*(int *)(iVar8 + 0xf0) + 8) + 8) >> 4 & 1;
          if ((*(char *)(iStack_948 + 0x51) != '\0') && (uVar17 != *(uint *)(param_2 + 0x964))) {
            fn_8247F240(param_2,1);
          }
          *(uint *)(param_2 + 0x964) = uVar17;
        }
        fn_82248B90(&iStack_95c);
        iVar8 = iStack_960;
      }
      if ((bVar1) && (*(char *)(iStack_948 + 0x51) == '\0')) {
        fn_82483590(param_2);
        fn_82485BD8(*(undefined4 *)(param_2 + 0x48),0);
        puVar6 = (undefined4 *)fn_8225F160();
        *puVar6 = 0;
        puVar6[7] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[10] = 4;
        fn_8247F240(param_2,1);
        *(undefined1 *)(iStack_948 + 0x51) = 1;
      }
    }
  }
  if (iStack_94c != 0) {
    fn_822315A0();
  }
  if (iStack_944 != 0) {
    fn_822315A0();
  }
  if (iStack_954 != 0) {
    fn_822315A0();
  }
  return;
}

