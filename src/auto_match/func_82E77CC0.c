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
extern int fn_82E4FE08();
extern int fn_82E4FE40();
extern int fn_82E76510();
extern int fn_82E76570();
extern unsigned int lbl_8214C2D0;
extern unsigned int lbl_8214C2E0;
extern unsigned int lbl_8214C2F0;


longlong fn_82E77CC0(int param_1,short param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  short *psVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  ushort uVar15;
  ushort uVar16;
  longlong lVar17;
  ushort uVar18;
  undefined1 uVar19;
  byte abStack_90 [144];
  
  puVar12 = (undefined1 *)0x0;
  puVar11 = (undefined1 *)0x0;
  uVar15 = 0;
  uVar16 = 0;
  for (psVar4 = *(short **)(param_1 + 8); psVar4 != (short *)0x0; psVar4 = *(short **)(psVar4 + 4))
  {
    if (*psVar4 == param_2) {
      iVar5 = *(int *)(psVar4 + 2);
      if ((iVar5 != 0) && (uVar3 = *(ushort *)(iVar5 + 4), uVar3 != 0)) {
        bVar8 = false;
        bVar9 = false;
        uVar18 = 0;
        if (uVar3 != 0) {
          goto LAB_82e77d64;
        }
      }
      break;
    }
  }
  goto LAB_82e77d08;
  while (uVar18 = uVar18 + 1, uVar18 < uVar3) {
LAB_82e77d64:
    lVar17 = fn_82E76510(iVar5,uVar18,abStack_90);
    if (lVar17 < 0) goto LAB_82e77d0c;
    pbVar13 = abStack_90;
    pbVar14 = &lbl_8214C2D0;
    do {
      bVar1 = *pbVar14;
      bVar2 = *pbVar13;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar14 = pbVar14 + 1;
      pbVar13 = pbVar13 + 1;
    } while (pbVar14 != &lbl_8214C2E0);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      bVar8 = true;
      uVar15 = uVar18;
LAB_82e77e00:
      if (bVar9) break;
    }
    else {
      pbVar13 = abStack_90;
      pbVar14 = &lbl_8214C2E0;
      do {
        bVar1 = *pbVar14;
        bVar2 = *pbVar13;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar14 = pbVar14 + 1;
        pbVar13 = pbVar13 + 1;
      } while (pbVar14 != &lbl_8214C2F0);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        bVar9 = true;
        uVar16 = uVar18;
      }
      if (bVar8) goto LAB_82e77e00;
    }
  }
  if ((bVar8) || (bVar9)) {
    iVar10 = (**(code **)(*param_3 + 0x98))(param_3);
    if (iVar10 == 0) {
      lVar17 = -0x3ff2c945;
      goto LAB_82e77d0c;
    }
    if (bVar9) {
      uVar6 = *(undefined4 *)(iVar10 + 0x10);
      uVar7 = *(undefined4 *)(iVar10 + 0x14);
      puVar11 = (undefined1 *)fn_82E4FE08(2);
      if (puVar11 != (undefined1 *)0x0) {
        *puVar11 = (char)uVar7;
        puVar11[1] = (char)uVar6;
        lVar17 = fn_82E76570(iVar5,uVar16,puVar11,2);
        if (lVar17 < 0) goto LAB_82e77d0c;
        goto LAB_82e77ea4;
      }
    }
    else {
LAB_82e77ea4:
      if (!bVar8) goto LAB_82e77d0c;
      iVar10 = *(int *)(iVar10 + 0x1c);
      if (iVar10 == 2) {
LAB_82e77eec:
        uVar19 = 0;
      }
      else if (iVar10 == 3) {
        uVar19 = 0xc0;
      }
      else if (iVar10 == 4) {
        uVar19 = 0xa0;
      }
      else {
        if ((iVar10 < 5) || (7 < iVar10)) goto LAB_82e77eec;
        uVar19 = 0x80;
      }
      puVar12 = (undefined1 *)fn_82E4FE08(1);
      if (puVar12 != (undefined1 *)0x0) {
        *puVar12 = uVar19;
        lVar17 = fn_82E76570(iVar5,uVar15,puVar12,1);
        goto LAB_82e77d0c;
      }
    }
    lVar17 = -0x7ff8fff2;
    goto LAB_82e77d0c;
  }
LAB_82e77d08:
  lVar17 = 1;
LAB_82e77d0c:
  fn_82E4FE40(puVar12);
  fn_82E4FE40(puVar11);
  return lVar17;
}

