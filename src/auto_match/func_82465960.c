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
extern int fn_824656C8();
extern int fn_82465C10();
extern int fn_82465D80();
extern int fn_82465FA8();
extern int fn_824660C0();
extern int fn_82520780();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821955F4;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D3870;
extern unsigned int lbl_831D3874;
extern unsigned int lbl_831D3908;
extern unsigned int lbl_831D3918;


void fn_82465960(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  fVar4 = lbl_821CC160;
  uVar7 = 0;
  if (*(int *)(param_2 + 0xd0) == 1) {
    if (*(int *)(param_2 + 0xdc) != 0) {
      fVar1 = (float)((double)*(float *)(param_2 + 0xdc) - param_1);
      fVar3 = -fVar1;
      fVar2 = lbl_821CC160;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar2 = fVar1;
      }
      *(float *)(param_2 + 0xdc) = fVar2;
      if ((fVar2 == fVar4) && (*(int *)(param_2 + 0xd0) != 0)) {
        *(undefined4 *)(param_2 + 0xd0) = 0;
        if (*(int *)(param_2 + 0xd4) != 0) {
          *(undefined4 *)(param_2 + 0xd4) = 0;
        }
        *(float *)(param_2 + 0xdc) = fVar4;
      }
    }
    if (*(int *)(param_2 + 0xe0) != 0) {
      fVar1 = (float)((double)*(float *)(param_2 + 0xe0) - param_1);
      fVar3 = -fVar1;
      fVar2 = fVar4;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar3 < fVar4) << 2) | (uint)(NAN(fVar3) || NAN(fVar4)) << 2)) <
          0.0) {
        fVar2 = fVar1;
      }
      *(float *)(param_2 + 0xe0) = fVar2;
      if (fVar2 == fVar4) {
        iVar5 = fn_824656C8(1,5,*(undefined4 *)(param_2 + 0xd4));
        if (iVar5 != *(int *)(param_2 + 0xd4)) {
          *(int *)(param_2 + 0xd4) = iVar5;
          if (iVar5 == 1) {
            *(undefined4 *)(param_2 + 0xe4) = lbl_831D3908;
          }
          else if (iVar5 == 2) {
            *(undefined4 *)(param_2 + 0xe8) = lbl_821955F4;
          }
          else if (iVar5 == 4) {
            *(undefined4 *)(param_2 + 0xf4) = 0;
            *(undefined4 *)(param_2 + 0xf8) = 1;
            *(undefined4 *)(param_2 + 0xf0) = lbl_821955F4;
          }
        }
        *(undefined4 *)(param_2 + 0xe0) = lbl_831D3870;
      }
    }
  }
  iVar5 = *(int *)(param_2 + 0xd4);
  if (iVar5 == 1) {
    fn_82465C10(param_2);
  }
  else if (iVar5 == 2) {
    fn_82465D80(param_2);
  }
  else if (iVar5 == 3) {
    uVar6 = lbl_831D3874;
    if (lbl_831D3874 != 0) {
      do {
        iVar5 = fn_82520780((double)lbl_831D3918,0xffffffff83265a28);
        if (iVar5 != 0) {
          fn_824660C0(param_2,uVar7,1);
          fn_82270AC0(0xffffffff831d38ec);
          uVar6 = lbl_831D3874;
        }
        uVar7 = uVar7 + 1;
      } while ((uVar7 & 0xffffffff) < (ulonglong)uVar6);
    }
  }
  else if (iVar5 == 4) {
    fn_82465FA8(param_2);
  }
  return;
}

