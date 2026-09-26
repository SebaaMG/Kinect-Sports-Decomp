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
extern int fn_82B8FD40();
extern int fn_82B90110();
extern unsigned int lbl_82005328;


void fn_82B96A48(int param_1,int param_2,int param_3,longlong param_4)

{
  float fVar1;
  float *pfVar2;
  uint uVar4;
  longlong lVar3;
  uint uVar5;
  byte *pbVar6;
  
  fVar1 = lbl_82005328;
  uVar5 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
          *(int *)(param_1 + 0x20);
  uVar4 = *(int *)(param_1 + 0x68) * 4 + uVar5;
  if (uVar5 < uVar4) {
    pbVar6 = (byte *)(uVar5 - 4);
    lVar3 = (ulonglong)((uVar4 - uVar5) - 1 >> 2) + 1;
    do {
      pfVar2 = (float *)param_4;
      *pfVar2 = (float)pbVar6[7] * fVar1;
      pfVar2[1] = (float)pbVar6[6] * fVar1;
      pfVar2[2] = (float)pbVar6[5] * fVar1;
      pbVar6 = pbVar6 + 4;
      pfVar2[3] = (float)*pbVar6 * fVar1;
      param_4 = param_4 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    param_1 = fn_82B8FD40(param_1,param_4 + ((ulonglong)*(uint *)(param_1 + 0x68) & 0xfffffff) *
                                              -0x10);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82B90110(param_1,param_4 + ((ulonglong)*(uint *)(param_1 + 0x68) & 0xfffffff) * -0x10);
  }
  return;
}

