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
extern int fn_83082980();
extern int fn_83082A80();
extern int fn_83082BF0();


void fn_83082C90(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 1) {
    fn_83082A80();
    fn_83082BF0(param_1,param_2);
  }
  else if (3 < param_3) goto LAB_83082ce4;
  fn_83082980(param_1,param_2,2,0xffffffff83082890);
LAB_83082ce4:
  if (param_3 < 5) {
    fn_83082980(param_1,param_2,8,0xffffffff830828c0);
  }
  return;
}

