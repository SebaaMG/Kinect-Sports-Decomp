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
extern unsigned int *auStack_2050;
extern unsigned int *auStack_4070;
extern int fn_82AB15D0();
extern int fn_82AB6E00();
extern int fn_82AB7070();
extern int fn_82AB73B0();
extern int fn_82B7BEB0();
extern int fn_82B7C530();
extern int fn_82B7C848();
extern int fn_82B7C9B8();
extern int fn_82B7CA68();
extern int fn_82B7CD90();
extern int fn_82B7D358();
extern int fn_82BA02A8();
extern int fn_82BA71D8();
extern int fn_82BA71F8();
extern int fn_82F691F0();
extern int fn_82F6C150();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


int fn_82B7D980(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined1 auStack_4070 [8224];
  undefined1 auStack_2050 [8272];
  
  uStack0000001c = (undefined4)param_2;
  iStack00000014 = param_1;
  uStack00000024 = param_3;
  fn_82B7C9B8();
  fn_82B7CA68(param_1);
  *(undefined4 *)(param_1 + 0x600) = param_4;
  uVar6 = fn_82B7D358(param_2,param_1);
  *(undefined4 *)(param_1 + 0x5d0) = uVar6;
  bVar4 = true;
  iVar7 = fn_82F6C150(param_1 + 0x10);
  uVar6 = uStack0000001c;
  iVar5 = iStack00000014;
  uVar9 = 0;
  if (iVar7 == 0) {
    iVar7 = fn_82BA71F8(uStack00000024,param_1);
    bVar4 = (*(uint *)(iVar7 + 4) >> 2 & 1) == 0;
    fn_82AB6E00(uVar6,!bVar4);
    fn_82B7CD90(iVar5,iVar7);
    fn_82BA71D8(iVar7);
    fn_82B7BEB0(*(undefined4 *)(iVar7 + -4),iVar7 + -4);
    iVar7 = fn_82AB7070(uVar6,*(undefined4 *)(iVar5 + 0x604),*(undefined4 *)(iVar5 + 0x654));
    if (iVar7 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fac,0xffffffff820db408,0x446);
    }
    if ((*(int *)(iVar5 + 0x604) != 0) &&
       (*(undefined4 *)(iVar5 + 0x7f4) = 0, *(char *)(iVar5 + 0x851) != '\0')) {
      fn_82BA02A8(iVar5,0xffffffff820db680);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_4070,0,0x2000);
    }
    if ((*(int *)(iVar5 + 0x608) != 0) &&
       (*(undefined4 *)(iVar5 + 0x7f4) = 1, *(char *)(iVar5 + 0x851) != '\0')) {
      fn_82BA02A8(iVar5,0xffffffff820db66c);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_2050,0,0x2000);
    }
  }
  if (*(int *)(iVar5 + 0x654) != 0) {
    (**(code **)(iVar5 + 0x59c))(*(undefined4 *)(iVar5 + 0x5a4));
  }
  *(undefined4 *)(iVar5 + 0x604) = 0;
  *(undefined4 *)(iVar5 + 0x654) = 0;
  if (*(int *)(iVar5 + 0x658) != 0) {
    (**(code **)(iVar5 + 0x59c))(*(undefined4 *)(iVar5 + 0x5a4));
  }
  *(undefined4 *)(iVar5 + 0x658) = 0;
  *(undefined4 *)(iVar5 + 0x608) = 0;
  iVar7 = *(int *)(param_1 + 0x554);
  if (iVar7 != 0) goto LAB_82b7dde4;
  cVar1 = *(char *)(iVar5 + 0x7e9);
  if ((((cVar1 != '\0') && (*(char *)(iVar5 + 0x7ea) == '\0')) && (*(char *)(iVar5 + 0x7eb) == '\0')
      ) && (*(char *)(iVar5 + 0x7ec) == '\0')) {
    uVar9 = 2;
  }
  if (cVar1 == '\0') {
    if (((*(char *)(iVar5 + 0x7ea) == '\0') && (*(char *)(iVar5 + 0x7eb) != '\0')) &&
       (*(char *)(iVar5 + 0x7ec) == '\0')) {
      uVar9 = 3;
    }
    if (((*(char *)(iVar5 + 0x7ea) != '\0') && (*(char *)(iVar5 + 0x7eb) == '\0')) &&
       (*(char *)(iVar5 + 0x7ec) == '\0')) {
      uVar9 = 4;
    }
LAB_82b7dc78:
    if (((*(char *)(iVar5 + 0x7ea) != '\0') && (*(char *)(iVar5 + 0x7eb) != '\0')) &&
       (*(char *)(iVar5 + 0x7ec) == '\0')) {
      uVar9 = 6;
    }
    if (((cVar1 == '\0') && (*(char *)(iVar5 + 0x7ea) == '\0')) &&
       ((*(char *)(iVar5 + 0x7eb) == '\0' && (*(char *)(iVar5 + 0x7ec) != '\0')))) {
      uVar9 = 7;
    }
  }
  else {
    if (((*(char *)(iVar5 + 0x7ea) != '\0') && (*(char *)(iVar5 + 0x7eb) == '\0')) &&
       (*(char *)(iVar5 + 0x7ec) == '\0')) {
      uVar9 = 5;
    }
    if (cVar1 == '\0') goto LAB_82b7dc78;
  }
  uVar2 = *(uint *)(iVar5 + 0x6f4);
  if ((int)*(uint *)(iVar5 + 0x6f4) <= (int)*(uint *)(iVar5 + 0x6f8)) {
    uVar2 = *(uint *)(iVar5 + 0x6f8);
  }
  uVar3 = *(undefined4 *)(iVar5 + 0x794);
  uVar10 = *(int *)(iVar5 + 0x744) << 1;
  if (*(char *)(iVar5 + 0x7e8) != '\0') {
    uVar10 = uVar10 | 1;
  }
  if (bVar4) {
    fn_82AB73B0(uVar6,0x7ba,*(undefined4 *)(iVar5 + 0x6a4));
    fn_82AB73B0(uVar6,0x7bc,uVar3);
    fn_82AB73B0(uVar6,0x7c0,
                      (((ulonglong)uVar2 - 1 & 0xffffffff) >> 0x1f) - 1 & (ulonglong)uVar2 - 1);
    fn_82AB73B0(uVar6,0x7c1,uVar9);
    uVar8 = 0;
    uVar9 = 0x7c3;
  }
  else {
    fn_82AB73B0(uVar6,0x7bb,*(undefined4 *)(iVar5 + 0x6a4));
    fn_82AB73B0(uVar6,0x7bd,uVar3);
    fn_82AB73B0(uVar6,0x7be,*(undefined1 *)(iVar5 + 0x7ed));
    fn_82AB73B0(uVar6,0x7bf,0);
    fn_82AB73B0(uVar6,0x7c2,uVar10);
    fn_82AB73B0(uVar6,0x7c7,*(undefined4 *)(iVar5 + 0x7f0));
    uVar8 = *(undefined1 *)(iVar5 + 0x7ee);
    uVar9 = 0x7c5;
  }
  fn_82AB73B0(uVar6,uVar9,uVar8);
  fn_82BA02A8(iVar5,0xffffffff821cc86c);
  fn_82B7C848();
LAB_82b7dde4:
  fn_82B7C530(param_1,0);
  return iVar7;
}

