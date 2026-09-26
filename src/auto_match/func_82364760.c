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
extern int fn_824C97F0();


void fn_82364760(int param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  
  (**(code **)(**(int **)(param_1 + 0x3ec) + 0x20))();
  if (*(int *)(param_2 + 0x2c) == 0) {
    uVar2 = 0xffffffff821b2ac0;
  }
  else {
    uVar2 = 0xffffffff821b2ad0;
  }
  piVar1 = (int *)(*(undefined4 **)(param_1 + 0xa8))[1];
  for (piVar3 = (int *)**(undefined4 **)(param_1 + 0xa8); piVar3 != piVar1; piVar3 = piVar3 + 2) {
    fn_824C97F0(*(undefined4 *)(*piVar3 + 0x28),uVar2);
  }
  return;
}

