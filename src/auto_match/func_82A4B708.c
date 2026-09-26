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
extern int fn_82A40AD8();
extern int fn_82A4F4E0();


void fn_82A4B708(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x54);
  (**(code **)(*(int *)(param_1 + 0x54) + 8))(piVar2);
  if (*(int *)(param_1 + 0x14c) != 0) {
    do {
      piVar1 = (int *)fn_82A40AD8(param_1 + 0x78);
      (**(code **)(*piVar1 + 4))(piVar1,0);
      fn_82A4F4E0();
    } while (*(int *)(param_1 + 0x14c) != 0);
  }
  (**(code **)(*piVar2 + 0x14))(piVar2);
  return;
}

