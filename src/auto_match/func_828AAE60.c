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
extern int fn_8240D928();


undefined1 fn_828AAE60(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))(), iVar1 == 0)) {
    if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
       (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(), iVar1 == 0)) {
      uVar3 = *(undefined1 *)(param_1 + 0xc);
    }
    else {
      if (*(int **)(param_1 + 0x20) == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
      }
      iVar2 = fn_8240D928(param_2);
      uVar3 = *(undefined1 *)((iVar2 + 5) * 4 + iVar1);
    }
  }
  else {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
    }
    iVar2 = fn_8240D928(param_2);
    uVar3 = *(undefined1 *)((iVar2 + 4) * 4 + iVar1);
  }
  return uVar3;
}

