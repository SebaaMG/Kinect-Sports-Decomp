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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82251CE8(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined4 auStack_60;
  undefined1 auStack_50 [16];
  struct { undefined4 first; undefined4 second; } stack_pair_40;

  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  
  stack_pair_40.second = 0;
  stack_pair_40.first = 0xffffffff;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  (**(code **)(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,&auStack_60);
  (**(code **)(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,auStack_50);
  (**(code **)(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,&stack_pair_40.first);
  piVar1 = *(int **)(param_3 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1,auStack_60,&stack_pair_40.first);
  }
  return;
}

