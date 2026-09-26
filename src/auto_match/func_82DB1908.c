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
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA4B8();
extern int fn_82CFBAD0();
extern int fn_82D81408();
extern int fn_82D81450();
extern int fn_82D81498();
extern int fn_82D81528();
extern int fn_83083AA0();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_8214163C;
extern unsigned int lbl_82141ED8;
extern unsigned int lbl_82141EE8;
extern unsigned int lbl_82141F04;
extern unsigned int lbl_82141FB4;
extern unsigned int lbl_82141FC4;
extern unsigned int lbl_82141FD4;
extern unsigned int lbl_82141FEC;
extern unsigned int lbl_82142008;


void fn_82DB1908(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = &lbl_82142008;
  param_1[5] = &lbl_82141FEC;
  param_1[6] = &lbl_82141FD4;
  param_1[7] = &lbl_82141FC4;
  param_1[8] = &lbl_82141FB4;
  fn_82D81408(param_1[10],param_1 + 5);
  fn_82D81450(param_1[10],param_1 + 6);
  fn_82D81498(param_1[10],param_1 + 7);
  fn_82D81528(param_1[10],param_1 + 8);
  puVar1 = (undefined4 *)param_1[3];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  iVar5 = param_1[4];
  if (iVar5 != 0) {
    fn_83083AA0(iVar5);
    iVar4 = fn_82CE5410();
    (**(code **)(**(int **)(iVar4 + 0x10) + 8))(*(int **)(iVar4 + 0x10),iVar5,0x50);
  }
  uVar2 = param_1[0xf];
  iVar5 = fn_82CE5410();
  (**(code **)(**(int **)(iVar5 + 0x10) + 8))(*(int **)(iVar5 + 0x10),uVar2,0x10);
  iVar5 = param_1[0x1b];
  if (iVar5 != 0) {
    fn_82CFBAD0(iVar5);
    iVar4 = fn_82CE5410();
    (**(code **)(**(int **)(iVar4 + 0x10) + 8))(*(int **)(iVar4 + 0x10),iVar5,4);
  }
  iVar5 = fn_82CE5410();
  fn_82CEA4B8(param_1 + 0x14,*(undefined4 *)(iVar5 + 0x10));
  fn_82BA02A8(param_1 + 0x14);
  iVar5 = fn_82CE5410();
  piVar3 = *(int **)(iVar5 + 0x10);
  param_1[0x12] = 0;
  if ((param_1[0x13] & 0x80000000) == 0) {
    (**(code **)(*piVar3 + 0x10))(piVar3,param_1[0x11],param_1[0x13] & 0x3fffffff,4);
  }
  param_1[0x11] = 0;
  param_1[0x13] = 0x80000000;
  param_1[8] = &lbl_8214163C;
  param_1[7] = &lbl_82141ED8;
  param_1[6] = &lbl_82141F04;
  param_1[5] = &lbl_82141EE8;
  *param_1 = &lbl_8212FC60;
  return;
}

