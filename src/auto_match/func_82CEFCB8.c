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
extern unsigned int *auStack_a0;
extern int fn_82CE6768();


void fn_82CEFCB8(int *param_1,undefined8 param_2)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [72];
  
  iVar2 = (**(code **)(*param_1 + 0x20))();
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 0xc))(param_1,param_2);
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x20))();
    fn_82CEFCB8(uVar1,auStack_60);
    (**(code **)(*param_1 + 0xc))(param_1,auStack_a0);
    fn_82CE6768(param_2,auStack_60,auStack_a0);
  }
  return;
}

