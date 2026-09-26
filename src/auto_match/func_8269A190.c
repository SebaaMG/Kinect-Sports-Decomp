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
extern int fn_82694610();


int * fn_8269A190(int *param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  
  iVar1 = fn_82694610(param_2,((ulonglong)*param_3 & 0xfffffffc) + 8,
                        *(uint *)(*param_3 & 0xfffffffc) & 0x7fffffff);
  *param_1 = iVar1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  return param_1;
}

