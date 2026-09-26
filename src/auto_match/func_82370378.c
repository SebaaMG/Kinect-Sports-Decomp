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
extern unsigned int *auStack_90;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_822ABA88();
extern int fn_822B8700();
extern int fn_82366AE8();
extern int fn_82370850();
extern int fn_82371A50();
extern int fn_82375E60();
extern int fn_8237E710();
extern int fn_82384660();
extern int fn_823878C8();
extern int fn_824CCD80();
extern int fn_82522588();
extern int fn_825603C8();
extern int fn_825604A0();
extern int fn_827F57E8();
extern unsigned int iStack_8c;
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832975B0;


void fn_82370378(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar5;
  int iVar6;
  undefined8 uVar4;
  undefined4 *puVar7;
  int iVar8;
  longlong lVar9;
  int *piVar11;
  ulonglong uVar10;
  double dVar12;
  double dVar13;
  undefined1 auStack_90 [4];
  int iStack_8c;
  
  param_1[0x27e] = 0;
  param_1[0x3c] = 1;
  fn_82375E60();
  iVar6 = 0;
  *(undefined4 *)(param_1[0x1f7] + 4) = 1;
  if ((((int *)param_1[2])[1] - *(int *)param_1[2] & 0xfffffffcU) != 0) {
    iVar8 = 0;
    dVar12 = (double)lbl_8218E8FC;
    dVar13 = (double)lbl_821CC160;
    do {
      lVar9 = 0;
      piVar2 = *(int **)(param_1[8] + iVar8);
      piVar11 = (int *)*piVar2;
      piVar3 = *(int **)(*(int *)param_1[2] + iVar8);
      if (piVar11 != (int *)piVar2[1]) {
        do {
          piVar5 = (int *)fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),lVar9);
          (**(code **)(*(int *)*piVar11 + 8))((int *)*piVar11);
          iVar1 = *piVar11;
          if (piVar5[9] != iVar1) {
            piVar5[9] = iVar1;
            if (iVar1 == 0) {
              *(undefined4 *)(*(int *)(piVar5[5] + 0x8c0) + 0x90) = 0;
            }
            else {
              *(undefined4 *)(*(int *)(piVar5[5] + 0x8c0) + 0x90) = 1;
            }
            (**(code **)(*piVar5 + 0x24))(piVar5);
          }
          iVar1 = piVar5[0x46];
          fn_827F57E8(dVar13,dVar12,*(undefined4 *)(iVar1 + 0x10));
          iVar1 = *(int *)(iVar1 + 0x10);
          *(undefined4 *)(iVar1 + 0x108) = *(undefined4 *)(iVar1 + 0x10c);
          fn_822B8700(piVar5[0x46],1);
          piVar11 = piVar11 + 1;
          lVar9 = lVar9 + 1;
        } while (piVar11 != (int *)piVar2[1]);
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar6 < ((int *)param_1[2])[1] - *(int *)param_1[2] >> 2);
  }
  if ((param_1[0x81] == 0) && (param_1[0x25] != 0)) {
    *(undefined4 *)(param_1[0x25] + 0x50) = 1;
  }
  *(undefined4 *)param_1[0x1f7] = 1;
  fn_82384660(param_1[0x153]);
  fn_82370850(param_1);
  fn_82371A50(param_1);
  iVar6 = (**(code **)(*param_1 + 200))(param_1);
  if (iVar6 == 0) {
    iVar6 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar6 = fn_82250A18();
    }
    if (*(char *)(iVar6 + 4) == '\0') {
      iVar6 = *(int *)param_1[0xc];
      if (*(int *)(iVar6 + 0x22c) != 1) {
        uVar4 = fn_824CCD80(*(undefined4 *)(iVar6 + 0x10));
        fn_825603C8(uVar4,iVar6 + 0x20,1);
        *(undefined4 *)(iVar6 + 0x22c) = 1;
      }
      iVar6 = *(int *)(param_1[0xc] + 8);
    }
    else {
      fn_82366AE8(*(undefined4 *)param_1[0xc],param_1[0x33] == 0);
      iVar6 = *(int *)(param_1[0xc] + 8);
      if (*(int *)(iVar6 + 0x22c) != 0) {
        fn_825604A0(iVar6 + 0x20);
        *(undefined4 *)(iVar6 + 0x22c) = 0;
      }
      fn_82366AE8(*(undefined4 *)(param_1[0xc] + 0x10),param_1[0x33] == 1);
      iVar6 = *(int *)(param_1[0xc] + 0x18);
    }
    if (*(int *)(iVar6 + 0x22c) != 0) {
      fn_825604A0(iVar6 + 0x20);
      *(undefined4 *)(iVar6 + 0x22c) = 0;
    }
  }
  else if (iVar6 == 1) {
    iVar6 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar6 = fn_82250A18();
    }
    if (*(char *)(iVar6 + 4) == '\0') {
      iVar6 = *(int *)param_1[0xc];
      if (*(int *)(iVar6 + 0x22c) != 1) {
        uVar4 = fn_824CCD80(*(undefined4 *)(iVar6 + 0x10));
        fn_825603C8(uVar4,iVar6 + 0x20,1);
        *(undefined4 *)(iVar6 + 0x22c) = 1;
      }
      iVar6 = *(int *)(param_1[0xc] + 8);
      if (*(int *)(iVar6 + 0x22c) != 1) {
        uVar4 = fn_824CCD80(*(undefined4 *)(iVar6 + 0x10));
        fn_825603C8(uVar4,iVar6 + 0x20,1);
        *(undefined4 *)(iVar6 + 0x22c) = 1;
      }
    }
    else {
      fn_82366AE8(*(undefined4 *)param_1[0xc],param_1[0x33] == 0);
      fn_82366AE8(*(undefined4 *)(param_1[0xc] + 8),param_1[0x33] == 1);
    }
  }
  for (uVar10 = (ulonglong)(uint)param_1[0xc];
      (uVar10 & 0xffffffff) != (ulonglong)(uint)param_1[0xd]; uVar10 = uVar10 + 8) {
    puVar7 = (undefined4 *)fn_82522588(auStack_90,uVar10);
    fn_8237E710(*puVar7,2,1);
    if (iStack_8c != 0) {
      fn_822315A0();
    }
  }
  if ((param_2 == 0) && (param_3 == 0)) {
    fn_823878C8(param_1[0x180]);
  }
  return;
}

