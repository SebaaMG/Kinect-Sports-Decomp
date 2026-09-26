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
extern unsigned int lbl_82015CF0;


void fn_8292D518(int param_1,int param_2,int param_3,longlong param_4)

{
  undefined4 uVar1;
  float *pfVar2;
  short sVar3;
  short sVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar10;
  longlong lVar9;
  
  fVar6 = lbl_82015CF0;
  fVar5 = lbl_82002AE0;
  uVar10 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
           *(int *)(param_1 + 0x20);
  uVar8 = *(int *)(param_1 + 0x68) * 4 + uVar10;
  if (uVar10 < uVar8) {
    puVar7 = (undefined4 *)(uVar10 - 4);
    lVar9 = (ulonglong)((uVar8 - uVar10) - 1 >> 2) + 1;
    do {
      puVar7 = puVar7 + 1;
      uVar1 = *puVar7;
      pfVar2 = (float *)param_4;
      pfVar2[2] = fVar5;
      pfVar2[3] = fVar5;
      sVar3 = (short)uVar1;
      sVar4 = (short)((uint)uVar1 >> 0x10);
      *pfVar2 = (float)(longlong)(short)((ushort)(sVar3 == -0x8000) + sVar3) * fVar6;
      pfVar2[1] = (float)(longlong)(short)((ushort)(sVar4 == -0x8000) + sVar4) * fVar6;
      param_4 = param_4 + 0x10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
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

