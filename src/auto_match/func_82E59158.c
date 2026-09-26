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
extern unsigned int *auStack_40;
extern int fn_82E50BE8();
extern int fn_82E58F80();


ulonglong fn_82E59158(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar3;
  uint auStack_40 [16];
  
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    *param_3 = 0;
    auStack_40[0] = 0;
    uVar1 = 0;
    uVar2 = fn_82E50BE8(0x18,0,0,0,0);
    if ((uVar2 & 0xffffffff) == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_82E58F80(uVar2,param_1,param_2,auStack_40);
      uVar1 = (ulonglong)auStack_40[0];
    }
    *param_3 = piVar3;
    if (piVar3 == (int *)0x0) {
      uVar1 = 0xffffffff8007000e;
    }
    else if ((int)uVar1 < 0) {
      (**(code **)(*piVar3 + 8))();
      *param_3 = 0;
    }
  }
  return uVar1;
}

