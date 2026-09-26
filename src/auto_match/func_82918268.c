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
extern int fn_826310E0();


undefined8
fn_82918268(undefined8 param_1,undefined8 param_2,int param_3,float *param_4,ulonglong param_5)

{
  longlong lVar1;
  
  lVar1 = (param_5 & 0x3fffffff) << 2;
  if ((param_5 & 0x3fffffff) != 0) {
    param_3 = param_3 - (int)param_4;
    do {
      *param_4 = (float)(longlong)*(int *)(param_3 + (int)param_4);
      param_4 = param_4 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  fn_826310E0();
  return 0;
}

