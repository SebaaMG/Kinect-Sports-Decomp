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
extern unsigned int lbl_82193E2C;
extern unsigned int lbl_821CC160;


double fn_824FA0F8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  
  fVar1 = *(float *)(param_1 + 0x218);
  if ((fVar1 < *(float *)(param_1 + 0x2b8)) || (*(float *)(param_1 + 0x2c8) <= fVar1)) {
    iVar6 = 1;
    iVar5 = 0;
  }
  else {
    iVar6 = 0;
    iVar5 = 1;
  }
  iVar6 = iVar6 * 0x10 + param_1;
  param_1 = iVar5 * 0x10 + param_1;
  fVar2 = *(float *)(iVar6 + 0x2b8);
  fVar3 = *(float *)(param_1 + 0x2b8);
  if (fVar3 < fVar2) {
    fVar3 = fVar3 + lbl_82193E2C;
    if (fVar1 < lbl_821CC160) {
      fVar1 = fVar1 + lbl_82193E2C;
    }
  }
  fVar4 = *(float *)(iVar6 + 700);
  return (double)(((fVar1 - fVar2) / (fVar3 - fVar2)) * (*(float *)(param_1 + 700) - fVar4) + fVar4)
  ;
}

