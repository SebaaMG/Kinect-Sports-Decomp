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
extern int fn_8267B890();
extern unsigned int lbl_831E7E64;


int * fn_8267E0E0(int *param_1,int param_2,ulonglong param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_3 & 0xffffffff) < 0x21) {
    piVar1 = param_1 + 1;
  }
  else {
    piVar1 = (int *)fn_8267B890(lbl_831E7E64,(param_3 & 0x3fffffff) << 2,0);
  }
  *param_1 = (int)piVar1;
  if ((param_3 & 0xffffffff) != 0) {
    iVar3 = 0;
    do {
      uVar2 = (**(code **)(**(int **)(iVar3 + param_2) + 8))();
      param_3 = param_3 - 1;
      *(undefined4 *)(iVar3 + *param_1) = uVar2;
      iVar3 = iVar3 + 4;
    } while (param_3 != 0);
  }
  return param_1;
}

