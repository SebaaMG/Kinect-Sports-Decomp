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
extern int fn_82CE5410();
extern int fn_82CED5B8();


void fn_82CE4918(uint *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar2 = fn_82CE5410();
  uVar4 = (ulonglong)param_1[1];
  piVar1 = *(int **)(iVar2 + 0x10);
  if (0 < (int)param_1[1]) {
    lVar3 = (ulonglong)*param_1 + 8;
    do {
      fn_82CED5B8(lVar3);
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 != 0);
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,*param_1,param_1[2] & 0x3fffffff,0x10);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  return;
}

