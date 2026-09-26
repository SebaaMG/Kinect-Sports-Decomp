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


int * fn_8268E388(int *param_1,int param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    *param_1 = param_2;
  }
  else {
    uVar4 = (ulonglong)*(uint *)(param_2 + 0x24);
    uVar5 = uVar4;
    param_1 = piVar1;
    if ((uint)piVar1[9] == uVar4) {
      return piVar1;
    }
    while( true ) {
      uVar2 = uVar5 >> 0x1f;
      uVar5 = (uVar5 & 0x7fffffff) << 1;
      iVar3 = (int)uVar2 + 3;
      piVar1 = (int *)param_1[iVar3];
      if (piVar1 == (int *)0x0) break;
      param_1 = piVar1;
      if ((uint)piVar1[9] == uVar4) {
        return piVar1;
      }
    }
    param_1[iVar3] = param_2;
  }
  *(int **)(param_2 + 8) = param_1;
  return (int *)0x0;
}

