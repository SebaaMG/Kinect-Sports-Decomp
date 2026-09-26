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
extern int fn_827F4868();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_8250DBE0(double param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  double dVar9;
  
  *(float *)(param_2 + 0x30) = (float)(param_1 + (double)*(float *)(param_2 + 0x30));
  dVar9 = (double)fn_827F4868();
  fVar6 = lbl_821CC160;
  pfVar8 = *(float **)(param_2 + 0xf8);
  pfVar2 = *(float **)(param_2 + 0xfc);
  fVar1 = (float)(param_1 / (double)*(float *)(param_2 + 0x108));
  if (pfVar8 != pfVar2) {
    pfVar7 = (float *)(*(int *)(param_2 + 0xe8) + -4);
    do {
      pfVar5 = pfVar7 + 1;
      fVar4 = *pfVar8 - *pfVar5;
      pfVar8 = pfVar8 + 1;
      fVar3 = fVar4 - -fVar1;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar3 < fVar6) << 2) | (uint)(NAN(fVar3) || NAN(fVar6)) << 2)) <
          0.0) {
        fVar4 = -fVar1;
      }
      fVar3 = fVar1;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar4 - fVar1 < fVar6) << 2) |
                    (uint)(NAN(fVar4 - fVar1) || NAN(fVar6)) << 2)) < 0.0) {
        fVar3 = fVar4;
      }
      pfVar7 = pfVar7 + 1;
      *pfVar7 = fVar3 + *pfVar5;
    } while (pfVar8 != pfVar2);
  }
  *(byte *)(param_2 + 0xdc) =
       *(byte *)(param_2 + 0xdc) & 0xdf | (dVar9 == (double)*(float *)(param_2 + 0x24)) << 5;
  return;
}

