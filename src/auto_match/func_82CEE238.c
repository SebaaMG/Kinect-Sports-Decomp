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


int fn_82CEE238(int param_1,uint *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  
  uVar2 = (ulonglong)*param_2;
  piVar1 = *(int **)(param_1 + 8);
  if (*param_2 == 0) {
    lVar3 = 6;
    uVar2 = 0xffffffff82025294;
    pcVar4 = *(code **)(*piVar1 + 0x10);
  }
  else {
    lVar3 = (ulonglong)param_2[1] - 1;
    pcVar4 = *(code **)(*piVar1 + 0x10);
  }
  (*pcVar4)(piVar1,uVar2,lVar3);
  return param_1;
}

