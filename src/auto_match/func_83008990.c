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
extern int fn_83007888();
extern unsigned int uStack_19;


void fn_83008990(double param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uStack_19;
  
  cVar1 = fn_83007888(param_2,4);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x3c))
              ((double)(float)(param_1 - (double)*(byte *)(param_2 + 0xf)),param_2,3,param_4,0,0);
  }
  uStack_19 = (undefined1)(longlong)param_1;
  *(undefined1 *)(param_2 + 0xf) = uStack_19;
  return;
}

