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
extern int fn_82CE4118();
extern int fn_82CE5338();
extern int fn_82CE5410();
extern int fn_82CEA4B8();
extern int fn_82D003F0();
extern int fn_82E16580();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_8214B440;


void fn_82E16B88(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *param_1 = &lbl_8214B440;
  fn_82E16580();
  iVar5 = 0;
  if (0 < (int)param_1[0xe]) {
    iVar6 = 0;
    do {
      uVar3 = *(undefined4 *)(iVar6 + param_1[0xd]);
      iVar4 = fn_82CE5410();
      fn_82CE5338(*(undefined4 *)(iVar4 + 0x10),uVar3);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < (int)param_1[0xe]);
  }
  iVar5 = 0;
  if (0 < (int)param_1[0x11]) {
    iVar6 = 0;
    do {
      uVar3 = ((undefined4 *)(param_1[0x10] + iVar6))[1];
      uVar1 = *(undefined4 *)(param_1[0x10] + iVar6);
      iVar4 = fn_82CE5410();
      (**(code **)(**(int **)(iVar4 + 0x10) + 8))(*(int **)(iVar4 + 0x10),uVar1,uVar3);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar5 < (int)param_1[0x11]);
  }
  uVar3 = param_1[3];
  iVar5 = fn_82CE5410();
  fn_82CE5338(*(undefined4 *)(iVar5 + 0x10),uVar3);
  iVar5 = fn_82CE5410();
  piVar2 = *(int **)(iVar5 + 0x10);
  param_1[0x17] = 0;
  if ((param_1[0x18] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0x16],param_1[0x18] & 0x3fffffff,8);
  }
  param_1[0x16] = 0;
  param_1[0x18] = 0x80000000;
  iVar5 = fn_82CE5410();
  piVar2 = *(int **)(iVar5 + 0x10);
  param_1[0x14] = 0;
  if ((param_1[0x15] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0x13],param_1[0x15] & 0x3fffffff,8);
  }
  param_1[0x13] = 0;
  param_1[0x15] = 0x80000000;
  iVar5 = fn_82CE5410();
  piVar2 = *(int **)(iVar5 + 0x10);
  param_1[0x11] = 0;
  if ((param_1[0x12] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0x10],param_1[0x12] & 0x3fffffff,0xc);
  }
  param_1[0x10] = 0;
  param_1[0x12] = 0x80000000;
  iVar5 = fn_82CE5410();
  piVar2 = *(int **)(iVar5 + 0x10);
  param_1[0xe] = 0;
  if ((param_1[0xf] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0xd],param_1[0xf] & 0x3fffffff,4);
  }
  param_1[0xd] = 0;
  param_1[0xf] = 0x80000000;
  if (param_1[0xb] != 0) {
    fn_82CE4118();
  }
  param_1[0xb] = 0;
  fn_82D003F0(param_1 + 7);
  iVar5 = fn_82CE5410();
  fn_82CEA4B8(param_1 + 4,*(undefined4 *)(iVar5 + 0x10));
  fn_82BA02A8(param_1 + 4);
  *param_1 = &lbl_8212FC60;
  return;
}

