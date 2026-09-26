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
#define ZEXT48(x) ((U64)((U32)(x)))


int * fn_8268E320(int *param_1,int *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[5] = 0;
  if ((int *)*param_1 == (int *)0x0) {
    *param_1 = (int)param_2;
  }
  else {
    uVar4 = ZEXT48(param_2);
    piVar3 = (int *)*param_1;
    do {
      param_1 = piVar3;
      if (param_1 == param_2) {
        return param_1;
      }
      uVar1 = uVar4 >> 0x1f;
      uVar4 = (uVar4 & 0x7fffffff) << 1;
      iVar2 = (int)uVar1 + 6;
      piVar3 = (int *)param_1[iVar2];
    } while ((int *)param_1[iVar2] != (int *)0x0);
    param_1[iVar2] = (int)param_2;
  }
  param_2[5] = (int)param_1;
  return (int *)0x0;
}

