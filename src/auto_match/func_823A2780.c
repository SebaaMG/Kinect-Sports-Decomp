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
extern float fRam831ca68c;
extern float fRam831ca690;
extern int fn_822A0C98();
extern int fn_82359698();
extern int fn_82399CB8();
extern int fn_8239B628();
extern int fn_8239D7F8();
extern int fn_8239FF60();
extern int fn_823A2A40();
extern int fn_824BD9D8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821955F0;
extern unsigned int lbl_82195638;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uRam831ca694;


void fn_823A2780(double param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar10 = (double)lbl_821CC160;
  if (*(int *)(param_2 + 0x20) != 0) {
    dVar12 = (double)(float)((double)*(float *)(param_2 + 0x20) - param_1);
    dVar11 = -dVar12;
    dVar13 = dVar10;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar11 < dVar10) << 2) | (uint)(NAN(dVar11) || NAN(dVar10)) << 2))
        < 0.0) {
      dVar13 = dVar12;
    }
    *(float *)(param_2 + 0x20) = (float)dVar13;
  }
  bVar6 = false;
  if ((double)*(float *)(param_2 + 0x20) <= dVar10) {
    iVar8 = fn_82399CB8(*(undefined4 *)(param_2 + 8));
    uVar4 = *(undefined4 *)(**(int **)(*(int *)(param_2 + 8) + 8) + iVar8 * 4);
    iVar8 = fn_823A2A40(param_2);
    bVar1 = *(int *)(param_2 + 0x1c) == 0;
    if (iVar8 == 0) {
      if (!bVar1) {
        fn_8239FF60(*(undefined4 *)(*(int *)(param_2 + 8) + 0x2dc),9);
        uVar7 = uRam831ca694;
        *(undefined4 *)(param_2 + 0x1c) = 0;
        *(undefined4 *)(param_2 + 0x20) = uVar7;
        fn_8239B628((ulonglong)*(uint *)(param_2 + 8),uVar4,
                          (ulonglong)*(uint *)(param_2 + 8) + 0x488);
      }
    }
    else if (bVar1) {
      fn_8239FF60(*(undefined4 *)(*(int *)(param_2 + 8) + 0x2dc),10);
      uVar7 = uRam831ca694;
      *(undefined4 *)(param_2 + 0x1c) = 1;
      *(undefined4 *)(param_2 + 0x20) = uVar7;
      fn_8239B628((ulonglong)*(uint *)(param_2 + 8),uVar4,
                        (ulonglong)*(uint *)(param_2 + 8) + 0x4e0);
      *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) + fRam831ca690;
    }
    dVar10 = (double)lbl_821CC160;
  }
  uVar3 = *(uint *)(param_2 + 8);
  uVar9 = (ulonglong)uVar3;
  if ((*(int *)(uVar3 + 0x58) != *(int *)(uVar3 + 0x54)) && (*(int *)(uVar3 + 0x58) != 0)) {
    return;
  }
  fVar2 = (float)(param_1 + (double)*(float *)(param_2 + 0x10));
  dVar13 = (double)fVar2;
  *(float *)(param_2 + 0x10) = fVar2;
  iVar8 = fn_822A0C98(*(undefined4 *)(uVar3 + 0xd4));
  if ((iVar8 != 0) || (bVar1 = false, *(int *)(*(int *)((int)uVar9 + 0x90) + 0x508) != 0)) {
    bVar1 = true;
  }
  if (*(int *)(param_2 + 0x14) == 0) {
    if (*(int *)(param_2 + 0x18) == 0) {
      if (!bVar1) {
        fn_824BD9D8(*(undefined4 *)((int)uVar9 + 0x90));
        dVar10 = (double)lbl_821CC160;
        *(undefined4 *)(param_2 + 0x18) = 1;
      }
      goto LAB_823a2970;
    }
    if (bVar1) goto LAB_823a2970;
  }
  else {
    iVar8 = fn_8239D7F8(uVar9,1);
    if ((iVar8 != 0) || (dVar13 <= (double)lbl_8218E8E8)) goto LAB_823a2970;
  }
  bVar6 = true;
LAB_823a2970:
  if (*(int *)(param_2 + 0xc) != 0) {
    dVar12 = (double)(float)((double)*(float *)(param_2 + 0xc) - param_1);
    dVar11 = -dVar12;
    dVar13 = dVar10;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar11 < dVar10) << 2) | (uint)(NAN(dVar11) || NAN(dVar10)) << 2))
        < 0.0) {
      dVar13 = dVar12;
    }
    *(float *)(param_2 + 0xc) = (float)dVar13;
  }
  fVar2 = lbl_821955F0;
  if (((bVar6) && (!bVar1)) &&
     (((double)*(float *)(param_2 + 0xc) <= dVar10 || (fRam831ca68c < *(float *)(param_2 + 0x10)))))
  {
    iVar8 = *(int *)(param_2 + 8);
    fVar5 = lbl_821CA460 / *(float *)(iVar8 + 0xb9c);
    *(float *)(iVar8 + 0xba4) = lbl_821CA460;
    *(float *)(iVar8 + 0xba0) = fVar5;
    if ((fVar2 <= *(float *)(iVar8 + 0xba8)) && (*(float *)(iVar8 + 0xba8) <= lbl_82195638)) {
      fn_82359698(*(undefined4 *)(param_2 + 8),0x10);
    }
  }
  return;
}

