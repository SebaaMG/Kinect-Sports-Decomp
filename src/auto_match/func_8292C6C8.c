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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005328;


void fn_8292C6C8(int param_1,int param_2,int param_3,longlong param_4)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  uint uVar6;
  longlong lVar5;
  uint uVar7;
  byte *pbVar8;
  
  fVar3 = lbl_82005328;
  fVar2 = lbl_82002AE0;
  uVar7 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
          *(int *)(param_1 + 0x20);
  uVar6 = *(int *)(param_1 + 0x68) * 4 + uVar7;
  if (uVar7 < uVar6) {
    pbVar8 = (byte *)(uVar7 - 3);
    lVar5 = (ulonglong)((uVar6 - uVar7) - 1 >> 2) + 1;
    do {
      pfVar4 = (float *)param_4;
      *pfVar4 = (float)pbVar8[6] * fVar3;
      pfVar4[1] = (float)pbVar8[5] * fVar3;
      pbVar8 = pbVar8 + 4;
      bVar1 = *pbVar8;
      pfVar4[3] = fVar2;
      pfVar4[2] = (float)bVar1 * fVar3;
      param_4 = param_4 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
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

