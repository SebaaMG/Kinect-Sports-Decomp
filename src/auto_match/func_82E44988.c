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
extern int fn_82E50BE8();
extern int fn_82E7E500();


undefined8 fn_82E44988(int param_1,undefined8 param_2,uint param_3,int param_4,int *param_5)

{
  code *pcVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if (((param_5 == (int *)0x0) || (*param_5 = 0, param_4 != 0)) || (9999 < param_3)) {
    return 0xffffffff80070057;
  }
  if (param_3 == 0) {
    iVar4 = param_1 + 4;
    if (param_1 == 4) {
      iVar4 = 0;
    }
    *param_5 = iVar4;
    piVar3 = (int *)(param_1 + -4);
    pcVar1 = *(code **)(*(int *)(param_1 + -4) + 4);
  }
  else {
    uVar2 = fn_82E50BE8(0x14,0,0,0,0);
    if ((uVar2 & 0xffffffff) == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_82E7E500(uVar2,param_1 + -4,param_3 & 0xffff);
    }
    if (piVar3 == (int *)0x0) {
      return 0xffffffff8007000e;
    }
    uVar5 = (**(code **)*piVar3)(piVar3,0xffffffff82153e5c,param_5);
    pcVar1 = *(code **)(*piVar3 + 8);
  }
  (*pcVar1)(piVar3);
  return uVar5;
}

