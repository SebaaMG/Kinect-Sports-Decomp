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
extern unsigned int iStack_30;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


void fn_82D8D988(int param_1,undefined4 param_2,undefined1 param_3)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x90) - 1;
  if (-1 < (longlong)uVar2) {
    lVar3 = (uVar2 & 0x3fffffff) << 2;
    iStack_30 = param_1;
    uStack_2c = param_2;
    uStack_28 = param_3;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x8c) + (int)lVar3);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1,&iStack_30);
      }
      uVar2 = uVar2 - 1;
      lVar3 = lVar3 + -4;
    } while (-1 < (longlong)uVar2);
  }
  return;
}

