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
extern int fn_82AB15D0();
extern int fn_82AB6EC0();
extern int fn_82AB71F0();
extern unsigned int lbl_820DDE48;
extern unsigned int lbl_820DDE4C;
extern unsigned int lbl_820DDE50;


void fn_82B9FCF0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar6;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar7;
  undefined4 uVar8;
  
  if ((int)param_2 == -1) {
    uVar6 = fn_82AB6EC0(param_1,0x3c0);
    uVar4 = fn_82AB6EC0(param_1,0x3c1);
    uVar5 = 0x3020100;
  }
  else {
    uVar6 = fn_82AB71F0(param_1,0x22,param_2);
    uVar4 = fn_82AB71F0(param_1,0x23,param_2);
    uVar5 = fn_82AB71F0(param_1,0x24,param_2);
  }
  if ((uVar6 == 0) || (0x10 < uVar6)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820deaa0,0xffffffff820de290,0x141);
  }
  uVar3 = uVar4 & 0xff;
  iVar2 = uVar6 * 0xc;
  if (uVar3 == 0x40) {
    iVar1 = *(int *)(&lbl_820DDE4C + iVar2);
    param_3[1] = iVar1;
    if (iVar1 == -1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dea84,0xffffffff820de290,0x14b);
    }
    if (param_3[1] == -1) {
      uVar8 = *(undefined4 *)(&lbl_820DDE48 + iVar2);
LAB_82b9fe20:
      param_3[1] = uVar8;
    }
  }
  else {
    iVar1 = *(int *)(&lbl_820DDE48 + iVar2);
    param_3[1] = iVar1;
    if (iVar1 == -1) {
      uVar8 = *(undefined4 *)(&lbl_820DDE4C + iVar2);
      goto LAB_82b9fe20;
    }
  }
  uVar6 = *(uint *)(&lbl_820DDE50 + iVar2);
  if ((1 < uVar6) && (uVar3 != ((uVar4 & 0xffffffff) >> 8 & 0xff))) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dea10,0xffffffff820de290,0x171);
  }
  if ((2 < uVar6) && (uVar3 != ((uVar4 & 0xffffffff) >> 0x10 & 0xff))) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820de998,0xffffffff820de290,0x174);
  }
  if ((3 < uVar6) && (uVar3 != (uVar4 & 0xffffffff) >> 0x18)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820de920,0xffffffff820de290,0x177);
  }
  if (uVar3 == 0x22) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820de8d0,0xffffffff820de290,0x17f);
  }
  if (uVar3 == 0x23) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820de880,0xffffffff820de290,0x181);
  }
  if (uVar3 == 0x11) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820de830,0xffffffff820de290,0x183);
  }
  if (uVar3 == 2) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820de7d8,0xffffffff820de290,0x185);
  }
  if (uVar3 == 0x12) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820de780,0xffffffff820de290,0x187);
  }
  if (uVar3 == 0) {
LAB_82b9ffc8:
    uVar8 = 0;
LAB_82b9ffcc:
    param_3[2] = uVar8;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 3) {
        uVar8 = 4;
      }
      else if (uVar3 == 0x20) {
        uVar8 = 2;
      }
      else if (uVar3 == 0x21) {
        uVar8 = 3;
      }
      else {
        if (uVar3 != 0x40) goto LAB_82b9ffc8;
        uVar8 = 7;
      }
      goto LAB_82b9ffcc;
    }
    param_3[2] = 1;
  }
  if ((uVar5 & 0xff) == 0) {
    if ((((1 < uVar6) && (uVar4 = (uVar5 & 0xffffffff) >> 8 & 0xff, uVar4 != 1)) && (uVar4 != 4)) &&
       (uVar4 != 5)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820de680,0xffffffff820de290,0x1c2);
    }
    if (((2 < uVar6) && (uVar4 = (uVar5 & 0xffffffff) >> 0x10 & 0xff, uVar4 != 2)) &&
       ((uVar4 != 4 && (uVar4 != 5)))) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820de580,0xffffffff820de290,0x1c6);
    }
    if (((uVar6 < 4) || (uVar4 = (uVar5 & 0xffffffff) >> 0x18, uVar4 == 3)) ||
       ((uVar4 == 4 || (uVar4 == 5)))) goto LAB_82ba0164;
    uVar7 = 0x1ca;
  }
  else {
    if ((uVar5 & 0xff) != 2) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820de530,0xffffffff820de290,0x1d2);
    }
    if ((((1 < uVar6) && (uVar4 = (uVar5 & 0xffffffff) >> 8 & 0xff, uVar4 != 1)) && (uVar4 != 4)) &&
       (uVar4 != 5)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820de680,0xffffffff820de290,0x1d8);
    }
    if (((2 < uVar6) && (uVar4 = (uVar5 & 0xffffffff) >> 0x10 & 0xff, uVar4 != 0)) &&
       ((uVar4 != 4 && (uVar4 != 5)))) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820de430,0xffffffff820de290,0x1dc);
    }
    if (((uVar6 < 4) || (uVar4 = (uVar5 & 0xffffffff) >> 0x18, uVar4 == 3)) ||
       ((uVar4 == 4 || (uVar4 == 5)))) goto LAB_82ba0164;
    uVar7 = 0x1e0;
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820de330,0xffffffff820de290,uVar7);
LAB_82ba0164:
  *param_3 = 1;
  return;
}

