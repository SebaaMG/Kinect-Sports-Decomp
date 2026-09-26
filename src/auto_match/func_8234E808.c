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
extern int fn_82F63108();


void fn_8234E808(int param_1)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x60);
  piVar1 = *(int **)(param_1 + 100);
  lVar3 = 0;
  while( true ) {
    if (piVar4 == piVar1) {
      return;
    }
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 == (int *)0x0) break;
    (**(code **)(*piVar2 + 4))((double)*(float *)(*piVar4 * 0xc + param_1 + 0x20),piVar2,lVar3);
    piVar4 = piVar4 + 1;
    lVar3 = lVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F63108();
}

