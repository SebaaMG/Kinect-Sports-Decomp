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
extern int fn_82F07B68();
extern int fn_82F08810();
extern int fn_82F08B60();
extern int fn_82F08E88();


void fn_82F090D0(int param_1)

{
  *(code **)(param_1 + 0x2020) = fn_82F08B60;
  *(code **)(param_1 + 0x201c) = fn_82F08810;
  *(code **)(param_1 + 0x2014) = fn_82F08810;
  *(code **)(param_1 + 0x2018) = fn_82F08B60;
  *(code **)(param_1 + 0x2010) = fn_82F08810;
  *(code **)(param_1 + 0x2028) = fn_82F08E88;
  *(code **)(param_1 + 0x2024) = fn_82F07B68;
  return;
}

