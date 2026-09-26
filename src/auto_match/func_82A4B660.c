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
extern int fn_82A5ABE8();


void fn_82A4B660(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  piVar1 = *(int **)(param_2 + 0x14);
  piVar2 = *(int **)(param_2 + 0x10);
  uVar4 = 0;
  if (piVar2 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar2 + 0x28))(piVar2);
  }
  uVar3 = (**(code **)(*piVar1 + 0x28))(piVar1);
  fn_82A5ABE8(*(undefined4 *)(param_1 + 0x40),uVar4,uVar3);
  return;
}

