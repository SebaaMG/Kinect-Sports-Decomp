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
extern int fn_8234B0C8();
extern int fn_823735F0();
extern int fn_823807F0();
extern int fn_824A5DE0();
extern int fn_824C97F0();
extern int fn_824CCFC8();
extern unsigned int lbl_82192754;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8238DA08(double param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  
  fVar6 = lbl_821CC160;
  if (*(int *)(param_2 + 0x14) != 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x14) - param_1);
    fVar5 = -fVar1;
    fVar4 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar5 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar5) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar4 = fVar1;
    }
    *(float *)(param_2 + 0x14) = fVar4;
  }
  if (*(float *)(param_2 + 0x14) <= fVar6) {
    iVar7 = fn_823735F0(*(undefined4 *)(param_2 + 8));
    if (iVar7 != 0) {
      uVar8 = (ulonglong)*(uint *)(iVar7 + 0x24);
      if ((((uVar8 != 0) && (*(int *)(*(uint *)(iVar7 + 0x24) + 0x158) != 0)) &&
          (iVar7 = fn_824A5DE0(), iVar7 != 0)) && (iVar7 = fn_824CCFC8(uVar8), iVar7 != 0)
         ) {
        if (*(int *)(param_2 + 0x10) != 0) {
          return;
        }
        fn_823807F0(*(undefined4 *)(*(int *)(param_2 + 8) + 0x664),7);
        *(undefined4 *)(param_2 + 0x10) = 1;
        *(undefined4 *)(param_2 + 0x14) = lbl_821CA460;
        iVar7 = fn_823735F0(*(undefined4 *)(param_2 + 8));
        if ((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != 0)) {
          fn_8234B0C8((double)lbl_82192754,(ulonglong)*(uint *)(iVar7 + 0x118) + 0x2c0,
                            0xffffffff821b442c);
        }
        puVar2 = *(undefined4 **)(*(int *)(param_2 + 8) + 0xa8);
        piVar3 = (int *)puVar2[1];
        for (piVar9 = (int *)*puVar2; piVar9 != piVar3; piVar9 = piVar9 + 2) {
          fn_824C97F0(*(undefined4 *)(*piVar9 + 0x28),0xffffffff821b4420);
        }
        return;
      }
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      fn_823807F0(*(undefined4 *)(*(int *)(param_2 + 8) + 0x664),6);
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x14) = lbl_821CA460;
      iVar7 = fn_823735F0(*(undefined4 *)(param_2 + 8));
      if ((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != 0)) {
        fn_8234B0C8((double)lbl_82192754,(ulonglong)*(uint *)(iVar7 + 0x118) + 0x2c0,
                          0xffffffff821b0c44);
      }
    }
  }
  return;
}

