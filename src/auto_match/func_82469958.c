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
extern int fn_82273C88();
extern int fn_82672C20();
extern int iRam831c6e20;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82469958(int *param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  int iVar4;
  undefined8 uVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar2 = *param_1;
  uStack_30 = 0;
  iVar4 = (int)param_2;
  uStack_2c = 0;
  if (iVar4 == iVar2) goto LAB_82469b00;
  if ((5 < iVar2) && (iVar2 < 9)) {
    fn_82672C20(param_1[1],0xffffffff821bc1b0,0,0);
  }
  *param_1 = iVar4;
  if (8 < (param_2 & 0xffffffff)) goto LAB_82469b00;
  bVar1 = iVar4 != 0;
  if (param_2 == 1 && bVar1) {
    if (((iVar2 == 3) || (iVar2 == 4)) || (iVar2 == 5)) {
      uVar3 = 0xffffffff821bc1f8;
      goto LAB_82469a28;
    }
    iVar4 = param_1[1];
    if (iVar2 == 2) {
      uVar3 = 0xffffffff821bc20c;
    }
    else {
      uVar3 = 0xffffffff821bc220;
    }
  }
  else if (param_2 == 2 && bVar1) {
    iVar4 = param_1[1];
    if (iVar2 == 0) {
      uVar3 = 0xffffffff821bc230;
    }
    else {
      uVar3 = 0xffffffff821bc240;
    }
  }
  else {
    if (param_2 == 3 && bVar1) {
      uVar3 = 0xffffffff821bc254;
    }
    else if (param_2 == 4 && bVar1) {
      uVar3 = 0xffffffff821bc268;
    }
    else if (param_2 == 5 && bVar1) {
      uVar3 = 0xffffffff821bc280;
    }
    else {
      if (((param_2 == 6 && bVar1) || (param_2 == 7 && bVar1)) || (bVar1)) {
        fn_82672C20(param_1[1],0xffffffff821bc298,0,0);
        param_1[5] = iRam831c6e20;
        goto LAB_82469b00;
      }
      if (iVar2 == 2) {
        uVar3 = 0xffffffff821bc1c8;
      }
      else if (iVar2 == 1) {
        uVar3 = 0xffffffff821bc1d8;
      }
      else {
        if (((iVar2 == 6) || (iVar2 == 7)) || (iVar2 == 8)) goto LAB_82469b00;
        uVar3 = 0xffffffff821bc1e8;
      }
    }
LAB_82469a28:
    iVar4 = param_1[1];
  }
  fn_82672C20(iVar4,uVar3,0,0);
LAB_82469b00:
  fn_82273C88(&uStack_30);
  return;
}

