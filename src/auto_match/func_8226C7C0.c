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


void fn_8226C7C0(int param_1,float *param_2,float *param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (float)(longlong)
                 ((*param_2 - *(float *)(param_1 + 100)) / *(float *)(param_1 + 0x6c) +
                 *(float *)(param_1 + 0x5c));
  fVar4 = (float)(longlong)
                 ((param_2[1] - *(float *)(param_1 + 0x68)) / *(float *)(param_1 + 0x70) +
                 *(float *)(param_1 + 0x60));
  *param_3 = fVar1;
  param_3[1] = fVar4;
  fVar6 = lbl_821CC160;
  if (param_4 == '\0') {
    return;
  }
  fVar3 = (float)(longlong)(*(int *)(param_1 + 0x48) + -1);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar1 = lbl_821CC160;
  }
  fVar2 = fVar1 - fVar3;
  fVar5 = (float)(longlong)(*(int *)(param_1 + 0x4c) + -1);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar4 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar4) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar4 = lbl_821CC160;
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar2 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar2) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar3 = fVar1;
  }
  *param_3 = fVar3;
  fVar1 = fVar4 - fVar5;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 < fVar6) << 2) | (uint)(NAN(fVar1) || NAN(fVar6)) << 2)) < 0.0)
  {
    fVar5 = fVar4;
  }
  param_3[1] = fVar5;
  return;
}

