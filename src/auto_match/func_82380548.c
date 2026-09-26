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
#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_82380548(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  
  fVar4 = lbl_821CC160;
  if (*(int *)(param_2 + 0x200) != 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x200) - param_1);
    fVar3 = -fVar1;
    fVar2 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar2 = fVar1;
    }
    *(float *)(param_2 + 0x200) = fVar2;
  }
  if (*(int *)(param_2 + 0x1fc) != 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x1fc) - param_1);
    fVar3 = -fVar1;
    fVar2 = fVar4;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar3 < fVar4) << 2) | (uint)(NAN(fVar3) || NAN(fVar4)) << 2)) <
        0.0) {
      fVar2 = fVar1;
    }
    *(float *)(param_2 + 0x1fc) = fVar2;
  }
  if (*(int *)(param_2 + 0x204) != 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x204) - param_1);
    fVar3 = -fVar1;
    fVar2 = fVar4;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar3 < fVar4) << 2) | (uint)(NAN(fVar3) || NAN(fVar4)) << 2)) <
        0.0) {
      fVar2 = fVar1;
    }
    *(float *)(param_2 + 0x204) = fVar2;
  }
  uVar6 = *(uint *)(param_2 + 0x20c);
  if ((int)uVar6 < 1) {
    return;
  }
  if (fVar4 < *(float *)(param_2 + 0x204)) {
    return;
  }
  uVar5 = -((int)(uVar6 - 1) >> 0x1f) - 1U & uVar6 - 1;
  if ((int)uVar5 < (int)uVar6) {
    uVar6 = uVar5;
  }
  *(uint *)(param_2 + 0x20c) = uVar6;
  *(undefined4 *)(param_2 + 0x204) = *(undefined4 *)(param_2 + 0xa4);
  return;
}

