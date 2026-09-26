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
extern int fn_82555C00();
extern int fn_82809868();
extern int fn_8284EF60();
extern unsigned int lbl_82193E2C;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8329618C;


void fn_82549DE8(double param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float fVar1;
  int *piVar2;
  int iVar4;
  ulonglong uVar3;
  
  if (*(int *)(param_2 + 0x78) == 0) {
    *(undefined4 *)(param_2 + 0x70) = 0;
    fVar1 = lbl_821CC160;
    *(float *)(param_2 + 0x68) = lbl_821CC160;
    *(float *)(param_2 + 100) = fVar1;
  }
  else {
    if (*(int *)(param_2 + 0x70) != 0) {
      fVar1 = (float)((double)(lbl_821CA460 / *(float *)(param_2 + 0x74)) * param_1 +
                     (double)*(float *)(param_2 + 0x6c));
      if (lbl_821CA460 <= fVar1) {
        fVar1 = lbl_821CC160;
      }
      *(float *)(param_2 + 0x6c) = fVar1;
                    /* WARNING: Subroutine does not return */
      fn_82809868((double)(fVar1 * lbl_82193E2C));
    }
    *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_2 + 0x68);
    if (0 < *(int *)(param_2 + 0x78)) {
      *(int *)(param_2 + 0x78) = *(int *)(param_2 + 0x78) + -1;
    }
  }
  if (*(int *)(*(int *)(param_2 + 0x1c4) + 0xc) != 0) {
    fn_8284EF60(param_1);
  }
  if (lbl_8329618C == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(lbl_8329618C + 4);
  }
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x93c) != 0)) {
    piVar2 = *(int **)(param_2 + 0x130);
    uVar3 = (ulonglong)*(uint *)(param_2 + 0x138);
    if (piVar2 != (int *)0x0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        if (*piVar2 != 0) {
          *(int *)(*piVar2 + 0xe4) = (int)param_3;
        }
        piVar2 = piVar2 + 1;
      }
    }
  }
  fn_82555C00(param_1,param_2 + 0x98,param_3,param_4,param_5);
  return;
}

