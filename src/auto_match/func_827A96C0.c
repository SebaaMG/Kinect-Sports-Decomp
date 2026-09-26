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
extern int fn_827A9620();


void fn_827A96C0(uint *param_1,uint *param_2)

{
  if (((ulonglong)param_2[2] < (ulonglong)param_1[2]) && (param_1[3] != 0)) {
    fn_827A9620(((ulonglong)param_2[2] & 0x1fffffff) * 8 + (ulonglong)*param_2,
                  (ulonglong)param_1[2] - (ulonglong)param_2[2],
                  ((ulonglong)param_2[4] & 0x3fffffff) * 4 + (ulonglong)param_2[1]);
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return;
}

