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
extern int fn_82292BC0();
extern int fn_82292C30();
extern int fn_8245A5C8();
extern int fn_8245AA30();
extern int fn_8245DD40();
extern int fn_8245E230();
extern int fn_8248B7E0();
extern int fn_8248DE88();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern unsigned int lbl_821BBC84;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int *lbl_83276594;
extern unsigned int *lbl_8327F848;
extern U64 storeWordConditionalIndexed();


void fn_824BDE68(longlong param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte in_xer_so;
  char in_RESERVE;
  byte bVar12;
  longlong lVar13;
  
  piVar5 = (int *)param_1;
  if (piVar5[0x1e] != 0) {
    (**(code **)(*lbl_8327F848 + 0x54))();
    piVar2 = (int *)piVar5[0x1e];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2,1);
    }
    piVar5[0x1e] = 0;
  }
  if ((param_2 != 0) && (piVar5[0x14] == 0)) {
    fn_82292BC0(0,0,0);
    fn_82292C30(5);
  }
  uVar9 = 0;
  if ((piVar5[2] - piVar5[1]) / 0x28 != 0) {
    iVar10 = 0;
    do {
      iVar6 = *piVar5;
      iVar11 = *(int *)(iVar6 + 0x18);
      iVar3 = *(int *)(iVar10 + piVar5[1]);
      if (iVar11 != *(int *)(iVar6 + 0x1c)) {
        do {
          if (*(int *)(iVar11 + 0x2c) == iVar3) {
            fn_8248DE88(iVar11);
          }
          iVar11 = iVar11 + 0x68;
        } while (iVar11 != *(int *)(iVar6 + 0x1c));
      }
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 0x28;
    } while (uVar9 < (uint)((piVar5[2] - piVar5[1]) / 0x28));
  }
  uVar9 = 0;
  bVar1 = (piVar5[10] - piVar5[9]) / 0x28 == 0;
  bVar12 = bVar1 << 1 | in_xer_so;
  if (!bVar1) {
    iVar10 = 0;
    do {
      for (iVar6 = *(int *)(*piVar5 + 0x30); iVar6 != *(int *)(*piVar5 + 0x34); iVar6 = iVar6 + 0x20
          ) {
        if (*(int *)(iVar6 + 0x18) == *(int *)(iVar10 + piVar5[9])) {
          fn_8248B7E0();
          break;
        }
      }
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 0x28;
    } while (uVar9 < (uint)((piVar5[10] - piVar5[9]) / 0x28));
  }
  piVar5[0x11] = 0;
  if (piVar5[0x3a] != 0) {
    fn_8251FA58();
    piVar5[0x3a] = 0;
  }
  if (piVar5[0x3b] != 0) {
    fn_8251FA58();
    piVar5[0x3b] = 0;
  }
  if (piVar5[0x3c] != 0) {
    fn_8251FA58();
    piVar5[0x3c] = 0;
  }
  piVar5[0x36] = 0;
  iVar10 = lbl_821CC160;
  piVar5[0x37] = lbl_821CC160;
  do {
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(0,0,param_1 + 0xe0);
      *(undefined4 *)(param_1 + 0xe0) = uVar4;
      bVar12 = 2;
    }
  } while (!(bool)(bVar12 >> 1 & 1));
  do {
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(0,0,param_1 + 0x6c);
      *(undefined4 *)(param_1 + 0x6c) = uVar4;
      bVar12 = 2;
    }
  } while (!(bool)(bVar12 >> 1 & 1));
  do {
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(0,0,param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x70) = uVar4;
      bVar12 = 2;
    }
  } while (!(bool)(bVar12 >> 1 & 1));
  do {
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(0,0,param_1 + 0x74);
      *(undefined4 *)(param_1 + 0x74) = uVar4;
      bVar12 = 2;
    }
  } while (!(bool)(bVar12 >> 1 & 1));
  piVar5[0x23] = iVar10;
  piVar5[0x22] = iVar10;
  piVar5[0x21] = iVar10;
  puVar7 = lbl_83276594;
  iVar10 = lbl_821CA460;
  piVar5[0x12d] = lbl_821CA460;
  piVar5[0x12e] = iVar10;
  if (puVar7 == (undefined4 *)0x0) {
    lbl_83276594 = (undefined4 *)fn_8265C9E0(0x100);
    if (lbl_83276594 == (undefined4 *)0x0) {
      lbl_83276594 = (undefined4 *)0x0;
    }
    else {
      *lbl_83276594 = &lbl_821BBC84;
      lbl_83276594[1] = 0;
      puVar8 = lbl_83276594 + 0x1a;
      lbl_83276594[2] = 0;
      puVar7 = lbl_83276594 + 0xb;
      lbl_83276594[3] = 0;
      lbl_83276594[4] = 0;
      lbl_83276594[0x15] = 0;
      lVar13 = 3;
      lbl_83276594[0x16] = 0;
      lbl_83276594[0x14] = 0;
      lbl_83276594[5] = 0;
      lbl_83276594[6] = 0;
      lbl_83276594[7] = 0;
      lbl_83276594[8] = 0;
      lbl_83276594[0x12] = 0;
      lbl_83276594[0x13] = 0;
      lbl_83276594[0x37] = 0;
      lbl_83276594[0x38] = 0;
      lbl_83276594[0x35] = 0;
      lbl_83276594[0x36] = 0;
      lbl_83276594[0xb] = 0;
      lbl_83276594[10] = 0;
      do {
        puVar7[4] = 0;
        puVar7 = puVar7 + 1;
        *puVar7 = 0;
        puVar8[9] = 0;
        puVar8 = puVar8 + 7;
        *puVar8 = 0xffffffff;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      lbl_83276594[0x1a] = 0xffffffff;
      lbl_83276594[0x1c] = 0;
      lbl_83276594[9] = 0;
    }
    RtlInitializeCriticalSection(lbl_83276594 + 0x39);
    puVar7 = lbl_83276594;
  }
  fn_8245E230(puVar7);
  if (lbl_83276594 == (undefined4 *)0x0) {
    lbl_83276594 = (undefined4 *)fn_8265C9E0(0x100);
    if (lbl_83276594 == (undefined4 *)0x0) {
      lbl_83276594 = (undefined4 *)0x0;
    }
    else {
      *lbl_83276594 = &lbl_821BBC84;
      lbl_83276594[1] = 0;
      puVar8 = lbl_83276594 + 0x1a;
      lbl_83276594[2] = 0;
      puVar7 = lbl_83276594 + 0xb;
      lbl_83276594[3] = 0;
      lbl_83276594[4] = 0;
      lbl_83276594[0x15] = 0;
      lVar13 = 3;
      lbl_83276594[0x16] = 0;
      lbl_83276594[0x14] = 0;
      lbl_83276594[5] = 0;
      lbl_83276594[6] = 0;
      lbl_83276594[7] = 0;
      lbl_83276594[8] = 0;
      lbl_83276594[0x12] = 0;
      lbl_83276594[0x13] = 0;
      lbl_83276594[0x37] = 0;
      lbl_83276594[0x38] = 0;
      lbl_83276594[0x35] = 0;
      lbl_83276594[0x36] = 0;
      lbl_83276594[0xb] = 0;
      lbl_83276594[10] = 0;
      do {
        puVar7[4] = 0;
        puVar7 = puVar7 + 1;
        *puVar7 = 0;
        puVar8[9] = 0;
        puVar8 = puVar8 + 7;
        *puVar8 = 0xffffffff;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      lbl_83276594[0x1a] = 0xffffffff;
      lbl_83276594[0x1c] = 0;
      lbl_83276594[9] = 0;
    }
    RtlInitializeCriticalSection(lbl_83276594 + 0x39);
  }
  puVar7 = lbl_83276594;
  lbl_83276594[0x16] = 0;
  if ((puVar7[0x15] != 0) && (puVar7[0x14] == 0)) {
    fn_8245DD40();
  }
  fn_8245A5C8();
  fn_8245AA30();
  return;
}

