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
extern int fn_825C2EB8();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821954EC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


bool fn_82594470(double param_1,longlong param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  
  iVar5 = 0;
  uVar6 = 0;
  dVar9 = (double)lbl_821954EC;
  lVar4 = param_2 + 4;
  dVar10 = (double)lbl_821CA460;
  dVar11 = (double)lbl_821CC160;
  do {
    pfVar2 = *(float **)((int)param_2 + 0x28);
    fVar1 = *(float *)((int)param_2 + 0x2c);
    if (*pfVar2 <= fVar1) {
      iVar5 = iVar5 + 1;
    }
    else {
      pfVar3 = pfVar2 + 1;
      if ((uVar6 & 0xffff) != 0) {
        pfVar3 = pfVar2 + 0x1c;
      }
      param_2 = fn_825C2EB8((double)(fVar1 / *pfVar2),param_2,pfVar3);
      dVar7 = extraout_f1;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((extraout_f1 < dVar11) << 2) |
                    (uint)(NAN(extraout_f1) || NAN(dVar11)) << 2)) < 0.0) {
        dVar7 = dVar11;
      }
      dVar8 = dVar10;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)(((double)(float)(dVar7 - dVar10) < dVar11) << 2) |
                    (uint)(NAN((double)(float)(dVar7 - dVar10)) || NAN(dVar11)) << 2)) < 0.0) {
        dVar8 = dVar7;
      }
      pfVar3 = (float *)lVar4;
      pfVar3[-1] = (float)dVar8;
      pfVar3[1] = (float)((double)(float)((double)pfVar2[(uVar6 & 0xffff) * 0x1b + 0x17] * dVar9) *
                          param_1 + (double)pfVar3[1]);
      *pfVar3 = (float)((double)pfVar2[(uVar6 & 0xffff) * 0x1b + 0x1b] * param_1 + (double)*pfVar3);
    }
    uVar6 = uVar6 + 1;
    lVar4 = lVar4 + 0x14;
  } while ((int)uVar6 < 2);
  return iVar5 == 2;
}

