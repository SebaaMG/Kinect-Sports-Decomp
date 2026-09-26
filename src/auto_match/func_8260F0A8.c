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
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8260F0A8(int param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  
  fVar7 = lbl_821CC160;
  fVar6 = lbl_821917B4;
  fVar5 = lbl_8218E8FC;
  piVar3 = *(int **)(**(int **)(param_1 + 0x60) + 0x93c);
  if (piVar3 == (int *)0x0) {
    return;
  }
  fVar1 = *(float *)(param_3 + 0x10);
  if (fVar1 <= lbl_821CC160) {
    return;
  }
  bVar8 = (float)piVar3[0x14] < lbl_821CC160;
  iVar2 = *(int *)(*piVar3 + 0x1a8);
  fVar4 = lbl_821CA460 / fVar1;
  piVar3[0xd] = *(int *)(iVar2 + 0x1e8);
  piVar3[0xe] = *(int *)(iVar2 + 0x1f0);
  piVar3[0x12] = *(int *)(iVar2 + 0x1e0);
  piVar3[0x13] = *(int *)(iVar2 + 0x1e4);
  piVar3[0x15] = (int)fVar4;
  piVar3[0x11] = (int)fVar1;
  piVar3[0xf] = (int)((fVar6 - (float)piVar3[0x12]) * fVar4);
  piVar3[0x10] = (int)((fVar5 - (float)piVar3[0x13]) * fVar4);
  if (bVar8) {
    piVar3[0x14] = (int)fVar7;
  }
  *(undefined1 *)(piVar3 + 0xc) = 1;
  return;
}

