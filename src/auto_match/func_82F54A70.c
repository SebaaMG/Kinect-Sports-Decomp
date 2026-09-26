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
extern int fn_82522D98();
extern int fn_82F54838();


void fn_82F54A70(int param_1,undefined1 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) & 0xfU) == 0) {
    if (*(uint *)(param_1 + 8) <= *(int *)(param_1 + 0x10) + 0x10U >> 4) {
      fn_82F54838(param_1,1);
    }
  }
  uVar4 = (ulonglong)*(uint *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x10);
  uVar2 = (uVar4 & 0xffffffff) >> 4;
  if (*(uint *)(param_1 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(param_1 + 8);
  }
  iVar1 = (int)((uVar2 & 0xffffffff) << 2);
  if (*(int *)(*(int *)(param_1 + 4) + iVar1) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(0x10);
  }
  lVar3 = (ulonglong)*(uint *)(*(int *)(param_1 + 4) + iVar1) + (uVar4 & 0xf);
  if (lVar3 != 0) {
    *(undefined1 *)lVar3 = *param_2;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

