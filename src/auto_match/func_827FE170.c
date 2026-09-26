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
extern int fn_827FAB20();
extern int fn_827FD998();


void fn_827FE170(undefined8 param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,int param_7,undefined8 param_8)

{
  fn_827FD998(*(undefined4 *)(param_2 + 0x98),*(undefined4 *)(param_4 + 0x98),
                *(undefined4 *)(param_7 + 0x98),param_5,0);
  fn_827FAB20(param_1,param_3,param_5,param_8);
  return;
}

