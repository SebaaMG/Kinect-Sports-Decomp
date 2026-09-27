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
extern int fn_82270AC0();
extern int fn_824660C0();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195598;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D3874;
extern unsigned int lbl_831D3908;
extern float lbl_831D390C;
extern unsigned int lbl_831D3910;


void fn_82465C10(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double extraout_f1;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  iVar5 = fn_82F6A544();
  fVar4 = lbl_821CC160;
  uVar6 = 1;
  if (*(int *)(iVar5 + 0xe4) != 0) {
    fVar1 = (float)((double)*(float *)(iVar5 + 0xe4) - extraout_f1);
    fVar3 = -fVar1;
    fVar2 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar2 = fVar1;
    }
    *(float *)(iVar5 + 0xe4) = fVar2;
  }
  dVar12 = (double)(lbl_831D3908 - *(float *)(iVar5 + 0xe4));
  dVar10 = (double)(float)(dVar12 - extraout_f1);
  if (fVar4 < *(float *)(iVar5 + 0xe4)) {
    uVar7 = (ulonglong)lbl_831D3874;
    uVar8 = 0;
    if (uVar7 != 0) {
      dVar11 = (double)lbl_8218E8E8;
      dVar14 = (double)lbl_821CA460;
      dVar13 = lbl_82195598;
      do {
        dVar9 = (double)((ulonglong)
                         (double)(-(float)((double)(float)((double)uVar7 - dVar14) * dVar11 -
                                          (double)(uVar8 & 0xffffffff)) * lbl_831D390C) |
                        0x8000000000000000);
        if ((double)(longlong)
                    ((double)((float)(dVar9 + dVar10) * (float)(dVar14 / (double)lbl_831D3910)) -
                    dVar13) <
            (double)(longlong)
                    ((double)((float)(dVar9 + dVar12) * (float)(dVar14 / (double)lbl_831D3910)) -
                    dVar13)) {
          fn_824660C0(iVar5,uVar8,uVar6);
          fn_82270AC0(0xffffffff831d38ec);
          uVar7 = (ulonglong)lbl_831D3874;
          uVar6 = 0;
        }
        uVar8 = uVar8 + 1;
      } while ((uVar8 & 0xffffffff) < uVar7);
    }
  }
  fn_82F6A590();
  return;
}

