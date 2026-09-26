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
extern int fn_82681F88();
extern int fn_826A1C78();
extern int fn_826C3290();


void fn_826A48D0(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  fn_826A1C78();
  fn_826C3290(param_1 + 0x4c);
  fn_826C3290(param_1 + 0x58);
  if ((*(int *)(param_1 + 100) != 0) &&
     (uVar1 = (ulonglong)*(uint *)(*(int *)(param_1 + 100) + 4), uVar1 != 0)) {
    iVar2 = 0;
    do {
      if (*(int *)(**(int **)(param_1 + 100) + iVar2) != 0) {
        fn_82681F88();
      }
      uVar1 = uVar1 - 1;
      iVar2 = iVar2 + 4;
    } while (uVar1 != 0);
  }
  return;
}

