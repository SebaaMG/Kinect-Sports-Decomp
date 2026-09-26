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
extern unsigned int *auStack_40;
extern int fn_8265CA20();
extern int fn_828A61C8();


void fn_828A7C40(undefined8 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  undefined1 auStack_40 [64];
  
  cVar1 = *(char *)((int)param_2 + 0x39);
  while (cVar1 == '\0') {
    fn_828A7C40(param_1,param_2[2]);
    piVar2 = (int *)*param_2;
    fn_828A61C8(auStack_40,param_2 + 10,*(undefined4 *)param_2[0xb]);
    fn_8265CA20(param_2[0xb]);
    if (0xf < (uint)param_2[8]) {
      fn_8265CA20(param_2[3]);
    }
    param_2[8] = 0xf;
    param_2[7] = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    fn_8265CA20(param_2);
    param_2 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x39);
  }
  return;
}

