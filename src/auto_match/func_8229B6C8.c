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
extern unsigned int *auStack_250;
extern int fn_8229BA88();
extern int fn_8229CAD0();
extern int fn_8229CB40();
extern int fn_82358FD8();
extern int fn_8249ABC0();
extern int fn_8249B4F0();
extern int fn_824BF8A8();
extern int fn_825129C8();
extern int fn_8266C6D8();
extern int fn_8266C700();
extern int fn_8266C708();
extern int fn_8266C728();
extern int fn_8266EC60();
extern int fn_8266F628();
extern int fn_8266F640();
extern int fn_82F4EC30();
extern int fn_82F53380();
extern unsigned int iStack_25c;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_260;


void fn_8229B6C8(double param_1,double param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float *pfVar8;
  ulonglong uVar9;
  double dVar10;
  undefined4 uStack_260;
  int iStack_25c;
  undefined1 auStack_250 [592];
  
  fn_8229BA88();
  uVar9 = 0;
  pfVar8 = (float *)(param_3 + 0xd);
  dVar10 = (double)lbl_821CC160;
  do {
    uVar3 = fn_82F4EC30(uVar9);
    fVar4 = (float)fn_82F53380(uVar3,param_3 + 10,0,1);
    fVar7 = 0.0;
    if (fVar4 != 0.0) {
      fVar7 = fVar4;
    }
    uVar9 = uVar9 + 1;
    pfVar8[3] = fVar7;
    pfVar8 = pfVar8 + 2;
    *pfVar8 = (float)dVar10;
  } while ((uVar9 & 0xffffffff) < 2);
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[7] = 1;
  iVar5 = fn_8249ABC0();
  iVar5 = *(int *)(iVar5 + 0x110);
  uStack_260 = 0;
  iVar1 = *(int *)(iVar5 + 0x20);
  *(int *)(iVar5 + 0x20) = iVar1 + 1;
  iStack_25c = iVar1;
  fn_824BF8A8(iVar5,&uStack_260);
  param_3[0x14] = iVar1;
  uStack_260 = 0;
  iVar1 = *(int *)(iVar5 + 0x20);
  *(int *)(iVar5 + 0x20) = iVar1 + 1;
  iStack_25c = iVar1;
  fn_824BF8A8(iVar5 + 0x10,&uStack_260);
  param_3[0x15] = iVar1;
  if (param_6 != 0) {
    fn_8266EC60();
    uVar6 = fn_8266C700();
    param_3[0x2c] = uVar6;
    fn_8266EC60();
    uVar6 = fn_8266C728();
    param_3[0x2d] = uVar6;
    uVar3 = fn_8266EC60();
    fn_8266C6D8(uVar3,0xdf,1);
    uVar3 = fn_8266EC60();
    fn_8266C708(uVar3,0xdf,1);
    param_3[0x2b] = 1;
    if (param_3[0x2a] == 0) {
      uVar6 = fn_825129C8(0);
      param_3[0x2a] = uVar6;
    }
  }
  fn_8266F640(*param_3,0);
  fn_8266F628(*param_3,0);
  param_3[6] = (float)param_1;
  param_3[0x19] = (float)param_2;
  param_3[5] = param_6;
  param_3[2] = 0;
  param_3[3] = 1;
  param_3[0xd] = 0;
  param_3[0x18] = 1;
  param_3[0x16] = 0;
  param_3[0x17] = 0;
  param_3[0x1b] = 0;
  if (param_6 == 0) {
    uVar3 = fn_8249ABC0();
    iVar5 = fn_8249B4F0(param_2,uVar3,1);
    param_3[0x1b] = iVar5;
    if (iVar5 != 0) {
      fn_82358FD8(param_3[0x13],auStack_250,0x100,0xffffffff821aafb8);
      if (param_3[4] == 0) {
        fn_8229CAD0(param_3,auStack_250);
      }
      else {
        fn_8229CB40(param_3,auStack_250,auStack_250);
      }
      param_3[0x1a] = 1;
    }
  }
  else {
    iVar5 = fn_8249ABC0();
    *(undefined4 *)(**(int **)(iVar5 + 0x1c) + 0x10) = 1;
    if (*(int *)(iVar5 + 0x70) != 0) {
      iVar5 = *(int *)(*(int *)(iVar5 + 0x70) + 0xd54);
      iVar1 = *(int *)(iVar5 + 0x14);
      if ((iVar1 != 0) && (*(int *)(iVar5 + 0x18) == 0)) {
        piVar2 = *(int **)(iVar1 + 0x18);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x80))();
        }
      }
    }
  }
  return;
}

