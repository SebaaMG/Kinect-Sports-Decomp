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


double fn_82380CE0(int param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  if (*(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0x20c)) {
    dVar2 = (double)*(float *)(param_1 + 0x84);
  }
  else if (*(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0x20c)) {
    dVar2 = (double)*(float *)(param_1 + 0x80);
  }
  else {
    dVar2 = (double)*(float *)(param_1 + 0x7c);
  }
  fVar1 = (float)((double)*(float *)(param_1 + 0x208) - dVar2);
  dVar3 = (double)*(float *)(param_1 + 0x208);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    dVar3 = dVar2;
  }
  return dVar3;
}

