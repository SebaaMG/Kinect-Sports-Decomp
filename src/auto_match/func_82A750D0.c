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
extern int fn_82A6D090();
extern int fn_82A74B48();
extern unsigned int lbl_820A9330;
extern unsigned int lbl_820A96E8;
extern unsigned int lbl_820A9B10;
extern unsigned int lbl_820A9CF8;
extern unsigned int lbl_820A9EE0;
extern unsigned int lbl_820AA100;


void fn_82A750D0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  int aiStack_30 [12];
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x330) == 0) {
    iVar2 = fn_82A6D090(param_1 + 0x38,1,aiStack_30);
    if (iVar2 < 0) {
      return;
    }
    if (aiStack_30[0] == 1) {
      puVar6 = &lbl_820A9330;
      puVar5 = &lbl_820A9B10;
      puVar4 = &lbl_820A9CF8;
      uVar3 = 0x34;
    }
    else {
      puVar6 = &lbl_820A96E8;
      puVar5 = &lbl_820A9EE0;
      puVar4 = &lbl_820AA100;
      uVar3 = 0x1c;
    }
    *(undefined **)(param_2 + 0x18) = puVar6;
    *(undefined **)(param_2 + 0x1c) = puVar5;
    *(undefined **)(param_2 + 0x20) = puVar4;
    *(undefined2 *)((int)param_1 + 0x13a) = uVar3;
  }
  param_1[0x85] = 0;
  piVar7 = param_1 + 0x99;
  param_1[0x81] = 1;
  param_1[0x84] = 0;
  lVar8 = 4;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0xa2] = 0;
  do {
    piVar7[-3] = 0;
    piVar7 = piVar7 + 1;
    *piVar7 = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  *(code **)(iVar1 + 0x1e4) = fn_82A74B48;
  fn_82A74B48(param_1,param_2);
  return;
}

