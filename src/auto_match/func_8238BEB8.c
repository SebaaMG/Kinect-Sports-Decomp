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
extern int fn_822315A0();
extern int fn_822CEE40();
extern int fn_822CEF30();
extern int fn_822CEFA0();
extern int fn_82365BD8();
extern int fn_82372230();
extern float lbl_8218E8E8;
extern unsigned int lbl_821916F4;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831DCD58;


void fn_8238BEB8(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                  ulonglong param_6,int param_7,undefined8 param_8,undefined8 param_9,uint param_10)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar5;
  undefined8 uVar4;
  uint uVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_60 [1];
  
  uVar3 = fn_822CEE40(param_5);
  dVar8 = (double)lbl_821CC160;
  if (uVar3 != 0) {
    iVar5 = (int)uVar3;
    if (*(int *)(iVar5 + 0x24) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(iVar5 + 0x268);
    }
    if (((uVar6 | -(uint)(*(int *)(param_5 + 0x24) != 0) & param_10) & 1) == 0) {
      iVar5 = fn_822CEFA0(uVar3);
      if ((iVar5 == 0) && (param_7 != 8)) {
        dVar7 = dVar8;
        if ((param_7 != 3) && (param_7 != 5)) {
          dVar7 = (double)lbl_821CA460;
        }
        iVar5 = fn_822CEE40(uVar3);
        if ((iVar5 != 0) && (*(int *)(iVar5 + 0x2ac) != 0)) {
          dVar7 = (double)((float)((double)*(float *)(iVar5 + 0x2a8) + dVar7) * lbl_8218E8E8);
        }
      }
      else {
        dVar7 = (double)lbl_821CA460;
      }
      *(float *)((int)uVar3 + 0x2a8) = (float)dVar7;
      *(undefined4 *)((int)uVar3 + 0x2ac) = 1;
    }
    else {
      *(undefined4 *)(iVar5 + 0x2ac) = 0;
    }
  }
  if (param_7 < 0x18) {
    iVar5 = *(int *)(&lbl_831DCD58 + param_7 * 4);
  }
  else {
    iVar5 = 6;
  }
  if (((((uVar3 & 0xffffffff) == (param_6 & 0xffffffff)) && (param_10 == 0)) &&
      (*(int *)(param_5 + 0x24) != 0)) && (iVar5 == 1)) {
    *(undefined4 *)(param_5 + 0x2d0) = 1;
    iVar5 = fn_822CEF30((double)lbl_821916F4,param_5);
    if (iVar5 == 0) {
      *(float *)(param_5 + 0x27c) = (float)dVar8;
    }
    else {
      *(undefined4 *)(param_5 + 0x27c) = lbl_82192734;
    }
  }
  else {
    iVar2 = (int)param_6;
    if (((*(int *)(param_5 + 0x2c) != *(int *)(iVar2 + 0x2c)) && (*(int *)(iVar2 + 0x24) != 0)) &&
       (iVar5 == 2)) {
      *(undefined4 *)(iVar2 + 0x2d0) = 1;
      iVar5 = fn_822CEF30((double)lbl_821916F4,param_6);
      if (iVar5 == 0) {
        *(float *)(iVar2 + 0x27c) = (float)dVar8;
      }
      else {
        *(undefined4 *)(iVar2 + 0x27c) = lbl_82192734;
      }
    }
  }
  uVar1 = *(undefined4 *)(param_3 + 8);
  uVar4 = fn_82365BD8(auStack_60,param_4);
  fn_82372230(param_1,param_2,uVar1,uVar4,param_5,param_6,param_7);
  if (*(int *)(param_4 + 4) != 0) {
    fn_822315A0();
  }
  return;
}

