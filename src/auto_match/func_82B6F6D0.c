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
extern int fn_82B6F1B0();


void fn_82B6F6D0(int param_1,uint *param_2,uint *param_3,ushort *param_4,int param_5,int param_6)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar7 = *param_2 >> 0x10 & 0x3f;
  puVar2 = *(uint **)(iVar1 + 0x2a40);
  if (uVar7 < 0x19) {
    uVar3 = *puVar2;
    iVar4 = (uVar7 * 0x40 + (*param_2 & 0xffff) + 0x1068) * 4;
    uVar7 = *(int *)(iVar4 + iVar1) << 0x1a;
    *puVar2 = uVar7 | uVar3 & 0x3ffffff;
    *puVar2 = (*(uint *)(iVar4 + iVar1) & 0x3f) << 0x12 | uVar7 | uVar3 & 0x303ffff;
  }
  else {
    if (uVar7 == 0x1a) {
      uVar7 = *puVar2 & 0x303ffff | 0x80800000;
    }
    else {
      if (uVar7 != 0x1b) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x749);
        goto LAB_82b6f7b0;
      }
      uVar7 = *puVar2 & 0x303ffff | 0x84840000;
    }
    *puVar2 = uVar7;
  }
LAB_82b6f7b0:
  switch(*(ushort *)param_2 & 0x3f) {
  case 0:
  case 1:
  case 2:
  case 6:
  case 8:
  case 9:
  case 10:
  case 0x14:
  case 0x15:
  case 0x16:
    uVar5 = 0x798;
    break;
  case 3:
  case 4:
  case 5:
  case 7:
  case 0xd:
    goto switchD_82b6f7e4_caseD_3;
  default:
    uVar5 = 0x79d;
    break;
  case 0xe:
    uVar5 = 1;
    goto LAB_82b6f7ec;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x17:
  case 0x18:
    uVar5 = 2;
LAB_82b6f7ec:
    fn_82B6F1B0(param_1,uVar5);
switchD_82b6f7e4_caseD_1a:
    *puVar2 = *puVar2 | 0x10000;
    *(int *)(param_1 + 0x668) = *(int *)(param_1 + 0x668) + 1;
    goto switchD_82b6f7e4_caseD_3;
  case 0x1a:
  case 0x1b:
    goto switchD_82b6f7e4_caseD_1a;
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,uVar5);
switchD_82b6f7e4_caseD_3:
  if ((*puVar2 & 0x10000) == 0x10000) {
    *puVar2 = *puVar2 & 0xff03ffff;
  }
  if ((*param_2 & 0x400000) == 0) {
    if (param_5 == 0) {
      uVar7 = *puVar2 & 0xffff003f | 0xf00;
    }
    else {
      uVar7 = *puVar2 & 0xffff003f | 0xf000;
    }
    *puVar2 = uVar7;
  }
  else {
    if (param_3 == (uint *)0x0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da774,0xffffffff820da3b8,0x7ad);
    }
    if (1 < (*param_3 & 3)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da744,0xffffffff820da3b8,0x7b0);
    }
    if (7 < (*param_3 & 0xc)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da714,0xffffffff820da3b8,0x7b1);
    }
    if (0x1f < (*param_3 & 0x30)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da6e4,0xffffffff820da3b8,0x7b2);
    }
    if (0x7f < (*param_3 & 0xc0)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da6b4,0xffffffff820da3b8,0x7b3);
    }
    uVar7 = *param_3;
    uVar6 = (((ulonglong)(uVar7 >> 1) & 0x20 | (ulonglong)uVar7 & 0x10) >> 1 | (ulonglong)uVar7 & 4)
            >> 1 | (ulonglong)uVar7 & 1;
    uVar7 = *puVar2;
    if (param_5 == 0) {
      *puVar2 = uVar7 & 0xffff0fff;
      *puVar2 = (uint)(uVar6 << 8) | uVar7 & 0xffff00ff;
    }
    else {
      *puVar2 = (uint)(uVar6 << 0xc) | uVar7 & 0xffff00ff;
    }
    if (param_5 == 0) {
      uVar7 = *param_3 >> 2 & 0x40 | *puVar2 & 0xffffffbf;
    }
    else {
      uVar7 = *param_3 >> 1 & 0x80 | *puVar2 & 0xffffff7f;
    }
    *puVar2 = uVar7;
  }
  if ((*param_2 & 0x800000) != 0) {
    if ((*param_4 & 1) != 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da688,0xffffffff820da3b8,0x7e5);
    }
    *puVar2 = *puVar2 | 0x2020000;
  }
  if (param_6 == 0) {
    uVar7 = puVar2[1] & 0xffffffe7;
  }
  else {
    uVar7 = puVar2[1] | 0x18;
  }
  puVar2[1] = uVar7;
  return;
}

