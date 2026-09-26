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


int * fn_823119C8(int *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = (int)param_2;
  if (iVar4 < 1) {
    if (-1 < iVar4) {
      return param_1;
    }
    uVar3 = -param_2;
    if ((longlong)uVar3 < 1) {
      if (-1 < (int)uVar3) {
        return param_1;
      }
      fn_823119C8(param_1,param_2);
      return param_1;
    }
    iVar4 = param_1[1];
    if (iVar4 == 0) {
      iVar4 = *(int *)(*param_1 + 0xc);
    }
    iVar2 = *(int *)*param_1;
    if (iVar4 - iVar2 >> 2 < (int)uVar3) {
      uVar3 = uVar3 - (longlong)(((int *)*param_1)[1] - iVar2 >> 2);
    }
    iVar4 = iVar4 - (int)((uVar3 & 0xffffffff) << 2);
  }
  else {
    piVar1 = (int *)*param_1;
    if (piVar1[1] - param_1[1] >> 2 <= iVar4) {
      param_2 = param_2 - (longlong)(piVar1[1] - *piVar1 >> 2);
    }
    iVar4 = (int)((param_2 & 0xffffffff) << 2) + param_1[1];
    param_1[1] = iVar4;
    if (iVar4 != piVar1[3]) {
      return param_1;
    }
    iVar4 = 0;
  }
  param_1[1] = iVar4;
  return param_1;
}

