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
extern unsigned int lbl_8202EE5C;


void fn_82B97750(int param_1,int param_2,int param_3,longlong param_4)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  float *pfVar4;
  float fVar5;
  undefined4 *puVar6;
  char cVar7;
  uint uVar8;
  uint uVar10;
  longlong lVar9;
  
  fVar5 = lbl_8202EE5C;
  uVar10 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
           *(int *)(param_1 + 0x20);
  uVar8 = *(int *)(param_1 + 0x68) * 4 + uVar10;
  if (uVar10 < uVar8) {
    puVar6 = (undefined4 *)(uVar10 - 4);
    lVar9 = (ulonglong)((uVar8 - uVar10) - 1 >> 2) + 1;
    do {
      puVar6 = puVar6 + 1;
      uVar1 = *puVar6;
      cVar3 = (char)((uint)uVar1 >> 0x18);
      cVar2 = (char)((uint)uVar1 >> 8);
      cVar7 = (char)((uint)uVar1 >> 0x10);
      pfVar4 = (float *)param_4;
      pfVar4[3] = (float)(longlong)(char)((cVar3 == -0x80) + cVar3) * fVar5;
      pfVar4[2] = (float)(longlong)(char)((cVar7 == -0x80) + cVar7) * fVar5;
      pfVar4[1] = (float)(longlong)(char)((cVar2 == -0x80) + cVar2) * fVar5;
      *pfVar4 = (float)(longlong)(char)(((char)uVar1 == -0x80) + (char)uVar1) * fVar5;
      param_4 = param_4 + 0x10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
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

