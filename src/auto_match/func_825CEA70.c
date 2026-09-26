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
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_825CEA70(double param_1,int param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)lbl_821CC160;
  dVar2 = (double)lbl_821CA460;
  if (*(int *)(param_2 + 0x2c) != 0) {
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((param_1 < dVar1) << 2) | (uint)(NAN(param_1) || NAN(dVar1)) << 2))
        < 0.0) {
      param_1 = dVar1;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((double)(float)(param_1 - dVar2) < dVar1) << 2) |
                  (uint)(NAN((double)(float)(param_1 - dVar2)) || NAN(dVar1)) << 2)) < 0.0) {
      dVar2 = param_1;
    }
    *(float *)(param_2 + 0x24) = (float)dVar2;
    return;
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((param_1 < dVar1) << 2) | (uint)(NAN(param_1) || NAN(dVar1)) << 2)) <
      0.0) {
    param_1 = dVar1;
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)(((double)(float)(param_1 - dVar2) < dVar1) << 2) |
                (uint)(NAN((double)(float)(param_1 - dVar2)) || NAN(dVar1)) << 2)) < 0.0) {
    dVar2 = param_1;
  }
  *(float *)(param_2 + 0x28) = (float)dVar2;
  return;
}

