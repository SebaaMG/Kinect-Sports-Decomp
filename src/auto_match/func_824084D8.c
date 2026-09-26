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
extern int fn_8229AAF8();
extern int fn_8229F618();
extern int fn_82408A28();
extern int fn_82455050();
extern int fn_82458808();
extern int fn_82458E80();


void fn_824084D8(int param_1)

{
  int iVar1;
  int *piVar2;
  
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
  fn_8229F618(*(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4) + 0xc));
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4);
  fn_8229A000(iVar1 + 0x129c);
  *(undefined4 *)(iVar1 + 0x24cc) = 0xffffffff;
  fn_8229A000((ulonglong)*(uint *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4) + 0x68);
  fn_8229AAF8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4));
  fn_82455050(*(undefined4 *)(param_1 + 0x3c));
  *(undefined4 *)(*(int *)(param_1 + 8) + 0xf0) = 0;
  fn_82408A28(param_1,4);
  return;
}

