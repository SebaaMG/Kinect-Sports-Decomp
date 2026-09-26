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
extern unsigned int lbl_82005C88;


int fn_82A0D7E0(double param_1,undefined8 param_2,int param_3,longlong param_4,undefined8 param_5,
                 uint param_6,uint param_7,uint param_8)

{
  float fVar1;
  float *pfVar2;
  int in_r0;
  int iVar3;
  double dVar4;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  float in_register_000103e0;
  float in_register_000103e4;
  float in_register_000103e8;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float afStack_10 [4];
  
  iVar3 = 0;
  dVar4 = (double)lbl_82005C88;
  do {
    if (((*(ushort *)(param_3 + 0xe) & param_7) == param_6) &&
       (*(ushort *)(param_3 + 0xc) != param_8)) {
      altv207_13(in_vs32,in_vs36);
      altv207_13(in_vs32,in_vs35);
      fVar1 = (in_register_000103e0 - in_register_000103f0) *
              (in_register_000103e0 - in_register_000103f0) +
              (in_register_000103e4 - in_register_000103f4) *
              (in_register_000103e4 - in_register_000103f4) +
              (in_register_000103e8 - in_register_000103f8) *
              (in_register_000103e8 - in_register_000103f8);
      pfVar2 = (float *)((int)afStack_10 + in_r0 & 0xfffffff0);
      *pfVar2 = fVar1;
      pfVar2[1] = fVar1;
      pfVar2[2] = fVar1;
      pfVar2[3] = fVar1;
      if ((double)afStack_10[0] < dVar4) {
        dVar4 = (double)afStack_10[0];
        iVar3 = param_3;
      }
    }
    param_4 = param_4 + -1;
    param_3 = param_3 + 0x10;
  } while (param_4 != 0);
  if (param_1 < dVar4) {
    return 0;
  }
  return iVar3;
}

