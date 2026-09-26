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
extern unsigned int lbl_82195538;
extern unsigned int lbl_8219553C;
extern unsigned int lbl_82195540;
extern unsigned int lbl_82195544;
extern unsigned int lbl_82195548;
extern unsigned int lbl_8219554C;
extern unsigned int lbl_82195550;
extern unsigned int lbl_82195554;
extern unsigned int lbl_82195558;
extern unsigned int lbl_8219555C;
extern unsigned int lbl_82195560;
extern unsigned int lbl_82195564;
extern unsigned int lbl_82195568;
extern unsigned int lbl_8219556C;
extern unsigned int lbl_82195570;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_10;
extern unsigned int uStack_a;


double fn_82587C30(double param_1,double param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined4 uStack_10;
  undefined2 uStack_a;
  
  fVar1 = (float)param_1;
  dVar4 = (double)lbl_821CC160;
  if (param_1 == dVar4) {
    if (param_2 == dVar4) {
      dVar4 = (double)lbl_821CA460;
    }
  }
  else {
    fVar2 = (float)((uint)fVar1 & 0x7fffff | 0x3f800000) - lbl_821CA460;
    dVar3 = (double)(((((((-(fVar2 * lbl_82195538 - lbl_8219553C) * fVar2 - lbl_82195540) * fVar2 +
                         lbl_82195544) * fVar2 - lbl_82195548) * fVar2 + lbl_8219554C) * fVar2 -
                      lbl_82195550) * fVar2 + lbl_82195554) * fVar2 + lbl_82195558 +
                    (float)(longlong)(short)(((ushort)((uint)fVar1 >> 0x17) & 0xff) - 0x7f)) *
            param_2;
    uStack_a = (short)(int)dVar3;
    dVar3 = (double)((float)dVar3 - (float)(longlong)uStack_a);
    uStack_10 = lbl_821CA460;
    if (dVar3 != dVar4) {
      uStack_10 = (float)((double)(float)((double)(float)((double)(float)((double)(float)(dVar3 * (
                                                  double)lbl_8219555C + (double)lbl_82195560) *
                                                  dVar3 + (double)lbl_82195564) * dVar3 +
                                                  (double)lbl_82195568) * dVar3 +
                                         (double)lbl_8219556C) * dVar3 + (double)lbl_82195570);
    }
    if ((((uint)fVar1 & 0x80000000) != 0) && (((int)param_2 & 1U) != 0)) {
      uStack_10 = -uStack_10;
    }
    dVar4 = (double)(float)((int)(((longlong)uStack_a & 0xffffffffU) << 0x17) + (int)uStack_10);
  }
  return dVar4;
}

