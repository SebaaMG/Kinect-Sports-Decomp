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
extern double _seed_nan;
extern int fn_82318848();
extern unsigned int lbl_82193D04;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195598;
extern unsigned int lbl_82195644;
extern unsigned int lbl_821959B8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82318980(double param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  double dVar9;
  double extraout_f1;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar4 = 0xffffffff82193cf0;
  dVar14 = (double)lbl_82193D04;
  lVar8 = param_2 + 0x234;
  dVar15 = (double)lbl_821CA460;
  lVar6 = param_2 + 0x14;
  dVar12 = (double)lbl_821959B8;
  lVar5 = 7;
  dVar13 = (double)lbl_821CC160;
  dVar11 = (double)lbl_82195644;
  dVar10 = lbl_82195598;
  do {
    iVar2 = (int)lVar6;
    if (*(int *)(iVar2 + 0x28) < 0) {
      dVar9 = (double)(float)((double)*(float *)(iVar2 + 0x2c) - param_1);
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar9 < dVar13) << 2) | (uint)(NAN(dVar9) || NAN(dVar13)) << 2))
          < 0.0) {
        dVar9 = dVar13;
      }
code_r0x82318a30:
      *(float *)(iVar2 + 0x2c) = (float)dVar9;
    }
    else if (0 < *(int *)(iVar2 + 0x28)) {
      dVar9 = (double)(float)((double)*(float *)(iVar2 + 0x2c) + param_1);
      dVar16 = (double)*(float *)((int)uVar4 + -0x1d28);
      if (dVar16 < dVar9) {
        dVar9 = dVar16;
      }
      goto code_r0x82318a30;
    }
    pfVar3 = (float *)fn_82318848(lVar8,*(undefined4 *)(iVar2 + 0x1c));
    pfVar7 = (float *)lVar6;
    if (((double)*pfVar7 < dVar15) &&
       (fVar1 = (float)(extraout_f1 * dVar14 + (double)*pfVar7), *pfVar7 = fVar1,
       dVar15 <= (double)fVar1)) {
      *pfVar7 = (float)dVar15;
    }
    fVar1 = *pfVar7;
    pfVar7[-5] = *pfVar3;
    pfVar7[-2] = (pfVar3[3] - pfVar7[-2]) * fVar1 + pfVar7[-2];
    pfVar7[-4] = (pfVar3[1] - pfVar7[-4]) * fVar1 + pfVar7[-4];
    pfVar7[-3] = (pfVar3[2] - pfVar7[-3]) * fVar1 + pfVar7[-3];
    fVar1 = (pfVar3[4] - pfVar7[-1]) * fVar1 + pfVar7[-1];
    pfVar7[-1] = fVar1;
    pfVar7[9] = (float)((longlong)
                        (float)(longlong)
                               ((double)(float)((double)((float)((double)pfVar7[0xb] * dVar12) *
                                                        fVar1) * dVar11) - dVar10) & 0xffffffff);
    pfVar7[10] = *(float *)((int)param_2 + 0x230);
    if (*(int *)((int)param_2 + 0x230) == 0) {
      pfVar7[10] = -(_seed_nan);
    }
    lVar5 = lVar5 + -1;
    lVar6 = lVar6 + 0x50;
    param_1 = extraout_f1;
    if (lVar5 == 0) {
      return;
    }
  } while( true );
}

