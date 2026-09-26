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
extern int fn_825089A0();
extern int fn_828AC428();
extern int fn_828CFA88();
extern int fn_82F68CC0();
extern unsigned int lbl_82026788;


undefined4 *
fn_828D0080(undefined4 *param_1,undefined4 param_2,undefined8 param_3,int param_4,
             undefined8 param_5)

{
  int *piVar2;
  undefined8 uVar1;
  undefined4 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &lbl_82026788;
  fn_82F68CC0((int)param_1 + 9,param_3,0x24);
  puVar4 = (undefined1 *)(param_4 + -1);
  puVar3 = param_1 + 0xb;
  lVar5 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    *(undefined1 *)puVar3 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  fn_82F68CC0((int)param_1 + 0x35,param_5,0x10);
  param_1[0x15] = 0;
  fn_828AC428(param_1 + 0x18);
  param_1[0x22] = param_2;
  param_1[0x21] = 0;
  piVar2 = (int *)fn_825089A0();
  uVar1 = (**(code **)(*piVar2 + 0xc))();
  *(undefined8 *)(param_1 + 0x24) = uVar1;
  param_1[0x12] = (int)param_1 + 9;
  param_1[0x13] = (int)param_1 + 0x2d;
  param_1[0x14] = (int)param_1 + 0x35;
  fn_828CFA88(param_1);
  return param_1;
}

