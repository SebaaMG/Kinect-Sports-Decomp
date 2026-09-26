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
extern int fn_828A0E20();


void fn_828C3E70(int param_1)

{
  undefined4 *puVar1;
  int aiStack_20 [2];
  
  aiStack_20[0] = **(int **)(param_1 + 0x1c4);
  if ((int *)aiStack_20[0] != *(int **)(param_1 + 0x1c4)) {
    do {
      puVar1 = *(undefined4 **)(aiStack_20[0] + 0xc);
      fn_828A0E20(aiStack_20);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
    } while (aiStack_20[0] != *(int *)(param_1 + 0x1c4));
  }
  return;
}

