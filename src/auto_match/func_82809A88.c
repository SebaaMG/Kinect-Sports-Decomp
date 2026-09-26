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
extern unsigned int fStack00000014;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005C88;
extern unsigned int lbl_8201DF50;
extern unsigned int lbl_8201DF54;
extern unsigned int lbl_8201DF58;
extern unsigned int lbl_8201DF5C;
extern unsigned int lbl_8201DF60;
extern unsigned int lbl_8201DF64;
extern unsigned int lbl_8201DF68;
extern unsigned int lbl_8201DF6C;
extern unsigned int lbl_8201DF70;
extern unsigned int lbl_8201DF74;
extern unsigned int lbl_8201DF78;
extern unsigned int lbl_8201DF7C;
extern unsigned int lbl_8201DF80;
extern unsigned int lbl_8201DF84;
extern unsigned int lbl_8201DF88;
extern unsigned int lbl_8201DF8C;
extern unsigned int lbl_8201DF90;
extern unsigned int lbl_8201DF94;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_10;
extern unsigned int uStack_2;


double fn_82809A88(double param_1,double param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  float fStack00000014;
  undefined4 uStack_10;
  undefined2 uStack_2;
  
  fStack00000014 = (float)param_1;
  dVar3 = (double)lbl_821AAD20;
  if (param_1 < dVar3) {
    if (param_2 != (double)(longlong)(int)param_2) {
      fStack00000014 = lbl_821AAD20;
      param_1 = dVar3;
    }
  }
  if (param_1 == dVar3) {
    if (dVar3 <= param_2) {
      if (param_2 != dVar3) {
        return dVar3;
      }
      return (double)lbl_82002AE0;
    }
  }
  else {
    fVar1 = (float)((uint)fStack00000014 & 0x7fffff | 0x3f800000) - lbl_82002AE0;
    dVar2 = (double)(((((((-(fVar1 * lbl_8201DF94 - lbl_8201DF90) * fVar1 - lbl_8201DF8C) * fVar1 +
                         lbl_8201DF88) * fVar1 - lbl_8201DF84) * fVar1 + lbl_8201DF80) * fVar1 -
                      lbl_8201DF7C) * fVar1 + lbl_8201DF78) * fVar1 + lbl_8201DF74 +
                    (float)(longlong)(short)(((ushort)((uint)fStack00000014 >> 0x17) & 0xff) - 0x7f)
                    ) * param_2;
    fVar1 = (float)dVar2;
    if (fVar1 <= lbl_8201DF70) {
      return dVar3;
    }
    if (fVar1 < lbl_8201DF6C) {
      uStack_2 = (short)(int)dVar2;
      dVar2 = (double)(fVar1 - (float)(longlong)uStack_2);
      uStack_10 = lbl_82002AE0;
      if (dVar2 != dVar3) {
        uStack_10 = (float)((double)(float)((double)(float)((double)(float)((double)(float)(dVar2 * 
                                                  (double)lbl_8201DF68 + (double)lbl_8201DF64) *
                                                  dVar2 + (double)lbl_8201DF60) * dVar2 +
                                                  (double)lbl_8201DF5C) * dVar2 +
                                           (double)lbl_8201DF58) * dVar2 + (double)lbl_8201DF54);
      }
      if (uStack_10 < lbl_82002C5C) {
        uStack_10 = lbl_82002C5C;
      }
      if (lbl_82005344 <= uStack_10) {
        uStack_10 = lbl_8201DF50;
      }
      if ((((uint)fStack00000014 & 0x80000000) != 0) && (((int)param_2 & 1U) != 0)) {
        uStack_10 = -uStack_10;
      }
      return (double)(float)((int)(((longlong)uStack_2 & 0xffffffffU) << 0x17) + (int)uStack_10);
    }
  }
  return (double)lbl_82005C88;
}

