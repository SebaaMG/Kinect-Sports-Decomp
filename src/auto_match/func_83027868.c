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
extern unsigned int fStack_14;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


double fn_83027868(int param_1)

{
  ulonglong uVar1;
  float *pfVar2;
  int in_r0;
  longlong lVar3;
  double dVar4;
  undefined1 in_vs32 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs43 [16];
  float in_register_000103c0;
  float in_register_000103c4;
  float in_register_000103c8;
  float in_vr60;
  float in_register_000103d0;
  float in_register_000103d4;
  float in_register_000103d8;
  float in_vr61;
  float in_register_000103e0;
  float in_register_000103e4;
  float in_register_000103e8;
  float in_vr62;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  float afStack_10 [4];
  
  uVar1 = (ulonglong)(*(ushort *)(param_1 + 0x2e) >> 0xd);
  altv207_13(in_vs32,in_vs41);
  altv207_13(in_vs41,in_vs40);
  pfVar2 = (float *)((int)&fStack_20 + in_r0 & 0xfffffff0);
  *pfVar2 = in_register_000103f0;
  pfVar2[1] = in_register_000103f4;
  pfVar2[2] = in_register_000103f8;
  pfVar2[3] = in_vr63;
  pfVar2 = (float *)((int)afStack_10 + in_r0 & 0xfffffff0);
  *pfVar2 = in_register_000103e0;
  pfVar2[1] = in_register_000103e4;
  pfVar2[2] = in_register_000103e8;
  pfVar2[3] = in_vr62;
  if (1 < uVar1) {
    lVar3 = uVar1 - 1;
    do {
      altv207_13(in_vs32,in_vs43);
      altv207_13(in_vs43,in_vs41);
      in_register_000103f0 = in_register_000103f0 + in_register_000103d0;
      in_register_000103f4 = in_register_000103f4 + in_register_000103d4;
      in_register_000103f8 = in_register_000103f8 + in_register_000103d8;
      in_vr63 = in_vr63 + in_vr61;
      in_register_000103e0 = in_register_000103e0 + in_register_000103c0;
      in_register_000103e4 = in_register_000103e4 + in_register_000103c4;
      in_register_000103e8 = in_register_000103e8 + in_register_000103c8;
      in_vr62 = in_vr62 + in_vr60;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    pfVar2 = (float *)((int)afStack_10 + in_r0 & 0xfffffff0);
    *pfVar2 = in_register_000103e0;
    pfVar2[1] = in_register_000103e4;
    pfVar2[2] = in_register_000103e8;
    pfVar2[3] = in_vr62;
    pfVar2 = (float *)((int)&fStack_20 + in_r0 & 0xfffffff0);
    *pfVar2 = in_register_000103f0;
    pfVar2[1] = in_register_000103f4;
    pfVar2[2] = in_register_000103f8;
    pfVar2[3] = in_vr63;
  }
  dVar4 = (double)fStack_20;
  if ((float)((double)fStack_20 - (double)fStack_1c) < 0.0) {
    dVar4 = (double)fStack_1c;
  }
  if ((float)(dVar4 - (double)fStack_14) < 0.0) {
    dVar4 = (double)fStack_14;
  }
  if ((float)(dVar4 - (double)afStack_10[0]) < 0.0) {
    dVar4 = (double)afStack_10[0];
  }
  if (dVar4 == (double)lbl_821AAD20) {
    return (double)lbl_821AAD20;
  }
  return (double)(float)((double)lbl_82002AE0 / dVar4);
}

