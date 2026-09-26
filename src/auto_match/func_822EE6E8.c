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
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_822EE628();
extern int fn_822EEF98();
extern int fn_822EF000();
extern int fn_822EF060();
extern int fn_822EF458();
extern int fn_82F64258();
extern unsigned int iStack_b0;
extern unsigned int uStack_ac;
extern unsigned int uStack_cc;


undefined8
fn_822EE6E8(undefined8 param_1,char *param_2,int param_3,undefined8 param_4,int param_5,
             int *param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int *piVar5;
  undefined4 *puVar6;
  char cVar8;
  char cVar9;
  longlong lVar4;
  int iVar7;
  char ****ppppcVar10;
  char ****ppppcVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  char *pcVar16;
  int *piStack0000003c;
  int aiStack_ec [3];
  char ***apppcStack_e0 [5];
  uint uStack_cc;
  char ***apppcStack_c0 [4];
  int iStack_b0;
  uint uStack_ac;
  
  iVar12 = **(int **)(param_5 + 0x30);
  piStack0000003c = param_6;
  aiStack_ec[0] = iVar12;
  fn_8223F508(iVar12);
  piVar5 = (int *)fn_8223F468(aiStack_ec);
  if ((iVar12 != 0) &&
     (puVar6 = (undefined4 *)fn_8223F5A0(iVar12), puVar6 != (undefined4 *)0x0)) {
    (**(code **)*puVar6)(puVar6,1);
  }
  (**(code **)(*piVar5 + 0xc))(apppcStack_c0,piVar5);
  iVar12 = 0;
  bVar2 = false;
  cVar8 = fn_822EF458(param_3,param_4);
  pcVar16 = param_2;
  if (cVar8 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      fn_822EF060(param_3);
    }
    if (*(char *)(param_3 + 5) == '+') {
      *param_2 = '+';
    }
    else {
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      if (*(char *)(param_3 + 5) != '-') goto LAB_822ee7f0;
      *param_2 = '-';
    }
    fn_822EF000(param_3);
    pcVar16 = param_2 + 1;
  }
LAB_822ee7f0:
  *pcVar16 = '0';
  pcVar16[1] = 'x';
  bVar1 = false;
  iVar13 = 0;
  pcVar16 = pcVar16 + 2;
  cVar8 = fn_822EF458(param_3,param_4);
  if (cVar8 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      fn_822EF060(param_3);
    }
    if (*(char *)(param_3 + 5) == '0') {
      fn_822EF000(param_3);
      cVar8 = fn_822EF458(param_3,param_4);
      if (cVar8 == '\0') {
        if (*(char *)(param_3 + 4) == '\0') {
          fn_822EF060(param_3);
        }
        if (*(char *)(param_3 + 5) != 'x') {
          if (*(char *)(param_3 + 4) == '\0') {
            fn_822EF060(param_3);
          }
          if (*(char *)(param_3 + 5) != 'X') goto LAB_822ee8a8;
        }
        fn_822EF000(param_3);
      }
      else {
LAB_822ee8a8:
        bVar1 = true;
      }
    }
  }
  ppppcVar11 = (char ****)apppcStack_c0[0];
  if (uStack_ac < 0x10) {
    ppppcVar11 = apppcStack_c0;
  }
  if (*(char *)ppppcVar11 == '\x7f') {
LAB_822eec20:
    while (cVar8 = fn_822EF458(param_3,param_4), cVar8 == '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      lVar4 = fn_822EEF98(param_1,*(undefined1 *)(param_3 + 5),0x30,0x61,0x41);
      if (lVar4 < 0) break;
      if (iVar13 < 0x24) {
        if (*(char *)(param_3 + 4) == '\0') {
          fn_822EF060(param_3);
        }
        if ((*(char *)(param_3 + 5) != '0') || (iVar13 != 0)) {
          iVar13 = iVar13 + 1;
          *pcVar16 = "0123456789abcdef"[(int)lVar4];
          pcVar16 = pcVar16 + 1;
        }
      }
      else {
        iVar12 = iVar12 + 1;
      }
      bVar1 = true;
      fn_822EF000(param_3);
    }
  }
  else {
    ppppcVar11 = (char ****)apppcStack_c0[0];
    if (uStack_ac < 0x10) {
      ppppcVar11 = apppcStack_c0;
    }
    if (*(char *)ppppcVar11 < '\x01') goto LAB_822eec20;
    if (iStack_b0 == 0) {
      cVar8 = '\0';
    }
    else {
      cVar8 = (**(code **)(*piVar5 + 8))(piVar5);
    }
    fn_82230300(apppcStack_e0,0,0);
    fn_822EE628(apppcStack_e0,1,0);
    iVar7 = 0;
    cVar9 = fn_822EF458(param_3,param_4);
    uVar15 = uStack_cc;
    ppppcVar11 = (char ****)apppcStack_e0[0];
    if (cVar9 == '\0') {
      do {
        if (*(char *)(param_3 + 4) == '\0') {
          fn_822EF060(param_3);
        }
        lVar4 = fn_822EEF98(param_1,*(undefined1 *)(param_3 + 5),0x30,0x61,0x41);
        if (lVar4 < 0) {
          ppppcVar10 = ppppcVar11;
          if (uVar15 < 0x10) {
            ppppcVar10 = apppcStack_e0;
          }
          if ((*(char *)((int)ppppcVar10 + iVar7) == '\0') || (cVar8 == '\0')) break;
          if (*(char *)(param_3 + 4) == '\0') {
            fn_822EF060(param_3);
          }
          if (*(char *)(param_3 + 5) != cVar8) break;
          fn_8223E0E0(apppcStack_e0,1,0);
          iVar7 = iVar7 + 1;
          uVar15 = uStack_cc;
          ppppcVar11 = (char ****)apppcStack_e0[0];
        }
        else {
          bVar1 = true;
          if (iVar13 < 0x24) {
            if (*(char *)(param_3 + 4) == '\0') {
              fn_822EF060(param_3);
            }
            if ((*(char *)(param_3 + 5) != '0') || (iVar13 != 0)) {
              iVar13 = iVar13 + 1;
              *pcVar16 = "0123456789abcdef"[(int)lVar4];
              pcVar16 = pcVar16 + 1;
            }
          }
          else {
            iVar12 = iVar12 + 1;
          }
          ppppcVar10 = ppppcVar11;
          if (uVar15 < 0x10) {
            ppppcVar10 = apppcStack_e0;
          }
          if (*(char *)((int)ppppcVar10 + iVar7) != '\x7f') {
            if (uVar15 < 0x10) {
              ppppcVar11 = apppcStack_e0;
            }
            *(char *)((int)ppppcVar11 + iVar7) = *(char *)((int)ppppcVar11 + iVar7) + '\x01';
            uVar15 = uStack_cc;
            ppppcVar11 = (char ****)apppcStack_e0[0];
          }
        }
        fn_822EF000(param_3);
        cVar9 = fn_822EF458(param_3,param_4);
      } while (cVar9 == '\0');
      apppcStack_e0[0] = (char ***)ppppcVar11;
      uStack_cc = uVar15;
      if (iVar7 != 0) {
        ppppcVar11 = (char ****)apppcStack_e0[0];
        if (uStack_cc < 0x10) {
          ppppcVar11 = apppcStack_e0;
        }
        if (*(char *)((int)ppppcVar11 + iVar7) < '\x01') {
          bVar2 = true;
        }
        else {
          iVar7 = iVar7 + 1;
        }
      }
    }
    bVar3 = bVar2;
    if (uStack_ac < 0x10) {
      apppcStack_c0[0] = (char ***)apppcStack_c0;
    }
    while (((!bVar2 && (iVar7 != 0)) && (cVar8 = *(char *)apppcStack_c0[0], cVar8 != '\x7f'))) {
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) {
LAB_822eeb30:
        if (iVar7 == 0) {
          ppppcVar11 = (char ****)apppcStack_e0[0];
          if (uStack_cc < 0x10) {
            ppppcVar11 = apppcStack_e0;
          }
          if (cVar8 < *(char *)ppppcVar11) goto LAB_822eeb58;
        }
        if ('\0' < *(char *)((int)apppcStack_c0[0] + 1)) {
          apppcStack_c0[0] = (char ***)((int)apppcStack_c0[0] + 1);
        }
      }
      else {
        ppppcVar11 = (char ****)apppcStack_e0[0];
        if (uStack_cc < 0x10) {
          ppppcVar11 = apppcStack_e0;
        }
        if (cVar8 == *(char *)((int)ppppcVar11 + iVar7)) goto LAB_822eeb30;
LAB_822eeb58:
        bVar2 = true;
        bVar3 = true;
      }
    }
    fn_82230300(apppcStack_e0,1,0);
    param_6 = piStack0000003c;
    bVar2 = bVar3;
  }
  if ((bVar1) && (iVar13 == 0)) {
    *pcVar16 = '0';
    pcVar16 = pcVar16 + 1;
  }
  cVar8 = fn_822EF458(param_3,param_4);
  if (cVar8 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      fn_822EF060(param_3);
    }
    cVar8 = *(char *)(param_3 + 5);
    cVar9 = (**(code **)(*piVar5 + 4))(piVar5);
    if (cVar8 == cVar9) {
      puVar6 = (undefined4 *)fn_82F64258();
      *pcVar16 = *(char *)*puVar6;
      pcVar16 = pcVar16 + 1;
      fn_822EF000(param_3);
    }
  }
  if (iVar13 == 0) {
    while (cVar8 = fn_822EF458(param_3,param_4), cVar8 == '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      if (*(char *)(param_3 + 5) != '0') break;
      iVar12 = iVar12 + -1;
      bVar1 = true;
      fn_822EF000(param_3);
    }
    if (iVar12 < 0) {
      *pcVar16 = '0';
      iVar12 = iVar12 + 1;
      pcVar16 = pcVar16 + 1;
    }
  }
  while (cVar8 = fn_822EF458(param_3,param_4), cVar8 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      fn_822EF060(param_3);
    }
    iVar7 = fn_822EEF98(param_1,*(undefined1 *)(param_3 + 5),0x30,0x61,0x41);
    if (iVar7 < 0) break;
    if (iVar13 < 0x24) {
      iVar13 = iVar13 + 1;
      *pcVar16 = "0123456789abcdef"[iVar7];
      pcVar16 = pcVar16 + 1;
    }
    bVar1 = true;
    fn_822EF000(param_3);
  }
  if ((bVar1) && (cVar8 = fn_822EF458(param_3,param_4), cVar8 == '\0')) {
    if (*(char *)(param_3 + 4) == '\0') {
      fn_822EF060(param_3);
    }
    if (*(char *)(param_3 + 5) != 'p') {
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      if (*(char *)(param_3 + 5) != 'P') goto LAB_822eef58;
    }
    *pcVar16 = 'p';
    pcVar14 = pcVar16 + 1;
    fn_822EF000(param_3);
    bVar1 = false;
    iVar13 = 0;
    cVar8 = fn_822EF458(param_3,param_4);
    if (cVar8 != '\0') goto LAB_822eee9c;
    if (*(char *)(param_3 + 4) == '\0') {
      fn_822EF060(param_3);
    }
    if (*(char *)(param_3 + 5) == '+') {
      *pcVar14 = '+';
    }
    else {
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      if (*(char *)(param_3 + 5) != '-') goto LAB_822eee9c;
      *pcVar14 = '-';
    }
    pcVar16 = pcVar16 + 2;
    while( true ) {
      fn_822EF000(param_3);
      pcVar14 = pcVar16;
LAB_822eee9c:
      pcVar16 = pcVar14;
      cVar8 = fn_822EF458(param_3,param_4);
      if (cVar8 != '\0') break;
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      if (*(char *)(param_3 + 5) != '0') break;
      bVar1 = true;
    }
    if (bVar1) {
      *pcVar16 = '0';
      pcVar16 = pcVar16 + 1;
    }
    while (cVar8 = fn_822EF458(param_3,param_4), cVar8 == '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      if (*(char *)(param_3 + 5) < '0') break;
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      if ('9' < *(char *)(param_3 + 5)) break;
      if (iVar13 < 8) {
        if (*(char *)(param_3 + 4) == '\0') {
          fn_822EF060(param_3);
        }
        iVar13 = iVar13 + 1;
        *pcVar16 = *(char *)(param_3 + 5);
        pcVar16 = pcVar16 + 1;
      }
      bVar1 = true;
      fn_822EF000(param_3);
    }
  }
LAB_822eef58:
  if ((bVar2) || (!bVar1)) {
    pcVar16 = param_2;
  }
  *pcVar16 = '\0';
  *param_6 = iVar12;
  fn_82230300(apppcStack_c0,1,0);
  return 0;
}

