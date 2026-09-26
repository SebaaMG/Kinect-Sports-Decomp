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
extern unsigned int lbl_821CC160;


void fn_823AA500(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  param_1[0x14] = iVar1;
  iVar1 = (**(code **)(*param_1 + 4))(param_1);
  param_1[0x13] = iVar1;
  param_1[8] = 0;
  param_1[0xc] = 0;
  iVar1 = lbl_821CC160;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x16] = iVar1;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[6] = param_1[6] + 1;
  param_1[0xf] = 8;
  param_1[0x11] = 8;
  param_1[0x15] = 9;
  iVar1 = (**(code **)(*param_1 + 4))(param_1);
  (**(code **)(*param_1 + 0x9c))(param_1,param_2,iVar1 == 0,8);
  return;
}

