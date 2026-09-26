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
extern int fn_82BA0310();
extern int fn_82BA0690();
extern int fn_82BB2C20();
extern int fn_82BD34B0();
extern unsigned int lbl_820E7368;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


void fn_82BC90F0(int param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,int *param_6
                  ,char param_7)

{
  char cVar3;
  int iVar2;
  undefined8 uVar1;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uStack00000024;
  char acStack_60 [96];
  
  uStack00000024 = param_3;
  if ((param_5 != 0) || (param_6 == (int *)0x0)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e7b10,0xffffffff820e74a8,0x1103);
  }
  iVar6 = 0;
  acStack_60[0] = '\0';
  acStack_60[1] = 0;
  acStack_60[2] = 0;
  acStack_60[3] = 0;
  if (param_4 != (uint *)0x0) {
    if ((*param_4 >> 0x17 & 1) != 0) {
      cVar3 = fn_82BA0310(param_1);
      if (cVar3 == '\0') {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e79e0,0xffffffff820e74a8,0x110e);
      }
      iVar2 = param_6[0x14];
      if (((iVar2 != 0x13) && (iVar2 != 0x14)) && (iVar2 != 0x21)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e7a98,0xffffffff820e74a8,0x1112);
      }
      if (*(char *)(param_1 + 0x844) == '\0') {
        *(int *)(param_1 + 0x848) = iVar2;
        *(undefined1 *)(param_1 + 0x844) = 1;
      }
      else if (*(int *)(param_1 + 0x848) != iVar2) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e7a70,0xffffffff820e74a8,0x1117);
      }
      param_6[0x32] = param_6[0xe];
      if (*(int *)(param_2 + 4) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e7928,0xffffffff820e74a8,0x111c);
      }
      uVar5 = *(uint *)(param_2 + 4) - 1;
      if (uVar5 < *(uint *)(param_2 + 4)) {
        piVar4 = (int *)(uVar5 * 4 + *(int *)(param_2 + 8));
      }
      else {
        piVar4 = (int *)0x0;
      }
      iVar2 = *(int *)(*piVar4 + 0x88);
      param_6[0x14] = 0x2a;
      param_6[0x39] = param_6[0x39] | 0x10;
      param_6[0xe] = iVar2;
      fn_82BA0690(param_1,param_6);
    }
    if ((*param_4 & 0x400000) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_4[1] >> 8 & 1;
    }
    if (uVar5 != 0) {
      *(undefined1 *)(param_6 + 0x29) = 1;
    }
    iVar2 = fn_82BD34B0(param_4,0);
    acStack_60[0] = (char)*(undefined4 *)(&lbl_820E7368 + iVar2 * 4);
    iVar2 = fn_82BD34B0(param_4,1);
    acStack_60[1] = (char)*(undefined4 *)(&lbl_820E7368 + iVar2 * 4);
    iVar2 = fn_82BD34B0(param_4,2);
    acStack_60[2] = (char)*(undefined4 *)(&lbl_820E7368 + iVar2 * 4);
    iVar2 = fn_82BD34B0(param_4,3);
    acStack_60[3] = (char)*(undefined4 *)(&lbl_820E7368 + iVar2 * 4);
  }
  if (param_7 == '\0') {
    do {
      cVar3 = fn_82BB2C20(&stack0x00000024,iVar6);
      if (cVar3 == '\0') {
        cVar3 = acStack_60[iVar6];
      }
      (**(code **)(*param_6 + 0x54))(param_6,0,iVar6,cVar3);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
  }
  else {
    do {
      uVar1 = fn_82BB2C20(&stack0x00000024,iVar6);
      if (acStack_60[iVar6] == '\x01') {
        uVar1 = 1;
      }
      (**(code **)(*param_6 + 0x54))(param_6,0,iVar6,uVar1);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
  }
  return;
}

