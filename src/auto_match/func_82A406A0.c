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


void fn_82A406A0(int param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x50);
  (**(code **)(*(int *)(param_1 + 0x50) + 8))(piVar1);
  if (*(int *)(param_1 + 0xa8) != 0) {
    (**(code **)(*(int *)(param_1 + 0x2c) + 0x14))(param_1 + 0x2c);
    (**(code **)(**(int **)(param_1 + 0xb0) + 0x3c))(*(int **)(param_1 + 0xb0),param_2);
    (**(code **)(*(int *)(param_1 + 0x2c) + 8))(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(uint *)(param_1 + 0xa8) =
         (int)(param_2 + -1) - ((int)param_2 + -2 + (uint)(param_2 + -1 == 0));
  }
  (**(code **)(*piVar1 + 0x14))(piVar1);
  return;
}

