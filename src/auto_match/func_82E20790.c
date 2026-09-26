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
extern int fn_8265C9E0();
extern int fn_82E204E8();


void fn_82E20790(int param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = fn_8265C9E0(0x10);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82E204E8(uVar1,param_2);
  }
  piVar3 = *(int **)(param_1 + 0xc);
  if (piVar3 == (int *)0x0) {
    *(int *)(param_1 + 0xc) = iVar2;
  }
  else {
    for (; *piVar3 != 0; piVar3 = (int *)*piVar3) {
    }
    *piVar3 = iVar2;
  }
  return;
}

