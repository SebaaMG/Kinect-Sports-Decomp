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
extern int fn_822315A0();
extern int fn_82358058();
extern int fn_82397BA8();
extern int fn_82399990();
extern int fn_82399AD0();
extern int fn_8239C468();
extern int fn_824C5630();
extern int fn_8251FA58();
extern int fn_82529320();
extern int fn_82552B50();
extern int fn_8265CA20();
extern unsigned int lbl_821B4200;
extern unsigned int lbl_821B50B0;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D44F8;
extern unsigned int lbl_831D4508;
extern unsigned int lbl_831D450C;


/* WARNING: Removing unreachable block (ram,0x82395638) */

void fn_82395588(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  *param_1 = &lbl_821B50B0;
  if (param_1[0x5e] == 0) {
    fn_82399990();
  }
  else {
    fn_82399AD0();
  }
  fn_8239C468(param_1,1);
  iVar4 = param_1[0xb9];
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 8) != 0) {
      fn_82529320(*(int *)(iVar4 + 8),0);
    }
    if (*(int *)(iVar4 + 4) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(iVar4);
  }
  fn_82552B50(param_1 + 0x91,1);
  *(undefined4 *)param_1[0xb7] = 0;
  iVar4 = param_1[0x7a];
  if (iVar4 != param_1[0x7b]) {
    for (iVar3 = iVar4; iVar3 != param_1[0x7b]; iVar3 = iVar3 + 0x20) {
    }
    param_1[0x7b] = iVar4;
  }
  if (param_1[0x67] != 0) {
    fn_8251FA58();
    param_1[0x67] = 0;
  }
  fn_82397BA8(param_1);
  puVar1 = (undefined4 *)param_1[0xb8];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0xb8] = 0;
  param_1[0x85] = 0;
  param_1[0x83] = param_1[0xaa];
  if ((undefined4 *)param_1[0xb7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xb7] = 0;
    fn_8265CA20();
  }
  if (param_1[0x2ed] != 0) {
    fn_8265CA20();
  }
  param_1[0x2ed] = 0;
  param_1[0x2ef] = 0;
  param_1[0x2ee] = 0;
  if (lbl_831D4508 == 0) {
    lbl_831D4508 = 0;
    lbl_831D450C = 0xff;
    lbl_831D44F8 = lbl_821CC160;
  }
  param_1[0x235] = &lbl_821B4200;
  if (param_1[0x231] != 0) {
    fn_822315A0();
  }
  fn_824C5630(param_1 + 0x220);
  if (param_1[0x210] != 0) {
    fn_822315A0();
  }
  piVar2 = (int *)param_1[0x20c];
  piVar5 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *(undefined4 *)(param_1[0x20c] + 4) = param_1[0x20c];
  param_1[0x20d] = 0;
  if (piVar5 != (int *)param_1[0x20c]) {
    do {
      piVar2 = (int *)*piVar5;
      if (piVar5[3] != 0) {
        fn_822315A0();
      }
      fn_8265CA20(piVar5);
      piVar5 = piVar2;
    } while (piVar2 != (int *)param_1[0x20c]);
  }
  fn_8265CA20(param_1[0x20c]);
  iVar4 = param_1[0x7a];
  if (iVar4 != 0) {
    for (; iVar4 != param_1[0x7b]; iVar4 = iVar4 + 0x20) {
    }
    fn_8265CA20();
  }
  param_1[0x7a] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  if (param_1[0x75] != 0) {
    fn_8265CA20();
  }
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  if (param_1[0x71] != 0) {
    fn_8265CA20();
  }
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  if (param_1[0x6d] != 0) {
    fn_8265CA20();
  }
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  if (param_1[0x69] != 0) {
    fn_8265CA20();
  }
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  fn_82358058(param_1);
  return;
}

