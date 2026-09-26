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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_821AAD20;


double fn_829DD910(double param_1,uint *param_2)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = (ulonglong)*param_2;
  iVar4 = 0;
  fVar1 = lbl_821AAD20;
  if (uVar3 != 0) {
    do {
      uVar2 = param_2[0x97] + iVar4;
      iVar4 = iVar4 + 1;
      fVar1 = (float)((double)(float)param_2[uVar2 % 0x96 + 1] - param_1) *
              (float)((double)(float)param_2[uVar2 % 0x96 + 1] - param_1) + fVar1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return (double)SQRT(fVar1 / (float)*param_2);
}

