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


void fn_82A07078(double param_1,double param_2,undefined8 param_3,int param_4,int param_5,
                  uint param_6)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  
  fVar1 = lbl_821AAD20;
  uVar3 = 0;
  if (3 < (int)param_6) {
    pfVar4 = (float *)(param_5 + 8);
    pfVar5 = (float *)(param_4 + 4);
    do {
      if ((fVar1 < pfVar5[2]) && (param_1 < (double)(float)(param_2 - (double)*pfVar5))) {
        pfVar4[-2] = (float)(param_1 / (double)(float)(param_2 - (double)*pfVar5)) * pfVar4[-2];
      }
      if ((fVar1 < pfVar5[6]) && (param_1 < (double)(float)(param_2 - (double)pfVar5[4]))) {
        pfVar4[-1] = (float)(param_1 / (double)(float)(param_2 - (double)pfVar5[4])) * pfVar4[-1];
      }
      if ((fVar1 < pfVar5[10]) && (param_1 < (double)(float)(param_2 - (double)pfVar5[8]))) {
        *pfVar4 = (float)(param_1 / (double)(float)(param_2 - (double)pfVar5[8])) * *pfVar4;
      }
      if ((fVar1 < pfVar5[0xe]) && (param_1 < (double)(float)(param_2 - (double)pfVar5[0xc]))) {
        pfVar4[1] = (float)(param_1 / (double)(float)(param_2 - (double)pfVar5[0xc])) * pfVar4[1];
      }
      uVar3 = uVar3 + 4;
      pfVar4 = pfVar4 + 4;
      pfVar5 = pfVar5 + 0x10;
    } while (uVar3 < param_6 - 3);
  }
  if (param_6 <= uVar3) {
    return;
  }
  iVar2 = param_6 - uVar3;
  pfVar4 = (float *)(uVar3 * 4 + param_5);
  pfVar5 = (float *)(uVar3 * 0x10 + param_4 + 4);
  do {
    if ((fVar1 < pfVar5[2]) && (param_1 < (double)(float)(param_2 - (double)*pfVar5))) {
      *pfVar4 = (float)(param_1 / (double)(float)(param_2 - (double)*pfVar5)) * *pfVar4;
    }
    pfVar5 = pfVar5 + 4;
    pfVar4 = pfVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

