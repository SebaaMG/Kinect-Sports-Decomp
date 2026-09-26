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
extern int fn_82681E98();
extern int fn_8269A800();
extern int fn_8269F500();


void fn_82725658(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((*(int **)(param_1 + 8) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar1 == 4)) {
    piVar2 = (int *)(*(int *)(param_1 + 8) + -0x68);
    if (*(int *)(param_1 + 8) == 0) {
      piVar2 = (int *)0x0;
    }
    if (piVar2[5] < 0x4000) {
      iVar1 = piVar2[0x20];
      if (iVar1 == 0) {
        iVar1 = fn_8269F500(piVar2);
      }
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*piVar2 + 0x58))(piVar2);
        iVar1 = *(int *)(iVar1 + 0x78);
      }
      fn_82681E98(piVar2 + 3,0xffffffff8200bea4,**(undefined4 **)(iVar1 + 8));
    }
    else {
      fn_8269A800(piVar2);
    }
  }
  return;
}

