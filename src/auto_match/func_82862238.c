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
extern int fn_828102A8();
extern int fn_82810360();
extern int fn_828105C8();


void fn_82862238(undefined8 param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5,
                  int param_6,undefined8 param_7)

{
  short *psVar1;
  
  if (param_4 == 0) {
    psVar1 = (short *)(param_6 * 6 + param_2);
    fn_828105C8((double)(longlong)*psVar1,(double)(longlong)psVar1[1],(double)(longlong)psVar1[2],
                 param_7);
    fn_828102A8(param_1,param_7,param_7);
  }
  else if (param_4 == 1) {
    fn_82810360(param_6 * 0xc + param_2,param_7);
  }
  return;
}

