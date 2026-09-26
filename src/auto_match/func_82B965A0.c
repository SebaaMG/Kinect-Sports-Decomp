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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8202EE4C;


void fn_82B965A0(int param_1,int param_2,int param_3,longlong param_4)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  uint uVar6;
  longlong lVar5;
  uint uVar7;
  ushort *puVar8;
  
  fVar3 = lbl_8202EE4C;
  fVar2 = lbl_82002AE0;
  uVar7 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
          *(int *)(param_1 + 0x20);
  uVar6 = *(int *)(param_1 + 0x68) * 2 + uVar7;
  if (uVar7 < uVar6) {
    puVar8 = (ushort *)(uVar7 - 2);
    lVar5 = (ulonglong)((uVar6 - uVar7) - 1 >> 1) + 1;
    do {
      pfVar4 = (float *)param_4;
      *pfVar4 = (float)(puVar8[1] >> 10 & 0x1f) * fVar3;
      pfVar4[1] = (float)(puVar8[1] >> 5 & 0x1f) * fVar3;
      puVar8 = puVar8 + 1;
      uVar1 = *puVar8;
      pfVar4[3] = fVar2;
      pfVar4[2] = (float)(uVar1 & 0x1f) * fVar3;
      param_4 = param_4 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
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

