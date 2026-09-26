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
extern int fn_82230300();
extern int fn_8223E0E0();
extern int fn_8223F468();
extern int fn_822EE628();
extern int fn_822EF000();
extern int fn_822EF060();
extern int fn_822EF458();
extern int fn_82F640B0();
extern unsigned int iStack_90;
extern unsigned int uStack_8c;
extern unsigned int uStack_ac;


byte fn_822ED920(undefined8 param_1,char *param_2,int param_3,undefined8 param_4,uint param_5,
                  undefined8 param_6)

{
  bool bVar1;
  int *piVar2;
  char cVar4;
  char cVar5;
  int iVar3;
  char ****ppppcVar6;
  char ****ppppcVar7;
  char *pcVar8;
  byte bVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  char ***apppcStack_c0 [5];
  uint uStack_ac;
  char ***apppcStack_a0 [4];
  int iStack_90;
  uint uStack_8c;
  
  piVar2 = (int *)fn_8223F468(param_6);
  (**(code **)(*piVar2 + 0xc))(apppcStack_a0,piVar2);
  if (iStack_90 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = (**(code **)(*piVar2 + 8))(piVar2);
  }
  cVar5 = fn_822EF458(param_3,param_4);
  pcVar8 = param_2;
  if (cVar5 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      fn_822EF060(param_3);
    }
    cVar5 = *(char *)(param_3 + 5);
    if (cVar5 != '+') {
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      cVar5 = *(char *)(param_3 + 5);
      if (cVar5 != '-') goto LAB_822ed9f4;
    }
    *param_2 = cVar5;
    pcVar8 = param_2 + 1;
    fn_822EF000(param_3);
  }
LAB_822ed9f4:
  param_5 = param_5 & 0xe00;
  uVar12 = 10;
  if (param_5 == 0x400) {
    bVar9 = 8;
  }
  else if (param_5 == 0x800) {
    bVar9 = 0x10;
  }
  else {
    bVar9 = -(param_5 != 0) & 10;
  }
  lVar10 = 0;
  bVar1 = false;
  cVar5 = fn_822EF458(param_3,param_4);
  if (cVar5 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      fn_822EF060(param_3);
    }
    if (*(char *)(param_3 + 5) != '0') goto LAB_822edaf4;
    lVar10 = 1;
    fn_822EF000(param_3);
    cVar5 = fn_822EF458(param_3,param_4);
    if (cVar5 != '\0') {
LAB_822edae8:
      if (bVar9 == 0) {
        bVar9 = 8;
        goto LAB_822edaf4;
      }
      goto LAB_822edafc;
    }
    if (*(char *)(param_3 + 4) == '\0') {
      fn_822EF060(param_3);
    }
    if (*(char *)(param_3 + 5) != 'x') {
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      if (*(char *)(param_3 + 5) != 'X') goto LAB_822edae8;
    }
    if ((bVar9 != 0) && (bVar9 != 0x10)) goto LAB_822edae8;
    bVar9 = 0x10;
    lVar10 = 0;
    fn_822EF000(param_3);
LAB_822edb10:
    uVar12 = 0x16;
  }
  else {
LAB_822edaf4:
    if (bVar9 != 0) {
LAB_822edafc:
      if ((bVar9 != 10) && (uVar12 = 8, bVar9 != 8)) goto LAB_822edb10;
    }
  }
  fn_82230300(apppcStack_c0,0,0);
  fn_822EE628(apppcStack_c0,1,lVar10);
  iVar13 = 0;
  cVar5 = fn_822EF458(param_3,param_4);
  uVar11 = uStack_ac;
  ppppcVar7 = (char ****)apppcStack_c0[0];
  if (cVar5 == '\0') {
    do {
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      cVar5 = *(char *)(param_3 + 5);
      *pcVar8 = cVar5;
      iVar3 = fn_82F640B0(0xffffffff821ae338,cVar5,uVar12);
      if (iVar3 == 0) {
        ppppcVar6 = ppppcVar7;
        if (uVar11 < 0x10) {
          ppppcVar6 = apppcStack_c0;
        }
        if ((*(char *)((int)ppppcVar6 + iVar13) == '\0') || (cVar4 == '\0')) break;
        if (*(char *)(param_3 + 4) == '\0') {
          fn_822EF060(param_3);
        }
        if (*(char *)(param_3 + 5) != cVar4) break;
        fn_8223E0E0(apppcStack_c0,1,0);
        iVar13 = iVar13 + 1;
        uVar11 = uStack_ac;
        ppppcVar7 = (char ****)apppcStack_c0[0];
      }
      else {
        if (((bVar1) || (*pcVar8 != '0')) && (pcVar8 < param_2 + 0x1f)) {
          pcVar8 = pcVar8 + 1;
          bVar1 = true;
        }
        lVar10 = 1;
        ppppcVar6 = ppppcVar7;
        if (uVar11 < 0x10) {
          ppppcVar6 = apppcStack_c0;
        }
        if (*(char *)((int)ppppcVar6 + iVar13) != '\x7f') {
          if (uVar11 < 0x10) {
            ppppcVar7 = apppcStack_c0;
          }
          *(char *)((int)ppppcVar7 + iVar13) = *(char *)((int)ppppcVar7 + iVar13) + '\x01';
          uVar11 = uStack_ac;
          ppppcVar7 = (char ****)apppcStack_c0[0];
        }
      }
      fn_822EF000(param_3);
      cVar5 = fn_822EF458(param_3,param_4);
    } while (cVar5 == '\0');
    apppcStack_c0[0] = (char ***)ppppcVar7;
    uStack_ac = uVar11;
    if (iVar13 != 0) {
      ppppcVar7 = (char ****)apppcStack_c0[0];
      if (uStack_ac < 0x10) {
        ppppcVar7 = apppcStack_c0;
      }
      if (*(char *)((int)ppppcVar7 + iVar13) < '\x01') {
        lVar10 = 0;
      }
      else {
        iVar13 = iVar13 + 1;
      }
    }
  }
  if (uStack_8c < 0x10) {
    apppcStack_a0[0] = (char ***)apppcStack_a0;
  }
  while (((lVar10 != 0 && (iVar13 != 0)) && (cVar4 = *(char *)apppcStack_a0[0], cVar4 != '\x7f'))) {
    iVar13 = iVar13 + -1;
    if (iVar13 == 0) {
LAB_822edd00:
      if (iVar13 == 0) {
        ppppcVar7 = (char ****)apppcStack_c0[0];
        if (uStack_ac < 0x10) {
          ppppcVar7 = apppcStack_c0;
        }
        if (cVar4 < *(char *)ppppcVar7) goto LAB_822edd28;
      }
      if ('\0' < *(char *)((int)apppcStack_a0[0] + 1)) {
        apppcStack_a0[0] = (char ***)((int)apppcStack_a0[0] + 1);
      }
    }
    else {
      ppppcVar7 = (char ****)apppcStack_c0[0];
      if (uStack_ac < 0x10) {
        ppppcVar7 = apppcStack_c0;
      }
      if (cVar4 == *(char *)((int)ppppcVar7 + iVar13)) goto LAB_822edd00;
LAB_822edd28:
      lVar10 = 0;
    }
  }
  if (lVar10 != 0) {
    if (!bVar1) {
      *pcVar8 = '0';
      pcVar8 = pcVar8 + 1;
      goto LAB_822edd78;
    }
    if (lVar10 != 0) goto LAB_822edd78;
  }
  pcVar8 = param_2;
LAB_822edd78:
  *pcVar8 = '\0';
  fn_82230300(apppcStack_c0,1,0);
  fn_82230300(apppcStack_a0,1,0);
  return bVar9;
}

