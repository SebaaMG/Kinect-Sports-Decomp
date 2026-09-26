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
extern int fn_8227E4B0();
extern int fn_8227F7B8();


void fn_8227F000(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0x10);
  for (piVar3 = *(int **)(param_1 + 0xc); piVar3 != piVar1; piVar3 = piVar3 + 1) {
    fn_8227E4B0(param_1,*(undefined4 *)(*piVar3 + 0x14),0,1);
  }
  for (uVar2 = (ulonglong)*(uint *)(param_1 + 0x1c);
      (uVar2 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x20); uVar2 = uVar2 + 8) {
    if (*(int *)uVar2 == 0) {
      fn_8227F7B8(((int *)uVar2)[1],0);
    }
  }
  return;
}

