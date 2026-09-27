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
extern float lbl_8218E8E8;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8326F968;
extern unsigned int lbl_8326F96C;


void fn_8262EA08(double param_1,double param_2,float *param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  
  if (param_1 <= param_2) {
    if (param_1 < param_2) {
      *param_3 = (float)param_1;
      param_3[1] = (float)param_2;
      goto code_r0x8262ea38;
    }
    param_3[4] = (float)((uint)param_3[4] & 0xfffffffc);
  }
  param_3[1] = (float)param_1;
  *param_3 = (float)param_2;
code_r0x8262ea38:
  fVar2 = *param_3;
  fVar3 = param_3[3] - fVar2;
  bVar1 = lbl_8326F968 == 0;
  fVar4 = param_3[3];
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar4 = fVar2;
  }
  fVar5 = param_3[1];
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar5 = fVar4;
  }
  param_3[3] = fVar5;
  if ((bVar1) || (bVar6 = 1, lbl_8326F96C != 0)) {
    bVar6 = 0;
  }
  fVar2 = (float)(longlong)(int)((-(uint)bVar6 & 0xfffffff6) + 0x3c) * lbl_8218E8E8 *
          (param_3[1] - fVar2);
  if (param_3[2] <= fVar2) {
    return;
  }
  param_3[2] = fVar2;
  return;
}

