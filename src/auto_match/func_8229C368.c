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
extern int fn_82250A18();
extern int fn_8229BB18();
extern int fn_8229BE10();
extern int fn_8229C5E8();
extern int fn_8229C6F0();
extern int fn_82512C30();
extern int fn_82672C20();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832975B0;


void fn_8229C368(double param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  float *pfVar8;
  uint uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if ((param_2[0x2a] == 0) && (piVar4 = (int *)fn_82512C30(), *piVar4 != 0)) {
    return;
  }
  if (param_2[3] == 0) {
    return;
  }
  if (param_2[2] != 0) {
    return;
  }
  iVar5 = fn_8229C5E8(param_2);
  fVar3 = lbl_821CC160;
  if (iVar5 == 0) {
    return;
  }
  iVar5 = param_2[0x16];
  uVar10 = 0xffffffffffffffff;
  if (iVar5 != 0) goto LAB_8229c5b4;
  if (param_2[7] == 0) {
    if (param_2[6] != 0) {
      fVar1 = -(float)((double)(float)param_2[6] - param_1);
      uVar9 = 1;
      fVar2 = lbl_821CC160;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar2 = (float)((double)(float)param_2[6] - param_1);
      }
      param_2[6] = fVar2;
      if (fVar2 == fVar3) goto LAB_8229c5b0;
    }
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    pfVar8 = (float *)(param_2 + 0xf);
    dVar13 = (double)lbl_821CC160;
    do {
      if ((double)*pfVar8 != dVar13) {
        param_2[0xe] = lbl_821CC160;
        goto LAB_8229c4b4;
      }
      uVar9 = uVar9 + 1;
      pfVar8 = pfVar8 + 2;
    } while (uVar9 < 2);
    fVar1 = (float)param_2[0xe];
    param_2[0xe] = (float)((double)fVar1 + param_1);
    if (lbl_8218E8FC <= (float)((double)fVar1 + param_1)) {
      param_2[0xe] = fVar3;
      fn_82672C20(*param_2,0xffffffff821ab040,0,0);
    }
LAB_8229c4b4:
    fn_8229BB18(param_2);
    fn_8229BE10(param_2);
    iVar6 = lbl_832975B0;
    uVar7 = 0;
    uVar10 = 0;
    piVar4 = param_2 + 0x10;
    do {
      if (param_2[4] == 0) {
        if (*(int *)(*piVar4 + 0x5c) != 0) goto LAB_8229c524;
      }
      else if (*(int *)(*piVar4 + 0x5c) != 0) {
        uVar7 = uVar7 + 1;
      }
      uVar10 = uVar10 + 1;
      piVar4 = piVar4 + 2;
    } while ((uVar10 & 0xffffffff) < 2);
    uVar10 = -(((uVar7 & 0xffffffff) >> 0x1f) + (ulonglong)(uVar7 < 2));
LAB_8229c524:
    param_2[0x16] = (uint)((uVar10 & 0xffffffff) >> 0x1f) ^ 1;
    if (iVar6 == 0) {
      iVar6 = fn_82250A18();
    }
    if (*(char *)(iVar6 + 4) == '\0') goto LAB_8229c5b4;
    if (param_2[6] == 0) {
LAB_8229c5a4:
      uVar9 = 0;
    }
    else {
      dVar12 = -(double)(float)((double)(float)param_2[6] - param_1);
      uVar9 = 1;
      dVar11 = dVar13;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar12 < dVar13) << 2) | (uint)(NAN(dVar12) || NAN(dVar13)) << 2)
                    ) < 0.0) {
        dVar11 = (double)(float)((double)(float)param_2[6] - param_1);
      }
      param_2[6] = (float)dVar11;
      if (dVar11 != dVar13) goto LAB_8229c5a4;
    }
    uVar9 = param_2[0x16] | uVar9;
  }
LAB_8229c5b0:
  param_2[0x16] = uVar9;
LAB_8229c5b4:
  if (param_2[0x16] != 0) {
    fn_8229C6F0(param_2,uVar10,iVar5 == 0);
  }
  return;
}

