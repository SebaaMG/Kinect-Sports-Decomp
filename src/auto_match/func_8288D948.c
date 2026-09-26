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
extern int fn_8288BD68();
extern int fn_828A12E8();
extern int fn_828EA268();


void fn_8288D948(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int aiStack_30 [12];
  
  iVar1 = fn_828A12E8(param_2);
  aiStack_30[0] = **(int **)(iVar1 + 0x98);
  if ((int *)aiStack_30[0] != *(int **)(iVar1 + 0x98)) {
    do {
      iVar2 = aiStack_30[0];
      (**(code **)(**(int **)(aiStack_30[0] + 0x40) + 4))();
      uVar3 = (ulonglong)*(uint *)(*(int *)(iVar2 + 0x40) + 8);
      if ((uVar3 != 0) && (iVar2 = fn_828EA268(uVar3 - 1), *(int *)(param_1 + 8) < iVar2)) {
        *(int *)(param_1 + 8) = iVar2;
      }
      fn_8288BD68(aiStack_30);
    } while (aiStack_30[0] != *(int *)(iVar1 + 0x98));
  }
  return;
}

