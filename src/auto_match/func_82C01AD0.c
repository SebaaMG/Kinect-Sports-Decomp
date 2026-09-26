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
extern int fn_82631488();
extern int fn_82631830();


ulonglong fn_82C01AD0(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = fn_82631830(0xffffffff820ebfe8);
  *(int *)(param_1 + 0x48) = (int)lVar1;
  uVar2 = -(ulonglong)(lVar1 == 0) & 0xffffffff8007000e;
  if (-1 < (int)uVar2) {
    lVar1 = fn_82631488(0xffffffff820ec0d8);
    *(int *)(param_1 + 0x144) = (int)lVar1;
    uVar2 = -(ulonglong)(lVar1 == 0) & 0xffffffff8007000e;
    if (-1 < (int)uVar2) {
      lVar1 = fn_82631488(0xffffffff820ec2b8);
      *(int *)(param_1 + 0x148) = (int)lVar1;
      uVar2 = -(ulonglong)(lVar1 == 0) & 0xffffffff8007000e;
    }
  }
  return uVar2;
}

