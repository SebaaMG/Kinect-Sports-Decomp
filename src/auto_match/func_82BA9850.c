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
extern int fn_82BD09F0();


bool fn_82BA9850(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0xe4) >> 9 & 1) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820debe8,0xffffffff820df268,0x3b1);
  }
  iVar1 = fn_82BD09F0(*(undefined4 *)(*(int *)(param_1 + 0x3b8) + 0xab0),
                       *(undefined4 *)((*(int *)(param_1 + 0x14) + 0x3a) * 4 + param_1));
  return iVar1 == param_2;
}

