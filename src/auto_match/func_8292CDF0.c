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
extern int fn_82925600();
extern int fn_82B8FD40();
extern unsigned int lbl_82005328;


void fn_8292CDF0(int param_1,int param_2,int param_3,longlong param_4)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  uint uVar5;
  longlong lVar4;
  uint uVar6;
  byte *pbVar7;
  
  fVar3 = lbl_82005328;
  uVar6 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
          *(int *)(param_1 + 0x20);
  uVar5 = *(int *)(param_1 + 0x68) * 2 + uVar6;
  if (uVar6 < uVar5) {
    pbVar7 = (byte *)(uVar6 - 2);
    lVar4 = (ulonglong)((uVar5 - uVar6) - 1 >> 1) + 1;
    do {
      fVar1 = (float)pbVar7[3] * fVar3;
      pfVar2 = (float *)param_4;
      pfVar2[2] = fVar1;
      pfVar2[1] = fVar1;
      *pfVar2 = fVar1;
      pbVar7 = pbVar7 + 2;
      pfVar2[3] = (float)*pbVar7 * fVar3;
      param_4 = param_4 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    param_1 = fn_82B8FD40(param_1,param_4 + ((ulonglong)*(uint *)(param_1 + 0x68) & 0xfffffff) *
                                             -0x10);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82925600(param_1,param_4 + ((ulonglong)*(uint *)(param_1 + 0x68) & 0xfffffff) * -0x10);
  }
  return;
}

