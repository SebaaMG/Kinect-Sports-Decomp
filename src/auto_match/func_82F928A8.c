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
#define _uStack00000020 ((*(U64*)&uStack00000020))
extern unsigned int *auStack_40;
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82231700();
extern int fn_8265D5A8();
extern int fn_82F69290();
extern int fn_82F6F870();
extern int fn_82F919B8();
extern int fn_82F91FA0();
extern int fn_82F91FD0();
extern int fn_82F92000();
extern int fn_82F92140();
extern int fn_82F921F8();
extern int fn_82F92208();
extern int fn_82F923D8();
extern int fn_82F92520();
extern int fn_82F92810();
extern int fn_82F93630();
extern int fn_82F93688();
extern int fn_82F937F8();
extern int fn_82F93A00();
extern int fn_82F953B8();
extern int fn_82F95C50();
extern unsigned int iStack0000001c;
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int lbl_831BB8F0;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000024;


undefined4 * fn_82F928A8(undefined4 *param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 *puStack00000014;
  int iStack0000001c;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined1 auStack_80 [44];
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined1 auStack_40 [32];
  int iStack_20;
  int iStack_1c;
  
  uVar1 = lbl_831BB8F0;
  puStack00000014 = param_1;
  iStack0000001c = param_2;
  _uStack00000020 = param_3;
  fn_82F93A00(&stack0x00000020);
  pcVar4 = (char *)fn_82F919B8();
  if (*pcVar4 != '\0') {
    fn_82230110(auStack_40,0xffffffff821963f4);
    fn_82F937F8(auStack_80,auStack_40);
                    /* WARNING: Subroutine does not return */
    fn_82F69290(auStack_80,0xffffffff821dda18);
  }
  iVar5 = fn_82F93A00(&stack0x00000020);
  fn_82F92140(&stack0x00000020);
  puVar6 = (undefined4 *)fn_8265D5A8(iVar5);
  pcVar4 = (char *)fn_82F919B8(*puVar6);
  iStack_50 = iVar5;
  if (*pcVar4 == '\0') {
    puVar6 = (undefined4 *)fn_82F953B8(iVar5);
    pcVar4 = (char *)fn_82F919B8(*puVar6);
    if (*pcVar4 == '\0') {
      iStack_50 = fn_82F93A00(&stack0x00000020);
      piVar7 = (int *)fn_82F953B8(iStack_50);
      iStack_54 = *piVar7;
    }
    else {
      piVar7 = (int *)fn_8265D5A8(iVar5);
      iStack_54 = *piVar7;
    }
  }
  else {
    piVar7 = (int *)fn_82F953B8(iVar5);
    iStack_54 = *piVar7;
  }
  if (iStack_50 == iVar5) {
    piVar7 = (int *)fn_82F92208(iVar5);
    iStack_4c = *piVar7;
    pcVar4 = (char *)fn_82F919B8(iStack_54);
    if (*pcVar4 == '\0') {
      piVar7 = (int *)fn_82F92208(iStack_54);
      *piVar7 = iStack_4c;
    }
    piVar7 = (int *)fn_82F92000(iStack0000001c);
    if (*piVar7 == iVar5) {
      piVar7 = (int *)fn_82F92000(iStack0000001c);
      *piVar7 = iStack_54;
    }
    else {
      piVar7 = (int *)fn_8265D5A8(iStack_4c);
      if (*piVar7 == iVar5) {
        piVar7 = (int *)fn_8265D5A8(iStack_4c);
        *piVar7 = iStack_54;
      }
      else {
        piVar7 = (int *)fn_82F953B8(iStack_4c);
        *piVar7 = iStack_54;
      }
    }
    piVar7 = (int *)fn_82F91FA0(iStack0000001c);
    if (*piVar7 == iVar5) {
      pcVar4 = (char *)fn_82F919B8(iStack_54);
      iStack_20 = iStack_4c;
      if (*pcVar4 == '\0') {
        iStack_20 = fn_82F93688(iStack_54);
      }
      piVar7 = (int *)fn_82F91FA0(iStack0000001c);
      *piVar7 = iStack_20;
    }
    piVar7 = (int *)fn_82F91FD0(iStack0000001c);
    if (*piVar7 == iVar5) {
      pcVar4 = (char *)fn_82F919B8(iStack_54);
      iStack_1c = iStack_4c;
      if (*pcVar4 == '\0') {
        iStack_1c = fn_82F93630(iStack_54);
      }
      piVar7 = (int *)fn_82F91FD0(iStack0000001c);
      *piVar7 = iStack_1c;
    }
  }
  else {
    puVar6 = (undefined4 *)fn_8265D5A8(iVar5);
    piVar7 = (int *)fn_82F92208(*puVar6);
    *piVar7 = iStack_50;
    puVar6 = (undefined4 *)fn_8265D5A8(iVar5);
    puVar8 = (undefined4 *)fn_8265D5A8(iStack_50);
    *puVar8 = *puVar6;
    piVar7 = (int *)fn_82F953B8(iVar5);
    if (iStack_50 == *piVar7) {
      iStack_4c = iStack_50;
    }
    else {
      piVar7 = (int *)fn_82F92208(iStack_50);
      iStack_4c = *piVar7;
      pcVar4 = (char *)fn_82F919B8(iStack_54);
      if (*pcVar4 == '\0') {
        piVar7 = (int *)fn_82F92208(iStack_54);
        *piVar7 = iStack_4c;
      }
      piVar7 = (int *)fn_8265D5A8(iStack_4c);
      *piVar7 = iStack_54;
      puVar6 = (undefined4 *)fn_82F953B8(iVar5);
      puVar8 = (undefined4 *)fn_82F953B8(iStack_50);
      *puVar8 = *puVar6;
      puVar6 = (undefined4 *)fn_82F953B8(iVar5);
      piVar7 = (int *)fn_82F92208(*puVar6);
      *piVar7 = iStack_50;
    }
    piVar7 = (int *)fn_82F92000(iStack0000001c);
    if (*piVar7 == iVar5) {
      piVar7 = (int *)fn_82F92000(iStack0000001c);
      *piVar7 = iStack_50;
    }
    else {
      puVar6 = (undefined4 *)fn_82F92208(iVar5);
      piVar7 = (int *)fn_8265D5A8(*puVar6);
      if (*piVar7 == iVar5) {
        puVar6 = (undefined4 *)fn_82F92208(iVar5);
        piVar7 = (int *)fn_8265D5A8(*puVar6);
        *piVar7 = iStack_50;
      }
      else {
        puVar6 = (undefined4 *)fn_82F92208(iVar5);
        piVar7 = (int *)fn_82F953B8(*puVar6);
        *piVar7 = iStack_50;
      }
    }
    puVar6 = (undefined4 *)fn_82F92208(iVar5);
    puVar8 = (undefined4 *)fn_82F92208(iStack_50);
    *puVar8 = *puVar6;
    uVar2 = fn_82F921F8(iVar5);
    uVar3 = fn_82F921F8(iStack_50);
    fn_82231700(uVar3,uVar2);
  }
  pcVar4 = (char *)fn_82F921F8(iVar5);
  if (*pcVar4 != '\x01') {
LAB_82f93030:
    fn_82F95C50(iStack0000001c + 1,iVar5);
    fn_82F92810(iStack0000001c + 1,iVar5,1);
    if (*(int *)(iStack0000001c + 8) != 0) {
      *(int *)(iStack0000001c + 8) = *(int *)(iStack0000001c + 8) + -1;
    }
    *puStack00000014 = uStack00000020;
    puStack00000014[1] = uStack00000024;
    fn_82F6F870(uVar1);
    return puStack00000014;
  }
LAB_82f92cc4:
  piVar7 = (int *)fn_82F92000(iStack0000001c);
  if ((iStack_54 == *piVar7) || (pcVar4 = (char *)fn_82F921F8(iStack_54), *pcVar4 != '\x01'))
  goto LAB_82f93020;
  piVar7 = (int *)fn_8265D5A8(iStack_4c);
  if (iStack_54 == *piVar7) {
    puVar6 = (undefined4 *)fn_82F953B8(iStack_4c);
    iStack_50 = *puVar6;
    pcVar4 = (char *)fn_82F921F8(iStack_50);
    if (*pcVar4 == '\0') {
      puVar9 = (undefined1 *)fn_82F921F8(iStack_50);
      *puVar9 = 1;
      puVar9 = (undefined1 *)fn_82F921F8(iStack_4c);
      *puVar9 = 0;
      fn_82F923D8(iStack0000001c,iStack_4c);
      puVar6 = (undefined4 *)fn_82F953B8(iStack_4c);
      iStack_50 = *puVar6;
    }
    pcVar4 = (char *)fn_82F919B8(iStack_50);
    if (*pcVar4 == '\0') {
      puVar6 = (undefined4 *)fn_8265D5A8(iStack_50);
      pcVar4 = (char *)fn_82F921F8(*puVar6);
      if (*pcVar4 == '\x01') {
        puVar6 = (undefined4 *)fn_82F953B8(iStack_50);
        pcVar4 = (char *)fn_82F921F8(*puVar6);
        if (*pcVar4 == '\x01') {
          puVar9 = (undefined1 *)fn_82F921F8(iStack_50);
          *puVar9 = 0;
          goto LAB_82f92cb4;
        }
      }
      puVar6 = (undefined4 *)fn_82F953B8(iStack_50);
      pcVar4 = (char *)fn_82F921F8(*puVar6);
      if (*pcVar4 == '\x01') {
        puVar6 = (undefined4 *)fn_8265D5A8(iStack_50);
        puVar9 = (undefined1 *)fn_82F921F8(*puVar6);
        *puVar9 = 1;
        puVar9 = (undefined1 *)fn_82F921F8(iStack_50);
        *puVar9 = 0;
        fn_82F92520(iStack0000001c,iStack_50);
        puVar6 = (undefined4 *)fn_82F953B8(iStack_4c);
        iStack_50 = *puVar6;
      }
      puVar9 = (undefined1 *)fn_82F921F8(iStack_4c);
      puVar10 = (undefined1 *)fn_82F921F8(iStack_50);
      *puVar10 = *puVar9;
      puVar9 = (undefined1 *)fn_82F921F8(iStack_4c);
      *puVar9 = 1;
      puVar6 = (undefined4 *)fn_82F953B8(iStack_50);
      puVar9 = (undefined1 *)fn_82F921F8(*puVar6);
      *puVar9 = 1;
      fn_82F923D8(iStack0000001c,iStack_4c);
LAB_82f93020:
      puVar9 = (undefined1 *)fn_82F921F8(iStack_54);
      *puVar9 = 1;
      goto LAB_82f93030;
    }
  }
  else {
    puVar6 = (undefined4 *)fn_8265D5A8(iStack_4c);
    iStack_50 = *puVar6;
    pcVar4 = (char *)fn_82F921F8(iStack_50);
    if (*pcVar4 == '\0') {
      puVar9 = (undefined1 *)fn_82F921F8(iStack_50);
      *puVar9 = 1;
      puVar9 = (undefined1 *)fn_82F921F8(iStack_4c);
      *puVar9 = 0;
      fn_82F92520(iStack0000001c,iStack_4c);
      puVar6 = (undefined4 *)fn_8265D5A8(iStack_4c);
      iStack_50 = *puVar6;
    }
    pcVar4 = (char *)fn_82F919B8(iStack_50);
    if (*pcVar4 == '\0') {
      puVar6 = (undefined4 *)fn_82F953B8(iStack_50);
      pcVar4 = (char *)fn_82F921F8(*puVar6);
      if (*pcVar4 == '\x01') {
        puVar6 = (undefined4 *)fn_8265D5A8(iStack_50);
        pcVar4 = (char *)fn_82F921F8(*puVar6);
        if (*pcVar4 == '\x01') {
          puVar9 = (undefined1 *)fn_82F921F8(iStack_50);
          *puVar9 = 0;
          goto LAB_82f92cb4;
        }
      }
      puVar6 = (undefined4 *)fn_8265D5A8(iStack_50);
      pcVar4 = (char *)fn_82F921F8(*puVar6);
      if (*pcVar4 == '\x01') {
        puVar6 = (undefined4 *)fn_82F953B8(iStack_50);
        puVar9 = (undefined1 *)fn_82F921F8(*puVar6);
        *puVar9 = 1;
        puVar9 = (undefined1 *)fn_82F921F8(iStack_50);
        *puVar9 = 0;
        fn_82F923D8(iStack0000001c,iStack_50);
        puVar6 = (undefined4 *)fn_8265D5A8(iStack_4c);
        iStack_50 = *puVar6;
      }
      puVar9 = (undefined1 *)fn_82F921F8(iStack_4c);
      puVar10 = (undefined1 *)fn_82F921F8(iStack_50);
      *puVar10 = *puVar9;
      puVar9 = (undefined1 *)fn_82F921F8(iStack_4c);
      *puVar9 = 1;
      puVar6 = (undefined4 *)fn_8265D5A8(iStack_50);
      puVar9 = (undefined1 *)fn_82F921F8(*puVar6);
      *puVar9 = 1;
      fn_82F92520(iStack0000001c,iStack_4c);
      goto LAB_82f93020;
    }
  }
LAB_82f92cb4:
  iStack_54 = iStack_4c;
  piVar7 = (int *)fn_82F92208(iStack_4c);
  iStack_4c = *piVar7;
  goto LAB_82f92cc4;
}

