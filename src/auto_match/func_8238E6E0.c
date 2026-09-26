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
extern int fn_8228E658();
extern int fn_822ABA88();
extern int fn_82359698();
extern int fn_82373530();
extern int fn_824C8210();
extern int fn_824C97F0();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_8238E6E0(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  int iVar9;
  int *piVar10;
  
  iVar2 = *(int *)(param_2 + 8);
  piVar10 = *(int **)(**(int **)(iVar2 + 8) + *(int *)(iVar2 + 0x1e4) * 4);
  uVar8 = fn_82373530(iVar2);
  iVar9 = fn_822ABA88(*(undefined4 *)(piVar10[4] * 4 + *piVar10),uVar8);
  fn_824C8210(*(undefined4 *)(param_2 + 0xc));
  if (*(int *)(iVar9 + 0x2f8) != 0) {
    piVar10 = *(int **)(iVar2 + 0x184);
    if (piVar10 != *(int **)(iVar2 + 0x188)) {
      do {
        if (*(int *)(*piVar10 + 0xd4) == 0) {
          fn_8228E658(iVar2 + 0x1b0);
          break;
        }
        piVar10 = piVar10 + 2;
      } while (piVar10 != *(int **)(iVar2 + 0x188));
    }
    *(undefined4 *)(iVar2 + 0x1f0) = *(undefined4 *)(iVar2 + 0x1e4);
    fn_82359698(*(undefined4 *)(param_2 + 8),3);
  }
  fVar7 = lbl_821CC160;
  if (*(int *)(param_2 + 0x14) != 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x14) - param_1);
    fVar5 = -fVar1;
    fVar6 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar5 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar5) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar6 = fVar1;
    }
    *(float *)(param_2 + 0x14) = fVar6;
    if (fVar6 == fVar7) {
      puVar3 = *(undefined4 **)(*(int *)(param_2 + 8) + 0xa8);
      piVar4 = (int *)puVar3[1];
      for (piVar10 = (int *)*puVar3; piVar10 != piVar4; piVar10 = piVar10 + 2) {
        fn_824C97F0(*(undefined4 *)(*piVar10 + 0x28),0xffffffff821b4728);
      }
    }
  }
  return;
}

