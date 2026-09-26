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
extern int fn_82F68B6C();


void fn_82BBA008(int param_1,int param_2,int param_3,int param_4)

{
  if ((3 < param_4) && (param_4 < 6)) {
    fn_82F68B6C(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820df2c0,0x696);
    return;
  }
  *(char *)((param_2 + 0x20) * 4 + param_3 + param_1) = (char)param_4;
  return;
}

