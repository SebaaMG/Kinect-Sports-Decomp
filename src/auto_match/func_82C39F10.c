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
extern unsigned int lbl_821AAD20;


double fn_82C39F10(float *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  
  fVar1 = lbl_821AAD20;
  fVar2 = lbl_821AAD20;
  uVar4 = param_2;
  if (1 < (int)param_2) {
    lVar5 = (((ulonglong)param_2 - 2 & 0xffffffff) >> 1) + 1;
    uVar4 = param_2 + (int)lVar5 * -2;
    do {
      fVar1 = *param_1 * *param_1 + fVar1;
      fVar2 = param_1[1] * param_1[1] + fVar2;
      param_1 = param_1 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  fVar3 = lbl_821AAD20;
  if (0 < (int)uVar4) {
    fVar3 = *param_1 * *param_1;
  }
  return (double)((fVar2 + fVar1 + fVar3) / (float)(longlong)(int)param_2);
}

