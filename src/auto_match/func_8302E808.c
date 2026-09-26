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
extern int fn_8302DFF0();


void fn_8302E808(int param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined2 auStack_20 [4];
  
  auStack_20[0] = 0;
  if ((*(byte *)(param_1 + 0x11f) & 0xe0) == 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x88) + 0x24))
                      (*(int **)(param_1 + 0x88),param_2,auStack_20);
    if (cVar1 != '\0') {
      fn_8302DFF0(param_1,auStack_20[0],param_3);
    }
  }
  return;
}

