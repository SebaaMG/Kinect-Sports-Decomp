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
extern int fn_82D2CA40();
extern int fn_82D2E680();
extern int fn_82D30C78();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_82134B44;


undefined4 * fn_82D31170(undefined4 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &lbl_82134B44;
  fn_82D30C78(param_1,1);
  fn_82D2CA40(param_1 + 0x94);
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x11] = 0;
  if ((param_1[0x12] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x10],param_1[0x12] & 0x3fffffff,8);
  }
  param_1[0x10] = 0;
  param_1[0x12] = 0x80000000;
  fn_82D2E680(param_1 + 2);
  *param_1 = &lbl_8212FC60;
  if ((param_2 & 1) != 0) {
    iVar2 = fn_82CE5410();
    (**(code **)(**(int **)(iVar2 + 0x10) + 8))
              (*(int **)(iVar2 + 0x10),param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

