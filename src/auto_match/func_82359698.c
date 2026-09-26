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
extern unsigned int *auStack_20;
extern int fn_822AF200();


void fn_82359698(int param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 auStack_20 [2];
  
  auStack_20[0] = 0;
  fn_822AF200(param_1 + 0x80,auStack_20);
  piVar1 = *(int **)(*(int *)(param_1 + 0x7c) + 8);
  if (piVar1 == (int *)0x0) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = (**(code **)(*piVar1 + 8))(piVar1,param_2);
  }
  if (cVar2 != '\0') {
    *(int *)(param_1 + 0x58) = (int)param_2;
  }
  return;
}

