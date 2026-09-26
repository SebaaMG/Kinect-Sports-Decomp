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
extern int fn_82A4F4E0();
extern int fn_82A761F8();


void fn_82A76380(int *param_1)

{
  uint uVar1;
  
  (**(code **)(*param_1 + 8))();
  uVar1 = param_1[9];
  param_1[9] = (int)((ulonglong)uVar1 - 1);
  if (((ulonglong)uVar1 - 1 == 0) && (param_1[10] != 0)) {
    fn_82A761F8(param_1);
    fn_82A4F4E0(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x14))(param_1);
  }
  return;
}

