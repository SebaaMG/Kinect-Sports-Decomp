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
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_8250BD30();
extern unsigned int uStack_104;
extern unsigned int uStack_124;
extern unsigned int uStack_64;
extern unsigned int uStack_84;
extern unsigned int uStack_a4;
extern unsigned int uStack_c4;
extern unsigned int uStack_e4;


uint * fn_8250B1A8(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined4 uStack_124;
  undefined4 auStack_120 [7];
  undefined4 uStack_104;
  undefined4 auStack_100 [7];
  undefined4 uStack_e4;
  undefined4 auStack_e0 [7];
  undefined4 uStack_c4;
  undefined4 auStack_c0 [7];
  undefined4 uStack_a4;
  undefined4 auStack_a0 [7];
  undefined4 uStack_84;
  undefined4 auStack_80 [7];
  undefined4 uStack_64;
  undefined4 auStack_60 [24];
  
  iVar12 = param_3 - 0x14;
  uVar6 = (int)(param_3 - param_2) / 0x14;
  iVar10 = (int)(iVar12 - param_2) / 0x14;
  uVar6 = (((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0)) * 0x14 + param_2;
  uVar9 = param_2;
  if (0x28 < iVar10) {
    uVar9 = iVar10 + 1;
    iVar10 = ((int)uVar9 >> 3) + (uint)((int)uVar9 < 0 && (uVar9 & 7) != 0);
    uVar9 = iVar10 * 0x14 + param_2;
    fn_8250BD30(param_2,uVar9,iVar10 * 0x28 + param_2);
    fn_8250BD30(uVar6 + iVar10 * -0x14,uVar6,iVar10 * 0x14 + uVar6);
    iVar11 = iVar12 + iVar10 * -0x14;
    fn_8250BD30(iVar12 + iVar10 * -0x28,iVar11,iVar12);
    iVar12 = iVar11;
  }
  fn_8250BD30(uVar9,uVar6,iVar12);
  uVar9 = uVar6 + 0x14;
  for (; param_2 < uVar6; uVar6 = uVar6 - 0x14) {
    if ((*(float *)(uVar6 - 0xc) < *(float *)(uVar6 + 8)) ||
       (*(float *)(uVar6 + 8) < *(float *)(uVar6 - 0xc))) break;
  }
  uVar1 = uVar6;
  uVar4 = uVar9;
  if (uVar9 < param_3) {
    do {
      uVar4 = uVar9;
      if ((*(float *)(uVar9 + 8) < *(float *)(uVar6 + 8)) ||
         (*(float *)(uVar6 + 8) < *(float *)(uVar9 + 8))) break;
      uVar9 = uVar9 + 0x14;
      uVar4 = uVar9;
    } while (uVar9 < param_3);
  }
LAB_8250b39c:
  do {
    uVar3 = uVar6;
    uVar5 = uVar1;
    if (uVar9 < param_3) {
      if (*(float *)(uVar9 + 8) <= *(float *)(uVar6 + 8)) {
        if (*(float *)(uVar9 + 8) < *(float *)(uVar6 + 8)) goto joined_r0x8250b3a8;
        puVar7 = &uStack_104;
        uVar3 = uVar4 + 0x14;
        puVar8 = (undefined4 *)(uVar4 - 4);
        lVar13 = 5;
        do {
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        puVar8 = (undefined4 *)(uVar9 - 4);
        puVar7 = (undefined4 *)(uVar4 - 4);
        lVar13 = 5;
        do {
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        puVar8 = &uStack_104;
        puVar7 = (undefined4 *)(uVar9 - 4);
        lVar13 = 5;
        do {
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar8;
          lVar13 = lVar13 + -1;
          uVar4 = uVar3;
        } while (lVar13 != 0);
      }
LAB_8250b398:
      uVar9 = uVar9 + 0x14;
      goto LAB_8250b39c;
    }
joined_r0x8250b3a8:
    for (; param_2 < uVar5; uVar5 = uVar5 - 0x14) {
      uVar6 = uVar3;
      if (*(float *)(uVar3 + 8) <= *(float *)(uVar1 - 0xc)) {
        if (*(float *)(uVar3 + 8) < *(float *)(uVar1 - 0xc)) break;
        uVar6 = uVar3 - 0x14;
        puVar7 = &uStack_84;
        puVar8 = (undefined4 *)(uVar3 - 0x18);
        lVar13 = 5;
        do {
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        puVar8 = (undefined4 *)(uVar1 - 0x18);
        puVar7 = (undefined4 *)(uVar3 - 0x18);
        lVar13 = 5;
        do {
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        puVar8 = &uStack_84;
        puVar7 = (undefined4 *)(uVar1 - 0x18);
        lVar13 = 5;
        do {
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      uVar3 = uVar6;
      uVar1 = uVar1 - 0x14;
    }
    if (uVar5 == param_2) {
      if (uVar9 == param_3) {
        *param_1 = uVar3;
        param_1[1] = uVar4;
        return param_1;
      }
      if (uVar4 != uVar9) {
        puVar7 = &uStack_c4;
        puVar8 = (undefined4 *)(uVar3 - 4);
        lVar13 = 5;
        do {
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        puVar8 = (undefined4 *)(uVar4 - 4);
        puVar7 = (undefined4 *)(uVar3 - 4);
        lVar13 = 5;
        do {
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        puVar8 = &uStack_c4;
        puVar7 = (undefined4 *)(uVar4 - 4);
        lVar13 = 5;
        do {
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      puVar7 = &uStack_124;
      uVar4 = uVar4 + 0x14;
      lVar13 = 5;
      uVar6 = uVar3 + 0x14;
      uVar2 = uVar9 + 0x14;
      puVar8 = (undefined4 *)(uVar3 - 4);
      do {
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      puVar8 = (undefined4 *)(uVar9 - 4);
      puVar7 = (undefined4 *)(uVar3 - 4);
      lVar13 = 5;
      do {
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      puVar8 = &uStack_124;
      puVar7 = (undefined4 *)(uVar9 - 4);
      lVar13 = 5;
      do {
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar8;
        lVar13 = lVar13 + -1;
        uVar1 = uVar5;
        uVar9 = uVar2;
      } while (lVar13 != 0);
    }
    else {
      if (uVar9 != param_3) {
        puVar7 = &uStack_64;
        uVar1 = uVar5 - 0x14;
        puVar8 = (undefined4 *)(uVar9 - 4);
        lVar13 = 5;
        do {
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        puVar8 = (undefined4 *)(uVar5 - 0x18);
        puVar7 = (undefined4 *)(uVar9 - 4);
        lVar13 = 5;
        do {
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        puVar8 = &uStack_64;
        puVar7 = (undefined4 *)(uVar5 - 0x18);
        lVar13 = 5;
        do {
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar8;
          lVar13 = lVar13 + -1;
          uVar6 = uVar3;
        } while (lVar13 != 0);
        goto LAB_8250b398;
      }
      uVar1 = uVar5 - 0x14;
      uVar6 = uVar3 - 0x14;
      if (uVar1 != uVar6) {
        puVar7 = &uStack_e4;
        puVar8 = (undefined4 *)(uVar5 - 0x18);
        lVar13 = 5;
        do {
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        puVar8 = (undefined4 *)(uVar3 - 0x18);
        puVar7 = (undefined4 *)(uVar5 - 0x18);
        lVar13 = 5;
        do {
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        puVar8 = &uStack_e4;
        puVar7 = (undefined4 *)(uVar3 - 0x18);
        lVar13 = 5;
        do {
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      uVar5 = uVar4 - 0x14;
      puVar7 = &uStack_a4;
      puVar8 = (undefined4 *)(uVar3 - 0x18);
      lVar13 = 5;
      do {
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      puVar8 = (undefined4 *)(uVar4 - 0x18);
      puVar7 = (undefined4 *)(uVar3 - 0x18);
      lVar13 = 5;
      do {
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      puVar8 = &uStack_a4;
      puVar7 = (undefined4 *)(uVar4 - 0x18);
      lVar13 = 5;
      do {
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar8;
        lVar13 = lVar13 + -1;
        uVar4 = uVar5;
      } while (lVar13 != 0);
    }
  } while( true );
}

