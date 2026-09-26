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
extern float fRam831c6680;
extern float fRam831c6684;
extern float fRam831c6688;
extern int fn_8252AFE0();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F894;


void fn_82475B30(int *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  fVar1 = *(float *)(*param_1 + 0x1fc);
  dVar3 = (double)(float)param_1[1];
  if ((dVar3 < (double)(fVar1 - fRam831c6688)) || ((double)(fRam831c6688 + fVar1) < dVar3)) {
    dVar5 = (double)fRam831c6680;
    fVar2 = lbl_8327F894 / fRam831c6684;
    if (dVar3 != dVar5) {
      fVar2 = -fVar2;
    }
    dVar3 = (double)(fVar2 + fVar1);
    dVar4 = (double)lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar3 < dVar4) << 2) | (uint)(NAN(dVar3) || NAN(dVar4)) << 2)) <
        0.0) {
      dVar3 = dVar4;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((double)(float)(dVar3 - dVar5) < dVar4) << 2) |
                  (uint)(NAN((double)(float)(dVar3 - dVar5)) || NAN(dVar4)) << 2)) < 0.0) {
      dVar5 = dVar3;
    }
  }
  else {
    dVar5 = (double)fRam831c6680;
    if (dVar3 != (double)fRam831c6680) {
      fn_8252AFE0((double)lbl_821CC160);
      *(undefined4 *)(*param_1 + 0x1d0) = 1;
      return;
    }
  }
  fn_8252AFE0(dVar5);
  return;
}

