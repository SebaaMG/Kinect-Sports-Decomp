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
extern int fn_8229A000();
extern int fn_82405C30();
extern int fn_82405D70();
extern int fn_82539560();
extern unsigned int lbl_821CC160;


void fn_82405A10(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  *(float *)(param_2 + 0x38) = (float)((double)*(float *)(param_2 + 0x38) - param_1);
  (**(code **)(**(int **)(*(int *)(param_2 + 0x30) * 8 + *(int *)(param_2 + 0x1c)) + 4))();
  fVar3 = lbl_821CC160;
  if (lbl_821CC160 < *(float *)(param_2 + 0x38)) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x34) - param_1);
    *(float *)(param_2 + 0x34) = fVar1;
    if (fVar1 <= fVar3) {
      fn_8229A000(param_2 + 0x110);
    }
    *(float *)(param_2 + 0x44) = (float)((double)*(float *)(param_2 + 0x44) + param_1);
    if (*(int *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82539560((double)*(float *)(param_2 + 0x38),(double)*(float *)(param_2 + 0x90),
                   (double)*(float *)(param_2 + 0x94),(double)*(float *)(param_2 + 0x98),
                   (double)*(float *)(param_2 + 0x9c));
    }
    iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x30) * 8 + *(int *)(param_2 + 0x1c)) + 0xc);
    if (iVar2 == 0) {
      fn_82405C30(param_2);
      return;
    }
    if (iVar2 != 1) {
      return;
    }
  }
  fn_82405D70(param_2);
  return;
}

