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
extern int fn_8278FC90();
extern int fn_827954C0();
extern int fn_82795918();


void fn_82795A28(int param_1,longlong param_2,longlong param_3)

{
  if ((int)param_3 == -1) {
    param_3 = -1;
  }
  else {
    param_3 = param_3 - param_2;
    if (param_3 == 0) {
      return;
    }
  }
  fn_8278FC90(param_1,param_2,param_3);
  fn_827954C0(param_1 + 0x10,param_2,param_3);
  fn_82795918(param_1);
  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
  return;
}

