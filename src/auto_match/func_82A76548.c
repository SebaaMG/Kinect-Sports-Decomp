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
extern unsigned int *auStack_30;


void fn_82A76548(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint auStack_30 [12];
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x84) + 0x28))();
  iVar2 = (**(code **)(**(int **)(param_1 + 0x84) + 0x20))(*(int **)(param_1 + 0x84),auStack_30);
  if ((-1 < iVar2) && (*param_2 = 1, *(int *)(param_1 + 0x94) != 0)) {
    if (uVar1 < *(int *)(param_1 + 0x80) + auStack_30[0]) {
      uVar3 = 0;
    }
    else {
      if (uVar1 < *(int *)(param_1 + 0x80) * 2 + auStack_30[0]) {
        return;
      }
      uVar3 = 2;
    }
    *param_2 = uVar3;
  }
  return;
}

