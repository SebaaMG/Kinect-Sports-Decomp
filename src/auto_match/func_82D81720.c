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
extern int fn_82CE3F80();
extern int fn_82CE3FE8();
extern int fn_82DAF480();


undefined8 fn_82D81720(undefined8 param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  fn_82CE3F80();
  *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + 1;
  fn_82DAF480(param_2);
  uVar2 = (**(code **)(**(int **)(param_2 + 8) + 0xc))(param_1);
  piVar1 = *(int **)(param_2 + 0x5c);
  if (piVar1 != (int *)0x0) {
    if (*(char *)(param_2 + 0x60) == '\0') {
      (**(code **)(*piVar1 + 0x14))(piVar1,0);
    }
    else {
      (**(code **)(*piVar1 + 0xc))(piVar1,0,0);
    }
  }
  *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + -1;
  fn_82CE3FE8();
  return uVar2;
}

