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
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D3874;
extern unsigned int lbl_831D391C;


void fn_82465FA8(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  uint uVar8;
  ulonglong uVar7;
  
  fVar5 = lbl_821CC160;
  if (*(int *)(param_2 + 0xf0) != 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0xf0) - param_1);
    fVar3 = -fVar1;
    fVar4 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar4 = fVar1;
    }
    *(float *)(param_2 + 0xf0) = fVar4;
    if (fVar4 == fVar5) {
      iVar2 = *(int *)(param_2 + 0xf4);
      if (iVar2 == 0) {
        uVar8 = 1;
        *(undefined4 *)(param_2 + 0xf8) = 1;
      }
      else if (iVar2 == lbl_831D3874 - 1) {
        uVar8 = lbl_831D3874 - 2;
        *(undefined4 *)(param_2 + 0xf8) = 0xffffffff;
      }
      else {
        uVar8 = *(int *)(param_2 + 0xf8) + iVar2;
      }
      *(uint *)(param_2 + 0xf4) = uVar8;
      uVar6 = (ulonglong)(uVar8 >> 0x1f) - 1 & (ulonglong)uVar8;
      uVar7 = (ulonglong)lbl_831D3874 - 1;
      if ((int)uVar6 < (int)((ulonglong)lbl_831D3874 - 1)) {
        uVar7 = uVar6;
      }
      *(int *)(param_2 + 0xf4) = (int)uVar7;
      fn_824660C0(param_2,uVar7,1);
      fn_82270AC0(0xffffffff831d38ec);
      *(undefined4 *)(param_2 + 0xf0) = lbl_831D391C;
    }
  }
  return;
}

