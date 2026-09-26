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
extern int fn_8268C3E8();
extern unsigned int lbl_8200DDC4;


undefined4 * fn_8278CD58(undefined4 *param_1,int param_2,ulonglong param_3)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  param_1[1] = 1;
  *param_1 = &lbl_8200DDC4;
  uVar3 = param_3;
  if ((param_3 & 0xffffffff) == 0) {
    uVar3 = (ulonglong)*(uint *)(param_2 + 0xc);
  }
  fn_8268C3E8(param_1 + 2,param_2 + 8,uVar3);
  if ((param_3 & 0xffffffff) == 0) {
    param_3 = (ulonglong)*(uint *)(param_2 + 0xc);
  }
  fn_8268C3E8(param_1 + 4,param_2 + 0x10,param_3);
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  piVar2 = *(int **)(param_2 + 0x1c);
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 0x24);
  *(undefined2 *)((int)param_1 + 0x26) = *(undefined2 *)(param_2 + 0x26);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x28);
  *(undefined2 *)((int)param_1 + 0x2a) = *(undefined2 *)(param_2 + 0x2a);
  return param_1;
}

