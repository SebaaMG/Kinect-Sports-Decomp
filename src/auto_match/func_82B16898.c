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


void fn_82B16898(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 == (int *)0x0) {
    return;
  }
  do {
    if (*piVar1 == 1) break;
    piVar1 = (int *)piVar1[1];
  } while (piVar1 != (int *)0x0);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (piVar1 + (param_2 + 1) * 2)[0] = -0x100000;
  (piVar1 + (param_2 + 1) * 2)[1] = 0;
  (piVar1 + (param_2 + 5) * 2)[0] = 0x7ff00000;
  (piVar1 + (param_2 + 5) * 2)[1] = 0;
  return;
}

