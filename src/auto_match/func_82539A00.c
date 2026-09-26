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
extern unsigned int lbl_821CC160;


undefined8
fn_82539A00(double param_1,int param_2,undefined8 param_3,int param_4,int param_5,float *param_6)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  int in_r0;
  float fVar5;
  float fVar6;
  float afStack_10 [4];
  
  fVar4 = lbl_821CC160;
  uVar2 = in_r0 + param_2 & 0xfffffff0;
  fVar5 = *(float *)(uVar2 + 4);
  fVar6 = *(float *)(uVar2 + 8);
  uVar2 = in_r0 + param_4 & 0xfffffff0;
  fVar1 = *(float *)(uVar2 + 4) * fVar5 + 0.0 + *(float *)(uVar2 + 8) * fVar6;
  pfVar3 = (float *)((int)afStack_10 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar1;
  pfVar3[3] = fVar1;
  fVar1 = (float)((double)afStack_10[0] - param_1);
  if (fVar4 <= fVar1) {
    uVar2 = in_r0 + param_5 & 0xfffffff0;
    fVar5 = *(float *)(uVar2 + 4) * fVar5 + 0.0 + *(float *)(uVar2 + 8) * fVar6;
    pfVar3 = (float *)((int)afStack_10 + in_r0 & 0xfffffff0);
    *pfVar3 = fVar5;
    pfVar3[1] = fVar5;
    pfVar3[2] = fVar5;
    pfVar3[3] = fVar5;
    fVar5 = -afStack_10[0];
    if (fVar1 <= fVar5) {
      if (fVar5 == fVar4) {
        *param_6 = fVar4;
      }
      else {
        *param_6 = fVar1 / fVar5;
      }
      return 1;
    }
  }
  return 0;
}

