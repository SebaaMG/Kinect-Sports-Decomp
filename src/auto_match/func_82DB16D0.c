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
extern int fn_82CE5410();
extern int fn_82CEAB00();
extern int fn_82CFBA90();
extern int fn_82D35080();
extern int fn_82D83DA8();
extern int fn_82D83E20();
extern int fn_82D83E98();
extern int fn_82D83F88();
extern unsigned int lbl_8214163C;
extern unsigned int lbl_82141ED8;
extern unsigned int lbl_82141EE8;
extern unsigned int lbl_82141F04;
extern unsigned int lbl_82141FB4;
extern unsigned int lbl_82141FC4;
extern unsigned int lbl_82141FD4;
extern unsigned int lbl_82141FEC;
extern unsigned int lbl_82142008;


undefined4 * fn_82DB16D0(double param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar4;
  
  param_2[3] = 0;
  *(undefined2 *)((int)param_2 + 6) = 1;
  param_2[4] = 0;
  param_2[5] = &lbl_82141EE8;
  param_2[6] = &lbl_82141F04;
  param_2[7] = &lbl_82141ED8;
  param_2[8] = &lbl_8214163C;
  param_2[10] = param_3;
  *param_2 = &lbl_82142008;
  param_2[5] = &lbl_82141FEC;
  param_2[6] = &lbl_82141FD4;
  param_2[7] = &lbl_82141FC4;
  param_2[8] = &lbl_82141FB4;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0x80000000;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0xffffffff;
  iVar2 = fn_82CE5410();
  fn_82CEAB00(param_2 + 0x14,*(undefined4 *)(iVar2 + 0x10),0);
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  iVar2 = fn_82CE5410();
  uVar3 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x10);
  param_2[0xf] = uVar3;
  iVar2 = fn_82CE5410();
  uVar1 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),4);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82CFBA90(uVar1,0,1000);
  }
  param_2[0x10] = (float)param_1;
  param_2[0x1b] = uVar3;
  param_2[2] = 1;
  param_2[4] = 0;
  param_2[3] = 0;
  if (param_4 == 0) {
    *(undefined1 *)(param_2 + 9) = 1;
  }
  else if (param_4 == 1) {
    *(undefined1 *)(param_2 + 9) = 0;
  }
  fn_82D83DA8(param_2[10],param_2 + 5);
  fn_82D83E20(param_2[10],param_2 + 6);
  fn_82D83E98(param_2[10],param_2 + 7);
  fn_82D83F88(param_2[10],param_2 + 8);
  if (*(char *)(param_2 + 9) != '\0') {
    uVar4 = (ulonglong)*(uint *)(param_2[10] + 0x78);
    iVar2 = fn_82CE5410();
    uVar1 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x80);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82D35080(uVar1,uVar4 + 0x20,uVar4 + 0x30,uVar4 + 0x40);
    }
    param_2[3] = uVar3;
  }
  *(undefined1 *)(param_2 + 0x17) = 0;
  *(undefined1 *)(param_2 + 0x1a) = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0x1e;
  param_2[0x12] = 0;
  *(undefined1 *)(param_2 + 0xb) = 0;
  *(undefined1 *)((int)param_2 + 0x69) = 0;
  return param_2;
}

