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
extern int fn_82236200();
extern int fn_8289D8D0();


int fn_82236140(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  
  if (*(int **)(param_1 + 0x20) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
  }
  if (iVar2 == 0) {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
    }
    if (iVar2 == 0) {
      if (*(uint *)(param_1 + 0x10) < 5) {
        return param_1 + 0xc;
      }
      return *(int *)(param_1 + 0xc);
    }
  }
  uVar1 = fn_8289D8D0(*(undefined4 *)(param_1 + 0x28));
  iVar2 = fn_82236200(param_1,uVar1);
  return iVar2;
}

