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
extern unsigned int *auStack_30;
extern int fn_822A21A8();
extern int fn_825521F0();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D450C;
extern int (*lbl_83276778)();
extern int (*lbl_8327677C)();
extern unsigned int uStack_20;


void fn_823602F0(double param_1,int param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  
  fVar2 = lbl_821CC160;
  iVar5 = *(int *)(param_2 + 0x2cac);
  if (iVar5 == 1) {
    *(undefined4 *)(param_2 + 0x2cac) = 2;
    if (*(int *)(param_2 + 0x6c4) != 0) {
      *(undefined4 *)(param_2 + 0x2cb0) = *(undefined4 *)(param_2 + 0x2cb4);
      if (lbl_83276778 == (code *)0x0) {
        return;
      }
      (*lbl_83276778)(0,0,1,0xffffffff821b277c,0xffffffff821b2718,0x11f8);
      return;
    }
    *(undefined4 *)(param_2 + 0x2cb0) = *(undefined4 *)(param_2 + 0x6c8);
    lbl_831D450C = (-(uint)(*(int *)(param_2 + 0x6c0) != 0) & 0x100) - 1;
    fVar2 = *(float *)(param_2 + 0x6c8);
    dVar9 = (double)lbl_821CA460;
LAB_8236059c:
    uStack_20 = 0;
    fn_825521F0(dVar9,(double)fVar2,param_2,param_3,auStack_30);
  }
  else {
    if (iVar5 == 2) {
      if (*(int *)(param_2 + 0x6c4) == 0) {
        fVar1 = (float)((double)*(float *)(param_2 + 0x2cb0) - param_1);
        fVar3 = -fVar1;
        fVar4 = lbl_821CC160;
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                      (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
          fVar4 = fVar1;
        }
        *(float *)(param_2 + 0x2cb0) = fVar4;
        if (fVar4 != fVar2) {
          return;
        }
        *(undefined4 *)(param_2 + 0x2cb0) = *(undefined4 *)(param_2 + 0x6cc);
      }
      else {
        iVar5 = fn_822A21A8();
        fVar2 = lbl_821CC160;
        if (iVar5 == 0) {
          return;
        }
        fVar1 = (float)((double)*(float *)(param_2 + 0x2cb0) - param_1);
        fVar3 = -fVar1;
        fVar4 = lbl_821CC160;
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                      (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
          fVar4 = fVar1;
        }
        *(float *)(param_2 + 0x2cb0) = fVar4;
        if (fVar4 != fVar2) {
          return;
        }
      }
      uVar6 = 3;
    }
    else {
      if (iVar5 == 3) {
        if (*(int *)(param_2 + 0x6c4) != 0) {
          if (lbl_8327677C != (code *)0x0) {
            (*lbl_8327677C)(0xffffffff821b277c,0xffffffff821b2718,0x1225);
          }
          *(undefined4 *)(param_2 + 0x2cac) = 4;
          *(float *)(param_2 + 0x2cb0) = lbl_821CC160;
          return;
        }
        dVar7 = (double)(float)((double)*(float *)(param_2 + 0x2cb0) - param_1);
        dVar9 = (double)lbl_821CC160;
        dVar10 = -dVar7;
        dVar8 = dVar9;
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)((dVar10 < dVar9) << 2) | (uint)(NAN(dVar10) || NAN(dVar9)) << 2)
                      ) < 0.0) {
          dVar8 = dVar7;
        }
        *(float *)(param_2 + 0x2cb0) = (float)dVar8;
        if (dVar8 != dVar9) {
          return;
        }
        fVar2 = *(float *)(param_2 + 0x6d0);
        *(float *)(param_2 + 0x2cb0) = fVar2;
        *(undefined4 *)(param_2 + 0x2cac) = 4;
        goto LAB_8236059c;
      }
      if (iVar5 != 4) {
        return;
      }
      fVar1 = (float)((double)*(float *)(param_2 + 0x2cb0) - param_1);
      fVar3 = -fVar1;
      fVar4 = lbl_821CC160;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar4 = fVar1;
      }
      *(float *)(param_2 + 0x2cb0) = fVar4;
      if (fVar4 != fVar2) {
        return;
      }
      uVar6 = 0;
    }
    *(undefined4 *)(param_2 + 0x2cac) = uVar6;
  }
  return;
}

