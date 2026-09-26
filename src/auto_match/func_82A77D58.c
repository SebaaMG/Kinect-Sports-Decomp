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
extern int fn_82A776F0();


void fn_82A77D58(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = fn_82A776F0(param_1 + 0x84);
  *(int *)(param_1 + 0xb8) = iVar2;
  if (iVar2 != 0) {
    piVar1 = *(int **)(param_1 + 0x108);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))(piVar1,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
    }
    piVar1 = *(int **)(param_1 + 0xb8);
    *(int *)(param_1 + 0xbc) = *piVar1 + piVar1[4];
    if ((uint)(piVar1[4] + *piVar1) < (uint)(piVar1[7] + piVar1[6] + *piVar1)) {
      iVar2 = piVar1[8];
    }
    else {
      iVar2 = 0;
    }
    *(int *)(param_1 + 0xc0) = iVar2;
  }
  return;
}

