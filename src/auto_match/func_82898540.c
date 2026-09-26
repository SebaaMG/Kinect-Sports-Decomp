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
extern unsigned int uRam00000008;


undefined1 fn_82898540(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = uRam00000008;
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
      uVar2 = *(undefined1 *)(iVar1 + 8);
    }
  }
  return uVar2;
}

