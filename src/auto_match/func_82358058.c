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
extern int fn_8225F160();
extern int fn_82297DB0();
extern int fn_82359BB0();
extern int fn_8236DD08();
extern int fn_823B4D40();
extern int fn_8249ABC0();
extern int fn_8249D980();
extern int fn_8249DA08();
extern int fn_8265CA20();
extern unsigned int lbl_821B24E0;
extern unsigned int lbl_821B30C8;


void fn_82358058(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  *param_1 = &lbl_821B24E0;
  iVar3 = fn_8225F160();
  *(undefined4 *)(iVar3 + 0x40) = 3;
  iVar3 = fn_8225F160();
  *(undefined4 *)(iVar3 + 0x60) = 1;
  iVar3 = fn_8249ABC0();
  uVar4 = 0xffffffff;
  if (param_1[0x2d] != -1) {
    uVar4 = 0xffffffff;
    fn_8249D980(*(undefined4 *)(iVar3 + 0x110));
    param_1[0x2d] = uVar4;
  }
  if (param_1[0x2e] != -1) {
    fn_8249DA08();
    param_1[0x2e] = uVar4;
  }
  for (piVar6 = (int *)param_1[3]; piVar6 < (int *)param_1[4]; piVar6 = piVar6 + 1) {
    puVar5 = (undefined4 *)*piVar6;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  for (puVar5 = (undefined4 *)param_1[8]; puVar5 < (undefined4 *)param_1[9]; puVar5 = puVar5 + 1) {
    piVar1 = (int *)*puVar5;
    for (piVar6 = (int *)*piVar1; piVar6 < (int *)piVar1[1]; piVar6 = piVar6 + 1) {
      puVar2 = (undefined4 *)*piVar6;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      piVar1 = (int *)*puVar5;
    }
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        fn_8265CA20();
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      fn_8265CA20(piVar1);
    }
  }
  if (param_1[0x21] != 0) {
    *(undefined4 *)(param_1[0x21] + 0x80) = 0;
  }
  fn_82297DB0(param_1 + 0x54,1,0);
  fn_82297DB0(param_1 + 0x4d,1,0);
  fn_82297DB0(param_1 + 0x46,1,0);
  puVar5 = (undefined4 *)param_1[0x35];
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  iVar3 = param_1[0x23];
  if (iVar3 != 0) {
    fn_823B4D40(iVar3);
    fn_8265CA20(iVar3);
  }
  param_1[0x10] = &lbl_821B30C8;
  fn_8236DD08(param_1 + 0x10);
  fn_82359BB0(param_1 + 0xc);
  if (param_1[8] != 0) {
    fn_8265CA20();
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (param_1[3] != 0) {
    fn_8265CA20();
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

