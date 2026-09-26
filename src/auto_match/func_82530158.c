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
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83296818;


void fn_82530158(double param_1,double param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  int param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if ((-1 < param_6) && (param_6 < 2)) {
    dVar4 = (double)lbl_821CC160;
    dVar8 = (double)lbl_821CA460;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((param_1 < dVar4) << 2) | (uint)(NAN(param_1) || NAN(dVar4)) << 2))
        < 0.0) {
      param_1 = dVar4;
    }
    dVar7 = (double)lbl_8218EC10;
    dVar5 = (double)(float)(dVar7 - param_2);
    iVar3 = param_6 * 0x2c + param_3;
    fVar1 = *(float *)(&lbl_83296818 + param_6 * 0x68);
    fVar2 = *(float *)((param_6 + 4) * 0x2c + param_3);
    *(undefined4 *)(iVar3 + 0xc0) = 0;
    dVar6 = dVar8;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((double)(float)(param_1 - dVar8) < dVar4) << 2) |
                  (uint)(NAN((double)(float)(param_1 - dVar8)) || NAN(dVar4)) << 2)) < 0.0) {
      dVar6 = param_1;
    }
    *(float *)(iVar3 + 0xb4) = (float)dVar6;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar5 < dVar4) << 2) | (uint)(NAN(dVar5) || NAN(dVar4)) << 2)) <
        0.0) {
      dVar7 = param_2;
    }
    *(float *)(iVar3 + 0xa8) = (float)((double)fVar1 * dVar6);
    *(float *)(iVar3 + 0xa0) = (float)(dVar8 / dVar7);
    *(float *)(iVar3 + 0xb8) = (float)(dVar6 - (double)fVar2);
    *(float *)(iVar3 + 0xac) = (float)((double)fVar1 * dVar6) - *(float *)(iVar3 + 0xa4);
  }
  return;
}

