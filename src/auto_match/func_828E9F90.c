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
extern int fn_82F68CC0();


undefined8 fn_828E9F90(int *param_1,undefined8 param_2,longlong param_3)

{
  if ((*param_1 == 0) &&
     (((ulonglong)(uint)param_1[1] + param_3 & 0xffffffff) <= (ulonglong)(uint)param_1[3])) {
    fn_82F68CC0((ulonglong)(uint)param_1[2] + (ulonglong)(uint)param_1[1]);
    param_1[1] = param_1[1] + (int)param_3;
    return 1;
  }
  return 0;
}

