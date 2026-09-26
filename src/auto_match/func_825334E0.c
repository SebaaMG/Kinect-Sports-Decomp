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
extern int fn_825735B8();
extern int fn_825764F0();


void fn_825334E0(int param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x93c) != 0) {
    piVar1 = (int *)fn_825735B8(param_2 + 0x128,param_3);
    while (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1,5,0);
      if (piVar1[1] != 0) {
        *(undefined4 *)(piVar1[1] + 400) = 1;
      }
      iVar2 = fn_825764F0(param_2 + 0x128,param_3,piVar1[1]);
      if (iVar2 == 0) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = *(int **)(iVar2 + 0x1b0);
      }
    }
  }
  return;
}

