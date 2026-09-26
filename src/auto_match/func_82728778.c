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
extern unsigned int *auStack_60;
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_82697700();
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int uStack_70;


uint * fn_82728778(uint *param_1,int param_2,undefined8 param_3,uint *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar6;
  uint uVar5;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  int *piVar12;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  undefined4 *puStack_78;
  undefined4 *puStack_74;
  ulonglong uStack_70;
  undefined1 auStack_60 [96];
  
  *param_1 = *param_4;
  param_1[1] = param_4[1];
  param_1[2] = param_4[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_4 + 3);
  if (*(int *)(param_2 + 0x1c) < 1) {
    return param_1;
  }
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = fn_826957D0(param_2,param_3);
  iVar4 = fn_82696958(uVar3,uVar2);
  if (iVar4 == 0) {
    return param_1;
  }
  *(uint *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1U & 0x8fffffff;
  piVar12 = (int *)(iVar4 + 0x10);
  auStack_60[0] = 0;
  fn_82681728(&iStack_90,(ulonglong)*(uint *)(*(int *)(param_2 + 0x18) + 0x78) + 0x254,
                    0xffffffff82006688);
  cVar6 = (**(code **)(*(int *)(iVar4 + 0x10) + 0x10))
                    (piVar12,*(undefined4 *)(param_2 + 0x18),&iStack_90,auStack_60);
  lVar7 = (ulonglong)*(uint *)(iStack_90 + 8) - 1;
  *(int *)(iStack_90 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_90);
  }
  pcVar9 = "none";
  if (cVar6 != '\0') {
    fn_82696D38(&puStack_80,auStack_60,*(undefined4 *)(param_2 + 0x18),0xffffffffffffffff,0);
    pcVar10 = (char *)*puStack_80;
    pcVar8 = pcVar9;
    do {
      cVar6 = *pcVar10;
      cVar1 = *pcVar8;
      if (cVar6 == '\0') break;
      pcVar10 = pcVar10 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar6 == cVar1);
    uVar5 = puStack_80[2];
    puStack_80[2] = (int)((ulonglong)uVar5 - 1);
    if ((ulonglong)uVar5 - 1 == 0) {
      fn_826944C8(puStack_80);
    }
    if (cVar6 == cVar1) {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xef;
    }
    else {
      uStack_70 = fn_826972E0(auStack_60,*(undefined4 *)(param_2 + 0x18));
      if ((uStack_70 & 0x7ff0000000000000) != 0x7ff0000000000000) {
        uVar5 = fn_82697700(auStack_60,*(undefined4 *)(param_2 + 0x18));
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x10;
        param_1[1] = uVar5 | 0xff000000;
      }
    }
  }
  fn_82681728(&iStack_8c,(ulonglong)*(uint *)(*(int *)(param_2 + 0x18) + 0x78) + 0x254,
                    0xffffffff820065d4);
  cVar6 = (**(code **)(*piVar12 + 0x10))
                    (piVar12,*(undefined4 *)(param_2 + 0x18),&iStack_8c,auStack_60);
  lVar7 = (ulonglong)*(uint *)(iStack_8c + 8) - 1;
  *(int *)(iStack_8c + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_8c);
  }
  if (cVar6 != '\0') {
    fn_82696D38(&puStack_7c,auStack_60,*(undefined4 *)(param_2 + 0x18),0xffffffffffffffff,0);
    pcVar10 = (char *)*puStack_7c;
    pcVar8 = pcVar9;
    do {
      cVar6 = *pcVar10;
      cVar1 = *pcVar8;
      if (cVar6 == '\0') break;
      pcVar10 = pcVar10 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar6 == cVar1);
    uVar5 = puStack_7c[2];
    puStack_7c[2] = (int)((ulonglong)uVar5 - 1);
    if ((ulonglong)uVar5 - 1 == 0) {
      fn_826944C8(puStack_7c);
    }
    if (cVar6 == cVar1) {
      bVar11 = *(byte *)(param_1 + 3) & 0xf7;
    }
    else {
      uStack_70 = fn_826972E0(auStack_60,*(undefined4 *)(param_2 + 0x18));
      if ((uStack_70 & 0x7ff0000000000000) == 0x7ff0000000000000) goto LAB_82728a7c;
      uVar5 = fn_82697700(auStack_60,*(undefined4 *)(param_2 + 0x18));
      bVar11 = *(byte *)(param_1 + 3) | 8;
      *param_1 = uVar5 | 0xff000000;
    }
    *(byte *)(param_1 + 3) = bVar11;
  }
LAB_82728a7c:
  fn_82681728(&iStack_88,(ulonglong)*(uint *)(*(int *)(param_2 + 0x18) + 0x78) + 0x254,
                    0xffffffff820111b0);
  cVar6 = (**(code **)(*piVar12 + 0x10))
                    (piVar12,*(undefined4 *)(param_2 + 0x18),&iStack_88,auStack_60);
  lVar7 = (ulonglong)*(uint *)(iStack_88 + 8) - 1;
  *(int *)(iStack_88 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_88);
  }
  if (cVar6 != '\0') {
    fn_82696D38(&puStack_78,auStack_60,*(undefined4 *)(param_2 + 0x18),0xffffffffffffffff,0);
    pcVar10 = (char *)*puStack_78;
    do {
      cVar6 = *pcVar10;
      cVar1 = *pcVar9;
      if (cVar6 == '\0') break;
      pcVar10 = pcVar10 + 1;
      pcVar9 = pcVar9 + 1;
    } while (cVar6 == cVar1);
    uVar5 = puStack_78[2];
    puStack_78[2] = (int)((ulonglong)uVar5 - 1);
    if ((ulonglong)uVar5 - 1 == 0) {
      fn_826944C8(puStack_78);
    }
    if (cVar6 == cVar1) {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xdf;
    }
    else {
      uStack_70 = fn_826972E0(auStack_60,*(undefined4 *)(param_2 + 0x18));
      if ((uStack_70 & 0x7ff0000000000000) != 0x7ff0000000000000) {
        uVar5 = fn_82697700(auStack_60,*(undefined4 *)(param_2 + 0x18));
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
        param_1[2] = uVar5 | 0xff000000;
      }
    }
  }
  fn_82681728(&iStack_84,(ulonglong)*(uint *)(*(int *)(param_2 + 0x18) + 0x78) + 0x254,
                    0xffffffff820111a0);
  cVar6 = (**(code **)(*piVar12 + 0x10))
                    (piVar12,*(undefined4 *)(param_2 + 0x18),&iStack_84,auStack_60);
  lVar7 = (ulonglong)*(uint *)(iStack_84 + 8) - 1;
  *(int *)(iStack_84 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_84);
  }
  if (cVar6 == '\0') goto LAB_82728db4;
  fn_82696D38(&puStack_74,auStack_60,*(undefined4 *)(param_2 + 0x18),0xffffffffffffffff,0);
  pcVar8 = "dotted";
  pcVar9 = (char *)*puStack_74;
  pcVar10 = pcVar9;
  do {
    cVar6 = *pcVar10;
    cVar1 = *pcVar8;
    if (cVar6 == '\0') break;
    pcVar10 = pcVar10 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar6 == cVar1);
  if (cVar6 == cVar1) {
    bVar11 = 3;
LAB_82728d84:
    bVar11 = bVar11 | *(byte *)(param_1 + 3) & 0xf8;
LAB_82728d8c:
    *(byte *)(param_1 + 3) = bVar11;
  }
  else {
    pcVar8 = "single";
    pcVar10 = pcVar9;
    do {
      cVar6 = *pcVar10;
      cVar1 = *pcVar8;
      if (cVar6 == '\0') break;
      pcVar10 = pcVar10 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar6 == cVar1);
    if (cVar6 == cVar1) {
      bVar11 = *(byte *)(param_1 + 3) & 0xf8 | 1;
      goto LAB_82728d8c;
    }
    pcVar8 = "thick";
    pcVar10 = pcVar9;
    do {
      cVar6 = *pcVar10;
      cVar1 = *pcVar8;
      if (cVar6 == '\0') break;
      pcVar10 = pcVar10 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar6 == cVar1);
    if (cVar6 == cVar1) {
      bVar11 = *(byte *)(param_1 + 3) & 0xf8 | 2;
      goto LAB_82728d8c;
    }
    pcVar8 = "ditheredSingle";
    pcVar10 = pcVar9;
    do {
      cVar6 = *pcVar10;
      cVar1 = *pcVar8;
      if (cVar6 == '\0') break;
      pcVar10 = pcVar10 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar6 == cVar1);
    if (cVar6 == cVar1) {
      bVar11 = *(byte *)(param_1 + 3) & 0xf8 | 4;
      goto LAB_82728d8c;
    }
    pcVar10 = "ditheredThick";
    do {
      cVar6 = *pcVar9;
      cVar1 = *pcVar10;
      if (cVar6 == '\0') break;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    } while (cVar6 == cVar1);
    if (cVar6 == cVar1) {
      bVar11 = 5;
      goto LAB_82728d84;
    }
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf8;
  }
  uVar5 = puStack_74[2];
  puStack_74[2] = (int)((ulonglong)uVar5 - 1);
  if ((ulonglong)uVar5 - 1 == 0) {
    fn_826944C8();
  }
LAB_82728db4:
  fn_82696330(auStack_60);
  fn_826824B0(iVar4);
  return param_1;
}

