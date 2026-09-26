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


void fn_82329730(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x50);
  if (piVar3 != param_2) {
    piVar1 = *(int **)(param_1 + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,piVar3 != piVar1);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    piVar1 = (int *)param_2[4];
    if (piVar1 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else if (piVar1 == param_2) {
      uVar2 = (**(code **)*piVar1)(piVar1,piVar3);
      *(undefined4 *)(param_1 + 0x60) = uVar2;
    }
    else {
      *(int **)(param_1 + 0x60) = piVar1;
      param_2[4] = 0;
    }
  }
  return;
}

