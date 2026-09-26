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
extern int fn_824DC918();
extern int fn_824DC998();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


/* WARNING: Removing unreachable block (ram,0x824def58) */

void fn_824DEE10(double param_1,int *param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  double dVar6;
  double dVar7;
  
  fn_824DC998(param_2 + 2);
  dVar6 = (double)*(float *)(param_4 + 0xb8);
  dVar7 = (double)lbl_821CC160;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar6 < dVar7) << 2) | (uint)(NAN(dVar6) || NAN(dVar7)) << 2)) < 0.0)
  {
    dVar6 = dVar7;
  }
  fn_824DC918(dVar6,param_2 + 2);
  piVar5 = param_2 + 10;
  fn_824DC998(param_1,piVar5);
  fn_824DC918((double)*(float *)(param_4 + 0xb4),piVar5);
  if (*param_2 == 0) {
    pfVar2 = (float *)param_2[1];
    if (*pfVar2 < (float)param_2[7]) {
      if (((float)param_2[0xf] < pfVar2[6]) ||
         (((float)param_2[0xf] <= pfVar2[5] &&
          (*(float *)(param_4 + 0x34) < pfVar2[3] * *(float *)(param_4 + 0x54))))) {
        param_2[0x12] = 1;
      }
      else {
        param_2[0x12] = 0;
      }
      *param_2 = 1;
      param_2[0x13] = (int)pfVar2[2];
      iVar3 = *piVar5;
      param_2[0xf] = (int)(float)dVar7;
      param_2[0xe] = (int)(float)dVar7;
      if (iVar3 != param_2[0xb]) {
        for (iVar4 = iVar3; iVar4 != param_2[0xb]; iVar4 = iVar4 + 8) {
        }
        param_2[0xb] = iVar3;
      }
    }
  }
  else if (*param_2 == 1) {
    fVar1 = (float)param_2[0x13];
    param_2[0x13] = (int)(float)((double)fVar1 - param_1);
    param_2[0x12] = 2;
    if ((double)(float)((double)fVar1 - param_1) <= dVar7) {
      *param_2 = 0;
    }
  }
  return;
}

