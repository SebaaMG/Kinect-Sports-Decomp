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
extern int fn_828A12F0();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_82897CE0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar2;
  int iVar3;
  undefined8 uVar1;
  int *piVar4;
  
  *param_4 = 0;
  iVar2 = fn_828E9DA8(param_2);
  iVar3 = fn_828E9D90(param_2);
  if (iVar2 - iVar3 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_828E9FF8(param_2,1);
  }
  piVar4 = (int *)fn_828A12F0(param_1,uVar1);
  (**(code **)(*piVar4 + 0x20))(piVar4,param_1,param_2,param_3,param_4);
  return;
}

