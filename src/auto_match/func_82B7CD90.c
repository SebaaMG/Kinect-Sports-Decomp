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
extern int fn_82B7BD28();
extern int fn_82B7BEB0();
extern int fn_82B7C7B8();
extern int fn_82B7CA68();
extern int fn_82B7CD20();
extern int fn_82BA02A8();
extern int fn_82BA0358();
extern int fn_82BA03A0();
extern int fn_82BA03A8();
extern int fn_82BA03B0();
extern int fn_82BA3BD8();
extern int fn_82BA3ED0();
extern int fn_82BA6E60();
extern int fn_82BA6F68();
extern int fn_82BA70A8();
extern int fn_82BA7120();
extern int fn_82BA7868();
extern int fn_82BA7A80();
extern int fn_82BAED58();
extern int fn_82BB1AF8();
extern int fn_82BB2520();
extern int fn_82BB3E60();
extern int fn_82BB4D80();
extern int fn_82BB9DD0();
extern int fn_82BBA0B0();
extern int fn_82BBB7D8();
extern int fn_82BBBB18();
extern int fn_82BBBD28();
extern unsigned int lbl_820DB664;


void fn_82B7CD90(longlong param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  char cVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  
  iVar3 = fn_82B7C7B8();
  puVar10 = (undefined1 *)(iVar3 + 0x858);
  lVar12 = 0x10;
  do {
    *(undefined4 *)(puVar10 + 0x10) = 0;
    *(undefined8 *)(puVar10 + 8) = 0;
    puVar10 = puVar10 + 0x18;
    *puVar10 = 0;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  iVar3 = (int)param_1;
  uVar5 = *(undefined4 *)(iVar3 + 0x5a8);
  *(undefined **)(iVar3 + 0x884) = &lbl_820DB664;
  *(char **)(iVar3 + 0x944) = "REPLACE_PHI";
  *(char **)(iVar3 + 0x95c) = "GLOBAL_ALLOC";
  *(char **)(iVar3 + 0x98c) = "ASSEMBLY-part1";
  *(char **)(iVar3 + 0x9a4) = "ASSM_FIN";
  *(char **)(iVar3 + 0x9bc) = "ASM_KONST";
  *(char **)(iVar3 + 0xa58) = "REPLACE_PHI";
  *(char **)(iVar3 + 0xa6c) = "GLOBAL_ALLOC";
  *(char **)(iVar3 + 0x86c) = "INITIAL_INPUT";
  *(char **)(iVar3 + 0x8cc) = "BUILD_SSA";
  *(char **)(iVar3 + 0x8e4) = "PEEPHOLE";
  *(char **)(iVar3 + 0x8fc) = "BALANCE";
  *(char **)(iVar3 + 0x914) = "LINKAGE";
  *(char **)(iVar3 + 0x92c) = "SCHED";
  *(char **)(iVar3 + 0x974) = "ASSEMBLY";
  *(char **)(iVar3 + 0x9d4) = "ASSEMBLY-part4";
  *(char **)(iVar3 + 0x8b4) = "EXPAND";
  *(char **)(iVar3 + 0x89c) = "CONVERT";
  *(char **)(iVar3 + 0x9e0) = "INITIAL_INPUT";
  *(char **)(iVar3 + 0x9f4) = "BUILD_SSA";
  *(char **)(iVar3 + 0xa08) = "PEEPHOLE";
  *(char **)(iVar3 + 0xa1c) = "BALANCE";
  *(char **)(iVar3 + 0xa30) = "LINKAGE";
  *(char **)(iVar3 + 0xa44) = "SCHED";
  *(char **)(iVar3 + 0xa80) = "ASSEMBLY";
  puVar4 = (undefined4 *)fn_82B7BD28(uVar5,0x75c);
  *puVar4 = uVar5;
  if (puVar4 + 1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_82BBBD28(puVar4 + 1,param_1);
  }
  *(undefined4 *)(iVar3 + 0x7e4) = uVar5;
  lVar12 = (ulonglong)*(uint *)(param_2 + 8) - 1;
  if (-1 < lVar12) {
    lVar11 = ((ulonglong)*(uint *)(param_2 + 8) + 0x1a8 & 0x3fffffff) * 4 + param_1;
    do {
      *(int *)(iVar3 + 0x7f4) = (int)lVar12;
      fn_82B7CA68(param_1);
      iVar6 = param_2 + 0xc;
      if (1 < (int)lVar12) {
        iVar6 = *(int *)(param_2 + 0x14);
      }
      uVar5 = *(undefined4 *)(iVar3 + 0x5b0);
      puVar2 = (uint *)lVar11;
      uVar1 = *(undefined4 *)((-0x6a4 - iVar3) + iVar6 + (int)puVar2);
      puVar4 = (undefined4 *)fn_82B7BD28(uVar5,0x4c);
      *puVar4 = uVar5;
      if (puVar4 + 1 == (undefined4 *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = fn_82BA7868(puVar4 + 1,uVar1,param_1);
      }
      uVar5 = *(undefined4 *)(iVar3 + 0x5ac);
      puVar4 = (undefined4 *)fn_82B7BD28(uVar5,0x884);
      *puVar4 = uVar5;
      if (puVar4 + 1 == (undefined4 *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = fn_82BA3BD8(puVar4 + 1,*(undefined4 *)(iVar3 + 0x7e4),
                                  *(undefined4 *)(iVar3 + 0x600),param_1);
      }
      fn_82BA6F68(iVar7,iVar6);
      if (iVar6 != 0) {
        fn_82BA7A80(iVar6);
        fn_82B7BEB0(*(undefined4 *)(iVar6 + -4),iVar6 + -4);
      }
      *(undefined1 *)(iVar3 + 0x9f0) = 1;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5b0));
      *(undefined4 *)(iVar3 + 0x9e4) = uVar5;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5ac));
      *(undefined4 *)(iVar3 + 0x9e8) = uVar5;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5a8));
      *(undefined4 *)(iVar3 + 0x9ec) = uVar5;
      fn_82BA70A8(*(undefined4 *)(iVar3 + 0x5b0));
      fn_82BB4D80(iVar7);
      *(undefined1 *)(iVar3 + 0xa04) = 1;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5b0));
      *(undefined4 *)(iVar3 + 0x9f8) = uVar5;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5ac));
      *(undefined4 *)(iVar3 + 0x9fc) = uVar5;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5a8));
      *(undefined4 *)(iVar3 + 0xa00) = uVar5;
      fn_82BA70A8(*(undefined4 *)(iVar3 + 0x5b0));
      if ((*(uint *)(iVar3 + 0x858) >> 4 & 1) != 0) {
        fn_82BBB7D8(iVar7);
      }
      if ((*(uint *)(iVar3 + 0x858) >> 5 & 1) != 0) {
        fn_82BBBB18(iVar7);
      }
      fn_82BA6E60(iVar7);
      *(undefined1 *)(iVar3 + 0xa18) = 1;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5b0));
      *(undefined4 *)(iVar3 + 0xa0c) = uVar5;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5ac));
      *(undefined4 *)(iVar3 + 0xa10) = uVar5;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5a8));
      *(undefined4 *)(iVar3 + 0xa14) = uVar5;
      fn_82BA70A8(*(undefined4 *)(iVar3 + 0x5b0));
      if ((*(uint *)(iVar3 + 0x858) >> 8 & 1) != 0) {
        fn_82BBA0B0(iVar7);
      }
      *(undefined1 *)(iVar3 + 0xa2c) = 1;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5b0));
      *(undefined4 *)(iVar3 + 0xa20) = uVar5;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5ac));
      *(undefined4 *)(iVar3 + 0xa24) = uVar5;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5a8));
      *(undefined4 *)(iVar3 + 0xa28) = uVar5;
      fn_82BA70A8(*(undefined4 *)(iVar3 + 0x5b0));
      fn_82BA0358(iVar7,*(undefined4 *)(iVar3 + 0x7e4));
      *(undefined1 *)(iVar3 + 0xa40) = 1;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5b0));
      *(undefined4 *)(iVar3 + 0xa34) = uVar5;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5ac));
      *(undefined4 *)(iVar3 + 0xa38) = uVar5;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5a8));
      *(undefined4 *)(iVar3 + 0xa3c) = uVar5;
      fn_82BA70A8(*(undefined4 *)(iVar3 + 0x5b0));
      fn_82BB9DD0(iVar7);
      *(undefined1 *)(iVar3 + 0xa54) = 1;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5b0));
      *(undefined4 *)(iVar3 + 0xa48) = uVar5;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5ac));
      *(undefined4 *)(iVar3 + 0xa4c) = uVar5;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5a8));
      *(undefined4 *)(iVar3 + 0xa50) = uVar5;
      fn_82BA70A8(*(undefined4 *)(iVar3 + 0x5b0));
      fn_82BB3E60(iVar7);
      *(undefined1 *)(iVar3 + 0xa68) = 1;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5b0));
      *(undefined4 *)(iVar3 + 0xa5c) = uVar5;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5ac));
      *(undefined4 *)(iVar3 + 0xa60) = uVar5;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5a8));
      *(undefined4 *)(iVar3 + 0xa64) = uVar5;
      fn_82BA70A8(*(undefined4 *)(iVar3 + 0x5b0));
      fn_82BB2520(iVar7);
      *(undefined1 *)(iVar3 + 0xa7c) = 1;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5b0));
      *(undefined4 *)(iVar3 + 0xa70) = uVar5;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5ac));
      *(undefined4 *)(iVar3 + 0xa74) = uVar5;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5a8));
      *(undefined4 *)(iVar3 + 0xa78) = uVar5;
      fn_82BA70A8(*(undefined4 *)(iVar3 + 0x5b0));
      fn_82BB1AF8(iVar7);
      fn_82BAED58(iVar7,lVar11 + -0xa0,lVar12);
      *(undefined1 *)(iVar3 + 0xa90) = 1;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5b0));
      *(undefined4 *)(iVar3 + 0xa84) = uVar5;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5ac));
      *(undefined4 *)(iVar3 + 0xa88) = uVar5;
      uVar5 = fn_82BA7120(*(undefined4 *)(iVar3 + 0x5a8));
      *(undefined4 *)(iVar3 + 0xa8c) = uVar5;
      fn_82BA70A8(*(undefined4 *)(iVar3 + 0x5b0));
      fn_82BA02A8(param_1,0xffffffff820db594,(ulonglong)*(uint *)(iVar7 + 0x820) + 1);
      *puVar2 = -((int)*(uint *)(iVar7 + 0x820) >> 0x1f) - 1U & *(uint *)(iVar7 + 0x820);
      puVar2[0x14] = *(uint *)(iVar7 + 0x824);
      bVar8 = fn_82BA03A0(iVar7);
      *(byte *)(iVar3 + 0x7ed) = bVar8 | *(byte *)(iVar3 + 0x7ed);
      bVar8 = fn_82BA03B0(iVar7);
      *(byte *)(iVar3 + 0x7ee) = bVar8 | *(byte *)(iVar3 + 0x7ee);
      if ((*(int *)(iVar7 + 0x78) == 0) || (bVar8 = 1, *(char *)(iVar7 + 0x7e) == '\0')) {
        bVar8 = 0;
      }
      *(byte *)(iVar3 + 0x7e9) = *(byte *)(iVar3 + 0x7e9) | bVar8;
      if ((*(int *)(iVar7 + 0x78) == 0) || (bVar8 = 1, *(char *)(iVar7 + 0x7d) == '\0')) {
        bVar8 = 0;
      }
      *(byte *)(iVar3 + 0x7ea) = *(byte *)(iVar3 + 0x7ea) | bVar8;
      *(byte *)(iVar3 + 0x7e8) = 1U - (*(int *)(iVar7 + 0x70) == 0) | *(byte *)(iVar3 + 0x7e8);
      *(byte *)(iVar3 + 0x7eb) = *(byte *)(iVar7 + 0x7c) | *(byte *)(iVar3 + 0x7eb);
      cVar9 = fn_82BA03A0(iVar7);
      if (cVar9 != '\0') {
        uVar5 = fn_82BA03A8(iVar7);
        *(undefined4 *)(iVar3 + 0x7f0) = uVar5;
      }
      puVar2[0x3c] = *(uint *)(iVar7 + 0x82c);
      puVar2[0x28] = *(int *)(iVar7 + 0x830) + 1;
      fn_82B7CD20(param_1);
      fn_82BA3ED0(iVar7);
      fn_82B7BEB0(*(undefined4 *)(iVar7 + -4),iVar7 + -4);
      fn_82BA70A8(*(undefined4 *)(iVar3 + 0x5ac));
      fn_82BA70A8(*(undefined4 *)(iVar3 + 0x5b0));
      lVar12 = lVar12 + -1;
      lVar11 = lVar11 + -4;
    } while (-1 < lVar12);
  }
  return;
}

