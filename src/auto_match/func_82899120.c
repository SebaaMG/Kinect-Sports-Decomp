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
extern int fn_822B1B90();


int * fn_82899120(int *param_1,ulonglong param_2)

{
  int iVar1;
  int *piVar2;
  int aiStack_20 [4];
  
  *param_1 = (int)param_1;
  param_1[1] = (int)param_1;
  param_1[2] = (int)param_2;
  if ((param_2 & 0xffffffff) != 0) {
    fn_822B1B90(aiStack_20,param_2 + 4);
    piVar2 = (int *)(param_1[2] + 4);
    iVar1 = *piVar2;
    param_1[1] = (int)piVar2;
    *param_1 = iVar1;
    *(int **)(*piVar2 + 4) = param_1;
    *piVar2 = (int)param_1;
    sync(1);
    *(undefined4 *)(aiStack_20[0] + 8) = 0;
  }
  return param_1;
}

