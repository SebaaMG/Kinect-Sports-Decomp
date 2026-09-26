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
extern int fn_82CA8B48();
extern int fn_82CA8DB8();
extern int fn_82CA8F50();
extern int fn_82CA91C8();
extern int fn_82CA96B8();
extern int fn_82CA98E8();
extern int fn_82CA9B50();
extern int fn_82CA9D58();
extern int fn_82CA9FA0();
extern int fn_82CAA210();
extern int fn_82CAA590();
extern int fn_82F42CC8();


void fn_82CAA950(int param_1)

{
  *(code **)(param_1 + 0xc94) = fn_82F42CC8;
  *(code **)(param_1 + 0xc98) = fn_82CA9FA0;
  *(code **)(param_1 + 0xca0) = fn_82CAA590;
  *(code **)(param_1 + 0x3e04) = fn_82F42CC8;
  *(code **)(param_1 + 0x3e10) = fn_82CAA590;
  *(code **)(param_1 + 0x3e08) = fn_82CA9FA0;
  *(code **)(param_1 + 0xc9c) = fn_82CAA210;
  *(code **)(param_1 + 0x3de4) = fn_82CA8B48;
  *(code **)(param_1 + 0x3dec) = fn_82CA8F50;
  *(code **)(param_1 + 0x3de8) = fn_82CA8DB8;
  *(code **)(param_1 + 0x3df0) = fn_82CA91C8;
  *(code **)(param_1 + 0x3e0c) = fn_82CAA210;
  *(code **)(param_1 + 0x3df4) = fn_82CA96B8;
  *(code **)(param_1 + 0x3dfc) = fn_82CA9B50;
  *(code **)(param_1 + 0x3df8) = fn_82CA98E8;
  *(code **)(param_1 + 0x3e00) = fn_82CA9D58;
  return;
}

