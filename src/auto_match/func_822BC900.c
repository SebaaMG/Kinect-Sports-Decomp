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
extern int fn_822B7068();
extern int fn_822C72E0();
extern int fn_8234C320();
extern int fn_825275B0();
extern unsigned int lbl_821CC160;


void fn_822BC900(int param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  iVar5 = param_3 * 0x40 + param_1;
  dVar6 = (double)lbl_821CC160;
  *(float *)(iVar5 + 0x1ac) = lbl_821CC160;
  *(undefined4 *)(iVar5 + 0x1a0) = 0;
  *(undefined4 *)(iVar5 + 0x1b0) = 0;
  iVar4 = *(int *)(param_1 + 0x24);
  bVar3 = -(*(int *)(**(int **)(param_1 + 0x238) + 0xc4c) != 0) & 3;
  if (((bVar3 < 3) || (*(int *)(*(int *)(param_1 + 0x23c) + 0x13c) == 0)) ||
     (*(int *)(**(int **)(param_1 + 0x238) + 0xcb8) == 0)) {
    if (iVar4 != 0) {
      fn_822B7068(param_1);
      goto LAB_822bc9d4;
    }
  }
  else if (iVar4 != 0) {
    if (3 < bVar3) {
      if (param_3 == 1) {
        uVar1 = 0xffffffff821acac0;
      }
      else {
        uVar1 = 0xffffffff821acae4;
      }
      fn_822C72E0(*(undefined4 *)(*(int *)(param_1 + 0x114) + 0x20),uVar1);
    }
    goto LAB_822bc9d4;
  }
  fn_825275B0(param_2);
LAB_822bc9d4:
  if (iVar4 != 0) {
    iVar4 = param_3 * 0x1c10 + iVar4;
    *(undefined4 *)(iVar4 + 0x398) = *(undefined4 *)(iVar5 + 0x1ac);
    *(undefined4 *)(iVar4 + 0x394) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x118);
  if (param_3 == 1) {
    iVar2 = iVar4 + 0x294;
    iVar4 = *(int *)(iVar4 + 0x2ac);
  }
  else {
    iVar2 = iVar4 + 0x268;
    iVar4 = *(int *)(iVar4 + 0x280);
  }
  if (iVar4 != 0) {
    fn_8234C320(0,iVar2);
  }
  *(float *)(iVar5 + 0x1a4) = (float)dVar6;
  *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + 1;
  return;
}

