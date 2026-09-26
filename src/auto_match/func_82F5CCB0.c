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
extern float fRam83263168;
extern float fRam83263170;
extern unsigned int lbl_821AAD20;


undefined8 fn_82F5CCB0(double param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  fVar1 = (float)(param_1 + (double)*(float *)(param_2 + 0x3c));
  *(float *)(param_2 + 0x3c) = fVar1;
  uVar2 = lbl_821AAD20;
  uVar3 = 0;
  if (fVar1 <= fRam83263168) {
    if (*(int *)(param_2 + 0x40) != 0) {
      *(undefined4 *)(param_2 + 0x10) = lbl_821AAD20;
      *(undefined4 *)(param_2 + 0x30) = 0;
      *(undefined4 *)(param_2 + 0x20) = uVar2;
      *(undefined4 *)(param_2 + 0x14) = 1;
      *(undefined4 *)(param_2 + 0x24) = uVar2;
      uVar3 = 0;
      *(undefined4 *)(param_2 + 0x2c) = uVar2;
    }
  }
  else {
    uVar3 = 1;
    *(undefined4 *)(param_2 + 0x38) = 1;
  }
  if (*(int *)(param_2 + 0x30) < 1) {
    return uVar3;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 0x20) + param_1);
  *(float *)(param_2 + 0x20) = fVar1;
  if (fVar1 - *(float *)(param_2 + 0x24) <= fRam83263170) {
    return uVar3;
  }
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x20) = uVar2;
  *(undefined4 *)(param_2 + 0x14) = 1;
  *(undefined4 *)(param_2 + 0x24) = uVar2;
  *(undefined4 *)(param_2 + 0x2c) = uVar2;
  return uVar3;
}

