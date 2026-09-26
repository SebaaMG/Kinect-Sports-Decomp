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
extern unsigned int lbl_82015BE0;
extern unsigned int lbl_8202EE64;


void fn_82B97A08(int param_1,int param_2,int param_3,longlong param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  uint uVar8;
  longlong lVar7;
  uint uVar9;
  uint *puVar10;
  
  fVar6 = lbl_8202EE64;
  fVar5 = lbl_82015BE0;
  uVar9 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
          *(int *)(param_1 + 0x20);
  uVar8 = *(int *)(param_1 + 0x68) * 4 + uVar9;
  if (uVar9 < uVar8) {
    puVar10 = (uint *)(uVar9 - 4);
    lVar7 = (ulonglong)((uVar8 - uVar9) - 1 >> 2) + 1;
    do {
      uVar8 = puVar10[1];
      sVar1 = (short)((short)uVar8 << 6) >> 6;
      sVar2 = (short)(uVar8 >> 4) >> 6;
      sVar3 = (short)(uVar8 >> 0xe) >> 6;
      pfVar4 = (float *)param_4;
      pfVar4[2] = (float)(longlong)(short)((ushort)(sVar3 == -0x200) + sVar3) * fVar6;
      *pfVar4 = (float)(longlong)(short)((ushort)(sVar1 == -0x200) + sVar1) * fVar6;
      pfVar4[1] = (float)(longlong)(short)((ushort)(sVar2 == -0x200) + sVar2) * fVar6;
      puVar10 = puVar10 + 1;
      pfVar4[3] = (float)(*puVar10 >> 0x1e) * fVar5;
      param_4 = param_4 + 0x10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
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

