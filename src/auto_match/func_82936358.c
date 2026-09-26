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
extern int fn_828FA8D8();
extern int fn_828FAB00();


void fn_82936358(undefined4 *param_1)

{
  *(undefined1 *)((int)param_1 + *(ushort *)(param_1 + 2) + 0x10) = 0;
  if (param_1[3] == 0) {
    fn_828FAB00(*param_1,param_1[1],0x1bbe,0xffffffff821c4da8,param_1 + 4);
  }
  else {
    fn_828FA8D8(*param_1,param_1[1],0x1bbd);
  }
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}

