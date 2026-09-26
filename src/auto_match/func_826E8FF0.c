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
extern int fn_826E8488();
extern int fn_826E8610();


void fn_826E8FF0(int param_1,float *param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x15) = 0;
  uVar1 = fn_826E8488(param_1,5);
  iVar2 = fn_826E8610(param_1,uVar1);
  *param_2 = (float)(longlong)iVar2;
  iVar2 = fn_826E8610(param_1,uVar1);
  param_2[2] = (float)(longlong)iVar2;
  iVar2 = fn_826E8610(param_1,uVar1);
  param_2[1] = (float)(longlong)iVar2;
  iVar2 = fn_826E8610(param_1,uVar1);
  param_2[3] = (float)(longlong)iVar2;
  return;
}

