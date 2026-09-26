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
extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82BBC1A8();
extern int fn_82BC0928();
extern int fn_82BC0A30();
extern int fn_82BC2958();
extern int fn_82BC3A98();
extern unsigned int lbl_820E348C;


undefined4 *
fn_82BC1540(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  fn_82BC0928();
  uVar4 = 0;
  param_1[0xc] = 0;
  *param_1 = &lbl_820E348C;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar2 = fn_82BBC1A8((ulonglong)*(uint *)(param_5 + 0xab0) + 0xb8,param_3,param_1[3],param_1,
                          param_4);
  param_1[4] = uVar2;
  *(undefined1 *)((int)param_1 + 5) = 1;
  if (*(char *)(param_5 + 0x564) != '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e34b0,0xffffffff820e33a8,0x1f1);
  }
  uVar2 = *(undefined4 *)(param_5 + 0x5ac);
  puVar3 = (undefined4 *)fn_82B7BD28(uVar2,0x3c4);
  *puVar3 = uVar2;
  if (puVar3 + 1 != (undefined4 *)0x0) {
    uVar4 = fn_82BC3A98(puVar3 + 1,param_5);
  }
  piVar1 = *(int **)(*(int *)(param_5 + 0xab0) + 0xa4);
  (**(code **)(*piVar1 + 0x28))(piVar1,uVar4);
  fn_82BC2958(uVar4,0,param_1);
  fn_82BC0A30(param_1,uVar4);
  return param_1;
}

