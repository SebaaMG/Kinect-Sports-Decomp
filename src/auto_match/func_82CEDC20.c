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
extern unsigned int *auStack_2750;
extern int fn_82CFBB60();
extern int fn_82CFBE40();


int fn_82CEDC20(int param_1,undefined2 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_2750 [10064];
  
  fn_82CFBB60(auStack_2750,0x2728,0xffffffff821c7f34,param_2);
  piVar1 = *(int **)(param_1 + 8);
  iVar2 = *piVar1;
  uVar3 = fn_82CFBE40(auStack_2750);
  (**(code **)(iVar2 + 0x10))(piVar1,auStack_2750,uVar3);
  return param_1;
}

