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
extern int fn_82CED5B8();
extern int fn_82E04A30();
extern unsigned int lbl_82148E54;


void fn_82E062C8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  
  *param_1 = &lbl_82148E54;
  fn_82CED5B8(param_1 + 0x10);
  iVar2 = fn_82CE5410();
  uVar4 = (ulonglong)(uint)param_1[0xe];
  piVar1 = *(int **)(iVar2 + 0x10);
  if (0 < (int)param_1[0xe]) {
    lVar3 = (ulonglong)(uint)param_1[0xd] + 4;
    do {
      fn_82CED5B8(lVar3);
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + 8;
    } while (uVar4 != 0);
  }
  param_1[0xe] = 0;
  if ((param_1[0xf] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0xd],param_1[0xf] & 0x3fffffff,8);
  }
  param_1[0xd] = 0;
  param_1[0xf] = 0x80000000;
  iVar2 = fn_82CE5410();
  uVar4 = (ulonglong)(uint)param_1[0xb];
  piVar1 = *(int **)(iVar2 + 0x10);
  if (0 < (int)param_1[0xb]) {
    puVar5 = (undefined4 *)(param_1[10] + -4);
    do {
      if (puVar5[1] != 0) {
        fn_82CE4118();
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
      *puVar5 = 0;
    } while (uVar4 != 0);
  }
  param_1[0xb] = 0;
  if ((param_1[0xc] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[10],param_1[0xc] & 0x3fffffff,4);
  }
  param_1[10] = 0;
  param_1[0xc] = 0x80000000;
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[8] = 0;
  if ((param_1[9] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[7],param_1[9] & 0x3fffffff,0x40);
  }
  param_1[7] = 0;
  param_1[9] = 0x80000000;
  if (param_1[6] != 0) {
    fn_82CE4118();
  }
  param_1[6] = 0;
  fn_82CED5B8(param_1 + 5);
  fn_82E04A30(param_1);
  return;
}

