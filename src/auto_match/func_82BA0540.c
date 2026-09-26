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


void fn_82BA0540(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dec5c,0xffffffff820dec00,0x77f);
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  if ((*(uint *)(param_1 + 0xe4) >> 9 & 1) == 0) {
    iVar1 = iVar1 + 0x3b;
  }
  else {
    *(undefined4 *)((iVar1 + 0x3b) * 4 + param_1) = *(undefined4 *)((iVar1 + 0x3a) * 4 + param_1);
    iVar1 = *(int *)(param_1 + 0x14) + 0x39;
  }
  *(int *)(iVar1 * 4 + param_1) = param_2;
  return;
}

