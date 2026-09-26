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
extern int fn_82A6B9E0();
extern int fn_82A6BE08();
extern int fn_82A7CF10();
extern int fn_82C2EB58();


void fn_82A69B80(int param_1)

{
  int iVar1;
  
  if (2 < *(int *)(param_1 + 0x3c)) {
    fn_82C2EB58();
  }
  fn_82A6B9E0(param_1);
  iVar1 = fn_82A6BE08(param_1);
  if (-1 < iVar1) {
    fn_82A7CF10(param_1);
  }
  return;
}

