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
extern int fn_82AB15D0();


void fn_82BC2958(int param_1,int param_2,int param_3)

{
  if (5 < param_2) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3c14,0xffffffff820e3b18,0xfb);
  }
  *(undefined4 *)((param_2 + 0x14) * 4 + param_1) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)((param_2 + 0xe) * 4 + param_1) = *(undefined4 *)(param_3 + 0xc);
  *(int *)((param_2 + 7) * 4 + param_1) = param_3;
  return;
}

