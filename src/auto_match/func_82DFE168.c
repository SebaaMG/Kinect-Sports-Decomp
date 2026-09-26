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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D95638();
extern unsigned int lbl_8214737C;


void fn_82DFE168(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &lbl_8214737C;
  if (param_1[7] != 0) {
    fn_82CE4118();
  }
  if (param_1[8] != 0) {
    fn_82CE4118();
  }
  if (param_1[9] != 0) {
    fn_82CE4118();
  }
  if (param_1[10] != 0) {
    fn_82CE4118();
  }
  if (param_1[0xb] != 0) {
    fn_82CE4118();
  }
  if (param_1[0xc] != 0) {
    fn_82CE4118();
  }
  if (param_1[0xd] != 0) {
    fn_82CE4118();
  }
  if (param_1[0xe] != 0) {
    fn_82CE4118();
  }
  if (param_1[0xf] != 0) {
    fn_82CE4118();
  }
  if (param_1[0x11] != 0) {
    fn_82CE4118();
  }
  if (param_1[0x27] != 0) {
    fn_82CE4118();
  }
  if (param_1[0x10] != 0) {
    fn_82CE4118();
  }
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x31] = 0;
  if ((param_1[0x32] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x30],param_1[0x32] & 0x3fffffff,4);
  }
  param_1[0x30] = 0;
  param_1[0x32] = 0x80000000;
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x29] = 0;
  if ((param_1[0x2a] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x28],param_1[0x2a] & 0x3fffffff,1);
  }
  param_1[0x28] = 0;
  param_1[0x2a] = 0x80000000;
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x13] = 0;
  if ((param_1[0x14] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x12],param_1[0x14] & 0x3fffffff,0xe0);
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0x80000000;
  fn_82D95638(param_1);
  return;
}

