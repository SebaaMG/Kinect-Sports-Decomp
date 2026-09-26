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
extern unsigned int lbl_82192480;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_8239FE38(double param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = (double)lbl_821CC160;
  if (*(int *)(param_2 + 0x138) != 0) {
    dVar5 = (double)(float)((double)*(float *)(param_2 + 0x138) - param_1);
    dVar4 = -dVar5;
    dVar6 = dVar3;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar4 < dVar3) << 2) | (uint)(NAN(dVar4) || NAN(dVar3)) << 2)) <
        0.0) {
      dVar6 = dVar5;
    }
    *(float *)(param_2 + 0x138) = (float)dVar6;
  }
  if (*(int *)(param_2 + 0x134) != 0) {
    dVar5 = (double)(float)((double)*(float *)(param_2 + 0x134) - param_1);
    dVar4 = -dVar5;
    dVar6 = dVar3;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar4 < dVar3) << 2) | (uint)(NAN(dVar4) || NAN(dVar3)) << 2)) <
        0.0) {
      dVar6 = dVar5;
    }
    *(float *)(param_2 + 0x134) = (float)dVar6;
  }
  uVar1 = *(uint *)(param_2 + 0x128);
  if ((int)uVar1 < 1) {
    return;
  }
  dVar6 = (double)*(float *)(param_2 + 0x130);
  dVar4 = (double)(float)(dVar6 - param_1);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar4 < dVar3) << 2) | (uint)(NAN(dVar4) || NAN(dVar3)) << 2)) < 0.0)
  {
    dVar4 = dVar3;
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)(((double)(float)(dVar4 - dVar6) < dVar3) << 2) |
                (uint)(NAN((double)(float)(dVar4 - dVar6)) || NAN(dVar3)) << 2)) < 0.0) {
    dVar6 = dVar4;
  }
  *(float *)(param_2 + 0x130) = (float)dVar6;
  if (*(int *)(param_2 + 0x130) != 0) {
    return;
  }
  uVar2 = -((int)(uVar1 - 1) >> 0x1f) - 1U & uVar1 - 1;
  if ((int)uVar1 <= (int)uVar2) {
    uVar2 = uVar1;
  }
  *(uint *)(param_2 + 0x128) = uVar2;
  *(undefined4 *)(param_2 + 0x130) = lbl_82192480;
  return;
}

