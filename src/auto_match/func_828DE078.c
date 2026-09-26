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
extern int fn_828AD488();


void fn_828DE078(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int aiStack_50 [20];
  
  cVar1 = fn_828AD488();
  if ((cVar1 != '\0') &&
     (aiStack_50[0] = **(int **)(param_1 + 0x1c4),
     (int *)aiStack_50[0] != *(int **)(param_1 + 0x1c4))) {
    do {
      cVar1 = (**(code **)(**(int **)(aiStack_50[0] + 0xc) + 0x14))
                        (*(int **)(aiStack_50[0] + 0xc),param_3,param_4,param_5,param_6,param_7,
                         param_8,param_2);
      if (cVar1 != '\0') {
        return;
      }
      fn_828A0E20(aiStack_50);
    } while (aiStack_50[0] != *(int *)(param_1 + 0x1c4));
  }
  return;
}

