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
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8260F0C8(int param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  
  iVar2 = *(int *)(**(int **)(param_1 + 0x60) + 0x93c);
  if (iVar2 == 0) {
    return;
  }
  fVar1 = *(float *)(param_3 + 0x10);
  if (fVar1 <= lbl_821CC160) {
    return;
  }
  *(float *)(iVar2 + 0x44) = fVar1;
  fVar3 = lbl_821CA460;
  fVar1 = lbl_821CA460 / fVar1;
  bVar4 = lbl_821CA460 < *(float *)(iVar2 + 0x50);
  *(float *)(iVar2 + 0x54) = fVar1 * lbl_82192734;
  *(float *)(iVar2 + 0x3c) = (*(float *)(iVar2 + 0x48) - *(float *)(iVar2 + 0x34)) * fVar1;
  *(float *)(iVar2 + 0x40) = (*(float *)(iVar2 + 0x4c) - *(float *)(iVar2 + 0x38)) * fVar1;
  if (bVar4) {
    *(float *)(iVar2 + 0x50) = fVar3;
  }
  *(undefined1 *)(iVar2 + 0x30) = 1;
  return;
}

