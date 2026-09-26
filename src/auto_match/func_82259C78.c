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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;


void fn_82259C78(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined1 auStack_40 [4];
  float afStack_3c [3];
  undefined1 auStack_30 [48];
  
  (**(code **)(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,auStack_40);
  (**(code **)(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,auStack_30);
  (**(code **)(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,afStack_3c);
  piVar1 = *(int **)(param_3 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))((double)afStack_3c[0],piVar1,auStack_40[0]);
  }
  return;
}

