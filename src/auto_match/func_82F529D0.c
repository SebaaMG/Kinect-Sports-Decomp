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
extern int fn_82F60AC0();


void fn_82F529D0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *apiStack_20 [4];
  
  apiStack_20[0] = (int *)0x0;
  iVar2 = fn_82F60AC0(apiStack_20);
  if ((-1 < iVar2) &&
     (iVar2 = (**(code **)*apiStack_20[0])(apiStack_20[0],1,0x20,0x100,0,0xffffffffffffffff),
     piVar1 = apiStack_20[0], -1 < iVar2)) {
    apiStack_20[0] = (int *)0x0;
    *(int **)(param_1 + 8) = piVar1;
  }
  if (apiStack_20[0] != (int *)0x0) {
    (**(code **)(*apiStack_20[0] + 0x28))();
  }
  return;
}

