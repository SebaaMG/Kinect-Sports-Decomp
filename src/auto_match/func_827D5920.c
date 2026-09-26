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
extern int fn_822315A0();
extern int fn_827DE9E8();
extern unsigned int iStack_1c;


void fn_827D5920(undefined8 param_1,int *param_2)

{
  int iVar1;
  int *piStack_20;
  int iStack_1c;
  
  iVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (iVar1 != 0) {
    (**(code **)(*param_2 + 0x10))(param_2,0,0);
  }
  fn_827DE9E8(&piStack_20,param_2);
  (**(code **)(*piStack_20 + 0x48))(piStack_20,param_2);
  if (iStack_1c != 0) {
    fn_822315A0();
  }
  return;
}

