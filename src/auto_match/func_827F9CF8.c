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
extern int fn_82800080();
extern int fn_828000B0();


void fn_827F9CF8(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  if (param_2 != 0) {
    if (*(int *)(*(int *)(*param_1 + 0x24) + 0x18) != 0) {
      param_1[0x3c] = param_2;
      iVar1 = fn_82800080(*(undefined4 *)(*param_1 + 0x24));
      param_2 = iVar1 + param_2;
      fn_828000B0(param_1[0x3c],*(undefined4 *)(*param_1 + 0x24));
    }
    if (*(int *)(*(int *)(*param_1 + 0x28) + 0x18) != 0) {
      param_1[0x3d] = param_2;
      iVar1 = fn_82800080(*(undefined4 *)(*param_1 + 0x28));
      param_2 = iVar1 + param_2;
      fn_828000B0(param_1[0x3d],*(undefined4 *)(*param_1 + 0x28));
    }
    if (*(int *)(*(int *)(*param_1 + 0x2c) + 0x18) != 0) {
      param_1[0x3e] = param_2;
      fn_82800080(*(undefined4 *)(*param_1 + 0x2c));
      fn_828000B0(param_1[0x3e],*(undefined4 *)(*param_1 + 0x2c));
    }
  }
  return;
}

