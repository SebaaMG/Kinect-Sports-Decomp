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
extern int fn_82C9F2F0();
extern int fn_82C9F4B0();
extern int fn_82CA0CC8();
extern int fn_82CA0E40();
extern unsigned int uRam8329f138;
extern unsigned int uRam8329f13c;


void fn_82CA2398(int param_1,int param_2)

{
  uRam8329f13c = *(undefined4 *)(param_1 + 0x4fb0);
  *(code **)(param_1 + 0x3e30) = fn_82CA0CC8;
  *(code **)(param_1 + 0x3e2c) = fn_82CA0E40;
  uRam8329f138 = *(undefined4 *)(param_1 + 0x4fb4);
  if (param_2 == 0) {
    return;
  }
  *(code **)(param_1 + 0x3e30) = fn_82C9F2F0;
  *(code **)(param_1 + 0x3e2c) = fn_82C9F4B0;
  return;
}

