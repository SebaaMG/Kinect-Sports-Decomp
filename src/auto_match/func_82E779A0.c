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
extern int fn_82E39CE8();
extern int fn_82E4FE40();
extern int fn_82E763E8();
extern int fn_82E76510();
extern int fn_82E76570();
extern int fn_82E76638();
extern int fn_82F691F0();
extern unsigned int iStack_b0;
extern unsigned int lbl_8214C2C0;
extern unsigned int lbl_8214C2D0;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_ac;


longlong fn_82E779A0(int param_1,short param_2,int *param_3,undefined2 *param_4,ushort *param_5,
                      uint param_6)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  short *psVar4;
  int iVar5;
  ulonglong uVar6;
  bool bVar7;
  ushort *puVar8;
  ulonglong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ushort *puVar12;
  ushort uVar13;
  ushort *puVar14;
  ulonglong uVar15;
  longlong lVar17;
  code *pcVar18;
  int iStack_b0;
  uint uStack_ac;
  ushort *apuStack_a8 [2];
  byte abStack_a0 [4];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ushort uStack_90;
  undefined2 uVar16;
  
  if (((param_3 == (int *)0x0) || (param_4 == (undefined2 *)0x0)) || (param_5 == (ushort *)0x0)) {
    return -0x7fffbffd;
  }
  psVar4 = *(short **)(param_1 + 8);
  uVar15 = 8;
  uVar16 = 8;
  iStack_b0 = 0;
  lVar17 = 0;
  puVar14 = (ushort *)((param_6 & 0xffff) + (int)param_5);
  for (; apuStack_a8[0] = param_5, psVar4 != (short *)0x0; psVar4 = *(short **)(psVar4 + 4)) {
    if (*psVar4 == param_2) {
      iVar5 = *(int *)(psVar4 + 2);
      if (iVar5 != 0) {
        uVar3 = *(ushort *)(iVar5 + 4);
        uVar13 = 0;
        if (uVar3 != 0) {
          goto LAB_82e77a58;
        }
      }
      break;
    }
  }
  goto LAB_82e77c80;
LAB_82e77a58:
  do {
    puVar8 = apuStack_a8[0];
    uVar16 = (undefined2)uVar15;
    bVar7 = false;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    lVar17 = fn_82E76510(iVar5,uVar13,abStack_a0);
    if (lVar17 < 0) goto LAB_82e77c84;
    pbVar10 = abStack_a0;
    pbVar11 = &lbl_8214C2C0;
    do {
      bVar1 = *pbVar11;
      bVar2 = *pbVar10;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar11 = pbVar11 + 1;
      pbVar10 = pbVar10 + 1;
    } while (pbVar11 != &lbl_8214C2D0);
    pcVar18 = *(code **)(*param_3 + 0x40);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      lVar17 = (*pcVar18)(param_3,0xffffffff8215388c,&iStack_b0,&uStack_ac);
      if (lVar17 < 0) {
        pcVar18 = *(code **)(*param_3 + 0x40);
        goto LAB_82e77b00;
      }
    }
    else {
LAB_82e77b00:
      lVar17 = (*pcVar18)(param_3,abStack_a0,&iStack_b0,&uStack_ac);
      if (((int)lVar17 < 0) && ((int)lVar17 != -0x3ff2c91a)) break;
    }
    if ((int)lVar17 == -0x3ff2c91a) {
      lVar17 = fn_82E76638(iVar5,uVar13,&iStack_b0,&uStack_ac);
      if (lVar17 < 0) goto LAB_82e77c84;
      bVar7 = true;
    }
    if ((uStack_ac != 0) && (iStack_b0 == 0)) {
      lVar17 = -0x3ff2c945;
      break;
    }
    uVar9 = (ulonglong)uStack_90;
    uVar6 = (ulonglong)uStack_ac & 0xffff;
    if (uVar9 == 0xffff) {
      puVar12 = puVar8 + 1;
      lVar17 = 0;
      uVar15 = uVar15 + 2 & 0xffff;
      if (puVar14 < puVar12) {
        lVar17 = -0x7fff0001;
      }
      else {
        *puVar8 = (ushort)(((ulonglong)uStack_ac & 0xff) << 8) | (ushort)(uVar6 >> 8);
        apuStack_a8[0] = puVar12;
      }
      if ((int)lVar17 < 0) goto LAB_82e77c84;
      if ((uStack_ac & 0xffff) != 0) {
        uVar15 = uVar15 + uVar6 & 0xffff;
        lVar17 = fn_82E39CE8(iStack_b0,apuStack_a8,uVar6,puVar14);
LAB_82e77c44:
        if (lVar17 < 0) goto LAB_82e77c84;
      }
    }
    else {
      uVar15 = uVar15 + uVar9 & 0xffff;
      if (uVar9 == uVar6) {
        if ((uStack_ac & 0xffff) != 0) {
          lVar17 = fn_82E39CE8(iStack_b0,apuStack_a8,uVar6,puVar14);
          if (lVar17 < 0) goto LAB_82e77c84;
          if (!bVar7) {
            lVar17 = fn_82E76570(iVar5,uVar13,iStack_b0,uStack_ac);
            goto LAB_82e77c44;
          }
        }
      }
      else {
        if ((uVar9 != 0) && ((uStack_ac & 0xffff) == 0)) {
          lVar17 = fn_82E763E8(apuStack_a8,uVar9,puVar14);
          goto LAB_82e77c44;
        }
        lVar17 = -0x3ff2c945;
      }
    }
    uVar16 = (undefined2)uVar15;
    uVar13 = uVar13 + 1;
  } while (uVar13 < uVar3);
  if ((int)lVar17 < 0) goto LAB_82e77c84;
LAB_82e77c80:
  *param_4 = uVar16;
LAB_82e77c84:
  fn_82E4FE40(iStack_b0);
  if (-1 < (int)lVar17) {
    return lVar17;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_5,0,*param_4);
}

