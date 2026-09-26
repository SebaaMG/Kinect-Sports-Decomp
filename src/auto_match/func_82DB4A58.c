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


int fn_82DB4A58(double param_1,undefined8 param_2,int *param_3,int param_4,uint param_5,
                 int *param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  int iVar6;
  
  iVar2 = -1;
  iVar6 = 0;
  fVar1 = *(float *)(*(char *)(*param_3 + 0x1c) * 0x40 + *param_6 + 0x1c54) * (float)param_3[2];
  if (3 < (int)param_5) {
    pfVar5 = (float *)(param_4 + 8);
    lVar4 = (((ulonglong)param_5 - 4 & 0xffffffff) >> 2) + 1;
    do {
      if (fVar1 < (float)(ABS((double)pfVar5[-2]) * param_1)) {
        fVar1 = (float)(ABS((double)pfVar5[-2]) * param_1);
        iVar2 = iVar6;
      }
      if (fVar1 < (float)(ABS((double)pfVar5[-1]) * param_1)) {
        iVar2 = iVar6 + 1;
        fVar1 = (float)(ABS((double)pfVar5[-1]) * param_1);
      }
      if (fVar1 < (float)(ABS((double)*pfVar5) * param_1)) {
        iVar2 = iVar6 + 2;
        fVar1 = (float)(ABS((double)*pfVar5) * param_1);
      }
      if (fVar1 < (float)(ABS((double)pfVar5[1]) * param_1)) {
        iVar2 = iVar6 + 3;
        fVar1 = (float)(ABS((double)pfVar5[1]) * param_1);
      }
      iVar6 = iVar6 + 4;
      pfVar5 = pfVar5 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if ((int)param_5 <= iVar6) {
    return iVar2;
  }
  iVar3 = param_5 - iVar6;
  pfVar5 = (float *)(iVar6 * 4 + param_4);
  do {
    if (fVar1 < (float)(ABS((double)*pfVar5) * param_1)) {
      fVar1 = (float)(ABS((double)*pfVar5) * param_1);
      iVar2 = iVar6;
    }
    iVar6 = iVar6 + 1;
    pfVar5 = pfVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar2;
}

