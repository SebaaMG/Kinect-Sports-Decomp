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
extern int fn_828114A8();
extern int fn_82811500();
extern int fn_828509F0();


void fn_82850D60(undefined8 param_1,undefined8 param_2,char param_3,int param_4,int param_5)

{
  int aiStack_30 [12];
  
  fn_828509F0(param_1,param_2,aiStack_30);
  if (aiStack_30[0] != 0) {
    if (param_3 == '\0') {
      fn_82811500(*(undefined4 *)((param_5 + 2) * 4 + param_4),*(undefined4 *)(aiStack_30[0] + 8));
    }
    else {
      fn_828114A8();
    }
  }
  return;
}

