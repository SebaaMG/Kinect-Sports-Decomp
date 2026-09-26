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
extern int fn_83019A10();


int * fn_82FF3CF0(int *param_1,int *param_2)

{
  int *piVar1;
  char cVar3;
  int *piVar2;
  
  cVar3 = fn_83019A10();
  if (cVar3 == '\0') {
    piVar2 = (int *)0x0;
  }
  else {
    if (*param_1 == 0) {
      param_1[1] = param_1[2];
    }
    piVar1 = (int *)param_1[2];
    piVar2 = piVar1 + 1;
    param_1[2] = *piVar1;
    *piVar1 = *param_1;
    *param_1 = (int)piVar1;
    param_1[5] = param_1[5] + 1;
    piVar1[1] = *param_2;
    piVar1[2] = param_2[1];
  }
  return piVar2;
}

