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
extern int fn_82381BC0();
extern int fn_82A4AAA8();


longlong fn_8289F020(int param_1)

{
  int iVar1;
  longlong lVar2;
  int aiStack_20 [2];
  
  lVar2 = 0;
  aiStack_20[0] = **(int **)(param_1 + 0x220);
  if ((int *)aiStack_20[0] != *(int **)(param_1 + 0x220)) {
    do {
      if (*(char *)((int)*(int **)(aiStack_20[0] + 0x10) + 0x26) == '\x01') {
LAB_8289f07c:
        lVar2 = lVar2 + 1;
      }
      else {
        (**(code **)(**(int **)(aiStack_20[0] + 0x10) + 0xc))();
        iVar1 = fn_82A4AAA8();
        if (iVar1 != 2) goto LAB_8289f07c;
      }
      fn_82381BC0(aiStack_20);
    } while (aiStack_20[0] != *(int *)(param_1 + 0x220));
  }
  return lVar2;
}

