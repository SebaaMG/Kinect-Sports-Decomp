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
extern int fn_82465390();
extern int fn_824656C8();
extern int fn_824660C0();
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D3874;
extern unsigned int uRam831d3914;


void fn_82465D80(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  double dVar10;
  
  fVar5 = lbl_821CC160;
  dVar10 = (double)((float)lbl_831D3874 * lbl_821917B4);
  if (*(int *)(param_2 + 0xe8) != 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0xe8) - param_1);
    fVar3 = -fVar1;
    fVar4 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar4 = fVar1;
    }
    *(float *)(param_2 + 0xe8) = fVar4;
    if (fVar4 == fVar5) {
      uVar6 = fn_824656C8(1,5,*(undefined4 *)(param_2 + 0xec));
      *(undefined4 *)(param_2 + 0xec) = uVar6;
      fn_82465390(*(undefined4 *)(param_2 + 0xcc),param_2 + 0x10);
      fn_82270AC0(0xffffffff831d38d0);
      iVar2 = *(int *)(param_2 + 0xec);
      if (0 < iVar2) {
        if (iVar2 < 3) {
          uVar7 = 0;
          uVar8 = lbl_831D3874;
          if (lbl_831D3874 != 0) {
            do {
              if ((uVar7 & 1) == (ulonglong)(*(int *)(param_2 + 0xec) == 1)) {
                fn_824660C0(param_2,uVar7,0);
                uVar8 = lbl_831D3874;
              }
              uVar7 = uVar7 + 1;
            } while ((uVar7 & 0xffffffff) < (ulonglong)uVar8);
          }
        }
        else if (iVar2 == 3) {
          uVar7 = (ulonglong)lbl_831D3874;
          uVar9 = 0;
          if (uVar7 != 0) {
            do {
              if (((double)(uVar9 & 0xffffffff) < dVar10) ||
                 ((double)((uVar7 - uVar9) - 1 & 0xffffffff) < dVar10)) {
                fn_824660C0(param_2,uVar9,0);
                uVar7 = (ulonglong)lbl_831D3874;
              }
              uVar9 = uVar9 + 1;
            } while ((uVar9 & 0xffffffff) < uVar7);
          }
        }
        else if (iVar2 == 4) {
          uVar7 = (ulonglong)lbl_831D3874;
          uVar9 = 0;
          if (uVar7 != 0) {
            do {
              if ((dVar10 <= (double)(uVar9 & 0xffffffff)) &&
                 (dVar10 <= (double)((uVar7 - uVar9) - 1 & 0xffffffff))) {
                fn_824660C0(param_2,uVar9,0);
                uVar7 = (ulonglong)lbl_831D3874;
              }
              uVar9 = uVar9 + 1;
            } while ((uVar9 & 0xffffffff) < uVar7);
          }
        }
      }
      *(undefined4 *)(param_2 + 0xe8) = uRam831d3914;
    }
  }
  return;
}

