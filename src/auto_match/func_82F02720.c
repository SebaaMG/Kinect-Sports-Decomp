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
extern int fn_82CA9FA0();
extern int fn_82CAA210();
extern int fn_82CAA590();
extern int fn_82F42CC8();


void fn_82F02720(int param_1)

{
  *(code **)(param_1 + 0x814) = fn_82CAA590;
  *(code **)(param_1 + 0x808) = fn_82F42CC8;
  *(code **)(param_1 + 0x80c) = fn_82CA9FA0;
  *(code **)(param_1 + 0x810) = fn_82CAA210;
  *(code **)(param_1 + 0x824) = fn_82CAA590;
  *(code **)(param_1 + 0x818) = fn_82F42CC8;
  *(code **)(param_1 + 0x81c) = fn_82CA9FA0;
  *(code **)(param_1 + 0x820) = fn_82CAA210;
  return;
}

