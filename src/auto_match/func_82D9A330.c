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
extern int fn_82D9A1E0();


void fn_82D9A330(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x9c) - 1;
  if (-1 < (longlong)uVar2) {
    lVar3 = (uVar2 & 0x3fffffff) << 2;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x98) + (int)lVar3);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))(piVar1,param_1);
      }
      uVar2 = uVar2 - 1;
      lVar3 = lVar3 + -4;
    } while (-1 < (longlong)uVar2);
  }
  fn_82D9A1E0(param_1);
  return;
}

