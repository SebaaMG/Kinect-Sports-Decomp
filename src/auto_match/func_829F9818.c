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
extern int fn_82A1E968();


double fn_829F9818(longlong *param_1,int param_2)

{
  double dVar1;
  longlong alStack_28 [2];
  
  if (*(int *)((int)param_1 + 0x3c) == 0) {
    fn_82A1E968(alStack_28);
    dVar1 = (double)((alStack_28[0] - param_1[3]) - *param_1) * (double)param_1[1] *
            (double)(longlong)param_2;
  }
  else {
    dVar1 = (double)((param_1[2] - param_1[3]) - *param_1) * (double)param_1[1] *
            (double)(longlong)param_2;
  }
  return dVar1;
}

