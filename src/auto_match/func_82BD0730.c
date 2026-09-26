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
extern int fn_82BD3440();
extern unsigned int lbl_83223EC4;


ulonglong fn_82BD0730(int param_1,int param_2,char param_3)

{
  ulonglong uVar1;
  
  if (param_3 == '\0') {
    uVar1 = (ulonglong)*(uint *)(param_2 * 4 + lbl_83223EC4);
  }
  else {
    uVar1 = fn_82BD3440(param_2,lbl_83223EC4);
    if (*(int *)(param_1 + 0x10) <= (int)uVar1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e8238,0xffffffff820e81d8,0x27e);
    }
  }
  return uVar1;
}

