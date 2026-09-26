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
extern int fn_8239DBB0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F63CA0();
extern unsigned int lbl_821B828C;
extern unsigned int lbl_821B8290;


void fn_824155A0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar3;
  longlong lVar2;
  uint uVar4;
  int *piVar5;
  undefined4 *apuStack_40 [16];
  
  *param_1 = param_2;
  piVar1 = param_1 + 1;
  uVar4 = 0;
  if ((int)(param_1[2] - param_1[1]) >> 2 != 0) {
    iVar3 = 0;
    do {
      fn_8265CA20(*(undefined4 *)(iVar3 + *piVar1));
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar4 < (uint)(param_1[2] - *piVar1 >> 2));
  }
  piVar5 = param_1 + 5;
  uVar4 = 0;
  if ((int)(param_1[6] - param_1[5]) >> 2 != 0) {
    iVar3 = 0;
    do {
      fn_8265CA20(*(undefined4 *)(iVar3 + *piVar5));
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar4 < (uint)(param_1[6] - *piVar5 >> 2));
  }
  iVar3 = *piVar1;
  if (iVar3 != param_1[2]) {
    fn_82F63CA0(iVar3,param_1[2],0);
    param_1[2] = iVar3;
  }
  iVar3 = *piVar5;
  if (iVar3 != param_1[6]) {
    fn_82F63CA0(iVar3,param_1[6],0);
    param_1[6] = iVar3;
  }
  lVar2 = 9;
  do {
    apuStack_40[0] = (undefined4 *)fn_8265C9E0(0xc);
    if (apuStack_40[0] == (undefined4 *)0x0) {
      apuStack_40[0] = (undefined4 *)0x0;
    }
    else {
      *apuStack_40[0] = &lbl_821B828C;
      apuStack_40[0][1] = 0;
      apuStack_40[0][2] = 0;
    }
    fn_8239DBB0(piVar1,apuStack_40);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  apuStack_40[0] = (undefined4 *)fn_8265C9E0(0xc);
  if (apuStack_40[0] == (undefined4 *)0x0) {
    apuStack_40[0] = (undefined4 *)0x0;
  }
  else {
    apuStack_40[0][1] = 0;
    apuStack_40[0][2] = 0;
    *apuStack_40[0] = &lbl_821B8290;
  }
  param_1[9] = apuStack_40[0];
  fn_8239DBB0(piVar1,apuStack_40);
  return;
}

