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
extern int fn_822C0880();
extern int fn_82520780();
extern int fn_82539560();
extern unsigned int lbl_82195518;
extern unsigned int lbl_821CC160;


int fn_82321B10(double param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  iVar4 = 0;
  if (param_5 == 0) {
    iVar4 = 9;
  }
  else if (param_5 == 2) {
LAB_82321b6c:
    iVar4 = 1;
  }
  else if (param_5 == 3) {
    if ((*(int *)(param_2 + 0x1c) == 0) || (*(int *)(param_3 + 0x7a0) != 0)) goto LAB_82321b6c;
    iVar4 = 2;
  }
  if ((*(int *)(param_3 + 0x7a4) != 0) && (iVar4 == 2)) {
    iVar4 = 1;
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    return iVar4;
  }
  dVar5 = (double)lbl_821CC160;
  if (param_4 == 1) {
    if (*(int *)(param_3 + 0x7a0) == 0) {
      if ((param_5 != 1) && (param_5 != 0)) {
        *(float *)(param_2 + 0xc) = (float)(param_1 + (double)*(float *)(param_2 + 0xc));
      }
      fVar1 = *(float *)(param_2 + 0xc);
      if (*(float *)(*(int *)(param_2 + 0x24) + 0x10) <= fVar1) {
        iVar4 = 6;
      }
      fVar2 = *(float *)(*(int *)(param_2 + 0x24) + 0x10);
      if (fVar1 - fVar2 < 0.0) {
        fVar2 = fVar1;
      }
      *(float *)(param_2 + 0xc) = fVar2;
      goto LAB_82321c84;
    }
  }
  else {
    if (param_4 == 2) {
      iVar4 = *(int *)(param_2 + 0x24);
                    /* WARNING: Subroutine does not return */
      fn_82539560(param_1,dVar5,(double)*(float *)(iVar4 + 0x1c),(double)*(float *)(iVar4 + 0x20),
                   (double)*(float *)(iVar4 + 0x24));
    }
LAB_82321c84:
    if (param_4 < 1) {
      return iVar4;
    }
    if (2 < param_4) {
      if (param_4 != 4) {
        return iVar4;
      }
      return 4;
    }
  }
  *(float *)(param_2 + 8) = (float)((double)*(float *)(param_2 + 8) - param_1);
  if (((param_5 == 3) && (*(int *)(param_2 + 0x14) != 0)) &&
     (iVar3 = fn_82520780((double)*(float *)(*(int *)(param_2 + 0x24) + 4),0xffffffff83265a28),
     iVar3 != 0)) {
    *(float *)(param_2 + 8) = (float)dVar5;
    return 3;
  }
  if (((double)*(float *)(param_2 + 8) <= dVar5) &&
     ((*(float *)(param_2 + 8) = (float)dVar5, param_4 == 1 || (param_4 == 2)))) {
    iVar4 = fn_82520780((double)*(float *)(*(int *)(param_2 + 0x24) + 8),0xffffffff83265a28);
    if ((iVar4 != 0) && (*(int *)(param_3 + 0x7a0) == 0)) {
      iVar3 = fn_822C0880(param_3);
      iVar4 = 5;
      if (iVar3 != 0) goto LAB_82321d00;
    }
    iVar4 = 4;
  }
LAB_82321d00:
  dVar5 = lbl_82195518;
  if (-(double)*(float *)(param_2 + 8) < 0.0) {
    dVar5 = (double)*(float *)(param_2 + 8);
  }
  *(float *)(param_2 + 8) = (float)dVar5;
  return iVar4;
}

