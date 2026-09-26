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
extern int fn_82359C18();
extern int fn_82F63108();


void fn_8238EEF0(int param_1)

{
  int iVar1;
  uint uVar3;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x8c) != 0) {
    uVar3 = *(uint *)(param_1 + 0x88);
    iVar1 = 0;
    if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
      iVar1 = **(int **)(param_1 + 0x7c);
    }
    if (*(uint *)(iVar1 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar1 + 8);
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 4) + uVar3 * 4);
    if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(code **)(**(int **)(iVar1 + 0x10) + 4))();
    if (*(int *)(param_1 + 0x8c) != 0) {
      fn_82359C18(*(undefined4 *)(*(int *)(param_1 + 0x88) * 4 + *(int *)(param_1 + 0x80)));
      uVar3 = *(int *)(param_1 + 0x88) + 1;
      *(uint *)(param_1 + 0x88) = uVar3;
      if (*(uint *)(param_1 + 0x84) <= uVar3) {
        *(undefined4 *)(param_1 + 0x88) = 0;
      }
      lVar2 = (ulonglong)*(uint *)(param_1 + 0x8c) - 1;
      *(int *)(param_1 + 0x8c) = (int)lVar2;
      if (lVar2 == 0) {
        *(undefined4 *)(param_1 + 0x88) = 0;
      }
    }
  }
  return;
}

