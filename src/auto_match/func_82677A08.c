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
extern int fn_8268E080();


void fn_82677A08(int param_1,ulonglong param_2,char param_3)

{
  if ((param_2 & 0xffffffff) != 0) {
    fn_8268E080(param_2,0x43,param_1 + 0x188);
    fn_8268E080(param_2,0x44,param_1 + 0x194);
    fn_8268E080(param_2,0x46,param_1 + 0x1a0);
    fn_8268E080(param_2,0x47,param_1 + 0x1a4);
    fn_8268E080(param_2,0x49,param_1 + 0x1a8);
    fn_8268E080(param_2,0x4a,param_1 + 0x1ac);
    fn_8268E080(param_2,0x4c,param_1 + 0x1b0);
    fn_8268E080(param_2,0x4b,param_1 + 0x1b4);
    fn_8268E080(param_2,0x4d,param_1 + 0x1b8);
  }
  if (param_3 != '\0') {
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
  }
  return;
}

