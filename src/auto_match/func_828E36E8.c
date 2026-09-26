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
extern int fn_8288CBD8();
extern unsigned int stack0x0000001c;


void fn_828E36E8(int *param_1,int *param_2)

{
  int iVar1;
  int *piStack0000001c;
  
  param_2[1] = param_1[1];
  piStack0000001c = param_2;
  (**(code **)(*param_2 + 0xc))(param_2);
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
  param_2[0xc] = iVar1;
  fn_8288CBD8(param_1 + 6,&stack0x0000001c);
  return;
}

