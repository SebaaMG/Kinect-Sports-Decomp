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
extern int fn_82BA02A8();
extern int fn_82F09EE0();
extern int fn_82F0A3B0();
extern int fn_82F0A9F0();
extern int fn_82F0AC28();
extern int fn_82F0BA40();
extern int fn_82F0BE40();
extern int fn_82F0CB98();


void fn_82E84A00(int param_1)

{
  *(code **)(param_1 + 0x1f90) = fn_82BA02A8;
  if (*(int *)(param_1 + 0x648) == 0) {
    *(code **)(param_1 + 0x1f84) = fn_82F0BA40;
    *(code **)(param_1 + 0x1f8c) = fn_82F0BA40;
  }
  else {
    *(code **)(param_1 + 0x1f84) = fn_82F0AC28;
    *(code **)(param_1 + 0x1f8c) = fn_82F0BE40;
    *(code **)(param_1 + 0x1f90) = fn_82F0CB98;
  }
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(code **)(param_1 + 0x1f7c) = fn_82F0A9F0;
  *(undefined4 *)(param_1 + 0x2fc) = 3;
  *(undefined4 *)(param_1 + 0x2f4) = 8;
  *(undefined4 *)(param_1 + 0x6f8c) = 1;
  if (*(code **)(param_1 + 0x1f84) == fn_82F0A3B0) {
    *(code **)(param_1 + 0x1f88) = fn_82F09EE0;
    return;
  }
  *(code **)(param_1 + 0x1f88) = *(code **)(param_1 + 0x1f84);
  return;
}

