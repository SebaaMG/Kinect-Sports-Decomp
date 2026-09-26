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
extern unsigned int lbl_82014E48;
extern unsigned int lbl_82014E4C;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8279A488(double param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (double)*(float *)(*(int *)(param_3 + 0xc) + 8);
  dVar4 = (double)*(float *)(*(int *)(param_3 + 0xc) + 0xc);
  if (dVar3 == (double)lbl_821AAD20) {
    dVar3 = (double)lbl_82014E4C;
  }
  if (dVar4 == (double)lbl_821AAD20) {
    dVar4 = (double)lbl_82014E48;
  }
  fVar1 = *(float *)(param_2 + 0x40);
  if (*(float *)(param_2 + 0x40) <= (float)(dVar3 * param_1)) {
    fVar1 = (float)(dVar3 * param_1);
  }
  *(float *)(param_2 + 0x40) = fVar1;
  fVar1 = (float)(dVar4 * param_1);
  if ((float)(dVar4 * param_1) < *(float *)(param_2 + 0x44)) {
    fVar1 = *(float *)(param_2 + 0x44);
  }
  iVar2 = *(int *)(param_3 + 0xc);
  *(float *)(param_2 + 0x44) = fVar1;
  fVar1 = (float)((double)*(float *)(iVar2 + 0x10) * param_1);
  if (fVar1 < *(float *)(param_2 + 0x48)) {
    fVar1 = *(float *)(param_2 + 0x48);
  }
  *(float *)(param_2 + 0x48) = fVar1;
  return;
}

