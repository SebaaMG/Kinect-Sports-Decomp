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


undefined8 fn_82BBC410(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x750) == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0d2c,0xffffffff820e0d48,0x6b);
  }
  if ((((*(int *)((param_2 + 8) * 0x10 + param_1) != 0) ||
       (param_1 = param_2 * 0x10 + param_1, *(int *)(param_1 + 0x84) != 0)) ||
      (*(int *)(param_1 + 0x88) != 0)) || (uVar1 = 0, *(int *)(param_1 + 0x8c) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

