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
extern int fn_83008DB0();
extern int fn_8300B720();


void fn_8300B9D0(int param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int *piVar1;
  int iVar2;
  
  *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + -1;
  if (((param_4 & 0xff) == 0) &&
     (((*(byte *)(param_1 + 0x3d) & 0x20) != 0 || (*(int *)(param_1 + 0x14) == 0)))) {
    param_4 = 1;
    *(short *)(param_1 + 0x9c) = *(short *)(param_1 + 0x9c) + -1;
  }
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x78))(piVar1,param_2,3,param_4);
  }
  if ((*(int *)(param_1 + 0x44) != 0) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x44) + 4), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x78))(piVar1,param_2,3,param_4);
  }
  if (*(short *)(param_1 + 0x18) == 0) {
    if (*(int *)(param_1 + 0x54) != 0) {
      *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) & 0x1f | 0x40;
      fn_8300B720(param_1);
      if (*(int *)(param_1 + 0x70) == 0) {
        return;
      }
      iVar2 = fn_83008DB0(param_1);
      if (iVar2 == 1) {
        return;
      }
    }
    *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) & 0x1f;
    fn_8300B720(param_1);
  }
  return;
}

