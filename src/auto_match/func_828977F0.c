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


void fn_828977F0(int param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 8);
  if (uVar1 != 0) {
    iVar3 = 0;
    do {
      if (uVar4 < *(uint *)(*(int *)(param_1 + 0x10) + 8)) {
        piVar2 = *(int **)(*(int *)(param_1 + 8) + iVar3);
      }
      else {
        piVar2 = (int *)0x0;
      }
      (**(code **)(*piVar2 + 4))(piVar2,param_2,param_3);
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar4 < uVar1);
  }
  return;
}

