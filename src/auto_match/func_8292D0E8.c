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
extern unsigned int lbl_8202706C;
extern unsigned int lbl_8202EE50;


void fn_8292D0E8(int param_1,int param_2,int param_3,longlong param_4)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar9;
  longlong lVar8;
  uint uVar10;
  ushort *puVar11;
  
  fVar7 = lbl_8202EE50;
  fVar6 = lbl_8202706C;
  fVar5 = lbl_82002AE0;
  uVar10 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
           *(int *)(param_1 + 0x20);
  uVar9 = *(int *)(param_1 + 0x68) * 2 + uVar10;
  if (uVar10 < uVar9) {
    puVar11 = (ushort *)(uVar10 - 2);
    lVar8 = (ulonglong)((uVar9 - uVar10) - 1 >> 1) + 1;
    do {
      uVar1 = puVar11[1];
      pfVar4 = (float *)param_4;
      pfVar4[2] = fVar5;
      cVar2 = (char)((byte)(((longlong)(short)uVar1 & 0xffffffffU) << 3) |
                    (byte)((short)uVar1 >> 0xf) >> 5) >> 3;
      cVar3 = (char)(uVar1 >> 2) >> 3;
      *pfVar4 = (float)(longlong)(char)((cVar2 == -0x10) + cVar2) * fVar6;
      pfVar4[1] = (float)(longlong)(char)((cVar3 == -0x10) + cVar3) * fVar6;
      puVar11 = puVar11 + 1;
      pfVar4[3] = (float)(*puVar11 >> 10) * fVar7;
      param_4 = param_4 + 0x10;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
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

