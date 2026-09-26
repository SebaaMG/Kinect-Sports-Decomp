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
extern int fn_8267C4F0();
extern int fn_82683F88();


int * fn_82684D98(int *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(*param_1 + 4))(param_1,param_2,param_4,param_5);
  if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x20))(piVar1), iVar2 != 0)) {
    if ((param_3 & 0xffffffff) != 0) {
      fn_82683F88(param_3 + 0xc,0xffffffff82005ad8,param_2);
    }
    if (piVar1 != (int *)0x0) {
      fn_8267C4F0(piVar1);
    }
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

