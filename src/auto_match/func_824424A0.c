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
extern int fn_825327A8();
extern unsigned int lbl_821CC160;


void fn_824424A0(int param_1,int param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_2 == **(int **)(param_1 + 8)) {
    return;
  }
  if (param_2 == 1) {
    uVar2 = 0xffffffff821b998c;
  }
  else if (param_2 == 2) {
    uVar2 = 0xffffffff821b999c;
  }
  else {
    if (param_2 != 3) goto LAB_82442544;
    bVar1 = *(byte *)(*(int **)(param_1 + 8) + 10);
    if (bVar1 < 2) {
LAB_82442518:
      uVar2 = 0xffffffff821b99d0;
    }
    else if (bVar1 < 4) {
      uVar2 = 0xffffffff821b99c0;
    }
    else {
      if (bVar1 != 7) goto LAB_82442518;
      uVar2 = 0xffffffff821b99b0;
    }
  }
  fn_825327A8(**(undefined4 **)(param_1 + 4),uVar2);
LAB_82442544:
  **(int **)(param_1 + 8) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = lbl_821CC160;
  return;
}

