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
extern int fn_82AC6560();


void fn_82B8F2B8(int param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)fn_82AC6560(param_3,0x14,0x18);
  piVar1[1] = param_2;
  *piVar1 = param_1;
  piVar1[3] = *(int *)(param_1 + 8);
  *(int **)(param_1 + 8) = piVar1;
  piVar1[2] = *(int *)(param_2 + 0xc);
  *(int **)(param_2 + 0xc) = piVar1;
  piVar1[4] = 1;
  return;
}

