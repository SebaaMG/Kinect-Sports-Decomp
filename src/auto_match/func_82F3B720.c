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


undefined8 fn_82F3B720(int param_1,uint param_2,ulonglong *param_3,ulonglong *param_4)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0xffffffffc00d36b6;
  }
  if (*(uint *)(param_1 + 0x6c) <= param_2) {
    return 0xffffffffc00d3a9d;
  }
  if (param_3 != (ulonglong *)0x0) {
    *param_3 = (ulonglong)param_2 * 6 & 0xffffffff;
  }
  if (param_4 != (ulonglong *)0x0) {
    *param_4 = (ulonglong)param_2 * 6 + 4 & 0xffffffff;
  }
  return 0;
}

