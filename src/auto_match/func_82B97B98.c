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
extern unsigned int lbl_82015CF0;


void fn_82B97B98(int param_1,int param_2,int param_3,longlong param_4)

{
  short sVar1;
  float *pfVar2;
  short sVar3;
  short sVar4;
  float fVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar10;
  longlong lVar8;
  undefined8 uVar9;
  
  fVar5 = lbl_82015CF0;
  uVar10 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
           *(int *)(param_1 + 0x20);
  uVar7 = *(int *)(param_1 + 0x68) * 8 + uVar10;
  if (uVar10 < uVar7) {
    puVar6 = (undefined8 *)(uVar10 - 8);
    lVar8 = (ulonglong)((uVar7 - uVar10) - 1 >> 3) + 1;
    do {
      puVar6 = puVar6 + 1;
      uVar9 = *puVar6;
      sVar1 = (short)((ulonglong)uVar9 >> 0x30);
      sVar4 = (short)((ulonglong)uVar9 >> 0x20);
      sVar3 = (short)((ulonglong)uVar9 >> 0x10);
      pfVar2 = (float *)param_4;
      pfVar2[1] = (float)(longlong)(short)((ushort)(sVar3 == -0x8000) + sVar3) * fVar5;
      *pfVar2 = (float)(longlong)(short)((ushort)((short)uVar9 == -0x8000) + (short)uVar9) * fVar5;
      pfVar2[2] = (float)(longlong)(short)((ushort)(sVar4 == -0x8000) + sVar4) * fVar5;
      pfVar2[3] = (float)(longlong)(short)((ushort)(sVar1 == -0x8000) + sVar1) * fVar5;
      param_4 = param_4 + 0x10;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
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

