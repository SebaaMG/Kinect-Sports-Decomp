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
extern int fn_8229A000();
extern int fn_822BEA00();
extern int fn_82458808();
extern int fn_82458E80();
extern int fn_82672C20();


void fn_824053F8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  (**(code **)(**(int **)(param_1 + 0x14) + 4))();
  fn_822BEA00();
  (**(code **)(**(int **)(param_1 + 0x14) + 8))();
  fn_822BEA00();
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(iVar1 + 0x70c) != 0) {
    *(uint *)(iVar1 + 0x6b0) = *(uint *)(iVar1 + 0x6b0) | 0x10;
  }
  *(uint *)(iVar1 + 0x6b0) = *(uint *)(iVar1 + 0x6b0) | 2;
  piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0x3ec) + 0xc))();
  (**(code **)(*piVar2 + 0xc))();
  fn_82458E80(*(undefined4 *)(iVar1 + 0x7e0),*(undefined4 *)(iVar1 + 0x188),
                    *(undefined4 *)(iVar1 + 0x1cc));
  fn_82458808(iVar1 + 0x408);
  fn_8229A000(param_1 + 0x110);
  if ((*(int *)(param_1 + 0xf4) != 0) && (*(int *)(param_1 + 0xf8) == 0)) {
    *(undefined4 *)(param_1 + 0xf8) = 1;
    fn_82672C20(*(undefined4 *)(param_1 + 0xfc),0xffffffff821a8498,0,0);
  }
  return;
}

