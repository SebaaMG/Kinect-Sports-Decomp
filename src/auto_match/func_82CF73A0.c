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
extern int fn_82CF68D0();


undefined8 fn_82CF73A0(int *param_1,undefined8 param_2,int param_3,int *param_4,int param_5)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(*param_1 + 4))(param_1,(longlong)*param_4 * (longlong)param_5);
  iVar2 = *param_4;
  if (param_3 <= *param_4) {
    iVar2 = param_3;
  }
  fn_82CF68D0(uVar1,param_2,(longlong)iVar2 * (longlong)param_5);
  (**(code **)(*param_1 + 8))(param_1,param_2,(longlong)param_3 * (longlong)param_5);
  return uVar1;
}

