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
extern int fn_82F68CC0();


void fn_8226A4A8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 4);
  iVar5 = *piVar1;
  while (iVar5 != piVar1[1]) {
    if (*(int *)(iVar5 + 0xd0) == param_2) {
      iVar3 = piVar1[1];
      iVar4 = iVar5;
      iVar2 = iVar5;
      while (iVar2 = iVar2 + 0xe0, iVar2 != iVar3) {
        fn_82F68CC0(iVar4,iVar2,0xe0);
        iVar4 = iVar4 + 0xe0;
      }
      iVar4 = piVar1[1] + -0xe0;
      for (iVar3 = iVar4; iVar3 != piVar1[1]; iVar3 = iVar3 + 0xe0) {
      }
      piVar1[1] = iVar4;
    }
    else {
      iVar5 = iVar5 + 0xe0;
    }
  }
  piVar1[0xad] = 1;
  return;
}

