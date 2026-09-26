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


void fn_82A40A10(int param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = (int *)(param_1 + 0x70);
  (**(code **)(*(int *)(param_1 + 0x70) + 8))(piVar2);
  puVar3 = *(undefined4 **)(param_1 + 0x22c);
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)*puVar3;
      puVar3 = (undefined4 *)puVar3[1];
    }
    if (piVar1 == (int *)0x0) break;
    (**(code **)(*piVar1 + 8))(piVar1,param_2);
  }
  (**(code **)(*piVar2 + 0x14))(piVar2);
  return;
}

