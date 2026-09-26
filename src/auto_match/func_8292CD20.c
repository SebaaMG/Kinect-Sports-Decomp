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


void fn_8292CD20(int param_1,int param_2,int param_3,longlong param_4)

{
  byte bVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  
  fVar5 = lbl_82005328;
  fVar4 = lbl_82002AE0;
  uVar8 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
          *(int *)(param_1 + 0x20);
  uVar6 = *(int *)(param_1 + 0x68) + uVar8;
  if (uVar8 < uVar6) {
    iVar7 = uVar6 - uVar8;
    pbVar9 = (byte *)(uVar8 - 1);
    do {
      pbVar9 = pbVar9 + 1;
      bVar1 = *pbVar9;
      pfVar3 = (float *)param_4;
      pfVar3[3] = fVar4;
      fVar2 = (float)bVar1 * fVar5;
      pfVar3[2] = fVar2;
      pfVar3[1] = fVar2;
      *pfVar3 = fVar2;
      param_4 = param_4 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
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

