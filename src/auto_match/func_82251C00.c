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
extern int fn_828E9D60();
extern int fn_828E9D90();


longlong fn_82251C00(int param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = fn_828E9D90(param_2);
  (**(code **)(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,0);
  (**(code **)(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,0);
  (**(code **)(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,0);
  (**(code **)(**(int **)(param_1 + 0x80) + 0x14))(*(int **)(param_1 + 0x80),param_2,0);
  lVar2 = fn_828E9D90(param_2);
  fn_828E9D60(param_2,lVar1);
  return lVar2 - lVar1;
}

