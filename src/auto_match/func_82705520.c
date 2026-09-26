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
extern int fn_8267B890();
extern int fn_82693A98();
extern int fn_826944C8();
extern int fn_826949A8();
extern int fn_82694D08();
extern int fn_82695FA0();
extern int fn_8269DA30();
extern int fn_826A8AA8();
extern int fn_826F5B00();
extern int fn_82704298();
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int uStack_44;


void fn_82705520(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  char cVar10;
  undefined8 uVar6;
  undefined4 *puVar8;
  int iVar9;
  ulonglong uVar7;
  byte *pbVar11;
  char *pcVar13;
  longlong lVar12;
  byte *pbVar14;
  int *piVar15;
  int iVar16;
  undefined4 *puStack_60;
  int *piStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined1 uStack_44;
  undefined4 **ppuStack_40;
  int **ppiStack_3c;
  
  iStack_48 = *(int *)(param_1 + 0x9e4);
  uStack_44 = 8;
  puStack_60 = *(undefined4 **)(iStack_48 + 8);
  puStack_60[2] = puStack_60[2] + 1;
  iStack_58 = *(int *)(iStack_48 + 8);
  *(int *)(iStack_58 + 8) = *(int *)(iStack_58 + 8) + 1;
  cVar10 = fn_826A8AA8(&iStack_48,param_2,&puStack_60,&iStack_58);
  if (cVar10 == '\0') {
    if (*(int *)(iStack_58 + 0x10) == 0) goto LAB_827058c0;
    puVar8 = *(undefined4 **)(iStack_48 + 0x108);
    puVar8[2] = puVar8[2] + 1;
    uVar3 = puStack_60[2];
    puStack_60[2] = (int)((ulonglong)uVar3 - 1);
    if ((ulonglong)uVar3 - 1 == 0) {
      fn_826944C8(puStack_60);
    }
  }
  else {
    bVar5 = false;
    if ((uint)puStack_60[4] < 5) {
LAB_827056f8:
      bVar5 = true;
    }
    else {
      pbVar14 = (byte *)*puStack_60;
      pcVar13 = "_root";
      pbVar11 = pbVar14 + 5;
      do {
        bVar1 = *pbVar14;
        bVar2 = *pcVar13;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar14 = pbVar14 + 1;
        pcVar13 = pcVar13 + 1;
      } while (pbVar14 != pbVar11);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        iVar9 = iStack_48 + 0x108;
        uVar6 = fn_82693A98(&puStack_60);
        uVar6 = fn_826949A8(&iStack_50,&puStack_60,5,uVar6);
        puVar8 = (undefined4 *)fn_82694D08(&iStack_54,iVar9,uVar6);
        puVar8 = (undefined4 *)*puVar8;
        puVar8[2] = puVar8[2] + 1;
        uVar3 = puStack_60[2];
        puStack_60[2] = (int)((ulonglong)uVar3 - 1);
        if ((ulonglong)uVar3 - 1 == 0) {
          fn_826944C8(puStack_60);
        }
        lVar12 = (ulonglong)*(uint *)(iStack_54 + 8) - 1;
        *(int *)(iStack_54 + 8) = (int)lVar12;
        puStack_60 = puVar8;
        if (lVar12 == 0) {
          fn_826944C8(iStack_54);
        }
        lVar12 = (ulonglong)*(uint *)(iStack_50 + 8) - 1;
        *(int *)(iStack_50 + 8) = (int)lVar12;
        if (lVar12 == 0) {
          fn_826944C8(iStack_50);
        }
      }
      pbVar14 = (byte *)*puStack_60;
      pcVar13 = "_level";
      pbVar11 = pbVar14 + 6;
      do {
        bVar1 = *pbVar14;
        bVar2 = *pcVar13;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar14 = pbVar14 + 1;
        pcVar13 = pcVar13 + 1;
      } while (pbVar14 != pbVar11);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) goto LAB_827056f8;
    }
    puVar8 = puStack_60;
    if (bVar5) {
      puVar8 = (undefined4 *)fn_82694D08(&iStack_4c,iStack_48 + 0x10c,&puStack_60);
      puVar8 = (undefined4 *)*puVar8;
      puVar8[2] = puVar8[2] + 1;
      uVar3 = puStack_60[2];
      puStack_60[2] = (int)((ulonglong)uVar3 - 1);
      if ((ulonglong)uVar3 - 1 == 0) {
        fn_826944C8(puStack_60);
      }
      lVar12 = (ulonglong)*(uint *)(iStack_4c + 8) - 1;
      *(int *)(iStack_4c + 8) = (int)lVar12;
      if (lVar12 == 0) {
        puStack_60 = puVar8;
        fn_826944C8(iStack_4c);
        puVar8 = puStack_60;
      }
    }
  }
  puStack_60 = puVar8;
  iVar16 = param_1 + 0xa28;
  piStack_5c = (int *)0x0;
  iVar9 = fn_8269DA30(iVar16,&puStack_60);
  if ((iVar9 == 0) || (piVar4 = *(int **)(iVar9 + 4), piVar15 = piVar4, piVar4 == (int *)0x0)) {
    uVar7 = fn_8267B890(*(undefined4 *)(param_1 + 0x14),0x20,0);
    if ((uVar7 & 0xffffffff) == 0) {
      piStack_5c = (int *)0x0;
    }
    else {
      piStack_5c = (int *)fn_826F5B00(uVar7,&iStack_58,param_3,param_4 == 2);
    }
    if (piStack_5c != (int *)0x0) {
      ppuStack_40 = &puStack_60;
      ppiStack_3c = &piStack_5c;
      fn_82704298(iVar16,iVar16,&ppuStack_40);
    }
  }
  else {
    do {
      if (*piVar15 == iStack_58) {
        piStack_5c = piVar15;
        fn_82695FA0(piVar15 + 2,param_3);
        if (*(char *)(piStack_5c + 7) == '\0') {
          *(bool *)(piStack_5c + 7) = param_4 == 2;
        }
        goto LAB_827058c0;
      }
      piStack_5c = (int *)piVar15[6];
      piVar15 = piStack_5c;
    } while (piStack_5c != (int *)0x0);
    uVar7 = fn_8267B890(*(undefined4 *)(param_1 + 0x14),0x20,0);
    if ((uVar7 & 0xffffffff) == 0) {
      piStack_5c = (int *)0x0;
    }
    else {
      piStack_5c = (int *)fn_826F5B00(uVar7,&iStack_58,param_3,param_4 == 2);
    }
    if (piStack_5c != (int *)0x0) {
      piStack_5c[6] = piVar4[6];
      piVar4[6] = (int)piStack_5c;
    }
  }
LAB_827058c0:
  lVar12 = (ulonglong)*(uint *)(iStack_58 + 8) - 1;
  *(int *)(iStack_58 + 8) = (int)lVar12;
  if (lVar12 == 0) {
    fn_826944C8(iStack_58);
  }
  uVar3 = puStack_60[2];
  puStack_60[2] = (int)((ulonglong)uVar3 - 1);
  if ((ulonglong)uVar3 - 1 == 0) {
    fn_826944C8(puStack_60);
  }
  return;
}

