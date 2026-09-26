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
extern int fn_82FC8FD0();
extern int fn_82FC9D50();


void fn_82FD3E38(int param_1,undefined8 param_2)

{
  double dVar1;
  
  dVar1 = (double)*(float *)(*(int *)(param_1 + 8) + 8);
  if (dVar1 != (double)*(float *)(param_1 + 0x150)) {
    fn_82FC9D50(dVar1,param_1 + 0xc);
    *(float *)(param_1 + 0x150) = (float)dVar1;
  }
  dVar1 = (double)*(float *)(*(int *)(param_1 + 8) + 0xc);
  if (dVar1 != (double)*(float *)(param_1 + 0x154)) {
    fn_82FC8FD0(dVar1,param_1 + 0x124);
    *(float *)(param_1 + 0x154) = (float)dVar1;
  }
  (**(code **)(param_1 + 4))(param_1,param_2);
  return;
}

