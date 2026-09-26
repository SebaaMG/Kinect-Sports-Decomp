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
extern int fn_8227DE10();
extern int fn_8265CA20();
extern int fn_82F63CA0();
extern unsigned int lbl_821A87A4;


void fn_8227DCF8(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[4];
  piVar3 = (int *)param_1[3];
  piVar2 = param_1 + 3;
  *param_1 = &lbl_821A87A4;
  for (; piVar3 != piVar4; piVar3 = piVar3 + 1) {
    if (*piVar3 != 0) {
      fn_8227DE10();
    }
  }
  iVar1 = *piVar2;
  if (iVar1 != param_1[4]) {
    fn_82F63CA0(iVar1,param_1[4],0);
    param_1[4] = iVar1;
  }
  for (piVar4 = (int *)param_1[7]; piVar4 != (int *)param_1[8]; piVar4 = piVar4 + 2) {
    if ((*piVar4 == 0) && (piVar4[1] != 0)) {
      fn_8227DE10();
    }
  }
  iVar1 = param_1[7];
  if (iVar1 != 0) {
    for (; iVar1 != param_1[8]; iVar1 = iVar1 + 8) {
    }
    fn_8265CA20();
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (*piVar2 != 0) {
    fn_8265CA20();
  }
  *piVar2 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

