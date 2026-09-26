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
extern int fn_82A1DD38();
extern int fn_82F64988();


void fn_822843E0(double param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  param_2 = param_6 * 0x234 + param_2;
  *(float *)(param_2 + 0x30) = (float)param_1;
  *(undefined4 *)(param_2 + 0x2c) = 1;
  *(undefined4 *)(param_2 + 0x28) = 1;
  fn_82A1DD38(param_2 + 0xc,param_3,0x18);
  fn_82F64988(param_2 + 0x3c,0x100,param_4);
  return;
}

