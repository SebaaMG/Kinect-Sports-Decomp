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
extern int fn_82BF6B38();


undefined8 fn_82BECB18(int param_1,int *param_2)

{
  int iVar2;
  undefined8 uVar1;
  
  if (((*(int *)(param_1 + 0x50) == 2) || (param_2 == (int *)0x0)) ||
     (iVar2 = fn_82BF6B38(param_1 + 0x2c), iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x3c) == 1) {
      (**(code **)(*param_2 + 4))(param_2);
    }
    uVar1 = 1;
  }
  return uVar1;
}

