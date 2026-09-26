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
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_8278B458();
extern int fn_82794C90();


void fn_82794DC0(int param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = fn_8278B458(param_2);
  if (iVar1 == 0) {
    if ((param_2 & 0xffffffff) != 0) {
      fn_8267C4C8(param_2);
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      fn_8267C4F0();
    }
    *(int *)(param_1 + 0x1c) = (int)param_2;
  }
  else {
    fn_82794C90(param_1,param_2);
  }
  return;
}

