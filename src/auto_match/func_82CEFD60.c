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
extern unsigned int *auStack_60;
extern int fn_82CE5040();


void fn_82CEFD60(int *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_60 [72];
  
  (**(code **)(*param_1 + 0x14))();
  piVar1 = (int *)(**(code **)(*param_1 + 0x20))(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,auStack_60);
                    /* WARNING: Subroutine does not return */
    fn_82CE5040(param_2,auStack_60,param_2);
  }
  return;
}

