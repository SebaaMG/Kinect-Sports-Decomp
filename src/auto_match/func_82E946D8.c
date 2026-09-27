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
extern int fn_82E93A08();
extern float lbl_82005718;


void fn_82E946D8(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x7798) != 0) {
    if ((*(int *)(param_1 + 0x2a0) < 0x15) &&
       ((0x11 < *(int *)(param_1 + 0x2a0) ||
        (*(int *)(param_1 + 0x77c0) <= *(int *)(param_1 + 0x77d8))))) {
      iVar1 = *(int *)(param_1 + 0x77ac);
    }
    else {
      iVar1 = (int)((*(float *)(param_1 + 0x786c) * lbl_82005718 + *(float *)(param_1 + 0x7868)) *
                    lbl_82005718 * (float)(longlong)*(int *)(param_1 + 0x560));
    }
    if (0 < iVar1) {
      fn_82E93A08(param_1,iVar1,*(undefined4 *)(param_1 + 0x1f44));
    }
  }
  return;
}

