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


int fn_82FB7CC8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    if ((*(int *)(param_2 + 0x1c) == 0) || (bVar3 = false, *(int *)(param_2 + 0x1c) == 2)) {
      bVar3 = true;
    }
    if (bVar3) {
      return param_2;
    }
    iVar1 = *(int *)(param_1 + 8);
    if (*(short *)(iVar1 + -8) == 0) {
      return param_2;
    }
    if (1 < *(short *)(iVar1 + -8)) break;
    param_2 = *(int *)(param_2 + 4);
    iVar2 = *(int *)(*(int *)(iVar1 + -0xc) + 0x1c);
    if (((iVar2 == 0) || (iVar2 == 2)) && (*(int **)(iVar1 + -4) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar1 + -4) + 4))();
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0xc;
  }
  *(short *)(iVar1 + -8) = *(short *)(iVar1 + -8) + -1;
  return param_2;
}

