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
extern int fn_82F68B78();


void fn_82D21DA0(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = param_2[5];
  if ((uVar1 & 0xfffffffc) != 0) {
    *(undefined4 *)(((uVar1 & 3) + 5) * 4 + (uVar1 & 0xfffffffc)) = 0;
  }
  param_2[5] = 0;
  uVar1 = param_2[6];
  if ((uVar1 & 0xfffffffc) != 0) {
    *(undefined4 *)(((uVar1 & 3) + 5) * 4 + (uVar1 & 0xfffffffc)) = 0;
  }
  param_2[6] = 0;
  uVar1 = param_2[7];
  if ((uVar1 & 0xfffffffc) != 0) {
    *(undefined4 *)(((uVar1 & 3) + 5) * 4 + (uVar1 & 0xfffffffc)) = 0;
  }
  param_2[7] = 0;
  iVar2 = *param_2;
  piVar3 = (int *)param_2[1];
  if (iVar2 != 0) {
    *(int **)(iVar2 + 4) = piVar3;
  }
  if (piVar3 == (int *)0x0) {
    *(int *)(param_1 + 0x2c) = iVar2;
  }
  else {
    *piVar3 = iVar2;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  fn_82F68B78();
  return;
}

