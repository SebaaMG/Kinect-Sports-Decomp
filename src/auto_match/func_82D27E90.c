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
extern int fn_82D1E718();
extern int fn_82D27C70();
extern int fn_82D2C388();
extern int fn_82D2CA40();
extern int fn_82D2E680();
extern int fn_82D30C78();
extern int fn_82D34CA8();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_82134820;
extern unsigned int lbl_82134B44;
extern unsigned int lbl_82134B58;


void fn_82D27E90(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &lbl_82134B58;
  fn_82D27C70();
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x1ec] = 0;
  if ((param_1[0x1ed] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x1eb],param_1[0x1ed] & 0x3fffffff,0x10);
  }
  param_1[0x1eb] = 0;
  param_1[0x1ed] = 0x80000000;
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x1e9] = 0;
  if ((param_1[0x1ea] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x1e8],param_1[0x1ea] & 0x3fffffff,0x10);
  }
  param_1[0x1e8] = 0;
  param_1[0x1ea] = 0x80000000;
  param_1[0x1c8] = &lbl_82134820;
  fn_82D34CA8(param_1 + 0x1c8);
  fn_82D1E718(param_1 + 0x1cf);
  param_1[0x10] = &lbl_82134B44;
  fn_82D30C78(param_1 + 0x10,1);
  fn_82D2CA40(param_1 + 0xa4);
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x21] = 0;
  if ((param_1[0x22] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x20],param_1[0x22] & 0x3fffffff,8);
  }
  param_1[0x20] = 0;
  param_1[0x22] = 0x80000000;
  fn_82D2E680(param_1 + 0x12);
  param_1[0x10] = &lbl_8212FC60;
  fn_82D2C388(param_1);
  return;
}

