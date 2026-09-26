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
extern int fn_8252AFE0();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_824FF6A8(double param_1,int param_2)

{
  float fVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = (double)lbl_821CC160;
  if ((double)*(float *)(param_2 + 0xc48) <= dVar6) {
    if ((double)*(float *)(param_2 + 0xc44) <= dVar6) goto LAB_824ff7f0;
    if (*(int *)(param_2 + 0xc44) != 0) {
      dVar3 = (double)(float)((double)*(float *)(param_2 + 0xc44) - param_1);
      dVar5 = -dVar3;
      dVar4 = dVar6;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar5 < dVar6) << 2) | (uint)(NAN(dVar5) || NAN(dVar6)) << 2)) <
          0.0) {
        dVar4 = dVar3;
      }
      *(float *)(param_2 + 0xc44) = (float)dVar4;
    }
    dVar3 = (double)(*(float *)(param_2 + 0xc44) / *(float *)(param_2 + 0xc40));
    dVar4 = (double)lbl_821CA460;
    fVar1 = *(float *)(&lbl_821954D8 +
                      ((uint)(byte)((dVar3 < dVar6) << 2) | (uint)(NAN(dVar3) || NAN(dVar6)) << 2));
  }
  else {
    if (*(int *)(param_2 + 0xc48) != 0) {
      dVar3 = (double)(float)((double)*(float *)(param_2 + 0xc48) - param_1);
      dVar5 = -dVar3;
      dVar4 = dVar6;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar5 < dVar6) << 2) | (uint)(NAN(dVar5) || NAN(dVar6)) << 2)) <
          0.0) {
        dVar4 = dVar3;
      }
      *(float *)(param_2 + 0xc48) = (float)dVar4;
    }
    dVar4 = (double)lbl_821CA460;
    dVar3 = (double)(float)(dVar4 - (double)(*(float *)(param_2 + 0xc48) /
                                            *(float *)(param_2 + 0xc40)));
    fVar1 = *(float *)(&lbl_821954D8 +
                      ((uint)(byte)((dVar3 < dVar6) << 2) | (uint)(NAN(dVar3) || NAN(dVar6)) << 2));
  }
  if (fVar1 < 0.0) {
    dVar3 = dVar6;
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)(((double)(float)(dVar3 - dVar4) < dVar6) << 2) |
                (uint)(NAN((double)(float)(dVar3 - dVar4)) || NAN(dVar6)) << 2)) < 0.0) {
    dVar4 = dVar3;
  }
  param_2 = fn_8252AFE0(dVar4);
LAB_824ff7f0:
  bVar2 = (double)*(float *)(param_2 + 0x1fc) == dVar6;
  *(uint *)(param_2 + 0x1d0) = (uint)bVar2 + (-(uint)!bVar2 - (bVar2 - 1));
  return;
}

