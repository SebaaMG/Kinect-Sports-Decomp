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
extern int fn_82E27130();
extern int fn_82E2D068();
extern int fn_82E50BE8();
extern int fn_82E5C778();
extern int fn_82E5C818();
extern int fn_82E5C838();
extern int fn_82EE2C48();
extern int fn_82F691F0();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;
extern unsigned int lbl_820ED058;
extern unsigned int lbl_820ED068;
extern unsigned int lbl_820F8EB8;
extern unsigned int lbl_820F8EC8;
extern unsigned int lbl_820F8ED8;
extern unsigned int lbl_820F8EE8;
extern unsigned int lbl_820F8EF8;
extern unsigned int lbl_821533F8;
extern unsigned int lbl_82153400;
extern unsigned int lbl_821537D8;
extern unsigned int lbl_821537E8;
extern unsigned int lbl_821537F8;
extern unsigned int lbl_82153808;
extern unsigned int lbl_82153818;
extern unsigned int lbl_82154BE8;
extern unsigned int lbl_82154BF8;
extern unsigned int lbl_82154C08;
extern unsigned int uStack_84;
extern unsigned int uStack_88;


/* WARNING: Removing unreachable block (ram,0x82e54134) */

longlong fn_82E53BF8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 *param_5)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  int *piVar4;
  longlong lVar5;
  short *psVar8;
  undefined8 uVar6;
  int iVar9;
  ulonglong uVar7;
  undefined4 *puVar10;
  byte *pbVar11;
  byte *pbVar13;
  ulonglong uVar12;
  int *piStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  byte abStack_70 [112];
  
  piStack_90 = (int *)0x0;
  piStack_8c = (int *)0x0;
  lVar5 = fn_82E5C778(param_2,abStack_70);
  if (lVar5 < 0) goto LAB_82e540ec;
  pbVar11 = abStack_70;
  pbVar13 = &lbl_820ED058;
  do {
    bVar1 = *pbVar13;
    bVar2 = *pbVar11;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar13 = pbVar13 + 1;
    pbVar11 = pbVar11 + 1;
  } while (pbVar13 != &lbl_820ED068);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    psVar8 = (short *)fn_82E5C818(param_2);
    uVar6 = fn_82E5C838(param_2);
    lVar5 = fn_82E27130(lbl_821533F8,lbl_82153400,psVar8,uVar6);
    if (lVar5 < 0) goto LAB_82e540ec;
    if ((*psVar8 == 1) && (psVar8[8] != 0)) {
      psVar8[8] = 0;
    }
    lVar5 = fn_82EE2C48(psVar8,&piStack_90);
    if (lVar5 < 0) goto LAB_82e540ec;
    uVar6 = 0xffffffff821531b8;
    pcVar3 = *(code **)*piStack_90;
    piVar4 = piStack_90;
    puVar10 = param_5;
  }
  else {
    pbVar11 = abStack_70;
    pbVar13 = &lbl_820F8EB8;
    do {
      bVar1 = *pbVar13;
      bVar2 = *pbVar11;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar13 = pbVar13 + 1;
      pbVar11 = pbVar11 + 1;
    } while (pbVar13 != &lbl_820F8EC8);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      uStack_84 = 1;
      uStack_88 = 1;
      iVar9 = fn_82E5C818(param_2);
      uVar7 = fn_82E5C838(param_2);
      if ((((((uVar7 & 0xffffffff) < 0xb) || ((*(byte *)(iVar9 + 8) & 2) == 0)) ||
           (uVar12 = (ulonglong)*(uint *)(iVar9 + 0xb), (uVar7 - 0xb & 0xffffffff) != uVar12)) ||
          (uVar12 < 0x28)) ||
         ((uVar7 = 0x58, 0x28 < uVar12 && (uVar7 = uVar12 + 0x30, (uVar7 & 0xffffffff) < 0x58)))) {
        lVar5 = -0x3ff2c566;
      }
      else {
        lVar5 = fn_82E50BE8(uVar7,0,0,0,0);
        if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(lVar5,0,uVar7);
        }
        lVar5 = -0x7ff8fff2;
      }
      goto LAB_82e540ec;
    }
    pbVar11 = abStack_70;
    pbVar13 = &lbl_820F8EE8;
    do {
      bVar1 = *pbVar13;
      bVar2 = *pbVar11;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar13 = pbVar13 + 1;
      pbVar11 = pbVar11 + 1;
    } while (pbVar13 != (byte *)&lbl_820F8EF8);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      lVar5 = fn_82E2D068(param_5);
      if (lVar5 < 0) goto LAB_82e540ec;
      puVar10 = (undefined4 *)&lbl_821537D8;
    }
    else {
      pbVar11 = abStack_70;
      pbVar13 = &lbl_82154BE8;
      do {
        bVar1 = *pbVar13;
        bVar2 = *pbVar11;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar13 = pbVar13 + 1;
        pbVar11 = pbVar11 + 1;
      } while (pbVar13 != &lbl_82154BF8);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        iVar9 = fn_82E5C818(param_2);
        pbVar11 = (byte *)(iVar9 + 0x10);
        pbVar13 = (byte *)&lbl_8202E618;
        do {
          bVar1 = *pbVar13;
          bVar2 = *pbVar11;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar13 = pbVar13 + 1;
          pbVar11 = pbVar11 + 1;
        } while (pbVar13 != &lbl_8202E628);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
          lVar5 = fn_82E2D068(param_5);
          if (lVar5 < 0) goto LAB_82e540ec;
          puVar10 = (undefined4 *)&lbl_82153818;
        }
        else {
          lVar5 = fn_82E2D068(param_5);
          if (lVar5 < 0) goto LAB_82e540ec;
          puVar10 = (undefined4 *)&lbl_821537F8;
        }
      }
      else {
        pbVar11 = abStack_70;
        pbVar13 = &lbl_82154BF8;
        do {
          bVar1 = *pbVar13;
          bVar2 = *pbVar11;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar13 = pbVar13 + 1;
          pbVar11 = pbVar11 + 1;
        } while (pbVar13 != &lbl_82154C08);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
          lVar5 = fn_82E2D068(param_5);
          if (lVar5 < 0) goto LAB_82e540ec;
          puVar10 = (undefined4 *)&lbl_82153808;
        }
        else {
          pbVar11 = abStack_70;
          pbVar13 = &lbl_820F8ED8;
          do {
            bVar1 = *pbVar13;
            bVar2 = *pbVar11;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar13 = pbVar13 + 1;
            pbVar11 = pbVar11 + 1;
          } while (pbVar13 != &lbl_820F8EE8);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
            pbVar11 = abStack_70;
            pbVar13 = &lbl_820F8EC8;
            do {
              bVar1 = *pbVar13;
              bVar2 = *pbVar11;
              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
              pbVar13 = pbVar13 + 1;
              pbVar11 = pbVar11 + 1;
            } while (pbVar13 != &lbl_820F8ED8);
            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) goto LAB_82e540ec;
          }
          lVar5 = fn_82E2D068(param_5);
          if (lVar5 < 0) goto LAB_82e540ec;
          puVar10 = (undefined4 *)&lbl_821537E8;
        }
      }
    }
    piVar4 = (int *)*param_5;
    uVar6 = 0xffffffff82153478;
    pcVar3 = *(code **)(*piVar4 + 0x60);
  }
  lVar5 = (*pcVar3)(piVar4,uVar6,puVar10);
LAB_82e540ec:
  if (piStack_90 != (int *)0x0) {
    (**(code **)(*piStack_90 + 8))();
    piStack_90 = (int *)0x0;
  }
  if (piStack_8c != (int *)0x0) {
    (**(code **)(*piStack_8c + 8))();
  }
  return lVar5;
}

