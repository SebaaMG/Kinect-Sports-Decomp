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
extern int fn_82CE5410();
extern int fn_82D46390();


int fn_82D3B5E0(int param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  *(undefined4 *)(param_1 + 100) = 0;
  if ((*(uint *)(param_1 + 0x68) & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)(param_1 + 0x60),*(uint *)(param_1 + 0x68) & 0x3fffffff,4);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x80000000;
  fn_82D46390(param_1);
  if ((param_2 & 1) != 0) {
    iVar2 = fn_82CE5410();
    (**(code **)(**(int **)(iVar2 + 0x10) + 8))
              (*(int **)(iVar2 + 0x10),param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

