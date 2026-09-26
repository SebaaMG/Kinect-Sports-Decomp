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
extern int fn_828D7660();


undefined4 * fn_828E2308(int param_1,int param_2,undefined4 *param_3)

{
  if (param_1 != param_2) {
    param_1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_1 + (int)param_3);
        fn_828D7660(param_3 + 1,param_1 + (int)(param_3 + 1));
      }
      param_3 = param_3 + 7;
    } while (param_1 + (int)param_3 != param_2);
  }
  return param_3;
}

